/** ****************************************************************************
 * @file    MILUINO_MDR_NVIC.c
 * @brief   NVIC driver implementation for Cortex-M3 in Milandr K1986BE92/94
 * @author  ...
 * @date    September 2026
 *
 * @details Implements external interrupt control through a private NVIC
 *          register map and raw bit-field values.
 * ************************************************************************** */

/* Includes ------------------------------------------------------------------*/
#include "MILUINO_MDR_NVIC.h"

/* Private typedef -----------------------------------------------------------*/

/* ISER register */
#define NVIC_SETENA_DISABLE_VAL          0UL
#define NVIC_SETENA_ENABLE_VAL           1UL

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t SETENA0  : 1;
		uint32_t SETENA1  : 1;
		uint32_t SETENA2  : 1;
		uint32_t SETENA3  : 1;
		uint32_t SETENA4  : 1;
		uint32_t SETENA5  : 1;
		uint32_t SETENA6  : 1;
		uint32_t SETENA7  : 1;
		uint32_t SETENA8  : 1;
		uint32_t SETENA9  : 1;
		uint32_t SETENA10 : 1;
		uint32_t SETENA11 : 1;
		uint32_t SETENA12 : 1;
		uint32_t SETENA13 : 1;
		uint32_t SETENA14 : 1;
		uint32_t SETENA15 : 1;
		uint32_t SETENA16 : 1;
		uint32_t SETENA17 : 1;
		uint32_t SETENA18 : 1;
		uint32_t SETENA19 : 1;
		uint32_t SETENA20 : 1;
		uint32_t SETENA21 : 1;
		uint32_t SETENA22 : 1;
		uint32_t SETENA23 : 1;
		uint32_t SETENA24 : 1;
		uint32_t SETENA25 : 1;
		uint32_t SETENA26 : 1;
		uint32_t SETENA27 : 1;
		uint32_t SETENA28 : 1;
		uint32_t SETENA29 : 1;
		uint32_t SETENA30 : 1;
		uint32_t SETENA31 : 1;
	} Bits;
} MDR_NVIC_ISER_UnionTypeDef;

/* ICER register */
#define NVIC_CLRENA_NO_EFFECT_VAL        0UL
#define NVIC_CLRENA_DISABLE_VAL          1UL

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t CLRENA0  : 1;
		uint32_t CLRENA1  : 1;
		uint32_t CLRENA2  : 1;
		uint32_t CLRENA3  : 1;
		uint32_t CLRENA4  : 1;
		uint32_t CLRENA5  : 1;
		uint32_t CLRENA6  : 1;
		uint32_t CLRENA7  : 1;
		uint32_t CLRENA8  : 1;
		uint32_t CLRENA9  : 1;
		uint32_t CLRENA10 : 1;
		uint32_t CLRENA11 : 1;
		uint32_t CLRENA12 : 1;
		uint32_t CLRENA13 : 1;
		uint32_t CLRENA14 : 1;
		uint32_t CLRENA15 : 1;
		uint32_t CLRENA16 : 1;
		uint32_t CLRENA17 : 1;
		uint32_t CLRENA18 : 1;
		uint32_t CLRENA19 : 1;
		uint32_t CLRENA20 : 1;
		uint32_t CLRENA21 : 1;
		uint32_t CLRENA22 : 1;
		uint32_t CLRENA23 : 1;
		uint32_t CLRENA24 : 1;
		uint32_t CLRENA25 : 1;
		uint32_t CLRENA26 : 1;
		uint32_t CLRENA27 : 1;
		uint32_t CLRENA28 : 1;
		uint32_t CLRENA29 : 1;
		uint32_t CLRENA30 : 1;
		uint32_t CLRENA31 : 1;
	} Bits;
} MDR_NVIC_ICER_UnionTypeDef;

