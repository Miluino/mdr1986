/** ****************************************************************************
 * @file    MILUINO_MDR_RST_CLK.c
 * @brief   Clock control driver implementation for Milandr K1986BE92/94
 * @author  Miluino Team
 * @date    September 2026
 *
 * @details Implements low-level register operations and high-level clock-tree
 *          configuration helpers. The high-level functions intentionally reuse
 *          the low-level API so individual clock fields remain independently
 *          accessible to application code.
 * *************************************************************************** */

/* Includes ------------------------------------------------------------------*/
#include "MILUINO_MDR_RST_CLK.h"

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/
#define MDR_RST_CLK_DEFAULT_TIMEOUT             1000000UL

#define MDR_RST_CLK_BKP_REG_0F_HSI_ON_Msk       (1UL << 22U)
#define MDR_RST_CLK_BKP_REG_0F_HSI_RDY_Msk      (1UL << 23U)
#define MDR_RST_CLK_BKP_REG_0F_LSI_ON_Msk       (1UL << 15U)
#define MDR_RST_CLK_BKP_REG_0F_LSI_RDY_Msk      (1UL << 21U)

#define MDR_RST_CLK_UART1_BRG_Pos               0U
#define MDR_RST_CLK_UART2_BRG_Pos               8U
#define MDR_RST_CLK_UART1_BRG_Msk               (0xFFUL << MDR_RST_CLK_UART1_BRG_Pos)
#define MDR_RST_CLK_UART2_BRG_Msk               (0xFFUL << MDR_RST_CLK_UART2_BRG_Pos)
#define MDR_RST_CLK_UART1_CLK_EN_Msk            (1UL << 24U)
#define MDR_RST_CLK_UART2_CLK_EN_Msk            (1UL << 25U)

#define MDR_RST_CLK_TIMER1_BRG_Pos              0U
#define MDR_RST_CLK_TIMER2_BRG_Pos              8U
#define MDR_RST_CLK_TIMER3_BRG_Pos              16U
#define MDR_RST_CLK_TIMER1_BRG_Msk              (0xFFUL << MDR_RST_CLK_TIMER1_BRG_Pos)
#define MDR_RST_CLK_TIMER2_BRG_Msk              (0xFFUL << MDR_RST_CLK_TIMER2_BRG_Pos)
#define MDR_RST_CLK_TIMER3_BRG_Msk              (0xFFUL << MDR_RST_CLK_TIMER3_BRG_Pos)
#define MDR_RST_CLK_TIMER1_CLK_EN_Msk           (1UL << 24U)
#define MDR_RST_CLK_TIMER2_CLK_EN_Msk           (1UL << 25U)
#define MDR_RST_CLK_TIMER3_CLK_EN_Msk           (1UL << 26U)

#define MDR_RST_CLK_CAN1_BRG_Pos                0U
#define MDR_RST_CLK_CAN2_BRG_Pos                8U
#define MDR_RST_CLK_CAN1_BRG_Msk                (0xFFUL << MDR_RST_CLK_CAN1_BRG_Pos)
#define MDR_RST_CLK_CAN2_BRG_Msk                (0xFFUL << MDR_RST_CLK_CAN2_BRG_Pos)
#define MDR_RST_CLK_CAN1_CLK_EN_Msk             (1UL << 24U)
#define MDR_RST_CLK_CAN2_CLK_EN_Msk             (1UL << 25U)

#define MDR_RST_CLK_SSP1_BRG_Pos                0U
#define MDR_RST_CLK_SSP2_BRG_Pos                8U
#define MDR_RST_CLK_SSP1_BRG_Msk                (0xFFUL << MDR_RST_CLK_SSP1_BRG_Pos)
#define MDR_RST_CLK_SSP2_BRG_Msk                (0xFFUL << MDR_RST_CLK_SSP2_BRG_Pos)
#define MDR_RST_CLK_SSP1_CLK_EN_Msk             (1UL << 24U)
#define MDR_RST_CLK_SSP2_CLK_EN_Msk             (1UL << 25U)

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/
static uint32_t wait_for_mask(volatile uint32_t *reg,
	uint32_t mask,
	uint32_t timeout);
static void pll_cpu_set_state(uint32_t enable);
static void pll_usb_set_state(uint32_t enable);

/* Private functions ---------------------------------------------------------*/
static uint32_t wait_for_mask(volatile uint32_t *reg,
	uint32_t mask,
	uint32_t timeout)
{
	while (timeout > 0UL)
	{
		if ((*reg & mask) != 0UL)
		{
			return 1UL;
		}

		--timeout;
	}

	return 0UL;
}

