/** ****************************************************************************
 * @file    MILUINO_MDR_SYSTICK.c
 * @brief   SysTick driver implementation for Cortex-M3 in Milandr K1986BE92/94
 * @author  Max @maxdev
 * @author  Roma @r3m4k
 *
 * @date    September 2026
 *
 * @details Implements SysTick control through a private union register map.
 * ************************************************************************** */

/* Includes ------------------------------------------------------------------*/
#include "MILUINO_MDR_SYSTICK.h"

/* Private typedef -----------------------------------------------------------*/

/* CTRL register */
#define SYSTICK_ENABLE_DISABLE_VAL       0UL
#define SYSTICK_ENABLE_ENABLE_VAL        1UL

#define SYSTICK_TICKINT_DISABLE_VAL      0UL
#define SYSTICK_TICKINT_ENABLE_VAL       1UL

#define SYSTICK_CLKSOURCE_HCLK_DIV8_VAL  0UL
#define SYSTICK_CLKSOURCE_HCLK_VAL       1UL

#define SYSTICK_COUNTFLAG_RESET_VAL      0UL
#define SYSTICK_COUNTFLAG_SET_VAL        1UL

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t ENABLE    : 1;
		uint32_t TICKINT   : 1;
		uint32_t CLKSOURCE : 1;
		uint32_t Reserved0 : 13;
		uint32_t COUNTFLAG : 1;
		uint32_t Reserved1 : 15;
	} Bits;
} MDR_SYSTICK_CTRL_UnionTypeDef;

/* LOAD register */
#define SYSTICK_RELOAD_ZERO_VAL          0UL

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t RELOAD    : 24;
		uint32_t Reserved0 : 8;
	} Bits;
} MDR_SYSTICK_LOAD_UnionTypeDef;

/* VAL register */
#define SYSTICK_CURRENT_CLEAR_VAL        0UL

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t CURRENT   : 24;
		uint32_t Reserved0 : 8;
	} Bits;
} MDR_SYSTICK_VAL_UnionTypeDef;

/* CALIB register */
#define SYSTICK_SKEW_EXACT_VAL           0UL
#define SYSTICK_SKEW_INEXACT_VAL         1UL

#define SYSTICK_NOREF_AVAILABLE_VAL      0UL
#define SYSTICK_NOREF_UNAVAILABLE_VAL    1UL

typedef union
{
	uint32_t Register; /* 32 bits */
	struct
	{
		uint32_t TENMS     : 24;
		uint32_t Reserved0 : 6;
		uint32_t SKEW      : 1;
		uint32_t NOREF     : 1;
	} Bits;
} MDR_SYSTICK_CALIB_UnionTypeDef;

typedef struct
{
	volatile MDR_SYSTICK_CTRL_UnionTypeDef  CTRL;
	volatile MDR_SYSTICK_LOAD_UnionTypeDef  LOAD;
	volatile MDR_SYSTICK_VAL_UnionTypeDef   VAL;
	volatile MDR_SYSTICK_CALIB_UnionTypeDef CALIB;
} MDR_SYSTICK_RegisterMapTypeDef;

/* Private define ------------------------------------------------------------*/
#define MDR_SYSTICK_BASE_ADDRESS         0xE000E010UL
#define MDR_SYSTICK_MAX_TICKS            0x01000000UL
#define MDR_SYSTICK_US_PER_SECOND        1000000UL

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/
static volatile MDR_SYSTICK_RegisterMapTypeDef *const SYSTICK_UNION =
	(volatile MDR_SYSTICK_RegisterMapTypeDef *)MDR_SYSTICK_BASE_ADDRESS;

/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/

// -----------------------------------------------------------------------------
// SysTick control
// -----------------------------------------------------------------------------
void MDR_SYSTICK_Enable(void)
{

	SYSTICK_UNION->CTRL.Bits.ENABLE = SYSTICK_ENABLE_ENABLE_VAL;
}

void MDR_SYSTICK_Disable(void)
{

	SYSTICK_UNION->CTRL.Bits.ENABLE = SYSTICK_ENABLE_DISABLE_VAL;
}