/* ISPR register */
#define NVIC_SETPEND_NO_EFFECT_VAL       0UL
#define NVIC_SETPEND_SET_VAL             1UL

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t SETPEND0  : 1;
		uint32_t SETPEND1  : 1;
		uint32_t SETPEND2  : 1;
		uint32_t SETPEND3  : 1;
		uint32_t SETPEND4  : 1;
		uint32_t SETPEND5  : 1;
		uint32_t SETPEND6  : 1;
		uint32_t SETPEND7  : 1;
		uint32_t SETPEND8  : 1;
		uint32_t SETPEND9  : 1;
		uint32_t SETPEND10 : 1;
		uint32_t SETPEND11 : 1;
		uint32_t SETPEND12 : 1;
		uint32_t SETPEND13 : 1;
		uint32_t SETPEND14 : 1;
		uint32_t SETPEND15 : 1;
		uint32_t SETPEND16 : 1;
		uint32_t SETPEND17 : 1;
		uint32_t SETPEND18 : 1;
		uint32_t SETPEND19 : 1;
		uint32_t SETPEND20 : 1;
		uint32_t SETPEND21 : 1;
		uint32_t SETPEND22 : 1;
		uint32_t SETPEND23 : 1;
		uint32_t SETPEND24 : 1;
		uint32_t SETPEND25 : 1;
		uint32_t SETPEND26 : 1;
		uint32_t SETPEND27 : 1;
		uint32_t SETPEND28 : 1;
		uint32_t SETPEND29 : 1;
		uint32_t SETPEND30 : 1;
		uint32_t SETPEND31 : 1;
	} Bits;
} MDR_NVIC_ISPR_UnionTypeDef;

/* ICPR register */
#define NVIC_CLRPEND_NO_EFFECT_VAL       0UL
#define NVIC_CLRPEND_CLEAR_VAL           1UL

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t CLRPEND0  : 1;
		uint32_t CLRPEND1  : 1;
		uint32_t CLRPEND2  : 1;
		uint32_t CLRPEND3  : 1;
		uint32_t CLRPEND4  : 1;
		uint32_t CLRPEND5  : 1;
		uint32_t CLRPEND6  : 1;
		uint32_t CLRPEND7  : 1;
		uint32_t CLRPEND8  : 1;
		uint32_t CLRPEND9  : 1;
		uint32_t CLRPEND10 : 1;
		uint32_t CLRPEND11 : 1;
		uint32_t CLRPEND12 : 1;
		uint32_t CLRPEND13 : 1;
		uint32_t CLRPEND14 : 1;
		uint32_t CLRPEND15 : 1;
		uint32_t CLRPEND16 : 1;
		uint32_t CLRPEND17 : 1;
		uint32_t CLRPEND18 : 1;
		uint32_t CLRPEND19 : 1;
		uint32_t CLRPEND20 : 1;
		uint32_t CLRPEND21 : 1;
		uint32_t CLRPEND22 : 1;
		uint32_t CLRPEND23 : 1;
		uint32_t CLRPEND24 : 1;
		uint32_t CLRPEND25 : 1;
		uint32_t CLRPEND26 : 1;
		uint32_t CLRPEND27 : 1;
		uint32_t CLRPEND28 : 1;
		uint32_t CLRPEND29 : 1;
		uint32_t CLRPEND30 : 1;
		uint32_t CLRPEND31 : 1;
	} Bits;
} MDR_NVIC_ICPR_UnionTypeDef;