static void pll_cpu_set_state(uint32_t enable)
{
	uint32_t pll_control = MDR_RST_CLK->PLL_CONTROL;

	/* The current specification requires RLD refresh if RDY is already set. */
	if (MDR_RST_CLK_CPU_PLL_IsReady() != 0UL)
	{
		pll_control |= MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_Msk;
		MDR_RST_CLK->PLL_CONTROL = pll_control;
	}

	if (enable != 0UL)
	{
		pll_control |= MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_Msk;
	}
	else
	{
		pll_control &= ~MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_Msk;
	}

	pll_control &= ~MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_Msk;
	MDR_RST_CLK->PLL_CONTROL = pll_control;
}

static void pll_usb_set_state(uint32_t enable)
{
	uint32_t pll_control = MDR_RST_CLK->PLL_CONTROL;

	/* The current specification requires RLD refresh if RDY is already set. */
	if (MDR_RST_CLK_USB_PLL_IsReady() != 0UL)
	{
		pll_control |= MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_Msk;
		MDR_RST_CLK->PLL_CONTROL = pll_control;
	}

	if (enable != 0UL)
	{
		pll_control |= MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_Msk;
	}
	else
	{
		pll_control &= ~MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_Msk;
	}

	pll_control &= ~MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_Msk;
	MDR_RST_CLK->PLL_CONTROL = pll_control;
}

/* Exported functions --------------------------------------------------------*/

// -----------------------------------------------------------------------------
// Reset and initialization
// -----------------------------------------------------------------------------
void MDR_RST_CLK_CPU_StructInit(MDR_RST_CLK_CPU_InitTypeDef *config)
{
	if (config == 0)
	{
		return;
	}

	config->HSE_Mode = MDR_RST_CLK_HSE_OSCILLATOR;
	config->CPU_C1_Source = MDR_RST_CLK_CPU_C1_HSI;
	config->PLL_CPU_Mul = MDR_RST_CLK_PLL_CPU_MUL_4;
	config->CPU_C2_Source = MDR_RST_CLK_CPU_C2_CPU_C1;
	config->CPU_C3_Div = MDR_RST_CLK_CPU_C3_DIV_1;
	config->HCLK_Source = MDR_RST_CLK_HCLK_HSI;
	config->ReadyTimeout = MDR_RST_CLK_DEFAULT_TIMEOUT;
}

MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_CPU_Init(const MDR_RST_CLK_CPU_InitTypeDef *config)
{
	uint32_t timeout;
	uint32_t hse_required;

	if (config == 0)
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	if ((!IS_MDR_RST_CLK_HSE_MODE(config->HSE_Mode))
		|| (!IS_MDR_RST_CLK_CPU_C1(config->CPU_C1_Source))
		|| (!IS_MDR_RST_CLK_CPU_C2(config->CPU_C2_Source))
		|| (!IS_MDR_RST_CLK_CPU_C3(config->CPU_C3_Div))
		|| (!IS_MDR_RST_CLK_HCLK(config->HCLK_Source)))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	if ((config->CPU_C2_Source == MDR_RST_CLK_CPU_C2_PLL_CPU)
		&& (!IS_MDR_RST_CLK_PLL_CPU_MUL(config->PLL_CPU_Mul)))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	timeout = config->ReadyTimeout;
	if (timeout == 0UL)
	{
		timeout = MDR_RST_CLK_DEFAULT_TIMEOUT;
	}

	hse_required = ((config->CPU_C1_Source == MDR_RST_CLK_CPU_C1_HSE)
		|| (config->CPU_C1_Source == MDR_RST_CLK_CPU_C1_HSE_DIV_2)) ? 1UL : 0UL;

	if (hse_required != 0UL)
	{
		MDR_RST_CLK_HSE_SetMode(config->HSE_Mode);
		MDR_RST_CLK_HSE_Enable();

		if (wait_for_mask(&MDR_RST_CLK->CLOCK_STATUS,
			MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_Msk,
			timeout) == 0UL)
		{
			return MDR_RST_CLK_STATUS_HSE_TIMEOUT;
		}
	}

	MDR_RST_CLK_CPU_PLL_Configure(config->CPU_C1_Source, config->PLL_CPU_Mul);

	if (config->CPU_C2_Source == MDR_RST_CLK_CPU_C2_PLL_CPU)
	{
		MDR_RST_CLK_CPU_PLL_Enable();

		if (wait_for_mask(&MDR_RST_CLK->CLOCK_STATUS,
			MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_Msk,
			timeout) == 0UL)
		{
			return MDR_RST_CLK_STATUS_PLL_CPU_TIMEOUT;
		}
	}

	MDR_RST_CLK_CPU_C2_Select(config->CPU_C2_Source);
	MDR_RST_CLK_CPU_C3_Div(config->CPU_C3_Div);
	MDR_RST_CLK_CPU_HCLK_Select(config->HCLK_Source);

	return MDR_RST_CLK_STATUS_OK;
}

