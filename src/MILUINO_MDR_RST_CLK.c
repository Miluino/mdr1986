/** ****************************************************************************
 * @file    MILUINO_MDR_RST_CLK.c
 * @brief   Clock control driver implementation for Milandr K1986BE92/94
 
 * @author  Max @maxdev
 * @author  Roma @r3m4k
 * 
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
#define PLL_CPU_RDY_RESET_VAL          0UL
#define PLL_CPU_RDY_SET_VAL            1UL

#define PLL_USB_RDY_RESET_VAL          0UL
#define PLL_USB_RDY_SET_VAL            1UL

#define HSE_RDY_RESET_VAL              0UL
#define HSE_RDY_SET_VAL                1UL

#define PLL_CPU_ON_DISABLE_VAL         0UL
#define PLL_CPU_ON_ENABLE_VAL          1UL

#define PLL_CPU_RLD_DISABLE_VAL        0UL
#define PLL_CPU_RLD_ENABLE_VAL         1UL

#define PLL_USB_ON_DISABLE_VAL         0UL
#define PLL_USB_ON_ENABLE_VAL          1UL

#define PLL_USB_RLD_DISABLE_VAL        0UL
#define PLL_USB_RLD_ENABLE_VAL         1UL

#define HSE_ON_DISABLE_VAL             0UL
#define HSE_ON_ENABLE_VAL              1UL

#define HSE_BYP_OSCILLATOR_VAL         0UL
#define HSE_BYP_BYPASS_VAL             1UL

#define CPU_C1_HSI_VAL                 0UL
#define CPU_C1_HSI_DIV_2_VAL           1UL
#define CPU_C1_HSE_VAL                 2UL
#define CPU_C1_HSE_DIV_2_VAL           3UL

#define CPU_C2_CPU_C1_VAL              0UL
#define CPU_C2_PLL_CPU_VAL             1UL

#define CPU_C3_DIV_1_VAL               0UL
#define CPU_C3_DIV_2_VAL               8UL
#define CPU_C3_DIV_4_VAL               9UL
#define CPU_C3_DIV_8_VAL              10UL
#define CPU_C3_DIV_16_VAL             11UL
#define CPU_C3_DIV_32_VAL             12UL
#define CPU_C3_DIV_64_VAL             13UL
#define CPU_C3_DIV_128_VAL            14UL
#define CPU_C3_DIV_256_VAL            15UL

#define HCLK_HSI_VAL                   0UL
#define HCLK_CPU_C3_VAL                1UL
#define HCLK_LSE_VAL                   2UL
#define HCLK_LSI_VAL                   3UL

#define USB_C1_HSI_VAL                 0UL
#define USB_C1_HSI_DIV_2_VAL           1UL
#define USB_C1_HSE_VAL                 2UL
#define USB_C1_HSE_DIV_2_VAL           3UL

#define USB_C2_USB_C1_VAL              0UL
#define USB_C2_PLL_USB_VAL             1UL

#define USB_C3_DIV_1_VAL               0UL
#define USB_C3_DIV_2_VAL               1UL

#define USB_CLK_DISABLE_VAL            0UL
#define USB_CLK_ENABLE_VAL             1UL

#define ADC_C1_CPU_C1_VAL              0UL
#define ADC_C1_USB_C1_VAL              1UL
#define ADC_C1_CPU_C2_VAL              2UL
#define ADC_C1_USB_C2_VAL              3UL

#define ADC_C2_LSE_VAL                 0UL
#define ADC_C2_LSI_VAL                 1UL
#define ADC_C2_ADC_C1_VAL              2UL
#define ADC_C2_HSI_C1_VAL              3UL

#define ADC_C3_DIV_1_VAL               0UL
#define ADC_C3_DIV_2_VAL               8UL
#define ADC_C3_DIV_4_VAL               9UL
#define ADC_C3_DIV_8_VAL              10UL
#define ADC_C3_DIV_16_VAL             11UL
#define ADC_C3_DIV_32_VAL             12UL
#define ADC_C3_DIV_64_VAL             13UL
#define ADC_C3_DIV_128_VAL            14UL
#define ADC_C3_DIV_256_VAL            15UL

#define ADC_CLK_DISABLE_VAL            0UL
#define ADC_CLK_ENABLE_VAL             1UL

#define RTC_HSE_DIV_1_VAL              0UL
#define RTC_HSE_DIV_2_VAL              8UL
#define RTC_HSE_DIV_4_VAL              9UL
#define RTC_HSE_DIV_8_VAL             10UL
#define RTC_HSE_DIV_16_VAL            11UL
#define RTC_HSE_DIV_32_VAL             12UL
#define RTC_HSE_DIV_64_VAL             13UL
#define RTC_HSE_DIV_128_VAL            14UL
#define RTC_HSE_DIV_256_VAL            15UL

#define RTC_HSI_DIV_1_VAL              0UL
#define RTC_HSI_DIV_2_VAL              8UL
#define RTC_HSI_DIV_4_VAL              9UL
#define RTC_HSI_DIV_8_VAL              10UL
#define RTC_HSI_DIV_16_VAL             11UL
#define RTC_HSI_DIV_32_VAL             12UL
#define RTC_HSI_DIV_64_VAL             13UL
#define RTC_HSI_DIV_128_VAL            14UL
#define RTC_HSI_DIV_256_VAL            15UL

#define RTC_HSE_DISABLE_VAL            0UL
#define RTC_HSE_ENABLE_VAL             1UL

#define RTC_HSI_DISABLE_VAL            0UL
#define RTC_HSI_ENABLE_VAL             1UL

#define RTC_LSE_DISABLE_VAL            0UL
#define RTC_LSE_ENABLE_VAL             1UL

#define RTC_LSI_DISABLE_VAL            0UL
#define RTC_LSI_ENABLE_VAL             1UL

#define DUAL_CLK1_DISABLE_VAL          0UL
#define DUAL_CLK1_ENABLE_VAL           1UL

#define DUAL_CLK2_DISABLE_VAL          0UL
#define DUAL_CLK2_ENABLE_VAL           1UL

#define TIM_CLK1_DISABLE_VAL           0UL
#define TIM_CLK1_ENABLE_VAL            1UL

#define TIM_CLK2_DISABLE_VAL           0UL
#define TIM_CLK2_ENABLE_VAL            1UL

#define TIM_CLK3_DISABLE_VAL           0UL
#define TIM_CLK3_ENABLE_VAL            1UL

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t PLL_USB_RDY : 1;
		uint32_t PLL_CPU_RDY : 1;
		uint32_t HSE_RDY     : 1;
		uint32_t Reserved    : 29;
	} Bits;
} MDR_RST_CLK_CLOCK_STATUS_UnionTypeDef;

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t PLL_USB_ON  : 1;
		uint32_t PLL_USB_RLD : 1;
		uint32_t PLL_CPU_ON  : 1;
		uint32_t PLL_CPU_RLD : 1;
		uint32_t PLL_USB_MUL : 4;
		uint32_t PLL_CPU_MUL : 4;
		uint32_t Reserved    : 20;
	} Bits;
} MDR_RST_CLK_PLL_CONTROL_UnionTypeDef;

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t HSE_ON   : 1;
		uint32_t HSE_BYP  : 1;
		uint32_t Reserved : 30;
	} Bits;
} MDR_RST_CLK_HS_CONTROL_UnionTypeDef;

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t C1        : 2;
		uint32_t C2        : 1;
		uint32_t Reserved0 : 1;
		uint32_t C3        : 4;
		uint32_t HCLK      : 2;
		uint32_t Reserved1 : 22;
	} Bits;
} MDR_RST_CLK_CPU_CLOCK_UnionTypeDef;

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t C1        : 2;
		uint32_t C2        : 1;
		uint32_t Reserved0 : 1;
		uint32_t C3        : 1;
		uint32_t Reserved1 : 3;
		uint32_t CLK_EN    : 1;
		uint32_t Reserved2 : 23;
	} Bits;
} MDR_RST_CLK_USB_CLOCK_UnionTypeDef;

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t ADC_C1     : 2;
		uint32_t Reserved0  : 2;
		uint32_t ADC_C2     : 2;
		uint32_t Reserved1  : 2;
		uint32_t ADC_C3     : 4;
		uint32_t Reserved2  : 1;
		uint32_t ADC_CLK_EN : 1;
		uint32_t Reserved3  : 18;
	} Bits;
} MDR_RST_CLK_ADC_CLOCK_UnionTypeDef;

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t HSE_SEL  : 4;
		uint32_t HSI_SEL  : 4;
		uint32_t HSE_EN   : 1;
		uint32_t HSI_EN   : 1;
		uint32_t Reserved : 22;
	} Bits;
} MDR_RST_CLK_RTC_CLOCK_UnionTypeDef;

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t BRG1     : 8;
		uint32_t BRG2     : 8;
		uint32_t BRG3     : 8;
		uint32_t CLK1_EN  : 1;
		uint32_t CLK2_EN  : 1;
		uint32_t CLK3_EN  : 1;
		uint32_t Reserved : 5;
	} Bits;
} MDR_RST_CLK_TIM_CLOCK_UnionTypeDef;

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t BRG1      : 8;
		uint32_t BRG2      : 8;
		uint32_t Reserved0 : 8;
		uint32_t CLK1_EN   : 1;
		uint32_t CLK2_EN   : 1;
		uint32_t Reserved1 : 6;
	} Bits;
} MDR_RST_CLK_DUAL_CLOCK_UnionTypeDef;

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t CAN1      : 1;
		uint32_t CAN2      : 1;
		uint32_t USB       : 1;
		uint32_t EEPROM    : 1;
		uint32_t RST_CLK   : 1;
		uint32_t DMA       : 1;
		uint32_t UART1     : 1;
		uint32_t UART2     : 1;
		uint32_t SSP1      : 1;
		uint32_t Reserved0 : 1;
		uint32_t I2C       : 1;
		uint32_t POWER     : 1;
		uint32_t WWDG      : 1;
		uint32_t IWDG      : 1;
		uint32_t TIMER1    : 1;
		uint32_t TIMER2    : 1;
		uint32_t TIMER3    : 1;
		uint32_t ADC       : 1;
		uint32_t DAC       : 1;
		uint32_t COMP      : 1;
		uint32_t SSP2      : 1;
		uint32_t PORTA     : 1;
		uint32_t PORTB     : 1;
		uint32_t PORTC     : 1;
		uint32_t PORTD     : 1;
		uint32_t PORTE     : 1;
		uint32_t Reserved1 : 1;
		uint32_t BKP       : 1;
		uint32_t Reserved2 : 4;
	} Bits;
} MDR_RST_CLK_PER_CLOCK_UnionTypeDef;

typedef struct
{
	volatile MDR_RST_CLK_CLOCK_STATUS_UnionTypeDef CLOCK_STATUS;
	volatile MDR_RST_CLK_PLL_CONTROL_UnionTypeDef  PLL_CONTROL;
	volatile MDR_RST_CLK_HS_CONTROL_UnionTypeDef   HS_CONTROL;
	volatile MDR_RST_CLK_CPU_CLOCK_UnionTypeDef    CPU_CLOCK;
	volatile MDR_RST_CLK_USB_CLOCK_UnionTypeDef    USB_CLOCK;
	volatile MDR_RST_CLK_ADC_CLOCK_UnionTypeDef    ADC_MCO_CLOCK;
	volatile MDR_RST_CLK_RTC_CLOCK_UnionTypeDef    RTC_CLOCK;
	volatile MDR_RST_CLK_PER_CLOCK_UnionTypeDef    PER_CLOCK;
	volatile MDR_RST_CLK_DUAL_CLOCK_UnionTypeDef   CAN_CLOCK;
	volatile MDR_RST_CLK_TIM_CLOCK_UnionTypeDef    TIM_CLOCK;
	volatile MDR_RST_CLK_DUAL_CLOCK_UnionTypeDef   UART_CLOCK;
	volatile MDR_RST_CLK_DUAL_CLOCK_UnionTypeDef   SSP_CLOCK;
} MDR_RST_CLK_RegisterMapTypeDef;


/* Private define ------------------------------------------------------------*/
#define MDR_RST_CLK_DEFAULT_TIMEOUT             1000000UL

