/** ****************************************************************************
 * @file    MILUINO_MDR_SYSTICK.h
 * @brief   SysTick driver for Cortex-M3 in Milandr K1986BE92/94
 * @author  Max @maxdev
 * @author  Roma @r3m4k
 *
 * @date    September 2026
 *
 * @details Provides low-level SysTick register control and blocking
 *          microsecond delay helper.
 * ************************************************************************** */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef MILUINO_MDR_SYSTICK_H
#define MILUINO_MDR_SYSTICK_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "MDR32F9Q2I.h"
#include "core_cm3.h"
#include <stdint.h>

/* Exported types ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/

/* CTRL register -------------------------------------------------------------*/
#define MDR_SYSTICK_CTRL_ENABLE_Pos          0U
#define MDR_SYSTICK_CTRL_TICKINT_Pos         1U
#define MDR_SYSTICK_CTRL_CLKSOURCE_Pos       2U
#define MDR_SYSTICK_CTRL_COUNTFLAG_Pos       16U

#define MDR_SYSTICK_CTRL_ENABLE_Msk          ( 0x01UL << MDR_SYSTICK_CTRL_ENABLE_Pos    )
#define MDR_SYSTICK_CTRL_TICKINT_Msk         ( 0x01UL << MDR_SYSTICK_CTRL_TICKINT_Pos   )
#define MDR_SYSTICK_CTRL_CLKSOURCE_Msk       ( 0x01UL << MDR_SYSTICK_CTRL_CLKSOURCE_Pos )
#define MDR_SYSTICK_CTRL_COUNTFLAG_Msk       ( 0x01UL << MDR_SYSTICK_CTRL_COUNTFLAG_Pos )

#define MDR_SYSTICK_CTRL_ENABLE_DISABLE      ( 0x00UL << MDR_SYSTICK_CTRL_ENABLE_Pos    )
#define MDR_SYSTICK_CTRL_ENABLE_ENABLE       ( 0x01UL << MDR_SYSTICK_CTRL_ENABLE_Pos    )

#define MDR_SYSTICK_CTRL_TICKINT_DISABLE     ( 0x00UL << MDR_SYSTICK_CTRL_TICKINT_Pos   )
#define MDR_SYSTICK_CTRL_TICKINT_ENABLE      ( 0x01UL << MDR_SYSTICK_CTRL_TICKINT_Pos   )

#define MDR_SYSTICK_CTRL_CLKSOURCE_HCLK_DIV8 ( 0x00UL << MDR_SYSTICK_CTRL_CLKSOURCE_Pos )
#define MDR_SYSTICK_CTRL_CLKSOURCE_HCLK      ( 0x01UL << MDR_SYSTICK_CTRL_CLKSOURCE_Pos )

#define MDR_SYSTICK_CTRL_COUNTFLAG_RESET     ( 0x00UL << MDR_SYSTICK_CTRL_COUNTFLAG_Pos )
#define MDR_SYSTICK_CTRL_COUNTFLAG_SET       ( 0x01UL << MDR_SYSTICK_CTRL_COUNTFLAG_Pos )

/* LOAD register -------------------------------------------------------------*/
#define MDR_SYSTICK_LOAD_RELOAD_Pos          0U

#define MDR_SYSTICK_LOAD_RELOAD_Msk          ( 0x00FFFFFFUL << MDR_SYSTICK_LOAD_RELOAD_Pos )

#define MDR_SYSTICK_LOAD_RELOAD_VALUE(VALUE) \
	( ((uint32_t)(VALUE) << MDR_SYSTICK_LOAD_RELOAD_Pos) & MDR_SYSTICK_LOAD_RELOAD_Msk )

/* VAL register --------------------------------------------------------------*/
#define MDR_SYSTICK_VAL_CURRENT_Pos          0U

#define MDR_SYSTICK_VAL_CURRENT_Msk          ( 0x00FFFFFFUL << MDR_SYSTICK_VAL_CURRENT_Pos )

#define MDR_SYSTICK_VAL_CURRENT_VALUE(VALUE) \
	( ((uint32_t)(VALUE) << MDR_SYSTICK_VAL_CURRENT_Pos) & MDR_SYSTICK_VAL_CURRENT_Msk )

/* CALIB register ------------------------------------------------------------*/
#define MDR_SYSTICK_CALIB_TENMS_Pos           0U
#define MDR_SYSTICK_CALIB_SKEW_Pos            30U
#define MDR_SYSTICK_CALIB_NOREF_Pos           31U

#define MDR_SYSTICK_CALIB_TENMS_Msk           ( 0x00FFFFFFUL << MDR_SYSTICK_CALIB_TENMS_Pos )
#define MDR_SYSTICK_CALIB_SKEW_Msk            ( 0x01UL << MDR_SYSTICK_CALIB_SKEW_Pos         )
#define MDR_SYSTICK_CALIB_NOREF_Msk           ( 0x01UL << MDR_SYSTICK_CALIB_NOREF_Pos        )

#define MDR_SYSTICK_CALIB_SKEW_EXACT          ( 0x00UL << MDR_SYSTICK_CALIB_SKEW_Pos         )
#define MDR_SYSTICK_CALIB_SKEW_INEXACT        ( 0x01UL << MDR_SYSTICK_CALIB_SKEW_Pos         )

#define MDR_SYSTICK_CALIB_NOREF_AVAILABLE     ( 0x00UL << MDR_SYSTICK_CALIB_NOREF_Pos        )
#define MDR_SYSTICK_CALIB_NOREF_UNAVAILABLE   ( 0x01UL << MDR_SYSTICK_CALIB_NOREF_Pos        )

/* Exported macro ------------------------------------------------------------*/
#define IS_MDR_SYSTICK_CLOCK_SOURCE(VALUE) \
	(((VALUE) == MDR_SYSTICK_CTRL_CLKSOURCE_HCLK_DIV8) \
		|| ((VALUE) == MDR_SYSTICK_CTRL_CLKSOURCE_HCLK))

#define IS_MDR_SYSTICK_RELOAD(VALUE) \
	((VALUE) <= 0x00FFFFFFUL)

/* Exported functions --------------------------------------------------------*/

/* SysTick control -----------------------------------------------------------*/
void MDR_SYSTICK_Enable(void);
void MDR_SYSTICK_Disable(void);

void MDR_SYSTICK_SetClockSource(uint32_t clock_source);

void MDR_SYSTICK_InterruptEnable(void);
void MDR_SYSTICK_InterruptDisable(void);

/* SysTick counter -----------------------------------------------------------*/
void MDR_SYSTICK_SetReload(uint32_t reload);
uint32_t MDR_SYSTICK_GetReload(void);

void MDR_SYSTICK_ClearCurrent(void);
uint32_t MDR_SYSTICK_GetCurrent(void);

uint32_t MDR_SYSTICK_GetCountFlag(void);

/* SysTick calibration -------------------------------------------------------*/
uint32_t MDR_SYSTICK_GetTenMsCalibration(void);
uint32_t MDR_SYSTICK_IsCalibrationSkewed(void);
uint32_t MDR_SYSTICK_IsReferenceUnavailable(void);

/* SysTick delay -------------------------------------------------------------*/
void MDR_SYSTICK_DelayUs(uint32_t microseconds, uint32_t hclk_hz);

#ifdef __cplusplus
}
#endif

#endif /* MILUINO_MDR_SYSTICK_H */