void MDR_RST_CLK_USB_StructInit(MDR_RST_CLK_USB_InitTypeDef *config)
{
	if (config == 0)
	{
		return;
	}

	config->HSE_Mode = MDR_RST_CLK_HSE_OSCILLATOR;
	config->USB_C1_Source = MDR_RST_CLK_USB_C1_HSI;
	config->PLL_USB_Mul = MDR_RST_CLK_PLL_USB_MUL_4;
	config->USB_C2_Source = MDR_RST_CLK_USB_C2_USB_C1;
	config->USB_C3_Div = MDR_RST_CLK_USB_C3_DIV_1;
	config->ReadyTimeout = MDR_RST_CLK_DEFAULT_TIMEOUT;
}

MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_USB_Init(const MDR_RST_CLK_USB_InitTypeDef *config)
{
	uint32_t timeout;
	uint32_t hse_required;

	if (config == 0)
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	if ((!IS_MDR_RST_CLK_HSE_MODE(config->HSE_Mode))
		|| (!IS_MDR_RST_CLK_USB_C1(config->USB_C1_Source))
		|| (!IS_MDR_RST_CLK_USB_C2(config->USB_C2_Source))
		|| (!IS_MDR_RST_CLK_USB_C3(config->USB_C3_Div)))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	if ((config->USB_C2_Source == MDR_RST_CLK_USB_C2_PLL_USB)
		&& (!IS_MDR_RST_CLK_PLL_USB_MUL(config->PLL_USB_Mul)))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	timeout = config->ReadyTimeout;
	if (timeout == 0UL)
	{
		timeout = MDR_RST_CLK_DEFAULT_TIMEOUT;
	}

	hse_required = ((config->USB_C1_Source == MDR_RST_CLK_USB_C1_HSE)
		|| (config->USB_C1_Source == MDR_RST_CLK_USB_C1_HSE_DIV_2)) ? 1UL : 0UL;

	if (hse_required != 0UL)
	{
		MDR_RST_CLK_HSE_SetMode(config->HSE_Mode);
		MDR_RST_CLK_HSE_Enable();

		if (wait_for_mask(&MDR_RST_CLK->CLOCK_STATUS,
			MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_Msk,
			timeout) == 0UL)
		{
			return MDR_RST_CLK_STATUS_HSE_TIMEOUT;
		}
	}

	MDR_RST_CLK_USB_PLL_Configure(config->USB_C1_Source, config->PLL_USB_Mul);

	if (config->USB_C2_Source == MDR_RST_CLK_USB_C2_PLL_USB)
	{
		MDR_RST_CLK_USB_PLL_Enable();

		if (wait_for_mask(&MDR_RST_CLK->CLOCK_STATUS,
			MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_Msk,
			timeout) == 0UL)
		{
			return MDR_RST_CLK_STATUS_PLL_USB_TIMEOUT;
		}
	}

	MDR_RST_CLK_USB_C2_Select(config->USB_C2_Source);
	MDR_RST_CLK_USB_C3_Div(config->USB_C3_Div);
	MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_USB);
	MDR_RST_CLK_USB_ClockEnable();

	return MDR_RST_CLK_STATUS_OK;
}

void MDR_RST_CLK_ADC_StructInit(MDR_RST_CLK_ADC_InitTypeDef *config)
{
	if (config == 0)
	{
		return;
	}

	config->ADC_C1_Source = MDR_RST_CLK_ADC_C1_CPU_C1;
	config->ADC_C2_Source = MDR_RST_CLK_ADC_C2_ADC_C1;
	config->ADC_C3_Div = MDR_RST_CLK_ADC_C3_DIV_1;
}

MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_ADC_Init(const MDR_RST_CLK_ADC_InitTypeDef *config)
{
	if (config == 0)
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	if ((!IS_MDR_RST_CLK_ADC_C1(config->ADC_C1_Source))
		|| (!IS_MDR_RST_CLK_ADC_C2(config->ADC_C2_Source))
		|| (!IS_MDR_RST_CLK_ADC_C3(config->ADC_C3_Div)))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	MDR_RST_CLK_ADC_C1_Select(config->ADC_C1_Source);
	MDR_RST_CLK_ADC_C2_Select(config->ADC_C2_Source);
	MDR_RST_CLK_ADC_SetDivider(config->ADC_C3_Div);
	MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_ADC);
	MDR_RST_CLK_ADC_ClockEnable();

	return MDR_RST_CLK_STATUS_OK;
}