void MDR_SYSTICK_SetClockSource(uint32_t clock_source)
{

	if (clock_source == MDR_SYSTICK_CTRL_CLKSOURCE_HCLK)
	{
		SYSTICK_UNION->CTRL.Bits.CLKSOURCE = SYSTICK_CLKSOURCE_HCLK_VAL;
	}
	else
	{
		SYSTICK_UNION->CTRL.Bits.CLKSOURCE = SYSTICK_CLKSOURCE_HCLK_DIV8_VAL;
	}
}

void MDR_SYSTICK_InterruptEnable(void)
{

	SYSTICK_UNION->CTRL.Bits.TICKINT = SYSTICK_TICKINT_ENABLE_VAL;
}

void MDR_SYSTICK_InterruptDisable(void)
{

	SYSTICK_UNION->CTRL.Bits.TICKINT = SYSTICK_TICKINT_DISABLE_VAL;
}

// -----------------------------------------------------------------------------
// SysTick counter
// -----------------------------------------------------------------------------
void MDR_SYSTICK_SetReload(uint32_t reload)
{

	if (IS_MDR_SYSTICK_RELOAD(reload) != 0UL)
	{
		SYSTICK_UNION->LOAD.Bits.RELOAD = reload;
	}
}

uint32_t MDR_SYSTICK_GetReload(void)
{

	return SYSTICK_UNION->LOAD.Bits.RELOAD;
}

void MDR_SYSTICK_ClearCurrent(void)
{

	SYSTICK_UNION->VAL.Bits.CURRENT = SYSTICK_CURRENT_CLEAR_VAL;
}

uint32_t MDR_SYSTICK_GetCurrent(void)
{

	return SYSTICK_UNION->VAL.Bits.CURRENT;
}

uint32_t MDR_SYSTICK_GetCountFlag(void)
{

	if (SYSTICK_UNION->CTRL.Bits.COUNTFLAG == SYSTICK_COUNTFLAG_SET_VAL)
	{
		return 1UL;
	}

	return 0UL;
}

// -----------------------------------------------------------------------------
// SysTick calibration
// -----------------------------------------------------------------------------
uint32_t MDR_SYSTICK_GetTenMsCalibration(void)
{

	return SYSTICK_UNION->CALIB.Bits.TENMS;
}

uint32_t MDR_SYSTICK_IsCalibrationSkewed(void)
{

	if (SYSTICK_UNION->CALIB.Bits.SKEW == SYSTICK_SKEW_INEXACT_VAL)
	{
		return 1UL;
	}

	return 0UL;
}

uint32_t MDR_SYSTICK_IsReferenceUnavailable(void)
{

	if (SYSTICK_UNION->CALIB.Bits.NOREF == SYSTICK_NOREF_UNAVAILABLE_VAL)
	{
		return 1UL;
	}

	return 0UL;
}

// -----------------------------------------------------------------------------
// SysTick delay
// -----------------------------------------------------------------------------
void MDR_SYSTICK_DelayUs(uint32_t microseconds, uint32_t hclk_hz)
{

	uint64_t ticks;
	uint32_t current_ticks;

	ticks = ((uint64_t)hclk_hz * microseconds) / MDR_SYSTICK_US_PER_SECOND;

	if (ticks == 0UL)
	{
		return;
	}

	MDR_SYSTICK_SetClockSource(MDR_SYSTICK_CTRL_CLKSOURCE_HCLK);
	MDR_SYSTICK_InterruptDisable();

	while (ticks != 0UL)
	{
		if (ticks > MDR_SYSTICK_MAX_TICKS)
		{
			current_ticks = MDR_SYSTICK_MAX_TICKS;
		}
		else
		{
			current_ticks = (uint32_t)ticks;
		}

		MDR_SYSTICK_SetReload(current_ticks - 1UL);
		MDR_SYSTICK_ClearCurrent();
		MDR_SYSTICK_Enable();

		while (MDR_SYSTICK_GetCountFlag() == 0UL)
		{
		}

		MDR_SYSTICK_Disable();

		ticks -= current_ticks;
	}
}