/* IABR register */
#define NVIC_ACTIVE_INACTIVE_VAL         0UL
#define NVIC_ACTIVE_ACTIVE_VAL           1UL

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t ACTIVE0  : 1;
		uint32_t ACTIVE1  : 1;
		uint32_t ACTIVE2  : 1;
		uint32_t ACTIVE3  : 1;
		uint32_t ACTIVE4  : 1;
		uint32_t ACTIVE5  : 1;
		uint32_t ACTIVE6  : 1;
		uint32_t ACTIVE7  : 1;
		uint32_t ACTIVE8  : 1;
		uint32_t ACTIVE9  : 1;
		uint32_t ACTIVE10 : 1;
		uint32_t ACTIVE11 : 1;
		uint32_t ACTIVE12 : 1;
		uint32_t ACTIVE13 : 1;
		uint32_t ACTIVE14 : 1;
		uint32_t ACTIVE15 : 1;
		uint32_t ACTIVE16 : 1;
		uint32_t ACTIVE17 : 1;
		uint32_t ACTIVE18 : 1;
		uint32_t ACTIVE19 : 1;
		uint32_t ACTIVE20 : 1;
		uint32_t ACTIVE21 : 1;
		uint32_t ACTIVE22 : 1;
		uint32_t ACTIVE23 : 1;
		uint32_t ACTIVE24 : 1;
		uint32_t ACTIVE25 : 1;
		uint32_t ACTIVE26 : 1;
		uint32_t ACTIVE27 : 1;
		uint32_t ACTIVE28 : 1;
		uint32_t ACTIVE29 : 1;
		uint32_t ACTIVE30 : 1;
		uint32_t ACTIVE31 : 1;
	} Bits;
} MDR_NVIC_IABR_UnionTypeDef;

/* Private define ------------------------------------------------------------*/
#define MDR_NVIC_BASE_ADDRESS            0xE000E100UL
#define MDR_NVIC_REGISTER_FIELD_COUNT    32UL
#define MDR_NVIC_PRIORITY_FIELD_COUNT    4UL
#define MDR_NVIC_PRIORITY_SHIFT          ( 8UL - __NVIC_PRIO_BITS )

/* Private register map offsets */
#define MDR_NVIC_ISER_OFFSET             0x000UL
#define MDR_NVIC_ICER_OFFSET             0x080UL
#define MDR_NVIC_ISPR_OFFSET             0x100UL
#define MDR_NVIC_ICPR_OFFSET             0x180UL
#define MDR_NVIC_IABR_OFFSET             0x200UL
#define MDR_NVIC_IP_OFFSET               0x300UL

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/
static volatile MDR_NVIC_ISER_UnionTypeDef *MDR_NVIC_GetISER(uint32_t register_index);
static volatile MDR_NVIC_ICER_UnionTypeDef *MDR_NVIC_GetICER(uint32_t register_index);
static volatile MDR_NVIC_ISPR_UnionTypeDef *MDR_NVIC_GetISPR(uint32_t register_index);
static volatile MDR_NVIC_ICPR_UnionTypeDef *MDR_NVIC_GetICPR(uint32_t register_index);
static volatile MDR_NVIC_IABR_UnionTypeDef *MDR_NVIC_GetIABR(uint32_t register_index);
static volatile uint8_t *MDR_NVIC_GetPriorityField(uint32_t irq_number);

static void MDR_NVIC_ISER_WriteField(volatile MDR_NVIC_ISER_UnionTypeDef *reg, uint32_t bit_index, uint32_t value);
static void MDR_NVIC_ICER_WriteField(volatile MDR_NVIC_ICER_UnionTypeDef *reg, uint32_t bit_index, uint32_t value);
static void MDR_NVIC_ISPR_WriteField(volatile MDR_NVIC_ISPR_UnionTypeDef *reg, uint32_t bit_index, uint32_t value);
static void MDR_NVIC_ICPR_WriteField(volatile MDR_NVIC_ICPR_UnionTypeDef *reg, uint32_t bit_index, uint32_t value);

static uint32_t MDR_NVIC_ISER_ReadField(volatile MDR_NVIC_ISER_UnionTypeDef *reg, uint32_t bit_index);
static uint32_t MDR_NVIC_ISPR_ReadField(volatile MDR_NVIC_ISPR_UnionTypeDef *reg, uint32_t bit_index);
static uint32_t MDR_NVIC_IABR_ReadField(volatile MDR_NVIC_IABR_UnionTypeDef *reg, uint32_t bit_index);