// -----------------------------------------------------------------------------
// Peripheral PCLK control
// -----------------------------------------------------------------------------
void MDR_RST_CLK_PeripheralEnable(uint32_t peripheral_mask)
{
	MDR_RST_CLK->PER_CLOCK |= peripheral_mask;
}

void MDR_RST_CLK_PeripheralDisable(uint32_t peripheral_mask)
{
	MDR_RST_CLK->PER_CLOCK &= ~peripheral_mask;
}

// -----------------------------------------------------------------------------
// HSI and LSI
// -----------------------------------------------------------------------------
void MDR_RST_CLK_HSI_Enable(void)
{
	MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_BKP);
	MDR_BKP->REG_0F |= MDR_RST_CLK_BKP_REG_0F_HSI_ON_Msk;
}

void MDR_RST_CLK_HSI_Disable(void)
{
	MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_BKP);
	MDR_BKP->REG_0F &= ~MDR_RST_CLK_BKP_REG_0F_HSI_ON_Msk;
}

uint32_t MDR_RST_CLK_HSI_IsReady(void)
{
	MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_BKP);
	return ((MDR_BKP->REG_0F & MDR_RST_CLK_BKP_REG_0F_HSI_RDY_Msk) != 0UL) ? 1UL : 0UL;
}

void MDR_RST_CLK_LSI_Enable(void)
{
	MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_BKP);
	MDR_BKP->REG_0F |= MDR_RST_CLK_BKP_REG_0F_LSI_ON_Msk;
}

void MDR_RST_CLK_LSI_Disable(void)
{
	MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_BKP);
	MDR_BKP->REG_0F &= ~MDR_RST_CLK_BKP_REG_0F_LSI_ON_Msk;
}

uint32_t MDR_RST_CLK_LSI_IsReady(void)
{
	MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_BKP);
	return ((MDR_BKP->REG_0F & MDR_RST_CLK_BKP_REG_0F_LSI_RDY_Msk) != 0UL) ? 1UL : 0UL;
}

// -----------------------------------------------------------------------------
// HSE and CPU clock tree
// -----------------------------------------------------------------------------
void MDR_RST_CLK_HSE_SetMode(uint32_t hse_mode)
{
	MDR_RST_CLK->HS_CONTROL &= ~MDR_RST_CLK_HS_CONTROL_HSE_BYP_Msk;
	MDR_RST_CLK->HS_CONTROL |= (hse_mode & MDR_RST_CLK_HS_CONTROL_HSE_BYP_Msk);
}

void MDR_RST_CLK_HSE_Enable(void)
{
	MDR_RST_CLK->HS_CONTROL |= MDR_RST_CLK_HS_CONTROL_HSE_ON_Msk;
}

void MDR_RST_CLK_HSE_Disable(void)
{
	MDR_RST_CLK->HS_CONTROL &= ~MDR_RST_CLK_HS_CONTROL_HSE_ON_Msk;
}

uint32_t MDR_RST_CLK_HSE_IsReady(void)
{
	return ((MDR_RST_CLK->CLOCK_STATUS & MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_Msk) != 0UL) ? 1UL : 0UL;
}

void MDR_RST_CLK_CPU_PLL_Configure(uint32_t cpu_c1_source, uint32_t pll_cpu_mul)
{
	MDR_RST_CLK->CPU_CLOCK &= ~MDR_RST_CLK_CPU_C1_Msk;
	MDR_RST_CLK->CPU_CLOCK |= (cpu_c1_source & MDR_RST_CLK_CPU_C1_Msk);

	if (MDR_RST_CLK_CPU_PLL_IsReady() != 0UL)
	{
		MDR_RST_CLK->PLL_CONTROL |= MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_Msk;
	}

	MDR_RST_CLK->PLL_CONTROL &= ~MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Msk;
	MDR_RST_CLK->PLL_CONTROL |= (pll_cpu_mul & MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Msk);
	MDR_RST_CLK->PLL_CONTROL &= ~MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_Msk;
}

void MDR_RST_CLK_CPU_PLL_Enable(void)
{
	pll_cpu_set_state(1UL);
}

void MDR_RST_CLK_CPU_PLL_Disable(void)
{
	pll_cpu_set_state(0UL);
}

