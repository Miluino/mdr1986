/** ****************************************************************************
 * @file    MILUINO_MDR_GPIO.c
 * @brief   GPIO/PORT driver implementation for Milandr K1986BE92/94
 * @author  Max @maxdev
 * @author  Roma @r3m4k
 *
 * @date    September 2026
 *
 * @details Implements low-level MDR_PORTx register operations and high-level
 *          GPIO configuration helpers. High-level functions intentionally reuse
 *          the low-level API.
 * ************************************************************************** */

/* Includes ------------------------------------------------------------------*/
#include "MILUINO_MDR_GPIO.h"

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/
#define MDR_GPIO_PIN_FIELD_COUNT    16U
#define MDR_GPIO_UPPER_HALF_SHIFT   16U

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/
static uint32_t MDR_GPIO_IsValidPort(const MDR_PORT_TypeDef *port);
static uint32_t MDR_GPIO_BuildTwoBitMask(uint32_t pin_mask);
static uint32_t MDR_GPIO_BuildTwoBitValue(uint32_t pin_mask, uint32_t value);

/* Private functions ---------------------------------------------------------*/
static uint32_t MDR_GPIO_IsValidPort(const MDR_PORT_TypeDef *port)
{

	if ((port == MDR_PORTA)
		|| (port == MDR_PORTB)
		|| (port == MDR_PORTC)
		|| (port == MDR_PORTD)
		|| (port == MDR_PORTE)
		|| (port == MDR_PORTF))
	{
		return 1UL;
	}

	return 0UL;
}

static uint32_t MDR_GPIO_BuildTwoBitMask(uint32_t pin_mask)
{

	uint32_t pin_index;
	uint32_t pin_bit;
	uint32_t field_mask;

	pin_index = 0UL;
	field_mask = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if ((pin_mask & pin_bit) != 0UL)
		{
			field_mask |= 0x03UL << (pin_index * 2UL);
		}

		pin_index += 1UL;
	}

	return field_mask;
}

static uint32_t MDR_GPIO_BuildTwoBitValue(uint32_t pin_mask, uint32_t value)
{

	uint32_t pin_index;
	uint32_t pin_bit;
	uint32_t field_value;

	pin_index = 0UL;
	field_value = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if ((pin_mask & pin_bit) != 0UL)
		{
			field_value |= value << (pin_index * 2UL);
		}

		pin_index += 1UL;
	}

	return field_value;
}

/* Exported functions --------------------------------------------------------*/

// -----------------------------------------------------------------------------
// High-level GPIO configuration
// -----------------------------------------------------------------------------
MDR_GPIO_ConfigTypeDef MDR_GPIO_GetDefaultConfig(void)
{

	MDR_GPIO_ConfigTypeDef config;

	config.Direction = MDR_GPIO_DIRECTION_INPUT;
	config.Function = MDR_GPIO_FUNCTION_PORT;
	config.Mode = MDR_GPIO_MODE_ANALOG;
	config.PullUp = MDR_GPIO_PULL_DISABLE;
	config.PullDown = MDR_GPIO_PULL_DISABLE;
	config.OutputDriver = MDR_GPIO_OUTPUT_DRIVER_CONTROLLED;
	config.Schmitt = MDR_GPIO_SCHMITT_200_MV;
	config.Power = MDR_GPIO_POWER_DISABLED;
	config.Filter = MDR_GPIO_FILTER_DISABLE;
	config.OutputState = MDR_GPIO_OUTPUT_LOW;

	return config;
}