/* Private functions ---------------------------------------------------------*/
static volatile MDR_NVIC_ISER_UnionTypeDef *MDR_NVIC_GetISER(uint32_t register_index)
{

	return (volatile MDR_NVIC_ISER_UnionTypeDef *)
		(MDR_NVIC_BASE_ADDRESS + MDR_NVIC_ISER_OFFSET + (register_index * 4UL));
}

static volatile MDR_NVIC_ICER_UnionTypeDef *MDR_NVIC_GetICER(uint32_t register_index)
{

	return (volatile MDR_NVIC_ICER_UnionTypeDef *)
		(MDR_NVIC_BASE_ADDRESS + MDR_NVIC_ICER_OFFSET + (register_index * 4UL));
}

static volatile MDR_NVIC_ISPR_UnionTypeDef *MDR_NVIC_GetISPR(uint32_t register_index)
{

	return (volatile MDR_NVIC_ISPR_UnionTypeDef *)
		(MDR_NVIC_BASE_ADDRESS + MDR_NVIC_ISPR_OFFSET + (register_index * 4UL));
}

static volatile MDR_NVIC_ICPR_UnionTypeDef *MDR_NVIC_GetICPR(uint32_t register_index)
{

	return (volatile MDR_NVIC_ICPR_UnionTypeDef *)
		(MDR_NVIC_BASE_ADDRESS + MDR_NVIC_ICPR_OFFSET + (register_index * 4UL));
}

static volatile MDR_NVIC_IABR_UnionTypeDef *MDR_NVIC_GetIABR(uint32_t register_index)
{

	return (volatile MDR_NVIC_IABR_UnionTypeDef *)
		(MDR_NVIC_BASE_ADDRESS + MDR_NVIC_IABR_OFFSET + (register_index * 4UL));
}

static volatile uint8_t *MDR_NVIC_GetPriorityField(uint32_t irq_number)
{

	return (volatile uint8_t *)(MDR_NVIC_BASE_ADDRESS + MDR_NVIC_IP_OFFSET + irq_number);
}

static void MDR_NVIC_ISER_WriteField(volatile MDR_NVIC_ISER_UnionTypeDef *reg, uint32_t bit_index, uint32_t value)
{

	switch (bit_index)
	{
		case 0U:  reg->Bits.SETENA0  = value; break;
		case 1U:  reg->Bits.SETENA1  = value; break;
		case 2U:  reg->Bits.SETENA2  = value; break;
		case 3U:  reg->Bits.SETENA3  = value; break;
		case 4U:  reg->Bits.SETENA4  = value; break;
		case 5U:  reg->Bits.SETENA5  = value; break;
		case 6U:  reg->Bits.SETENA6  = value; break;
		case 7U:  reg->Bits.SETENA7  = value; break;
		case 8U:  reg->Bits.SETENA8  = value; break;
		case 9U:  reg->Bits.SETENA9  = value; break;
		case 10U: reg->Bits.SETENA10 = value; break;
		case 11U: reg->Bits.SETENA11 = value; break;
		case 12U: reg->Bits.SETENA12 = value; break;
		case 13U: reg->Bits.SETENA13 = value; break;
		case 14U: reg->Bits.SETENA14 = value; break;
		case 15U: reg->Bits.SETENA15 = value; break;
		case 16U: reg->Bits.SETENA16 = value; break;
		case 17U: reg->Bits.SETENA17 = value; break;
		case 18U: reg->Bits.SETENA18 = value; break;
		case 19U: reg->Bits.SETENA19 = value; break;
		case 20U: reg->Bits.SETENA20 = value; break;
		case 21U: reg->Bits.SETENA21 = value; break;
		case 22U: reg->Bits.SETENA22 = value; break;
		case 23U: reg->Bits.SETENA23 = value; break;
		case 24U: reg->Bits.SETENA24 = value; break;
		case 25U: reg->Bits.SETENA25 = value; break;
		case 26U: reg->Bits.SETENA26 = value; break;
		case 27U: reg->Bits.SETENA27 = value; break;
		case 28U: reg->Bits.SETENA28 = value; break;
		case 29U: reg->Bits.SETENA29 = value; break;
		case 30U: reg->Bits.SETENA30 = value; break;
		case 31U: reg->Bits.SETENA31 = value; break;
		default: break;
	}
}

