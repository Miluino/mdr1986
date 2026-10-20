* Includes ------------------------------------------------------------------*/
#include "MILUINO_MDR_GPIO.h"

/* Private typedef -----------------------------------------------------------*/
#define RXTX_LOW_VAL                    0UL
#define RXTX_HIGH_VAL                   1UL

typedef union
{

	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t RXTX0     : 1;
		uint32_t RXTX1     : 1;
		uint32_t RXTX2     : 1;
		uint32_t RXTX3     : 1;
		uint32_t RXTX4     : 1;
		uint32_t RXTX5     : 1;
		uint32_t RXTX6     : 1;
		uint32_t RXTX7     : 1;
		uint32_t RXTX8     : 1;
		uint32_t RXTX9     : 1;
		uint32_t RXTX10    : 1;
		uint32_t RXTX11    : 1;
		uint32_t RXTX12    : 1;
		uint32_t RXTX13    : 1;
		uint32_t RXTX14    : 1;
		uint32_t RXTX15    : 1;
		uint32_t Reserved0 : 16;
	} Bits;
} MDR_PORT_RXTX_UnionTypeDef;

#define OE_INPUT_VAL                    0UL
#define OE_OUTPUT_VAL                   1UL

typedef union
{

	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t OE0       : 1;
		uint32_t OE1       : 1;
		uint32_t OE2       : 1;
		uint32_t OE3       : 1;
		uint32_t OE4       : 1;
		uint32_t OE5       : 1;
		uint32_t OE6       : 1;
		uint32_t OE7       : 1;
		uint32_t OE8       : 1;
		uint32_t OE9       : 1;
		uint32_t OE10      : 1;
		uint32_t OE11      : 1;
		uint32_t OE12      : 1;
		uint32_t OE13      : 1;
		uint32_t OE14      : 1;
		uint32_t OE15      : 1;
		uint32_t Reserved0 : 16;
	} Bits;
} MDR_PORT_OE_UnionTypeDef;

#define FUNC_PORT_VAL                   0UL
#define FUNC_MAIN_VAL                   1UL
#define FUNC_ALTERNATE_VAL              2UL
#define FUNC_REDEFINED_VAL              3UL

typedef union
{

	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t FUNC0  : 2;
		uint32_t FUNC1  : 2;
		uint32_t FUNC2  : 2;
		uint32_t FUNC3  : 2;
		uint32_t FUNC4  : 2;
		uint32_t FUNC5  : 2;
		uint32_t FUNC6  : 2;
		uint32_t FUNC7  : 2;
		uint32_t FUNC8  : 2;
		uint32_t FUNC9  : 2;
		uint32_t FUNC10 : 2;
		uint32_t FUNC11 : 2;
		uint32_t FUNC12 : 2;
		uint32_t FUNC13 : 2;
		uint32_t FUNC14 : 2;
		uint32_t FUNC15 : 2;
	} Bits;
} MDR_PORT_FUNC_UnionTypeDef;

#define ANALOG_ANALOG_VAL               0UL
#define ANALOG_DIGITAL_VAL              1UL

typedef union
{

	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t ANALOG0   : 1;
		uint32_t ANALOG1   : 1;
		uint32_t ANALOG2   : 1;
		uint32_t ANALOG3   : 1;
		uint32_t ANALOG4   : 1;
		uint32_t ANALOG5   : 1;
		uint32_t ANALOG6   : 1;
		uint32_t ANALOG7   : 1;
		uint32_t ANALOG8   : 1;
		uint32_t ANALOG9   : 1;
		uint32_t ANALOG10  : 1;
		uint32_t ANALOG11  : 1;
		uint32_t ANALOG12  : 1;
		uint32_t ANALOG13  : 1;
		uint32_t ANALOG14  : 1;
		uint32_t ANALOG15  : 1;
		uint32_t Reserved0 : 16;
	} Bits;
} MDR_PORT_ANALOG_UnionTypeDef;

#define PULL_DISABLE_VAL                0UL
#define PULL_ENABLE_VAL                 1UL