MDR_GPIO_StatusTypeDef MDR_GPIO_Init( MDR_PORT_TypeDef *port,
	                                 uint32_t pin_mask,
	                                 const MDR_GPIO_ConfigTypeDef *config )
{

	uint32_t func_mask;
	uint32_t func_value;
	uint32_t pwr_mask;
	uint32_t pwr_value;
	uint32_t pull_up_mask;
	uint32_t schmitt_mask;

	if ((MDR_GPIO_IsValidPort(port) == 0UL)
		|| (IS_MDR_GPIO_PIN_MASK(pin_mask) == 0UL)
		|| (config == 0))
	{
		return MDR_GPIO_STATUS_INVALID_ARGUMENT;
	}

	if ((IS_MDR_GPIO_DIRECTION(config->Direction) == 0UL)
		|| (IS_MDR_GPIO_FUNCTION(config->Function) == 0UL)
		|| (IS_MDR_GPIO_MODE(config->Mode) == 0UL)
		|| (IS_MDR_GPIO_PULL_STATE(config->PullUp) == 0UL)
		|| (IS_MDR_GPIO_PULL_STATE(config->PullDown) == 0UL)
		|| (IS_MDR_GPIO_OUTPUT_DRIVER(config->OutputDriver) == 0UL)
		|| (IS_MDR_GPIO_SCHMITT(config->Schmitt) == 0UL)
		|| (IS_MDR_GPIO_POWER(config->Power) == 0UL)
		|| (IS_MDR_GPIO_FILTER(config->Filter) == 0UL)
		|| (IS_MDR_GPIO_OUTPUT_STATE(config->OutputState) == 0UL))
	{
		return MDR_GPIO_STATUS_INVALID_ARGUMENT;
	}

	func_mask = MDR_GPIO_BuildTwoBitMask(pin_mask);
	func_value = MDR_GPIO_BuildTwoBitValue(pin_mask, (uint32_t)config->Function);
	pwr_mask = MDR_GPIO_BuildTwoBitMask(pin_mask);
	pwr_value = MDR_GPIO_BuildTwoBitValue(pin_mask, (uint32_t)config->Power);
	pull_up_mask = pin_mask << MDR_GPIO_UPPER_HALF_SHIFT;
	schmitt_mask = pin_mask << MDR_GPIO_UPPER_HALF_SHIFT;

	if (config->OutputState == MDR_GPIO_OUTPUT_HIGH)
	{
		MDR_PORT_RXTX_SetHigh(port, pin_mask);
	}
	else
	{
		MDR_PORT_RXTX_SetLow(port, pin_mask);
	}

	MDR_PORT_FUNC_Set(port, func_mask, func_value);

	if (config->PullDown == MDR_GPIO_PULL_ENABLE)
	{
		MDR_PORT_PULL_DownEnable(port, pin_mask);
	}
	else
	{
		MDR_PORT_PULL_DownDisable(port, pin_mask);
	}

	if (config->PullUp == MDR_GPIO_PULL_ENABLE)
	{
		MDR_PORT_PULL_UpEnable(port, pull_up_mask);
	}
	else
	{
		MDR_PORT_PULL_UpDisable(port, pull_up_mask);
	}

	if (config->OutputDriver == MDR_GPIO_OUTPUT_DRIVER_OPEN_DRAIN)
	{
		MDR_PORT_PD_OpenDrainEnable(port, pin_mask);
	}
	else
	{
		MDR_PORT_PD_OpenDrainDisable(port, pin_mask);
	}

	if (config->Schmitt == MDR_GPIO_SCHMITT_400_MV)
	{
		MDR_PORT_PD_SchmittEnable(port, schmitt_mask);
	}
	else
	{
		MDR_PORT_PD_SchmittDisable(port, schmitt_mask);
	}

	MDR_PORT_PWR_Set(port, pwr_mask, pwr_value);

	if (config->Filter == MDR_GPIO_FILTER_ENABLE)
	{
		MDR_PORT_GFEN_Enable(port, pin_mask);
	}
	else
	{
		MDR_PORT_GFEN_Disable(port, pin_mask);
	}

	if (config->Mode == MDR_GPIO_MODE_DIGITAL)
	{
		MDR_PORT_ANALOG_DigitalEnable(port, pin_mask);
	}
	else
	{
		MDR_PORT_ANALOG_DigitalDisable(port, pin_mask);
	}

	if (config->Direction == MDR_GPIO_DIRECTION_OUTPUT)
	{
		MDR_PORT_OE_SetOutput(port, pin_mask);
	}
	else
	{
		MDR_PORT_OE_SetInput(port, pin_mask);
	}

	return MDR_GPIO_STATUS_OK;
}