static void MDR_NVIC_ICER_WriteField(volatile MDR_NVIC_ICER_UnionTypeDef *reg, uint32_t bit_index, uint32_t value)
{

	switch (bit_index)
	{
		case 0U:  reg->Bits.CLRENA0  = value; break;
		case 1U:  reg->Bits.CLRENA1  = value; break;
		case 2U:  reg->Bits.CLRENA2  = value; break;
		case 3U:  reg->Bits.CLRENA3  = value; break;
		case 4U:  reg->Bits.CLRENA4  = value; break;
		case 5U:  reg->Bits.CLRENA5  = value; break;
		case 6U:  reg->Bits.CLRENA6  = value; break;
		case 7U:  reg->Bits.CLRENA7  = value; break;
		case 8U:  reg->Bits.CLRENA8  = value; break;
		case 9U:  reg->Bits.CLRENA9  = value; break;
		case 10U: reg->Bits.CLRENA10 = value; break;
		case 11U: reg->Bits.CLRENA11 = value; break;
		case 12U: reg->Bits.CLRENA12 = value; break;
		case 13U: reg->Bits.CLRENA13 = value; break;
		case 14U: reg->Bits.CLRENA14 = value; break;
		case 15U: reg->Bits.CLRENA15 = value; break;
		case 16U: reg->Bits.CLRENA16 = value; break;
		case 17U: reg->Bits.CLRENA17 = value; break;
		case 18U: reg->Bits.CLRENA18 = value; break;
		case 19U: reg->Bits.CLRENA19 = value; break;
		case 20U: reg->Bits.CLRENA20 = value; break;
		case 21U: reg->Bits.CLRENA21 = value; break;
		case 22U: reg->Bits.CLRENA22 = value; break;
		case 23U: reg->Bits.CLRENA23 = value; break;
		case 24U: reg->Bits.CLRENA24 = value; break;
		case 25U: reg->Bits.CLRENA25 = value; break;
		case 26U: reg->Bits.CLRENA26 = value; break;
		case 27U: reg->Bits.CLRENA27 = value; break;
		case 28U: reg->Bits.CLRENA28 = value; break;
		case 29U: reg->Bits.CLRENA29 = value; break;
		case 30U: reg->Bits.CLRENA30 = value; break;
		case 31U: reg->Bits.CLRENA31 = value; break;
		default: break;
	}
}