uint32_t MDR_RST_CLK_CPU_PLL_IsReady(void)
{
	return ((MDR_RST_CLK->CLOCK_STATUS & MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_Msk) != 0UL) ? 1UL : 0UL;
}

void MDR_RST_CLK_CPU_C2_Select(uint32_t cpu_c2_source)
{
	MDR_RST_CLK->CPU_CLOCK &= ~MDR_RST_CLK_CPU_C2_Msk;
	MDR_RST_CLK->CPU_CLOCK |= (cpu_c2_source & MDR_RST_CLK_CPU_C2_Msk);
}

void MDR_RST_CLK_CPU_C3_Div(uint32_t cpu_c3_div)
{
	MDR_RST_CLK->CPU_CLOCK &= ~MDR_RST_CLK_CPU_C3_Msk;
	MDR_RST_CLK->CPU_CLOCK |= (cpu_c3_div & MDR_RST_CLK_CPU_C3_Msk);
}

void MDR_RST_CLK_CPU_HCLK_Select(uint32_t hclk_source)
{
	MDR_RST_CLK->CPU_CLOCK &= ~MDR_RST_CLK_HCLK_Msk;
	MDR_RST_CLK->CPU_CLOCK |= (hclk_source & MDR_RST_CLK_HCLK_Msk);
}

// -----------------------------------------------------------------------------
// USB clock tree
// -----------------------------------------------------------------------------
void MDR_RST_CLK_USB_PLL_Configure(uint32_t usb_c1_source, uint32_t pll_usb_mul)
{
	MDR_RST_CLK->USB_CLOCK &= ~MDR_RST_CLK_USB_C1_Msk;
	MDR_RST_CLK->USB_CLOCK |= (usb_c1_source & MDR_RST_CLK_USB_C1_Msk);

	if (MDR_RST_CLK_USB_PLL_IsReady() != 0UL)
	{
		MDR_RST_CLK->PLL_CONTROL |= MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_Msk;
	}

	MDR_RST_CLK->PLL_CONTROL &= ~MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Msk;
	MDR_RST_CLK->PLL_CONTROL |= (pll_usb_mul & MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Msk);
	MDR_RST_CLK->PLL_CONTROL &= ~MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_Msk;
}

void MDR_RST_CLK_USB_PLL_Enable(void)
{
	pll_usb_set_state(1UL);
}

void MDR_RST_CLK_USB_PLL_Disable(void)
{
	pll_usb_set_state(0UL);
}

uint32_t MDR_RST_CLK_USB_PLL_IsReady(void)
{
	return ((MDR_RST_CLK->CLOCK_STATUS & MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_Msk) != 0UL) ? 1UL : 0UL;
}

void MDR_RST_CLK_USB_C2_Select(uint32_t usb_c2_source)
{
	MDR_RST_CLK->USB_CLOCK &= ~MDR_RST_CLK_USB_C2_Msk;
	MDR_RST_CLK->USB_CLOCK |= (usb_c2_source & MDR_RST_CLK_USB_C2_Msk);
}

void MDR_RST_CLK_USB_C3_Div(uint32_t usb_c3_div)
{
	MDR_RST_CLK->USB_CLOCK &= ~MDR_RST_CLK_USB_C3_Msk;
	MDR_RST_CLK->USB_CLOCK |= (usb_c3_div & MDR_RST_CLK_USB_C3_Msk);
}

void MDR_RST_CLK_USB_ClockEnable(void)
{
	MDR_RST_CLK->USB_CLOCK |= MDR_RST_CLK_USB_CLK_EN_Msk;
}

void MDR_RST_CLK_USB_ClockDisable(void)
{
	MDR_RST_CLK->USB_CLOCK &= ~MDR_RST_CLK_USB_CLK_EN_Msk;
}

// -----------------------------------------------------------------------------
// ADC clock tree
// -----------------------------------------------------------------------------
void MDR_RST_CLK_ADC_C1_Select(uint32_t adc_c1_source)
{
	MDR_RST_CLK->ADC_MCO_CLOCK &= ~MDR_RST_CLK_ADC_C1_Msk;
	MDR_RST_CLK->ADC_MCO_CLOCK |= (adc_c1_source & MDR_RST_CLK_ADC_C1_Msk);
}

void MDR_RST_CLK_ADC_C2_Select(uint32_t adc_c2_source)
{
	MDR_RST_CLK->ADC_MCO_CLOCK &= ~MDR_RST_CLK_ADC_C2_Msk;
	MDR_RST_CLK->ADC_MCO_CLOCK |= (adc_c2_source & MDR_RST_CLK_ADC_C2_Msk);
}