typedef union
{

	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t PULL_DOWN0  : 1;
		uint32_t PULL_DOWN1  : 1;
		uint32_t PULL_DOWN2  : 1;
		uint32_t PULL_DOWN3  : 1;
		uint32_t PULL_DOWN4  : 1;
		uint32_t PULL_DOWN5  : 1;
		uint32_t PULL_DOWN6  : 1;
		uint32_t PULL_DOWN7  : 1;
		uint32_t PULL_DOWN8  : 1;
		uint32_t PULL_DOWN9  : 1;
		uint32_t PULL_DOWN10 : 1;
		uint32_t PULL_DOWN11 : 1;
		uint32_t PULL_DOWN12 : 1;
		uint32_t PULL_DOWN13 : 1;
		uint32_t PULL_DOWN14 : 1;
		uint32_t PULL_DOWN15 : 1;
		uint32_t PULL_UP0    : 1;
		uint32_t PULL_UP1    : 1;
		uint32_t PULL_UP2    : 1;
		uint32_t PULL_UP3    : 1;
		uint32_t PULL_UP4    : 1;
		uint32_t PULL_UP5    : 1;
		uint32_t PULL_UP6    : 1;
		uint32_t PULL_UP7    : 1;
		uint32_t PULL_UP8    : 1;
		uint32_t PULL_UP9    : 1;
		uint32_t PULL_UP10   : 1;
		uint32_t PULL_UP11   : 1;
		uint32_t PULL_UP12   : 1;
		uint32_t PULL_UP13   : 1;
		uint32_t PULL_UP14   : 1;
		uint32_t PULL_UP15   : 1;
	} Bits;
} MDR_PORT_PULL_UnionTypeDef;

#define PD_CONTROLLED_DRIVER_VAL        0UL
#define PD_OPEN_DRAIN_VAL               1UL
#define SHM_200_MV_VAL                  0UL
#define SHM_400_MV_VAL                  1UL

typedef union
{

	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t PD0   : 1;
		uint32_t PD1   : 1;
		uint32_t PD2   : 1;
		uint32_t PD3   : 1;
		uint32_t PD4   : 1;
		uint32_t PD5   : 1;
		uint32_t PD6   : 1;
		uint32_t PD7   : 1;
		uint32_t PD8   : 1;
		uint32_t PD9   : 1;
		uint32_t PD10  : 1;
		uint32_t PD11  : 1;
		uint32_t PD12  : 1;
		uint32_t PD13  : 1;
		uint32_t PD14  : 1;
		uint32_t PD15  : 1;
		uint32_t SHM0  : 1;
		uint32_t SHM1  : 1;
		uint32_t SHM2  : 1;
		uint32_t SHM3  : 1;
		uint32_t SHM4  : 1;
		uint32_t SHM5  : 1;
		uint32_t SHM6  : 1;
		uint32_t SHM7  : 1;
		uint32_t SHM8  : 1;
		uint32_t SHM9  : 1;
		uint32_t SHM10 : 1;
		uint32_t SHM11 : 1;
		uint32_t SHM12 : 1;
		uint32_t SHM13 : 1;
		uint32_t SHM14 : 1;
		uint32_t SHM15 : 1;
	} Bits;
} MDR_PORT_PD_UnionTypeDef;

#define PWR_DISABLED_VAL                0UL
#define PWR_SLOW_VAL                    1UL
#define PWR_FAST_VAL                    2UL
#define PWR_MAXIMUM_VAL                 3UL

typedef union
{

	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t PWR0  : 2;
		uint32_t PWR1  : 2;
		uint32_t PWR2  : 2;
		uint32_t PWR3  : 2;
		uint32_t PWR4  : 2;
		uint32_t PWR5  : 2;
		uint32_t PWR6  : 2;
		uint32_t PWR7  : 2;
		uint32_t PWR8  : 2;
		uint32_t PWR9  : 2;
		uint32_t PWR10 : 2;
		uint32_t PWR11 : 2;
		uint32_t PWR12 : 2;
		uint32_t PWR13 : 2;
		uint32_t PWR14 : 2;
		uint32_t PWR15 : 2;
	} Bits;
} MDR_PORT_PWR_UnionTypeDef;

#define GFEN_DISABLE_VAL                0UL
#define GFEN_ENABLE_VAL                 1UL