static void MDR_NVIC_ISPR_WriteField(volatile MDR_NVIC_ISPR_UnionTypeDef *reg, uint32_t bit_index, uint32_t value)
{

	switch (bit_index)
	{
		case 0U:  reg->Bits.SETPEND0  = value; break;
		case 1U:  reg->Bits.SETPEND1  = value; break;
		case 2U:  reg->Bits.SETPEND2  = value; break;
		case 3U:  reg->Bits.SETPEND3  = value; break;
		case 4U:  reg->Bits.SETPEND4  = value; break;
		case 5U:  reg->Bits.SETPEND5  = value; break;
		case 6U:  reg->Bits.SETPEND6  = value; break;
		case 7U:  reg->Bits.SETPEND7  = value; break;
		case 8U:  reg->Bits.SETPEND8  = value; break;
		case 9U:  reg->Bits.SETPEND9  = value; break;
		case 10U: reg->Bits.SETPEND10 = value; break;
		case 11U: reg->Bits.SETPEND11 = value; break;
		case 12U: reg->Bits.SETPEND12 = value; break;
		case 13U: reg->Bits.SETPEND13 = value; break;
		case 14U: reg->Bits.SETPEND14 = value; break;
		case 15U: reg->Bits.SETPEND15 = value; break;
		case 16U: reg->Bits.SETPEND16 = value; break;
		case 17U: reg->Bits.SETPEND17 = value; break;
		case 18U: reg->Bits.SETPEND18 = value; break;
		case 19U: reg->Bits.SETPEND19 = value; break;
		case 20U: reg->Bits.SETPEND20 = value; break;
		case 21U: reg->Bits.SETPEND21 = value; break;
		case 22U: reg->Bits.SETPEND22 = value; break;
		case 23U: reg->Bits.SETPEND23 = value; break;
		case 24U: reg->Bits.SETPEND24 = value; break;
		case 25U: reg->Bits.SETPEND25 = value; break;
		case 26U: reg->Bits.SETPEND26 = value; break;
		case 27U: reg->Bits.SETPEND27 = value; break;
		case 28U: reg->Bits.SETPEND28 = value; break;
		case 29U: reg->Bits.SETPEND29 = value; break;
		case 30U: reg->Bits.SETPEND30 = value; break;
		case 31U: reg->Bits.SETPEND31 = value; break;
		default: break;
	}
}

static void MDR_NVIC_ICPR_WriteField(volatile MDR_NVIC_ICPR_UnionTypeDef *reg, uint32_t bit_index, uint32_t value)
{

	switch (bit_index)
	{
		case 0U:  reg->Bits.CLRPEND0  = value; break;
		case 1U:  reg->Bits.CLRPEND1  = value; break;
		case 2U:  reg->Bits.CLRPEND2  = value; break;
		case 3U:  reg->Bits.CLRPEND3  = value; break;
		case 4U:  reg->Bits.CLRPEND4  = value; break;
		case 5U:  reg->Bits.CLRPEND5  = value; break;
		case 6U:  reg->Bits.CLRPEND6  = value; break;
		case 7U:  reg->Bits.CLRPEND7  = value; break;
		case 8U:  reg->Bits.CLRPEND8  = value; break;
		case 9U:  reg->Bits.CLRPEND9  = value; break;
		case 10U: reg->Bits.CLRPEND10 = value; break;
		case 11U: reg->Bits.CLRPEND11 = value; break;
		case 12U: reg->Bits.CLRPEND12 = value; break;
		case 13U: reg->Bits.CLRPEND13 = value; break;
		case 14U: reg->Bits.CLRPEND14 = value; break;
		case 15U: reg->Bits.CLRPEND15 = value; break;
		case 16U: reg->Bits.CLRPEND16 = value; break;
		case 17U: reg->Bits.CLRPEND17 = value; break;
		case 18U: reg->Bits.CLRPEND18 = value; break;
		case 19U: reg->Bits.CLRPEND19 = value; break;
		case 20U: reg->Bits.CLRPEND20 = value; break;
		case 21U: reg->Bits.CLRPEND21 = value; break;
		case 22U: reg->Bits.CLRPEND22 = value; break;
		case 23U: reg->Bits.CLRPEND23 = value; break;
		case 24U: reg->Bits.CLRPEND24 = value; break;
		case 25U: reg->Bits.CLRPEND25 = value; break;
		case 26U: reg->Bits.CLRPEND26 = value; break;
		case 27U: reg->Bits.CLRPEND27 = value; break;
		case 28U: reg->Bits.CLRPEND28 = value; break;
		case 29U: reg->Bits.CLRPEND29 = value; break;
		case 30U: reg->Bits.CLRPEND30 = value; break;
		case 31U: reg->Bits.CLRPEND31 = value; break;
		default: break;
	}
}