MDR_GPIO_StatusTypeDef MDR_GPIO_DeInit(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	MDR_GPIO_ConfigTypeDef config;

	if ((MDR_GPIO_IsValidPort(port) == 0UL)
		|| (IS_MDR_GPIO_PIN_MASK(pin_mask) == 0UL))
	{
		return MDR_GPIO_STATUS_INVALID_ARGUMENT;
	}

	config = MDR_GPIO_GetDefaultConfig();

	return MDR_GPIO_Init(port, pin_mask, &config);
}

// -----------------------------------------------------------------------------
// RXTX
// -----------------------------------------------------------------------------
void MDR_PORT_RXTX_SetHigh(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	port->RXTX |= pin_mask;
}

void MDR_PORT_RXTX_SetLow(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	port->RXTX &= ~pin_mask;
}

void MDR_PORT_RXTX_Toggle(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	port->RXTX ^= pin_mask;
}

uint32_t MDR_PORT_RXTX_Read(MDR_PORT_TypeDef *port)
{

	return port->RXTX;
}

// -----------------------------------------------------------------------------
// OE
// -----------------------------------------------------------------------------
void MDR_PORT_OE_SetInput(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	port->OE &= ~pin_mask;
}

void MDR_PORT_OE_SetOutput(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	port->OE |= pin_mask;
}

// -----------------------------------------------------------------------------
// FUNC
// -----------------------------------------------------------------------------
void MDR_PORT_FUNC_Set(MDR_PORT_TypeDef *port, uint32_t func_mask, uint32_t func_value)
{

	port->FUNC &= ~func_mask;
	port->FUNC |= (func_value & func_mask);
}

// -----------------------------------------------------------------------------
// ANALOG
// -----------------------------------------------------------------------------
void MDR_PORT_ANALOG_DigitalEnable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	port->ANALOG |= pin_mask;
}

void MDR_PORT_ANALOG_DigitalDisable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	port->ANALOG &= ~pin_mask;
}

// -----------------------------------------------------------------------------
// PULL
// -----------------------------------------------------------------------------
void MDR_PORT_PULL_UpEnable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	port->PULL |= pin_mask;
}

void MDR_PORT_PULL_UpDisable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	port->PULL &= ~pin_mask;
}

void MDR_PORT_PULL_DownEnable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	port->PULL |= pin_mask;
}

void MDR_PORT_PULL_DownDisable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	port->PULL &= ~pin_mask;
}

// -----------------------------------------------------------------------------
// PD
// -----------------------------------------------------------------------------
void MDR_PORT_PD_OpenDrainEnable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	port->PD |= pin_mask;
}

void MDR_PORT_PD_OpenDrainDisable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	port->PD &= ~pin_mask;
}

void MDR_PORT_PD_SchmittEnable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	port->PD |= pin_mask;
}

void MDR_PORT_PD_SchmittDisable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	port->PD &= ~pin_mask;
}

// -----------------------------------------------------------------------------
// PWR
// -----------------------------------------------------------------------------
void MDR_PORT_PWR_Set(MDR_PORT_TypeDef *port, uint32_t pwr_mask, uint32_t pwr_value)
{

	port->PWR &= ~pwr_mask;
	port->PWR |= (pwr_value & pwr_mask);
}

// -----------------------------------------------------------------------------
// GFEN
// -----------------------------------------------------------------------------
void MDR_PORT_GFEN_Enable(MDR_PORT_TypeDef *port, uint32_t gfen_mask)
{

	port->GFEN |= gfen_mask;
}

void MDR_PORT_GFEN_Disable(MDR_PORT_TypeDef *port, uint32_t gfen_mask)
{

	port->GFEN &= ~gfen_mask;
}