#define MDR_RST_CLK_BKP_REG_0F_HSI_ON_Msk     ( 1UL << 22U )
#define MDR_RST_CLK_BKP_REG_0F_HSI_RDY_Msk    ( 1UL << 23U )
#define MDR_RST_CLK_BKP_REG_0F_LSI_ON_Msk     ( 1UL << 15U )
#define MDR_RST_CLK_BKP_REG_0F_LSI_RDY_Msk    ( 1UL << 21U )

#define MDR_RST_CLK_UART1_BRG_Pos       0U
#define MDR_RST_CLK_UART2_BRG_Pos       8U
#define MDR_RST_CLK_UART1_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_UART1_BRG_Pos )
#define MDR_RST_CLK_UART2_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_UART2_BRG_Pos )
#define MDR_RST_CLK_UART1_CLK_EN_Msk    ( 1UL << 24U                          )
#define MDR_RST_CLK_UART2_CLK_EN_Msk    ( 1UL << 25U                          )

#define MDR_RST_CLK_TIMER1_BRG_Pos       0U
#define MDR_RST_CLK_TIMER2_BRG_Pos       8U
#define MDR_RST_CLK_TIMER3_BRG_Pos       16U
#define MDR_RST_CLK_TIMER1_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_TIMER1_BRG_Pos )
#define MDR_RST_CLK_TIMER2_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_TIMER2_BRG_Pos )
#define MDR_RST_CLK_TIMER3_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_TIMER3_BRG_Pos )
#define MDR_RST_CLK_TIMER1_CLK_EN_Msk    ( 1UL << 24U                           )
#define MDR_RST_CLK_TIMER2_CLK_EN_Msk    ( 1UL << 25U                           )
#define MDR_RST_CLK_TIMER3_CLK_EN_Msk    ( 1UL << 26U                           )