static uint32_t MDR_NVIC_ISER_ReadField(volatile MDR_NVIC_ISER_UnionTypeDef *reg, uint32_t bit_index)
{

	return (reg->Register >> bit_index) & 0x01UL;
}

static uint32_t MDR_NVIC_ISPR_ReadField(volatile MDR_NVIC_ISPR_UnionTypeDef *reg, uint32_t bit_index)
{

	return (reg->Register >> bit_index) & 0x01UL;
}

static uint32_t MDR_NVIC_IABR_ReadField(volatile MDR_NVIC_IABR_UnionTypeDef *reg, uint32_t bit_index)
{

	return (reg->Register >> bit_index) & 0x01UL;
}

/* Exported functions --------------------------------------------------------*/

// -----------------------------------------------------------------------------
// Interrupt enable
// -----------------------------------------------------------------------------
MDR_NVIC_StatusTypeDef MDR_NVIC_EnableIRQ(IRQn_Type irq)
{

	uint32_t irq_number;
	uint32_t register_index;
	uint32_t bit_index;

	if (IS_MDR_NVIC_EXTERNAL_IRQ(irq) == 0UL)
	{
		return MDR_NVIC_STATUS_INVALID_ARGUMENT;
	}

	irq_number = (uint32_t)irq;
	register_index = irq_number / MDR_NVIC_REGISTER_FIELD_COUNT;
	bit_index = irq_number % MDR_NVIC_REGISTER_FIELD_COUNT;

	MDR_NVIC_ISER_WriteField(
		MDR_NVIC_GetISER(register_index),
		bit_index,
		NVIC_SETENA_ENABLE_VAL);

	return MDR_NVIC_STATUS_OK;
}

MDR_NVIC_StatusTypeDef MDR_NVIC_DisableIRQ(IRQn_Type irq)
{

	uint32_t irq_number;
	uint32_t register_index;
	uint32_t bit_index;

	if (IS_MDR_NVIC_EXTERNAL_IRQ(irq) == 0UL)
	{
		return MDR_NVIC_STATUS_INVALID_ARGUMENT;
	}

	irq_number = (uint32_t)irq;
	register_index = irq_number / MDR_NVIC_REGISTER_FIELD_COUNT;
	bit_index = irq_number % MDR_NVIC_REGISTER_FIELD_COUNT;

	MDR_NVIC_ICER_WriteField(
		MDR_NVIC_GetICER(register_index),
		bit_index,
		NVIC_CLRENA_DISABLE_VAL);

	return MDR_NVIC_STATUS_OK;
}

uint32_t MDR_NVIC_IsIRQEnabled(IRQn_Type irq)
{

	uint32_t irq_number;
	uint32_t register_index;
	uint32_t bit_index;

	if (IS_MDR_NVIC_EXTERNAL_IRQ(irq) == 0UL)
	{
		return 0UL;
	}

	irq_number = (uint32_t)irq;
	register_index = irq_number / MDR_NVIC_REGISTER_FIELD_COUNT;
	bit_index = irq_number % MDR_NVIC_REGISTER_FIELD_COUNT;

	return MDR_NVIC_ISER_ReadField(MDR_NVIC_GetISER(register_index), bit_index);
}

// -----------------------------------------------------------------------------
// Interrupt pending
// -----------------------------------------------------------------------------
MDR_NVIC_StatusTypeDef MDR_NVIC_SetPendingIRQ(IRQn_Type irq)
{

	uint32_t irq_number;
	uint32_t register_index;
	uint32_t bit_index;

	if (IS_MDR_NVIC_EXTERNAL_IRQ(irq) == 0UL)
	{
		return MDR_NVIC_STATUS_INVALID_ARGUMENT;
	}

	irq_number = (uint32_t)irq;
	register_index = irq_number / MDR_NVIC_REGISTER_FIELD_COUNT;
	bit_index = irq_number % MDR_NVIC_REGISTER_FIELD_COUNT;

	MDR_NVIC_ISPR_WriteField(
		MDR_NVIC_GetISPR(register_index),
		bit_index,
		NVIC_SETPEND_SET_VAL);

	return MDR_NVIC_STATUS_OK;
}