typedef union
{

	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t GFEN0      : 1;
		uint32_t GFEN1      : 1;
		uint32_t GFEN2      : 1;
		uint32_t GFEN3      : 1;
		uint32_t GFEN4      : 1;
		uint32_t GFEN5      : 1;
		uint32_t GFEN6      : 1;
		uint32_t GFEN7      : 1;
		uint32_t GFEN8      : 1;
		uint32_t GFEN9      : 1;
		uint32_t GFEN10     : 1;
		uint32_t GFEN11     : 1;
		uint32_t GFEN12     : 1;
		uint32_t GFEN13     : 1;
		uint32_t GFEN14     : 1;
		uint32_t GFEN15     : 1;
		uint32_t Reserved0 : 16;
	} Bits;
} MDR_PORT_GFEN_UnionTypeDef;

typedef struct
{

	volatile MDR_PORT_RXTX_UnionTypeDef   RXTX;
	volatile MDR_PORT_OE_UnionTypeDef     OE;
	volatile MDR_PORT_FUNC_UnionTypeDef   FUNC;
	volatile MDR_PORT_ANALOG_UnionTypeDef ANALOG;
	volatile MDR_PORT_PULL_UnionTypeDef   PULL;
	volatile MDR_PORT_PD_UnionTypeDef     PD;
	volatile MDR_PORT_PWR_UnionTypeDef    PWR;
	volatile MDR_PORT_GFEN_UnionTypeDef   GFEN;
} MDR_PORT_RegisterMapTypeDef;

/* Private define ------------------------------------------------------------*/
#define MDR_GPIO_PIN_FIELD_COUNT    16U
#define MDR_GPIO_UPPER_HALF_SHIFT   16U

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/
static volatile MDR_PORT_RegisterMapTypeDef *MDR_GPIO_GetRegisterMap(MDR_PORT_TypeDef *port);
static uint32_t MDR_GPIO_IsValidPort(const MDR_PORT_TypeDef *port);
static uint32_t MDR_GPIO_BuildTwoBitMask(uint32_t pin_mask);
static uint32_t MDR_GPIO_BuildTwoBitValue(uint32_t pin_mask, uint32_t value);
static void MDR_GPIO_RXTX_WriteField(volatile MDR_PORT_RXTX_UnionTypeDef *reg, uint32_t pin_index, uint32_t value);
static void MDR_GPIO_OE_WriteField(volatile MDR_PORT_OE_UnionTypeDef *reg, uint32_t pin_index, uint32_t value);
static void MDR_GPIO_FUNC_WriteField(volatile MDR_PORT_FUNC_UnionTypeDef *reg, uint32_t pin_index, uint32_t value);
static void MDR_GPIO_ANALOG_WriteField(volatile MDR_PORT_ANALOG_UnionTypeDef *reg, uint32_t pin_index, uint32_t value);
static void MDR_GPIO_PULL_DownWriteField(volatile MDR_PORT_PULL_UnionTypeDef *reg, uint32_t pin_index, uint32_t value);
static void MDR_GPIO_PULL_UpWriteField(volatile MDR_PORT_PULL_UnionTypeDef *reg, uint32_t pin_index, uint32_t value);
static void MDR_GPIO_PD_WriteField(volatile MDR_PORT_PD_UnionTypeDef *reg, uint32_t pin_index, uint32_t value);
static void MDR_GPIO_SHM_WriteField(volatile MDR_PORT_PD_UnionTypeDef *reg, uint32_t pin_index, uint32_t value);
static void MDR_GPIO_PWR_WriteField(volatile MDR_PORT_PWR_UnionTypeDef *reg, uint32_t pin_index, uint32_t value);
static void MDR_GPIO_GFEN_WriteField(volatile MDR_PORT_GFEN_UnionTypeDef *reg, uint32_t pin_index, uint32_t value);

/* Private functions ---------------------------------------------------------*/
static volatile MDR_PORT_RegisterMapTypeDef *MDR_GPIO_GetRegisterMap(MDR_PORT_TypeDef *port)
{

	return (volatile MDR_PORT_RegisterMapTypeDef *)port;
}

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