#define MDR_RST_CLK_CAN1_BRG_Pos       0U
#define MDR_RST_CLK_CAN2_BRG_Pos       8U
#define MDR_RST_CLK_CAN1_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_CAN1_BRG_Pos )
#define MDR_RST_CLK_CAN2_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_CAN2_BRG_Pos )
#define MDR_RST_CLK_CAN1_CLK_EN_Msk    ( 1UL << 24U                         )
#define MDR_RST_CLK_CAN2_CLK_EN_Msk    ( 1UL << 25U                         )

#define MDR_RST_CLK_SSP1_BRG_Pos       0U
#define MDR_RST_CLK_SSP2_BRG_Pos       8U
#define MDR_RST_CLK_SSP1_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_SSP1_BRG_Pos )
#define MDR_RST_CLK_SSP2_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_SSP2_BRG_Pos )
#define MDR_RST_CLK_SSP1_CLK_EN_Msk    ( 1UL << 24U                         )
#define MDR_RST_CLK_SSP2_CLK_EN_Msk    ( 1UL << 25U                         )

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/
static volatile MDR_RST_CLK_RegisterMapTypeDef *const RST_CLK_UNION =
	(volatile MDR_RST_CLK_RegisterMapTypeDef *)MDR_RST_CLK_BASE;


/* Private function prototypes -----------------------------------------------*/
static MDR_RST_CLK_StatusTypeDef WaitForBit(    volatile uint32_t *reg,
	                                            uint32_t bit,
	                                            uint32_t timeout,
	                                            MDR_RST_CLK_StatusTypeDef timeout_status );

/* Private functions ---------------------------------------------------------*/
static MDR_RST_CLK_StatusTypeDef WaitForBit( volatile uint32_t *reg,
	                                         uint32_t bit,
	                                         uint32_t timeout,
	                                         MDR_RST_CLK_StatusTypeDef timeout_status)
{
	while (timeout > 0UL)
	{
		if (((*reg >> bit) & 1UL) == 1UL)
		{
			return MDR_RST_CLK_STATUS_OK;
		}

		timeout -= 1UL;
	}

	return timeout_status;
}

/* Exported functions --------------------------------------------------------*/

// -----------------------------------------------------------------------------
// Reset and initialization
// -----------------------------------------------------------------------------
MDR_RST_CLK_CPU_InitTypeDef MDR_RST_CLK_CPU_GetDefaultConfig(void)
{
	MDR_RST_CLK_CPU_InitTypeDef config;

	config.HSEMode = MDR_RST_CLK_HSE_OSCILLATOR;
	config.CPUC1Source = MDR_RST_CLK_CPU_C1_HSI;
	config.PLLCPUMultiplier = MDR_RST_CLK_PLL_CPU_MUL_4;
	config.CPUC2Source = MDR_RST_CLK_CPU_C2_CPU_C1;
	config.CPUC3Divider = MDR_RST_CLK_CPU_C3_DIV_1;
	config.HCLKSource = MDR_RST_CLK_HCLK_HSI;
	config.ReadyTimeout = MDR_RST_CLK_DEFAULT_TIMEOUT;

	return config;
}

MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_CPU_Init(const MDR_RST_CLK_CPU_InitTypeDef *config)
{
	uint32_t timeout;
	uint32_t hse_required;

	if (config == 0)
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}


	if ((IS_MDR_RST_CLK_HSE_MODE(config->HSEMode) == 0UL)
		|| (IS_MDR_RST_CLK_CPU_C1(config->CPUC1Source) == 0UL)
		|| (IS_MDR_RST_CLK_CPU_C2(config->CPUC2Source) == 0UL)
		|| (IS_MDR_RST_CLK_CPU_C3(config->CPUC3Divider) == 0UL)
		|| (IS_MDR_RST_CLK_HCLK(config->HCLKSource) == 0UL))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	if (config->CPUC2Source == MDR_RST_CLK_CPU_C2_PLL_CPU)
	{
		if (IS_MDR_RST_CLK_PLL_CPU_MUL(config->PLLCPUMultiplier) == 0UL)
		{
			return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
		}
	}

	timeout = config->ReadyTimeout;
	if (timeout == 0UL)
	{
		timeout = MDR_RST_CLK_DEFAULT_TIMEOUT;
	}

	if ((config->CPUC1Source == MDR_RST_CLK_CPU_C1_HSE)
		|| (config->CPUC1Source == MDR_RST_CLK_CPU_C1_HSE_DIV_2))
	{
		hse_required = 1UL;
	}
	else
	{
		hse_required = 0UL;
	}

	if (hse_required == 1UL)
	{
		MDR_RST_CLK_HSE_SetMode(config->HSEMode);
		MDR_RST_CLK_HSE_Enable();

		if (WaitForBit(&RST_CLK_UNION->CLOCK_STATUS.Register,
			MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_Pos,
			timeout,
			MDR_RST_CLK_STATUS_HSE_TIMEOUT) != MDR_RST_CLK_STATUS_OK)
		{
			return MDR_RST_CLK_STATUS_HSE_TIMEOUT;
		}
	}

	if (config->CPUC2Source == MDR_RST_CLK_CPU_C2_PLL_CPU)
	{
		MDR_RST_CLK_CPU_PLL_Configure(config->CPUC1Source, config->PLLCPUMultiplier);
		MDR_RST_CLK_CPU_PLL_Enable();

		if (WaitForBit(&RST_CLK_UNION->CLOCK_STATUS.Register,
			MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_Pos,
			timeout,
			MDR_RST_CLK_STATUS_PLL_CPU_TIMEOUT) != MDR_RST_CLK_STATUS_OK)
		{
			return MDR_RST_CLK_STATUS_PLL_CPU_TIMEOUT;
		}
	}

	MDR_RST_CLK_CPU_C2_Select(config->CPUC2Source);
	MDR_RST_CLK_CPU_C3_Div(config->CPUC3Divider);
	MDR_RST_CLK_CPU_HCLK_Select(config->HCLKSource);

	return MDR_RST_CLK_STATUS_OK;
}