MDR_NVIC_StatusTypeDef MDR_NVIC_ClearPendingIRQ(IRQn_Type irq)
{

	uint32_t irq_number;
	uint32_t register_index;
	uint32_t bit_index;

	if (IS_MDR_NVIC_EXTERNAL_IRQ(irq) == 0UL)
	{
		return MDR_NVIC_STATUS_INVALID_ARGUMENT;
	}

	irq_number = (uint32_t)irq;
	register_index = irq_number / MDR_NVIC_REGISTER_FIELD_COUNT;
	bit_index = irq_number % MDR_NVIC_REGISTER_FIELD_COUNT;

	MDR_NVIC_ICPR_WriteField(
		MDR_NVIC_GetICPR(register_index),
		bit_index,
		NVIC_CLRPEND_CLEAR_VAL);

	return MDR_NVIC_STATUS_OK;
}

uint32_t MDR_NVIC_IsIRQPending(IRQn_Type irq)
{

	uint32_t irq_number;
	uint32_t register_index;
	uint32_t bit_index;

	if (IS_MDR_NVIC_EXTERNAL_IRQ(irq) == 0UL)
	{
		return 0UL;
	}

	irq_number = (uint32_t)irq;
	register_index = irq_number / MDR_NVIC_REGISTER_FIELD_COUNT;
	bit_index = irq_number % MDR_NVIC_REGISTER_FIELD_COUNT;

	return MDR_NVIC_ISPR_ReadField(MDR_NVIC_GetISPR(register_index), bit_index);
}

// -----------------------------------------------------------------------------
// Interrupt active
// -----------------------------------------------------------------------------
uint32_t MDR_NVIC_IsIRQActive(IRQn_Type irq)
{

	uint32_t irq_number;
	uint32_t register_index;
	uint32_t bit_index;

	if (IS_MDR_NVIC_EXTERNAL_IRQ(irq) == 0UL)
	{
		return 0UL;
	}

	irq_number = (uint32_t)irq;
	register_index = irq_number / MDR_NVIC_REGISTER_FIELD_COUNT;
	bit_index = irq_number % MDR_NVIC_REGISTER_FIELD_COUNT;

	return MDR_NVIC_IABR_ReadField(MDR_NVIC_GetIABR(register_index), bit_index);
}

// -----------------------------------------------------------------------------
// Interrupt priority
// -----------------------------------------------------------------------------
MDR_NVIC_StatusTypeDef MDR_NVIC_SetPriority(IRQn_Type irq, uint32_t priority)
{

	volatile uint8_t *priority_field;

	if (IS_MDR_NVIC_EXTERNAL_IRQ(irq) == 0UL)
	{
		return MDR_NVIC_STATUS_INVALID_ARGUMENT;
	}

	if (IS_MDR_NVIC_PRIORITY(priority) == 0UL)
	{
		return MDR_NVIC_STATUS_INVALID_ARGUMENT;
	}

	priority_field = MDR_NVIC_GetPriorityField((uint32_t)irq);
	*priority_field = (uint8_t)(priority << MDR_NVIC_PRIORITY_SHIFT);

	return MDR_NVIC_STATUS_OK;
}

uint32_t MDR_NVIC_GetPriority(IRQn_Type irq)
{

	volatile uint8_t *priority_field;

	if (IS_MDR_NVIC_EXTERNAL_IRQ(irq) == 0UL)
	{
		return 0UL;
	}

	priority_field = MDR_NVIC_GetPriorityField((uint32_t)irq);

	return ((uint32_t)(*priority_field)) >> MDR_NVIC_PRIORITY_SHIFT;
}