static void MDR_GPIO_RXTX_WriteField(volatile MDR_PORT_RXTX_UnionTypeDef *reg, uint32_t pin_index, uint32_t value)
{

	switch (pin_index)
	{
		case 0U: reg->Bits.RXTX0 = value; break;
		case 1U: reg->Bits.RXTX1 = value; break;
		case 2U: reg->Bits.RXTX2 = value; break;
		case 3U: reg->Bits.RXTX3 = value; break;
		case 4U: reg->Bits.RXTX4 = value; break;
		case 5U: reg->Bits.RXTX5 = value; break;
		case 6U: reg->Bits.RXTX6 = value; break;
		case 7U: reg->Bits.RXTX7 = value; break;
		case 8U: reg->Bits.RXTX8 = value; break;
		case 9U: reg->Bits.RXTX9 = value; break;
		case 10U: reg->Bits.RXTX10 = value; break;
		case 11U: reg->Bits.RXTX11 = value; break;
		case 12U: reg->Bits.RXTX12 = value; break;
		case 13U: reg->Bits.RXTX13 = value; break;
		case 14U: reg->Bits.RXTX14 = value; break;
		case 15U: reg->Bits.RXTX15 = value; break;
		default: break;
	}
}

static void MDR_GPIO_OE_WriteField(volatile MDR_PORT_OE_UnionTypeDef *reg, uint32_t pin_index, uint32_t value)
{

	switch (pin_index)
	{
		case 0U: reg->Bits.OE0 = value; break;
		case 1U: reg->Bits.OE1 = value; break;
		case 2U: reg->Bits.OE2 = value; break;
		case 3U: reg->Bits.OE3 = value; break;
		case 4U: reg->Bits.OE4 = value; break;
		case 5U: reg->Bits.OE5 = value; break;
		case 6U: reg->Bits.OE6 = value; break;
		case 7U: reg->Bits.OE7 = value; break;
		case 8U: reg->Bits.OE8 = value; break;
		case 9U: reg->Bits.OE9 = value; break;
		case 10U: reg->Bits.OE10 = value; break;
		case 11U: reg->Bits.OE11 = value; break;
		case 12U: reg->Bits.OE12 = value; break;
		case 13U: reg->Bits.OE13 = value; break;
		case 14U: reg->Bits.OE14 = value; break;
		case 15U: reg->Bits.OE15 = value; break;
		default: break;
	}
}

static void MDR_GPIO_FUNC_WriteField(volatile MDR_PORT_FUNC_UnionTypeDef *reg, uint32_t pin_index, uint32_t value)
{

	switch (pin_index)
	{
		case 0U: reg->Bits.FUNC0 = value; break;
		case 1U: reg->Bits.FUNC1 = value; break;
		case 2U: reg->Bits.FUNC2 = value; break;
		case 3U: reg->Bits.FUNC3 = value; break;
		case 4U: reg->Bits.FUNC4 = value; break;
		case 5U: reg->Bits.FUNC5 = value; break;
		case 6U: reg->Bits.FUNC6 = value; break;
		case 7U: reg->Bits.FUNC7 = value; break;
		case 8U: reg->Bits.FUNC8 = value; break;
		case 9U: reg->Bits.FUNC9 = value; break;
		case 10U: reg->Bits.FUNC10 = value; break;
		case 11U: reg->Bits.FUNC11 = value; break;
		case 12U: reg->Bits.FUNC12 = value; break;
		case 13U: reg->Bits.FUNC13 = value; break;
		case 14U: reg->Bits.FUNC14 = value; break;
		case 15U: reg->Bits.FUNC15 = value; break;
		default: break;
	}
}