MDR_RST_CLK_USB_InitTypeDef MDR_RST_CLK_USB_GetDefaultConfig(void)
{
	MDR_RST_CLK_USB_InitTypeDef config;

	config.HSEMode = MDR_RST_CLK_HSE_OSCILLATOR;
	config.USBC1Source = MDR_RST_CLK_USB_C1_HSI;
	config.PLLUSBMultiplier = MDR_RST_CLK_PLL_USB_MUL_4;
	config.USBC2Source = MDR_RST_CLK_USB_C2_USB_C1;
	config.USBC3Divider = MDR_RST_CLK_USB_C3_DIV_1;
	config.ReadyTimeout = MDR_RST_CLK_DEFAULT_TIMEOUT;

	return config;
}

MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_USB_Init(const MDR_RST_CLK_USB_InitTypeDef *config)
{
	uint32_t timeout;
	uint32_t hse_required;

	if (config == 0)
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}


	if ((IS_MDR_RST_CLK_HSE_MODE(config->HSEMode) == 0UL)
		|| (IS_MDR_RST_CLK_USB_C1(config->USBC1Source) == 0UL)
		|| (IS_MDR_RST_CLK_USB_C2(config->USBC2Source) == 0UL)
		|| (IS_MDR_RST_CLK_USB_C3(config->USBC3Divider) == 0UL))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	if (config->USBC2Source == MDR_RST_CLK_USB_C2_PLL_USB)
	{
		if (IS_MDR_RST_CLK_PLL_USB_MUL(config->PLLUSBMultiplier) == 0UL)
		{
			return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
		}
	}

	timeout = config->ReadyTimeout;
	if (timeout == 0UL)
	{
		timeout = MDR_RST_CLK_DEFAULT_TIMEOUT;
	}

	if ((config->USBC1Source == MDR_RST_CLK_USB_C1_HSE)
		|| (config->USBC1Source == MDR_RST_CLK_USB_C1_HSE_DIV_2))
	{
		hse_required = 1UL;
	}
	else
	{
		hse_required = 0UL;
	}

	if (hse_required == 1UL)
	{
		MDR_RST_CLK_HSE_SetMode(config->HSEMode);
		MDR_RST_CLK_HSE_Enable();

		if (WaitForBit(&RST_CLK_UNION->CLOCK_STATUS.Register,
			MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_Pos,
			timeout,
			MDR_RST_CLK_STATUS_HSE_TIMEOUT) != MDR_RST_CLK_STATUS_OK)
		{
			return MDR_RST_CLK_STATUS_HSE_TIMEOUT;
		}
	}

	if (config->USBC2Source == MDR_RST_CLK_USB_C2_PLL_USB)
	{
		MDR_RST_CLK_USB_PLL_Configure(config->USBC1Source, config->PLLUSBMultiplier);
		MDR_RST_CLK_USB_PLL_Enable();

		if (WaitForBit(&RST_CLK_UNION->CLOCK_STATUS.Register,
			MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_Pos,
			timeout,
			MDR_RST_CLK_STATUS_PLL_USB_TIMEOUT) != MDR_RST_CLK_STATUS_OK)
		{
			return MDR_RST_CLK_STATUS_PLL_USB_TIMEOUT;
		}
	}

	MDR_RST_CLK_USB_C2_Select(config->USBC2Source);
	MDR_RST_CLK_USB_C3_Div(config->USBC3Divider);
	MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_USB_Msk);
	MDR_RST_CLK_USB_ClockEnable();

	return MDR_RST_CLK_STATUS_OK;
}

MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_ADC_Init( uint32_t adc_c1_source,
	                                            uint32_t adc_c2_source,
	                                            uint32_t adc_c3_div )
{
	if (((IS_MDR_RST_CLK_ADC_C1(adc_c1_source) == 0UL))
		|| ((IS_MDR_RST_CLK_ADC_C2(adc_c2_source) == 0UL))
		|| ((IS_MDR_RST_CLK_ADC_C3(adc_c3_div) == 0UL)))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	MDR_RST_CLK_ADC_C1_Select(adc_c1_source);
	MDR_RST_CLK_ADC_C2_Select(adc_c2_source);
	MDR_RST_CLK_ADC_SetDivider(adc_c3_div);
	MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_ADC_Msk);
	MDR_RST_CLK_ADC_ClockEnable();

	return MDR_RST_CLK_STATUS_OK;
}

// -----------------------------------------------------------------------------
// Peripheral PCLK control
// -----------------------------------------------------------------------------
void MDR_RST_CLK_PeripheralEnable(uint32_t peripheral_mask)
{
	RST_CLK_UNION->PER_CLOCK.Register |= peripheral_mask;
}

void MDR_RST_CLK_PeripheralDisable(uint32_t peripheral_mask)
{
	RST_CLK_UNION->PER_CLOCK.Register &= ~peripheral_mask;
}

// -----------------------------------------------------------------------------
// HSI and LSI
// -----------------------------------------------------------------------------
void MDR_RST_CLK_HSI_Enable(void)
{
	MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_BKP_Msk);
	MDR_BKP->REG_0F |= MDR_RST_CLK_BKP_REG_0F_HSI_ON_Msk;
}