void MDR_RST_CLK_ADC_SetDivider(uint32_t adc_c3_div)
{
	MDR_RST_CLK->ADC_MCO_CLOCK &= ~MDR_RST_CLK_ADC_C3_Msk;
	MDR_RST_CLK->ADC_MCO_CLOCK |= (adc_c3_div & MDR_RST_CLK_ADC_C3_Msk);
}

void MDR_RST_CLK_ADC_ClockEnable(void)
{
	MDR_RST_CLK->ADC_MCO_CLOCK |= MDR_RST_CLK_ADC_CLK_EN_Msk;
}

void MDR_RST_CLK_ADC_ClockDisable(void)
{
	MDR_RST_CLK->ADC_MCO_CLOCK &= ~MDR_RST_CLK_ADC_CLK_EN_Msk;
}

// -----------------------------------------------------------------------------
// RTC clock outputs
// -----------------------------------------------------------------------------
void MDR_RST_CLK_RTC_HSE_SetDivider(uint32_t hse_rtc_div)
{
	MDR_RST_CLK->RTC_CLOCK &= ~MDR_RST_CLK_RTC_HSE_Msk;
	MDR_RST_CLK->RTC_CLOCK |= (hse_rtc_div & MDR_RST_CLK_RTC_HSE_Msk);
}

void MDR_RST_CLK_RTC_HSI_SetDivider(uint32_t hsi_rtc_div)
{
	MDR_RST_CLK->RTC_CLOCK &= ~MDR_RST_CLK_RTC_HSI_Msk;
	MDR_RST_CLK->RTC_CLOCK |= (hsi_rtc_div & MDR_RST_CLK_RTC_HSI_Msk);
}

void MDR_RST_CLK_RTC_HSE_ClockEnable(void)
{
	MDR_RST_CLK->RTC_CLOCK |= MDR_RST_CLK_RTC_HSE_EN_Msk;
}

void MDR_RST_CLK_RTC_HSE_ClockDisable(void)
{
	MDR_RST_CLK->RTC_CLOCK &= ~MDR_RST_CLK_RTC_HSE_EN_Msk;
}

void MDR_RST_CLK_RTC_HSI_ClockEnable(void)
{
	MDR_RST_CLK->RTC_CLOCK |= MDR_RST_CLK_RTC_HSI_EN_Msk;
}

void MDR_RST_CLK_RTC_HSI_ClockDisable(void)
{
	MDR_RST_CLK->RTC_CLOCK &= ~MDR_RST_CLK_RTC_HSI_EN_Msk;
}

// -----------------------------------------------------------------------------
// UART clocks
// -----------------------------------------------------------------------------
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_UART_Configure(MDR_RST_CLK_UART_TypeDef uart,
	uint32_t divider)
{
	if (!IS_MDR_RST_CLK_PERIPHERAL_DIV(divider))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	switch (uart)
	{
		case MDR_RST_CLK_UART_1:
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_UART1);
			MDR_RST_CLK_UART1_SetDivider(divider);
			MDR_RST_CLK_UART1_ClockEnable();
			break;

		case MDR_RST_CLK_UART_2:
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_UART2);
			MDR_RST_CLK_UART2_SetDivider(divider);
			MDR_RST_CLK_UART2_ClockEnable();
			break;

		default:
			return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	return MDR_RST_CLK_STATUS_OK;
}

void MDR_RST_CLK_UART1_SetDivider(uint32_t divider)
{
	MDR_RST_CLK->UART_CLOCK &= ~MDR_RST_CLK_UART1_BRG_Msk;
	MDR_RST_CLK->UART_CLOCK |= ((divider << MDR_RST_CLK_UART1_BRG_Pos) & MDR_RST_CLK_UART1_BRG_Msk);
}

void MDR_RST_CLK_UART2_SetDivider(uint32_t divider)
{
	MDR_RST_CLK->UART_CLOCK &= ~MDR_RST_CLK_UART2_BRG_Msk;
	MDR_RST_CLK->UART_CLOCK |= ((divider << MDR_RST_CLK_UART2_BRG_Pos) & MDR_RST_CLK_UART2_BRG_Msk);
}

void MDR_RST_CLK_UART1_ClockEnable(void)
{
	MDR_RST_CLK->UART_CLOCK |= MDR_RST_CLK_UART1_CLK_EN_Msk;
}

void MDR_RST_CLK_UART1_ClockDisable(void)
{
	MDR_RST_CLK->UART_CLOCK &= ~MDR_RST_CLK_UART1_CLK_EN_Msk;
}

