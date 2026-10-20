/** ****************************************************************************
 * @file    MILUINO_MDR_NVIC.h
 * @brief   NVIC driver for Cortex-M3 in Milandr K1986BE92/94
 * @author  ...
 * @date    September 2026
 *
 * @details Provides low-level control of external interrupt enable, pending,
 *          active state and priority through the Cortex-M3 NVIC.
 * ************************************************************************** */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef MILUINO_MDR_NVIC_H
#define MILUINO_MDR_NVIC_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "MDR32F9Q2I.h"
#include "core_cm3.h"
#include <stdint.h>

/* Exported types ------------------------------------------------------------*/
typedef enum
{
	MDR_NVIC_STATUS_OK = 0,
	MDR_NVIC_STATUS_INVALID_ARGUMENT
} MDR_NVIC_StatusTypeDef;

/* Exported constants --------------------------------------------------------*/

/* ISER register -------------------------------------------------------------*/
#define MDR_NVIC_ISER_SETENA_Pos         0U

#define MDR_NVIC_ISER_SETENA_Msk         ( 0xFFFFFFFFUL << MDR_NVIC_ISER_SETENA_Pos )

#define MDR_NVIC_ISER_SETENA_DISABLE     ( 0x00UL << MDR_NVIC_ISER_SETENA_Pos )
#define MDR_NVIC_ISER_SETENA_ENABLE      ( 0x01UL << MDR_NVIC_ISER_SETENA_Pos )

/* ICER register -------------------------------------------------------------*/
#define MDR_NVIC_ICER_CLRENA_Pos         0U

#define MDR_NVIC_ICER_CLRENA_Msk         ( 0xFFFFFFFFUL << MDR_NVIC_ICER_CLRENA_Pos )

#define MDR_NVIC_ICER_CLRENA_NO_EFFECT   ( 0x00UL << MDR_NVIC_ICER_CLRENA_Pos )
#define MDR_NVIC_ICER_CLRENA_DISABLE     ( 0x01UL << MDR_NVIC_ICER_CLRENA_Pos )

/* ISPR register -------------------------------------------------------------*/
#define MDR_NVIC_ISPR_SETPEND_Pos        0U

#define MDR_NVIC_ISPR_SETPEND_Msk        ( 0xFFFFFFFFUL << MDR_NVIC_ISPR_SETPEND_Pos )

#define MDR_NVIC_ISPR_SETPEND_NO_EFFECT  ( 0x00UL << MDR_NVIC_ISPR_SETPEND_Pos )
#define MDR_NVIC_ISPR_SETPEND_SET        ( 0x01UL << MDR_NVIC_ISPR_SETPEND_Pos )

/* ICPR register -------------------------------------------------------------*/
#define MDR_NVIC_ICPR_CLRPEND_Pos        0U

#define MDR_NVIC_ICPR_CLRPEND_Msk        ( 0xFFFFFFFFUL << MDR_NVIC_ICPR_CLRPEND_Pos )

#define MDR_NVIC_ICPR_CLRPEND_NO_EFFECT  ( 0x00UL << MDR_NVIC_ICPR_CLRPEND_Pos )
#define MDR_NVIC_ICPR_CLRPEND_CLEAR      ( 0x01UL << MDR_NVIC_ICPR_CLRPEND_Pos )

/* IABR register -------------------------------------------------------------*/
#define MDR_NVIC_IABR_ACTIVE_Pos         0U

#define MDR_NVIC_IABR_ACTIVE_Msk         ( 0xFFFFFFFFUL << MDR_NVIC_IABR_ACTIVE_Pos )

#define MDR_NVIC_IABR_ACTIVE_INACTIVE    ( 0x00UL << MDR_NVIC_IABR_ACTIVE_Pos )
#define MDR_NVIC_IABR_ACTIVE_ACTIVE      ( 0x01UL << MDR_NVIC_IABR_ACTIVE_Pos )

/* IP register ---------------------------------------------------------------*/
#define MDR_NVIC_IP_PRIORITY_Pos          0U

#define MDR_NVIC_IP_PRIORITY_Msk          0xFFUL

/* Exported macro ------------------------------------------------------------*/
#define IS_MDR_NVIC_EXTERNAL_IRQ(IRQ)     ((int32_t)(IRQ) >= 0)

#define IS_MDR_NVIC_PRIORITY(PRIORITY) \
	((uint32_t)(PRIORITY) < (1UL << __NVIC_PRIO_BITS))

/* Exported functions --------------------------------------------------------*/

/* Interrupt enable ----------------------------------------------------------*/
MDR_NVIC_StatusTypeDef MDR_NVIC_EnableIRQ(IRQn_Type irq);
MDR_NVIC_StatusTypeDef MDR_NVIC_DisableIRQ(IRQn_Type irq);
uint32_t MDR_NVIC_IsIRQEnabled(IRQn_Type irq);

/* Interrupt pending ---------------------------------------------------------*/
MDR_NVIC_StatusTypeDef MDR_NVIC_SetPendingIRQ(IRQn_Type irq);
MDR_NVIC_StatusTypeDef MDR_NVIC_ClearPendingIRQ(IRQn_Type irq);
uint32_t MDR_NVIC_IsIRQPending(IRQn_Type irq);

/* Interrupt active ----------------------------------------------------------*/
uint32_t MDR_NVIC_IsIRQActive(IRQn_Type irq);

/* Interrupt priority --------------------------------------------------------*/
MDR_NVIC_StatusTypeDef MDR_NVIC_SetPriority(IRQn_Type irq, uint32_t priority);
uint32_t MDR_NVIC_GetPriority(IRQn_Type irq);

#ifdef __cplusplus
}
#endif

#endif /* MILUINO_MDR_NVIC_H */