void MDR_RST_CLK_HSI_Disable(void)
{
	MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_BKP_Msk);
	MDR_BKP->REG_0F &= ~MDR_RST_CLK_BKP_REG_0F_HSI_ON_Msk;
}

uint32_t MDR_RST_CLK_HSI_IsReady(void)
{
	MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_BKP_Msk);
	if ((MDR_BKP->REG_0F & MDR_RST_CLK_BKP_REG_0F_HSI_RDY_Msk) != 0UL)
	{
		return 1UL;
	}

	return 0UL;
}

void MDR_RST_CLK_LSI_Enable(void)
{
	MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_BKP_Msk);
	MDR_BKP->REG_0F |= MDR_RST_CLK_BKP_REG_0F_LSI_ON_Msk;
}

void MDR_RST_CLK_LSI_Disable(void)
{
	MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_BKP_Msk);
	MDR_BKP->REG_0F &= ~MDR_RST_CLK_BKP_REG_0F_LSI_ON_Msk;
}

uint32_t MDR_RST_CLK_LSI_IsReady(void)
{
	MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_BKP_Msk);
	return ((MDR_BKP->REG_0F & MDR_RST_CLK_BKP_REG_0F_LSI_RDY_Msk) != 0UL);
}

// -----------------------------------------------------------------------------
// HSE and CPU clock tree
// -----------------------------------------------------------------------------
void MDR_RST_CLK_HSE_SetMode(uint32_t hse_mode)
{

	if (hse_mode == MDR_RST_CLK_HSE_OSCILLATOR)
	{
		RST_CLK_UNION->HS_CONTROL.Bits.HSE_BYP = HSE_BYP_OSCILLATOR_VAL;
	}
	else
	{
		RST_CLK_UNION->HS_CONTROL.Bits.HSE_BYP = HSE_BYP_BYPASS_VAL;
	}
}

void MDR_RST_CLK_HSE_Enable(void)
{
	RST_CLK_UNION->HS_CONTROL.Bits.HSE_ON = HSE_ON_ENABLE_VAL;
}

void MDR_RST_CLK_HSE_Disable(void)
{
	RST_CLK_UNION->HS_CONTROL.Bits.HSE_ON = HSE_ON_DISABLE_VAL;
}

uint32_t MDR_RST_CLK_HSE_IsReady(void)
{
	return RST_CLK_UNION->CLOCK_STATUS.Bits.HSE_RDY;
}

void MDR_RST_CLK_CPU_PLL_Configure(uint32_t cpu_c1_source, uint32_t pll_cpu_mul)
{

	RST_CLK_UNION->CPU_CLOCK.Bits.C1 = cpu_c1_source >> MDR_RST_CLK_CPU_C1_Pos;

	if (MDR_RST_CLK_CPU_PLL_IsReady() != 0UL)
	{
		RST_CLK_UNION->PLL_CONTROL.Bits.PLL_CPU_RLD =
			PLL_CPU_RLD_ENABLE_VAL;
	}

	RST_CLK_UNION->PLL_CONTROL.Bits.PLL_CPU_MUL = pll_cpu_mul >> MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos;
	RST_CLK_UNION->PLL_CONTROL.Bits.PLL_CPU_RLD =
		PLL_CPU_RLD_DISABLE_VAL;
}

void MDR_RST_CLK_CPU_PLL_Enable(void)
{
	if (RST_CLK_UNION->CLOCK_STATUS.Bits.PLL_CPU_RDY ==
		PLL_CPU_RDY_SET_VAL)
	{
		RST_CLK_UNION->PLL_CONTROL.Bits.PLL_CPU_RLD =
			PLL_CPU_RLD_ENABLE_VAL;
	}

	RST_CLK_UNION->PLL_CONTROL.Bits.PLL_CPU_ON =
		PLL_CPU_ON_ENABLE_VAL;
	RST_CLK_UNION->PLL_CONTROL.Bits.PLL_CPU_RLD =
		PLL_CPU_RLD_DISABLE_VAL;
}

void MDR_RST_CLK_CPU_PLL_Disable(void)
{
	RST_CLK_UNION->PLL_CONTROL.Bits.PLL_CPU_ON =
		PLL_CPU_ON_DISABLE_VAL;
}

uint32_t MDR_RST_CLK_CPU_PLL_IsReady(void)
{
	if (RST_CLK_UNION->CLOCK_STATUS.Bits.PLL_CPU_RDY ==
		PLL_CPU_RDY_SET_VAL)
	{
		return 1UL;
	}

	return 0UL;
}

void MDR_RST_CLK_CPU_C2_Select(uint32_t cpu_c2_source)
{
	RST_CLK_UNION->CPU_CLOCK.Bits.C2 = cpu_c2_source >> MDR_RST_CLK_CPU_C2_Pos;
}

void MDR_RST_CLK_CPU_C3_Div(uint32_t cpu_c3_div)
{
	RST_CLK_UNION->CPU_CLOCK.Bits.C3 = cpu_c3_div >> MDR_RST_CLK_CPU_C3_Pos;
}

void MDR_RST_CLK_CPU_HCLK_Select(uint32_t hclk_source)
{
	RST_CLK_UNION->CPU_CLOCK.Bits.HCLK = hclk_source >> MDR_RST_CLK_HCLK_Pos;
}

// -----------------------------------------------------------------------------
// USB clock tree
// -----------------------------------------------------------------------------
void MDR_RST_CLK_USB_PLL_Configure(uint32_t usb_c1_source, uint32_t pll_usb_mul)
{

	RST_CLK_UNION->USB_CLOCK.Bits.C1 = usb_c1_source >> MDR_RST_CLK_USB_C1_Pos;

	if (MDR_RST_CLK_USB_PLL_IsReady() != 0UL)
	{
		RST_CLK_UNION->PLL_CONTROL.Bits.PLL_USB_RLD =
			PLL_USB_RLD_ENABLE_VAL;
	}

	RST_CLK_UNION->PLL_CONTROL.Bits.PLL_USB_MUL = pll_usb_mul >> MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos;
	RST_CLK_UNION->PLL_CONTROL.Bits.PLL_USB_RLD =
		PLL_USB_RLD_DISABLE_VAL;
}