void MDR_RST_CLK_UART2_ClockEnable(void)
{
	MDR_RST_CLK->UART_CLOCK |= MDR_RST_CLK_UART2_CLK_EN_Msk;
}

void MDR_RST_CLK_UART2_ClockDisable(void)
{
	MDR_RST_CLK->UART_CLOCK &= ~MDR_RST_CLK_UART2_CLK_EN_Msk;
}

// -----------------------------------------------------------------------------
// General-purpose timer clocks
// -----------------------------------------------------------------------------
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_TIMER_Configure(MDR_RST_CLK_TIMER_TypeDef timer,
	uint32_t divider)
{
	if (!IS_MDR_RST_CLK_PERIPHERAL_DIV(divider))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	switch (timer)
	{
		case MDR_RST_CLK_TIMER_1:
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_TIMER1);
			MDR_RST_CLK_TIMER1_SetDivider(divider);
			MDR_RST_CLK_TIMER1_ClockEnable();
			break;

		case MDR_RST_CLK_TIMER_2:
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_TIMER2);
			MDR_RST_CLK_TIMER2_SetDivider(divider);
			MDR_RST_CLK_TIMER2_ClockEnable();
			break;

		case MDR_RST_CLK_TIMER_3:
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_TIMER3);
			MDR_RST_CLK_TIMER3_SetDivider(divider);
			MDR_RST_CLK_TIMER3_ClockEnable();
			break;

		default:
			return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	return MDR_RST_CLK_STATUS_OK;
}

void MDR_RST_CLK_TIMER1_SetDivider(uint32_t divider)
{
	MDR_RST_CLK->TIM_CLOCK &= ~MDR_RST_CLK_TIMER1_BRG_Msk;
	MDR_RST_CLK->TIM_CLOCK |= ((divider << MDR_RST_CLK_TIMER1_BRG_Pos) & MDR_RST_CLK_TIMER1_BRG_Msk);
}

void MDR_RST_CLK_TIMER1_ClockEnable(void)
{
	MDR_RST_CLK->TIM_CLOCK |= MDR_RST_CLK_TIMER1_CLK_EN_Msk;
}

void MDR_RST_CLK_TIMER1_ClockDisable(void)
{
	MDR_RST_CLK->TIM_CLOCK &= ~MDR_RST_CLK_TIMER1_CLK_EN_Msk;
}

void MDR_RST_CLK_TIMER2_SetDivider(uint32_t divider)
{
	MDR_RST_CLK->TIM_CLOCK &= ~MDR_RST_CLK_TIMER2_BRG_Msk;
	MDR_RST_CLK->TIM_CLOCK |= ((divider << MDR_RST_CLK_TIMER2_BRG_Pos) & MDR_RST_CLK_TIMER2_BRG_Msk);
}

void MDR_RST_CLK_TIMER2_ClockEnable(void)
{
	MDR_RST_CLK->TIM_CLOCK |= MDR_RST_CLK_TIMER2_CLK_EN_Msk;
}

void MDR_RST_CLK_TIMER2_ClockDisable(void)
{
	MDR_RST_CLK->TIM_CLOCK &= ~MDR_RST_CLK_TIMER2_CLK_EN_Msk;
}

void MDR_RST_CLK_TIMER3_SetDivider(uint32_t divider)
{
	MDR_RST_CLK->TIM_CLOCK &= ~MDR_RST_CLK_TIMER3_BRG_Msk;
	MDR_RST_CLK->TIM_CLOCK |= ((divider << MDR_RST_CLK_TIMER3_BRG_Pos) & MDR_RST_CLK_TIMER3_BRG_Msk);
}

void MDR_RST_CLK_TIMER3_ClockEnable(void)
{
	MDR_RST_CLK->TIM_CLOCK |= MDR_RST_CLK_TIMER3_CLK_EN_Msk;
}

void MDR_RST_CLK_TIMER3_ClockDisable(void)
{
	MDR_RST_CLK->TIM_CLOCK &= ~MDR_RST_CLK_TIMER3_CLK_EN_Msk;
}

// -----------------------------------------------------------------------------
// CAN clocks
// -----------------------------------------------------------------------------
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_CAN_Configure(MDR_RST_CLK_CAN_TypeDef can,
	uint32_t divider)
{
	if (!IS_MDR_RST_CLK_PERIPHERAL_DIV(divider))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	switch (can)
	{
		case MDR_RST_CLK_CAN_1:
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_CAN1);
			MDR_RST_CLK_CAN1_SetDivider(divider);
			MDR_RST_CLK_CAN1_ClockEnable();
			break;

		case MDR_RST_CLK_CAN_2:
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_CAN2);
			MDR_RST_CLK_CAN2_SetDivider(divider);
			MDR_RST_CLK_CAN2_ClockEnable();
			break;

		default:
			return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	return MDR_RST_CLK_STATUS_OK;
}