static void MDR_GPIO_ANALOG_WriteField(volatile MDR_PORT_ANALOG_UnionTypeDef *reg, uint32_t pin_index, uint32_t value)
{

	switch (pin_index)
	{
		case 0U: reg->Bits.ANALOG0 = value; break;
		case 1U: reg->Bits.ANALOG1 = value; break;
		case 2U: reg->Bits.ANALOG2 = value; break;
		case 3U: reg->Bits.ANALOG3 = value; break;
		case 4U: reg->Bits.ANALOG4 = value; break;
		case 5U: reg->Bits.ANALOG5 = value; break;
		case 6U: reg->Bits.ANALOG6 = value; break;
		case 7U: reg->Bits.ANALOG7 = value; break;
		case 8U: reg->Bits.ANALOG8 = value; break;
		case 9U: reg->Bits.ANALOG9 = value; break;
		case 10U: reg->Bits.ANALOG10 = value; break;
		case 11U: reg->Bits.ANALOG11 = value; break;
		case 12U: reg->Bits.ANALOG12 = value; break;
		case 13U: reg->Bits.ANALOG13 = value; break;
		case 14U: reg->Bits.ANALOG14 = value; break;
		case 15U: reg->Bits.ANALOG15 = value; break;
		default: break;
	}
}

static void MDR_GPIO_PULL_DownWriteField(volatile MDR_PORT_PULL_UnionTypeDef *reg, uint32_t pin_index, uint32_t value)
{

	switch (pin_index)
	{
		case 0U: reg->Bits.PULL_DOWN0 = value; break;
		case 1U: reg->Bits.PULL_DOWN1 = value; break;
		case 2U: reg->Bits.PULL_DOWN2 = value; break;
		case 3U: reg->Bits.PULL_DOWN3 = value; break;
		case 4U: reg->Bits.PULL_DOWN4 = value; break;
		case 5U: reg->Bits.PULL_DOWN5 = value; break;
		case 6U: reg->Bits.PULL_DOWN6 = value; break;
		case 7U: reg->Bits.PULL_DOWN7 = value; break;
		case 8U: reg->Bits.PULL_DOWN8 = value; break;
		case 9U: reg->Bits.PULL_DOWN9 = value; break;
		case 10U: reg->Bits.PULL_DOWN10 = value; break;
		case 11U: reg->Bits.PULL_DOWN11 = value; break;
		case 12U: reg->Bits.PULL_DOWN12 = value; break;
		case 13U: reg->Bits.PULL_DOWN13 = value; break;
		case 14U: reg->Bits.PULL_DOWN14 = value; break;
		case 15U: reg->Bits.PULL_DOWN15 = value; break;
		default: break;
	}
}

static void MDR_GPIO_PULL_UpWriteField(volatile MDR_PORT_PULL_UnionTypeDef *reg, uint32_t pin_index, uint32_t value)
{

	switch (pin_index)
	{
		case 0U: reg->Bits.PULL_UP0 = value; break;
		case 1U: reg->Bits.PULL_UP1 = value; break;
		case 2U: reg->Bits.PULL_UP2 = value; break;
		case 3U: reg->Bits.PULL_UP3 = value; break;
		case 4U: reg->Bits.PULL_UP4 = value; break;
		case 5U: reg->Bits.PULL_UP5 = value; break;
		case 6U: reg->Bits.PULL_UP6 = value; break;
		case 7U: reg->Bits.PULL_UP7 = value; break;
		case 8U: reg->Bits.PULL_UP8 = value; break;
		case 9U: reg->Bits.PULL_UP9 = value; break;
		case 10U: reg->Bits.PULL_UP10 = value; break;
		case 11U: reg->Bits.PULL_UP11 = value; break;
		case 12U: reg->Bits.PULL_UP12 = value; break;
		case 13U: reg->Bits.PULL_UP13 = value; break;
		case 14U: reg->Bits.PULL_UP14 = value; break;
		case 15U: reg->Bits.PULL_UP15 = value; break;
		default: break;
	}
}

static void MDR_GPIO_PD_WriteField(volatile MDR_PORT_PD_UnionTypeDef *reg, uint32_t pin_index, uint32_t value)
{

	switch (pin_index)
	{
		case 0U: reg->Bits.PD0 = value; break;
		case 1U: reg->Bits.PD1 = value; break;
		case 2U: reg->Bits.PD2 = value; break;
		case 3U: reg->Bits.PD3 = value; break;
		case 4U: reg->Bits.PD4 = value; break;
		case 5U: reg->Bits.PD5 = value; break;
		case 6U: reg->Bits.PD6 = value; break;
		case 7U: reg->Bits.PD7 = value; break;
		case 8U: reg->Bits.PD8 = value; break;
		case 9U: reg->Bits.PD9 = value; break;
		case 10U: reg->Bits.PD10 = value; break;
		case 11U: reg->Bits.PD11 = value; break;
		case 12U: reg->Bits.PD12 = value; break;
		case 13U: reg->Bits.PD13 = value; break;
		case 14U: reg->Bits.PD14 = value; break;
		case 15U: reg->Bits.PD15 = value; break;
		default: break;
	}
}