void MDR_RST_CLK_USB_PLL_Enable(void)
{
	if (RST_CLK_UNION->CLOCK_STATUS.Bits.PLL_USB_RDY ==
		PLL_USB_RDY_SET_VAL)
	{
		RST_CLK_UNION->PLL_CONTROL.Bits.PLL_USB_RLD =
			PLL_USB_RLD_ENABLE_VAL;
	}

	RST_CLK_UNION->PLL_CONTROL.Bits.PLL_USB_ON =
		PLL_USB_ON_ENABLE_VAL;
	RST_CLK_UNION->PLL_CONTROL.Bits.PLL_USB_RLD =
		PLL_USB_RLD_DISABLE_VAL;
}

void MDR_RST_CLK_USB_PLL_Disable(void)
{
	RST_CLK_UNION->PLL_CONTROL.Bits.PLL_USB_ON =
		PLL_USB_ON_DISABLE_VAL;
}

uint32_t MDR_RST_CLK_USB_PLL_IsReady(void)
{
	if (RST_CLK_UNION->CLOCK_STATUS.Bits.PLL_USB_RDY ==
		PLL_USB_RDY_SET_VAL)
	{
		return 1UL;
	}

	return 0UL;
}

void MDR_RST_CLK_USB_C2_Select(uint32_t usb_c2_source)
{
	RST_CLK_UNION->USB_CLOCK.Bits.C2 = usb_c2_source >> MDR_RST_CLK_USB_C2_Pos;
}

void MDR_RST_CLK_USB_C3_Div(uint32_t usb_c3_div)
{
	RST_CLK_UNION->USB_CLOCK.Bits.C3 = usb_c3_div >> MDR_RST_CLK_USB_C3_Pos;
}

void MDR_RST_CLK_USB_ClockEnable(void)
{
	RST_CLK_UNION->USB_CLOCK.Bits.CLK_EN = USB_CLK_ENABLE_VAL;
}

void MDR_RST_CLK_USB_ClockDisable(void)
{
	RST_CLK_UNION->USB_CLOCK.Bits.CLK_EN = USB_CLK_DISABLE_VAL;
}

// -----------------------------------------------------------------------------
// ADC clock tree
// -----------------------------------------------------------------------------
void MDR_RST_CLK_ADC_C1_Select(uint32_t adc_c1_source)
{

	RST_CLK_UNION->ADC_MCO_CLOCK.Bits.ADC_C1 = adc_c1_source >> MDR_RST_CLK_ADC_C1_Pos;
}

void MDR_RST_CLK_ADC_C2_Select(uint32_t adc_c2_source)
{

	RST_CLK_UNION->ADC_MCO_CLOCK.Bits.ADC_C2 = adc_c2_source >> MDR_RST_CLK_ADC_C2_Pos;
}

void MDR_RST_CLK_ADC_SetDivider(uint32_t adc_c3_div)
{

	RST_CLK_UNION->ADC_MCO_CLOCK.Bits.ADC_C3 = adc_c3_div >> MDR_RST_CLK_ADC_C3_Pos;
}

void MDR_RST_CLK_ADC_ClockEnable(void)
{
	RST_CLK_UNION->ADC_MCO_CLOCK.Bits.ADC_CLK_EN = ADC_CLK_ENABLE_VAL;
}

void MDR_RST_CLK_ADC_ClockDisable(void)
{
	RST_CLK_UNION->ADC_MCO_CLOCK.Bits.ADC_CLK_EN = ADC_CLK_DISABLE_VAL;
}

// -----------------------------------------------------------------------------
// RTC clock outputs
// -----------------------------------------------------------------------------
void MDR_RST_CLK_RTC_HSE_SetDivider(uint32_t hse_rtc_div)
{
	RST_CLK_UNION->RTC_CLOCK.Bits.HSE_SEL = hse_rtc_div >> MDR_RST_CLK_RTC_HSE_Pos;
}

void MDR_RST_CLK_RTC_HSI_SetDivider(uint32_t hsi_rtc_div)
{
	RST_CLK_UNION->RTC_CLOCK.Bits.HSI_SEL = hsi_rtc_div >> MDR_RST_CLK_RTC_HSI_Pos;
}

void MDR_RST_CLK_RTC_HSE_ClockEnable(void)
{
	RST_CLK_UNION->RTC_CLOCK.Bits.HSE_EN = RTC_HSE_ENABLE_VAL;
}

void MDR_RST_CLK_RTC_HSE_ClockDisable(void)
{
	RST_CLK_UNION->RTC_CLOCK.Bits.HSE_EN = RTC_HSE_DISABLE_VAL;
}

void MDR_RST_CLK_RTC_HSI_ClockEnable(void)
{
	RST_CLK_UNION->RTC_CLOCK.Bits.HSI_EN = RTC_HSI_ENABLE_VAL;
}

void MDR_RST_CLK_RTC_HSI_ClockDisable(void)
{
	RST_CLK_UNION->RTC_CLOCK.Bits.HSI_EN = RTC_HSI_DISABLE_VAL;
}

// -----------------------------------------------------------------------------
// UART clocks
// -----------------------------------------------------------------------------

MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_UART_Configure(MDR_UART_TypeDef *USARTx,
	uint32_t divider,
	uint32_t enable)
{

	if (((USARTx != MDR_UART1) && (USARTx != MDR_UART2))
		|| (IS_MDR_RST_CLK_CLOCK_STATE(enable) == 0UL))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	if (((USARTx == MDR_UART1) && (IS_MDR_RST_CLK_UART1_DIV(divider) == 0UL))
		|| ((USARTx == MDR_UART2) && (IS_MDR_RST_CLK_UART2_DIV(divider) == 0UL)))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	if (USARTx == MDR_UART1)
	{
		MDR_RST_CLK_UART1_SetDivider(divider);
		if (enable == MDR_RST_CLK_CLOCK_ENABLE)
		{
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_UART1_Msk);
			MDR_RST_CLK_UART1_ClockEnable();
		}
		else
		{
			MDR_RST_CLK_UART1_ClockDisable();
			MDR_RST_CLK_PeripheralDisable(MDR_RST_CLK_PER_CLOCK_UART1_Msk);
		}
	}
	else
	{
		MDR_RST_CLK_UART2_SetDivider(divider);
		if (enable == MDR_RST_CLK_CLOCK_ENABLE)
		{
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_UART2_Msk);
			MDR_RST_CLK_UART2_ClockEnable();
		}
		else
		{
			MDR_RST_CLK_UART2_ClockDisable();
			MDR_RST_CLK_PeripheralDisable(MDR_RST_CLK_PER_CLOCK_UART2_Msk);
		}
	}

	return MDR_RST_CLK_STATUS_OK;
}