void MDR_RST_CLK_CAN1_SetDivider(uint32_t divider)
{
	MDR_RST_CLK->CAN_CLOCK &= ~MDR_RST_CLK_CAN1_BRG_Msk;
	MDR_RST_CLK->CAN_CLOCK |= ((divider << MDR_RST_CLK_CAN1_BRG_Pos) & MDR_RST_CLK_CAN1_BRG_Msk);
}

void MDR_RST_CLK_CAN1_ClockEnable(void)
{
	MDR_RST_CLK->CAN_CLOCK |= MDR_RST_CLK_CAN1_CLK_EN_Msk;
}

void MDR_RST_CLK_CAN1_ClockDisable(void)
{
	MDR_RST_CLK->CAN_CLOCK &= ~MDR_RST_CLK_CAN1_CLK_EN_Msk;
}

void MDR_RST_CLK_CAN2_SetDivider(uint32_t divider)
{
	MDR_RST_CLK->CAN_CLOCK &= ~MDR_RST_CLK_CAN2_BRG_Msk;
	MDR_RST_CLK->CAN_CLOCK |= ((divider << MDR_RST_CLK_CAN2_BRG_Pos) & MDR_RST_CLK_CAN2_BRG_Msk);
}

void MDR_RST_CLK_CAN2_ClockEnable(void)
{
	MDR_RST_CLK->CAN_CLOCK |= MDR_RST_CLK_CAN2_CLK_EN_Msk;
}

void MDR_RST_CLK_CAN2_ClockDisable(void)
{
	MDR_RST_CLK->CAN_CLOCK &= ~MDR_RST_CLK_CAN2_CLK_EN_Msk;
}

// -----------------------------------------------------------------------------
// SSP clocks
// -----------------------------------------------------------------------------
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_SSP_Configure(MDR_RST_CLK_SSP_TypeDef ssp,
	uint32_t divider)
{
	if (!IS_MDR_RST_CLK_PERIPHERAL_DIV(divider))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	switch (ssp)
	{
		case MDR_RST_CLK_SSP_1:
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_SSP1);
			MDR_RST_CLK_SSP1_SetDivider(divider);
			MDR_RST_CLK_SSP1_ClockEnable();
			break;

		case MDR_RST_CLK_SSP_2:
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_SSP2);
			MDR_RST_CLK_SSP2_SetDivider(divider);
			MDR_RST_CLK_SSP2_ClockEnable();
			break;

		default:
			return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	return MDR_RST_CLK_STATUS_OK;
}

void MDR_RST_CLK_SSP1_SetDivider(uint32_t divider)
{
	MDR_RST_CLK->SSP_CLOCK &= ~MDR_RST_CLK_SSP1_BRG_Msk;
	MDR_RST_CLK->SSP_CLOCK |= ((divider << MDR_RST_CLK_SSP1_BRG_Pos) & MDR_RST_CLK_SSP1_BRG_Msk);
}

void MDR_RST_CLK_SSP1_ClockEnable(void)
{
	MDR_RST_CLK->SSP_CLOCK |= MDR_RST_CLK_SSP1_CLK_EN_Msk;
}

void MDR_RST_CLK_SSP1_ClockDisable(void)
{
	MDR_RST_CLK->SSP_CLOCK &= ~MDR_RST_CLK_SSP1_CLK_EN_Msk;
}

void MDR_RST_CLK_SSP2_SetDivider(uint32_t divider)
{
	MDR_RST_CLK->SSP_CLOCK &= ~MDR_RST_CLK_SSP2_BRG_Msk;
	MDR_RST_CLK->SSP_CLOCK |= ((divider << MDR_RST_CLK_SSP2_BRG_Pos) & MDR_RST_CLK_SSP2_BRG_Msk);
}

void MDR_RST_CLK_SSP2_ClockEnable(void)
{
	MDR_RST_CLK->SSP_CLOCK |= MDR_RST_CLK_SSP2_CLK_EN_Msk;
}

void MDR_RST_CLK_SSP2_ClockDisable(void)
{
	MDR_RST_CLK->SSP_CLOCK &= ~MDR_RST_CLK_SSP2_CLK_EN_Msk;
}