static void MDR_GPIO_SHM_WriteField(volatile MDR_PORT_PD_UnionTypeDef *reg, uint32_t pin_index, uint32_t value)
{

	switch (pin_index)
	{
		case 0U: reg->Bits.SHM0 = value; break;
		case 1U: reg->Bits.SHM1 = value; break;
		case 2U: reg->Bits.SHM2 = value; break;
		case 3U: reg->Bits.SHM3 = value; break;
		case 4U: reg->Bits.SHM4 = value; break;
		case 5U: reg->Bits.SHM5 = value; break;
		case 6U: reg->Bits.SHM6 = value; break;
		case 7U: reg->Bits.SHM7 = value; break;
		case 8U: reg->Bits.SHM8 = value; break;
		case 9U: reg->Bits.SHM9 = value; break;
		case 10U: reg->Bits.SHM10 = value; break;
		case 11U: reg->Bits.SHM11 = value; break;
		case 12U: reg->Bits.SHM12 = value; break;
		case 13U: reg->Bits.SHM13 = value; break;
		case 14U: reg->Bits.SHM14 = value; break;
		case 15U: reg->Bits.SHM15 = value; break;
		default: break;
	}
}

static void MDR_GPIO_PWR_WriteField(volatile MDR_PORT_PWR_UnionTypeDef *reg, uint32_t pin_index, uint32_t value)
{

	switch (pin_index)
	{
		case 0U: reg->Bits.PWR0 = value; break;
		case 1U: reg->Bits.PWR1 = value; break;
		case 2U: reg->Bits.PWR2 = value; break;
		case 3U: reg->Bits.PWR3 = value; break;
		case 4U: reg->Bits.PWR4 = value; break;
		case 5U: reg->Bits.PWR5 = value; break;
		case 6U: reg->Bits.PWR6 = value; break;
		case 7U: reg->Bits.PWR7 = value; break;
		case 8U: reg->Bits.PWR8 = value; break;
		case 9U: reg->Bits.PWR9 = value; break;
		case 10U: reg->Bits.PWR10 = value; break;
		case 11U: reg->Bits.PWR11 = value; break;
		case 12U: reg->Bits.PWR12 = value; break;
		case 13U: reg->Bits.PWR13 = value; break;
		case 14U: reg->Bits.PWR14 = value; break;
		case 15U: reg->Bits.PWR15 = value; break;
		default: break;
	}
}

static void MDR_GPIO_GFEN_WriteField(volatile MDR_PORT_GFEN_UnionTypeDef *reg, uint32_t pin_index, uint32_t value)
{

	switch (pin_index)
	{
		case 0U: reg->Bits.GFEN0 = value; break;
		case 1U: reg->Bits.GFEN1 = value; break;
		case 2U: reg->Bits.GFEN2 = value; break;
		case 3U: reg->Bits.GFEN3 = value; break;
		case 4U: reg->Bits.GFEN4 = value; break;
		case 5U: reg->Bits.GFEN5 = value; break;
		case 6U: reg->Bits.GFEN6 = value; break;
		case 7U: reg->Bits.GFEN7 = value; break;
		case 8U: reg->Bits.GFEN8 = value; break;
		case 9U: reg->Bits.GFEN9 = value; break;
		case 10U: reg->Bits.GFEN10 = value; break;
		case 11U: reg->Bits.GFEN11 = value; break;
		case 12U: reg->Bits.GFEN12 = value; break;
		case 13U: reg->Bits.GFEN13 = value; break;
		case 14U: reg->Bits.GFEN14 = value; break;
		case 15U: reg->Bits.GFEN15 = value; break;
		default: break;
	}
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

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t pin_bit;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if ((pin_mask & pin_bit) != 0UL)
		{
			MDR_GPIO_RXTX_WriteField(&port_union->RXTX, pin_index, RXTX_HIGH_VAL);
		}

		pin_index += 1UL;
	}
}
void MDR_PORT_RXTX_SetLow(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t pin_bit;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if ((pin_mask & pin_bit) != 0UL)
		{
			MDR_GPIO_RXTX_WriteField(&port_union->RXTX, pin_index, RXTX_LOW_VAL);
		}

		pin_index += 1UL;
	}
}
void MDR_PORT_RXTX_Toggle(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t pin_bit;
	uint32_t pin_value;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if ((pin_mask & pin_bit) != 0UL)
		{
			pin_value = (port_union->RXTX.Register >> pin_index) & 0x01UL;

			if (pin_value == RXTX_HIGH_VAL)
			{
				MDR_GPIO_RXTX_WriteField(&port_union->RXTX, pin_index, RXTX_LOW_VAL);
			}
			else
			{
				MDR_GPIO_RXTX_WriteField(&port_union->RXTX, pin_index, RXTX_HIGH_VAL);
			}
		}

		pin_index += 1UL;
	}
}