void MDR_RST_CLK_UART1_SetDivider(uint32_t divider)
{
	RST_CLK_UNION->UART_CLOCK.Bits.BRG1 = divider >> MDR_RST_CLK_UART1_BRG_Pos;
}

void MDR_RST_CLK_UART2_SetDivider(uint32_t divider)
{
	RST_CLK_UNION->UART_CLOCK.Bits.BRG2 = divider >> MDR_RST_CLK_UART2_BRG_Pos;
}

void MDR_RST_CLK_UART1_ClockEnable(void)
{
	RST_CLK_UNION->UART_CLOCK.Bits.CLK1_EN = DUAL_CLK1_ENABLE_VAL;
}

void MDR_RST_CLK_UART1_ClockDisable(void)
{
	RST_CLK_UNION->UART_CLOCK.Bits.CLK1_EN = DUAL_CLK1_DISABLE_VAL;
}

void MDR_RST_CLK_UART2_ClockEnable(void)
{
	RST_CLK_UNION->UART_CLOCK.Bits.CLK2_EN = DUAL_CLK2_ENABLE_VAL;
}

void MDR_RST_CLK_UART2_ClockDisable(void)
{
	RST_CLK_UNION->UART_CLOCK.Bits.CLK2_EN = DUAL_CLK2_DISABLE_VAL;
}

// -----------------------------------------------------------------------------
// General-purpose timer clocks
// -----------------------------------------------------------------------------
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_TIMER_Configure(MDR_TIMER_TypeDef *TIMERx,
	uint32_t divider,
	uint32_t enable)
{

	if (((TIMERx != MDR_TIMER1) && (TIMERx != MDR_TIMER2) && (TIMERx != MDR_TIMER3))
		|| (IS_MDR_RST_CLK_CLOCK_STATE(enable) == 0UL))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	if (((TIMERx == MDR_TIMER1) && (IS_MDR_RST_CLK_TIMER1_DIV(divider) == 0UL))
		|| ((TIMERx == MDR_TIMER2) && (IS_MDR_RST_CLK_TIMER2_DIV(divider) == 0UL))
		|| ((TIMERx == MDR_TIMER3) && (IS_MDR_RST_CLK_TIMER3_DIV(divider) == 0UL)))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	if (TIMERx == MDR_TIMER1)
	{
		MDR_RST_CLK_TIMER1_SetDivider(divider);
		if (enable == MDR_RST_CLK_CLOCK_ENABLE)
		{
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_TIMER1_Msk);
			MDR_RST_CLK_TIMER1_ClockEnable();
		}
		else
		{
			MDR_RST_CLK_TIMER1_ClockDisable();
			MDR_RST_CLK_PeripheralDisable(MDR_RST_CLK_PER_CLOCK_TIMER1_Msk);
		}
	}
	else if (TIMERx == MDR_TIMER2)
	{
		MDR_RST_CLK_TIMER2_SetDivider(divider);
		if (enable == MDR_RST_CLK_CLOCK_ENABLE)
		{
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_TIMER2_Msk);
			MDR_RST_CLK_TIMER2_ClockEnable();
		}
		else
		{
			MDR_RST_CLK_TIMER2_ClockDisable();
			MDR_RST_CLK_PeripheralDisable(MDR_RST_CLK_PER_CLOCK_TIMER2_Msk);
		}
	}
	else
	{
		MDR_RST_CLK_TIMER3_SetDivider(divider);
		if (enable == MDR_RST_CLK_CLOCK_ENABLE)
		{
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_TIMER3_Msk);
			MDR_RST_CLK_TIMER3_ClockEnable();
		}
		else
		{
			MDR_RST_CLK_TIMER3_ClockDisable();
			MDR_RST_CLK_PeripheralDisable(MDR_RST_CLK_PER_CLOCK_TIMER3_Msk);
		}
	}

	return MDR_RST_CLK_STATUS_OK;
}

void MDR_RST_CLK_TIMER1_SetDivider(uint32_t divider)
{
	RST_CLK_UNION->TIM_CLOCK.Bits.BRG1 = divider >> MDR_RST_CLK_TIMER1_BRG_Pos;
}

void MDR_RST_CLK_TIMER1_ClockEnable(void)
{
	RST_CLK_UNION->TIM_CLOCK.Bits.CLK1_EN = TIM_CLK1_ENABLE_VAL;
}

void MDR_RST_CLK_TIMER1_ClockDisable(void)
{
	RST_CLK_UNION->TIM_CLOCK.Bits.CLK1_EN = TIM_CLK1_DISABLE_VAL;
}

void MDR_RST_CLK_TIMER2_SetDivider(uint32_t divider)
{
	RST_CLK_UNION->TIM_CLOCK.Bits.BRG2 = divider >> MDR_RST_CLK_TIMER2_BRG_Pos;
}

void MDR_RST_CLK_TIMER2_ClockEnable(void)
{
	RST_CLK_UNION->TIM_CLOCK.Bits.CLK2_EN = TIM_CLK2_ENABLE_VAL;
}

void MDR_RST_CLK_TIMER2_ClockDisable(void)
{
	RST_CLK_UNION->TIM_CLOCK.Bits.CLK2_EN = TIM_CLK2_DISABLE_VAL;
}

void MDR_RST_CLK_TIMER3_SetDivider(uint32_t divider)
{
	RST_CLK_UNION->TIM_CLOCK.Bits.BRG3 = divider >> MDR_RST_CLK_TIMER3_BRG_Pos;
}

void MDR_RST_CLK_TIMER3_ClockEnable(void)
{
	RST_CLK_UNION->TIM_CLOCK.Bits.CLK3_EN = TIM_CLK3_ENABLE_VAL;
}

void MDR_RST_CLK_TIMER3_ClockDisable(void)
{
	RST_CLK_UNION->TIM_CLOCK.Bits.CLK3_EN = TIM_CLK3_DISABLE_VAL;
}

// -----------------------------------------------------------------------------
// CAN clocks
// -----------------------------------------------------------------------------
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_CAN_Configure(MDR_CAN_TypeDef *CANx,
	uint32_t divider,
	uint32_t enable)
{

	if (((CANx != MDR_CAN1) && (CANx != MDR_CAN2))
		|| (IS_MDR_RST_CLK_CLOCK_STATE(enable) == 0UL))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	if (((CANx == MDR_CAN1) && (IS_MDR_RST_CLK_CAN1_DIV(divider) == 0UL))
		|| ((CANx == MDR_CAN2) && (IS_MDR_RST_CLK_CAN2_DIV(divider) == 0UL)))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	if (CANx == MDR_CAN1)
	{
		MDR_RST_CLK_CAN1_SetDivider(divider);
		if (enable == MDR_RST_CLK_CLOCK_ENABLE)
		{
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_CAN1_Msk);
			MDR_RST_CLK_CAN1_ClockEnable();
		}
		else
		{
			MDR_RST_CLK_CAN1_ClockDisable();
			MDR_RST_CLK_PeripheralDisable(MDR_RST_CLK_PER_CLOCK_CAN1_Msk);
		}
	}
	else
	{
		MDR_RST_CLK_CAN2_SetDivider(divider);
		if (enable == MDR_RST_CLK_CLOCK_ENABLE)
		{
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_CAN2_Msk);
			MDR_RST_CLK_CAN2_ClockEnable();
		}
		else
		{
			MDR_RST_CLK_CAN2_ClockDisable();
			MDR_RST_CLK_PeripheralDisable(MDR_RST_CLK_PER_CLOCK_CAN2_Msk);
		}
	}

	return MDR_RST_CLK_STATUS_OK;
}

void MDR_RST_CLK_CAN1_SetDivider(uint32_t divider)
{
	RST_CLK_UNION->CAN_CLOCK.Bits.BRG1 = divider >> MDR_RST_CLK_CAN1_BRG_Pos;
}

void MDR_RST_CLK_CAN1_ClockEnable(void)
{
	RST_CLK_UNION->CAN_CLOCK.Bits.CLK1_EN = DUAL_CLK1_ENABLE_VAL;
}

void MDR_RST_CLK_CAN1_ClockDisable(void)
{
	RST_CLK_UNION->CAN_CLOCK.Bits.CLK1_EN = DUAL_CLK1_DISABLE_VAL;
}

void MDR_RST_CLK_CAN2_SetDivider(uint32_t divider)
{
	RST_CLK_UNION->CAN_CLOCK.Bits.BRG2 = divider >> MDR_RST_CLK_CAN2_BRG_Pos;
}

void MDR_RST_CLK_CAN2_ClockEnable(void)
{
	RST_CLK_UNION->CAN_CLOCK.Bits.CLK2_EN = DUAL_CLK2_ENABLE_VAL;
}

void MDR_RST_CLK_CAN2_ClockDisable(void)
{
	RST_CLK_UNION->CAN_CLOCK.Bits.CLK2_EN = DUAL_CLK2_DISABLE_VAL;
}

// -----------------------------------------------------------------------------
// SSP clocks
// -----------------------------------------------------------------------------
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_SSP_Configure(MDR_SSP_TypeDef *SSPx,
	uint32_t divider,
	uint32_t enable)
{

	if (((SSPx != MDR_SSP1) && (SSPx != MDR_SSP2))
		|| (IS_MDR_RST_CLK_CLOCK_STATE(enable) == 0UL))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	if (((SSPx == MDR_SSP1) && (IS_MDR_RST_CLK_SSP1_DIV(divider) == 0UL))
		|| ((SSPx == MDR_SSP2) && (IS_MDR_RST_CLK_SSP2_DIV(divider) == 0UL)))
	{
		return MDR_RST_CLK_STATUS_INVALID_ARGUMENT;
	}

	if (SSPx == MDR_SSP1)
	{
		MDR_RST_CLK_SSP1_SetDivider(divider);
		if (enable == MDR_RST_CLK_CLOCK_ENABLE)
		{
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_SSP1_Msk);
			MDR_RST_CLK_SSP1_ClockEnable();
		}
		else
		{
			MDR_RST_CLK_SSP1_ClockDisable();
			MDR_RST_CLK_PeripheralDisable(MDR_RST_CLK_PER_CLOCK_SSP1_Msk);
		}
	}
	else
	{
		MDR_RST_CLK_SSP2_SetDivider(divider);
		if (enable == MDR_RST_CLK_CLOCK_ENABLE)
		{
			MDR_RST_CLK_PeripheralEnable(MDR_RST_CLK_PER_CLOCK_SSP2_Msk);
			MDR_RST_CLK_SSP2_ClockEnable();
		}
		else
		{
			MDR_RST_CLK_SSP2_ClockDisable();
			MDR_RST_CLK_PeripheralDisable(MDR_RST_CLK_PER_CLOCK_SSP2_Msk);
		}
	}

	return MDR_RST_CLK_STATUS_OK;
}

void MDR_RST_CLK_SSP1_SetDivider(uint32_t divider)
{
	RST_CLK_UNION->SSP_CLOCK.Bits.BRG1 = divider >> MDR_RST_CLK_SSP1_BRG_Pos;
}

void MDR_RST_CLK_SSP1_ClockEnable(void)
{
	RST_CLK_UNION->SSP_CLOCK.Bits.CLK1_EN = DUAL_CLK1_ENABLE_VAL;
}

void MDR_RST_CLK_SSP1_ClockDisable(void)
{
	RST_CLK_UNION->SSP_CLOCK.Bits.CLK1_EN = DUAL_CLK1_DISABLE_VAL;
}

void MDR_RST_CLK_SSP2_SetDivider(uint32_t divider)
{
	RST_CLK_UNION->SSP_CLOCK.Bits.BRG2 = divider >> MDR_RST_CLK_SSP2_BRG_Pos;
}

void MDR_RST_CLK_SSP2_ClockEnable(void)
{
	RST_CLK_UNION->SSP_CLOCK.Bits.CLK2_EN = DUAL_CLK2_ENABLE_VAL;
}

void MDR_RST_CLK_SSP2_ClockDisable(void)
{
	RST_CLK_UNION->SSP_CLOCK.Bits.CLK2_EN = DUAL_CLK2_DISABLE_VAL;
}