uint32_t MDR_PORT_RXTX_Read(MDR_PORT_TypeDef *port)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;

	port_union = MDR_GPIO_GetRegisterMap(port);

	return port_union->RXTX.Register;
}
// -----------------------------------------------------------------------------
// OE
// -----------------------------------------------------------------------------
void MDR_PORT_OE_SetInput(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t pin_bit;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if ((pin_mask & pin_bit) != 0UL)
		{
			MDR_GPIO_OE_WriteField(&port_union->OE, pin_index, OE_INPUT_VAL);
		}

		pin_index += 1UL;
	}
}
void MDR_PORT_OE_SetOutput(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t pin_bit;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if ((pin_mask & pin_bit) != 0UL)
		{
			MDR_GPIO_OE_WriteField(&port_union->OE, pin_index, OE_OUTPUT_VAL);
		}

		pin_index += 1UL;
	}
}
// -----------------------------------------------------------------------------
// ANALOG
// -----------------------------------------------------------------------------
void MDR_PORT_ANALOG_DigitalEnable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t pin_bit;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if ((pin_mask & pin_bit) != 0UL)
		{
			MDR_GPIO_ANALOG_WriteField(&port_union->ANALOG, pin_index, ANALOG_DIGITAL_VAL);
		}

		pin_index += 1UL;
	}
}
void MDR_PORT_ANALOG_DigitalDisable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t pin_bit;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if ((pin_mask & pin_bit) != 0UL)
		{
			MDR_GPIO_ANALOG_WriteField(&port_union->ANALOG, pin_index, ANALOG_ANALOG_VAL);
		}

		pin_index += 1UL;
	}
}
// -----------------------------------------------------------------------------
// FUNC
// -----------------------------------------------------------------------------
void MDR_PORT_FUNC_Set(MDR_PORT_TypeDef *port, uint32_t func_mask, uint32_t func_value)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t field_mask;
	uint32_t field_value;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		field_mask = 0x03UL << (pin_index * 2UL);

		if ((func_mask & field_mask) != 0UL)
		{
			field_value = (func_value >> (pin_index * 2UL)) & 0x03UL;
			MDR_GPIO_FUNC_WriteField(&port_union->FUNC, pin_index, field_value);
		}

		pin_index += 1UL;
	}
}
// -----------------------------------------------------------------------------
// PULL
// -----------------------------------------------------------------------------
void MDR_PORT_PULL_UpEnable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t pin_bit;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if (((pin_mask >> MDR_GPIO_UPPER_HALF_SHIFT) & pin_bit) != 0UL)
		{
			MDR_GPIO_PULL_UpWriteField(&port_union->PULL, pin_index, PULL_ENABLE_VAL);
		}

		pin_index += 1UL;
	}
}
void MDR_PORT_PULL_UpDisable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t pin_bit;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if (((pin_mask >> MDR_GPIO_UPPER_HALF_SHIFT) & pin_bit) != 0UL)
		{
			MDR_GPIO_PULL_UpWriteField(&port_union->PULL, pin_index, PULL_DISABLE_VAL);
		}

		pin_index += 1UL;
	}
}
void MDR_PORT_PULL_DownEnable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t pin_bit;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if ((pin_mask & pin_bit) != 0UL)
		{
			MDR_GPIO_PULL_DownWriteField(&port_union->PULL, pin_index, PULL_ENABLE_VAL);
		}

		pin_index += 1UL;
	}
}
void MDR_PORT_PULL_DownDisable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t pin_bit;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if ((pin_mask & pin_bit) != 0UL)
		{
			MDR_GPIO_PULL_DownWriteField(&port_union->PULL, pin_index, PULL_DISABLE_VAL);
		}

		pin_index += 1UL;
	}
}
// -----------------------------------------------------------------------------
// PD
// -----------------------------------------------------------------------------
void MDR_PORT_PD_OpenDrainEnable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t pin_bit;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if ((pin_mask & pin_bit) != 0UL)
		{
			MDR_GPIO_PD_WriteField(&port_union->PD, pin_index, PD_OPEN_DRAIN_VAL);
		}

		pin_index += 1UL;
	}
}
void MDR_PORT_PD_OpenDrainDisable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t pin_bit;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if ((pin_mask & pin_bit) != 0UL)
		{
			MDR_GPIO_PD_WriteField(&port_union->PD, pin_index, PD_CONTROLLED_DRIVER_VAL);
		}

		pin_index += 1UL;
	}
}
void MDR_PORT_PD_SchmittEnable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t pin_bit;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if (((pin_mask >> MDR_GPIO_UPPER_HALF_SHIFT) & pin_bit) != 0UL)
		{
			MDR_GPIO_SHM_WriteField(&port_union->PD, pin_index, SHM_400_MV_VAL);
		}

		pin_index += 1UL;
	}
}
void MDR_PORT_PD_SchmittDisable(MDR_PORT_TypeDef *port, uint32_t pin_mask)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t pin_bit;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if (((pin_mask >> MDR_GPIO_UPPER_HALF_SHIFT) & pin_bit) != 0UL)
		{
			MDR_GPIO_SHM_WriteField(&port_union->PD, pin_index, SHM_200_MV_VAL);
		}

		pin_index += 1UL;
	}
}
// -----------------------------------------------------------------------------
// PWR
// -----------------------------------------------------------------------------
void MDR_PORT_PWR_Set(MDR_PORT_TypeDef *port, uint32_t pwr_mask, uint32_t pwr_value)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t field_mask;
	uint32_t field_value;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		field_mask = 0x03UL << (pin_index * 2UL);

		if ((pwr_mask & field_mask) != 0UL)
		{
			field_value = (pwr_value >> (pin_index * 2UL)) & 0x03UL;
			MDR_GPIO_PWR_WriteField(&port_union->PWR, pin_index, field_value);
		}

		pin_index += 1UL;
	}
}
// -----------------------------------------------------------------------------
// GFEN
// -----------------------------------------------------------------------------
void MDR_PORT_GFEN_Enable(MDR_PORT_TypeDef *port, uint32_t gfen_mask)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t pin_bit;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if ((gfen_mask & pin_bit) != 0UL)
		{
			MDR_GPIO_GFEN_WriteField(&port_union->GFEN, pin_index, GFEN_ENABLE_VAL);
		}

		pin_index += 1UL;
	}
}
void MDR_PORT_GFEN_Disable(MDR_PORT_TypeDef *port, uint32_t gfen_mask)
{

	volatile MDR_PORT_RegisterMapTypeDef *port_union;
	uint32_t pin_index;
	uint32_t pin_bit;

	port_union = MDR_GPIO_GetRegisterMap(port);
	pin_index = 0UL;

	while (pin_index < MDR_GPIO_PIN_FIELD_COUNT)
	{
		pin_bit = 1UL << pin_index;

		if ((gfen_mask & pin_bit) != 0UL)
		{
			MDR_GPIO_GFEN_WriteField(&port_union->GFEN, pin_index, GFEN_DISABLE_VAL);
		}

		pin_index += 1UL;
	}
}