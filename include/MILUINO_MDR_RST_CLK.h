/** ****************************************************************************
 * @file    MILUINO_MDR_RST_CLK.h
 * @brief   Clock control driver for Milandr K1986BE92/94 microcontrollers
 * @author  Miluino Team
 * @date    September 2026
 *
 * @details Provides low-level access to MDR_RST_CLK clock-tree fields and
 *          high-level configuration helpers for CPU, USB, ADC and peripheral
 *          clocks. HSI and LSI control is implemented through MDR_BKP REG_0F,
 *          as required by the device specification.
 *
 * @warning When increasing CPU frequency, configure Flash wait states and the
 *          DUCC regulator mode before switching HCLK. These settings belong to
 *          the EEPROM and BKP drivers and are intentionally not changed here.
 * @warning The current Milandr specification/errata shall be checked together
 *          with this driver before use in production firmware.
 * *************************************************************************** */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef MILUINO_MDR_RST_CLK_H
#define MILUINO_MDR_RST_CLK_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>

#include "MDR32F9Q2I.h"

/* Exported types ------------------------------------------------------------*/

/**
 * @brief RST_CLK operation status.
 */
typedef enum
{
	MDR_RST_CLK_STATUS_OK = 0,
	MDR_RST_CLK_STATUS_INVALID_ARGUMENT,
	MDR_RST_CLK_STATUS_HSI_TIMEOUT,
	MDR_RST_CLK_STATUS_LSI_TIMEOUT,
	MDR_RST_CLK_STATUS_HSE_TIMEOUT,
	MDR_RST_CLK_STATUS_PLL_CPU_TIMEOUT,
	MDR_RST_CLK_STATUS_PLL_USB_TIMEOUT
} MDR_RST_CLK_StatusTypeDef;

/**
 * @brief CPU clock-tree initialization parameters.
 */
typedef struct
{
	uint32_t HSE_Mode;       /*!< HSE mode from @ref MDR_RST_CLK_HSE_Mode_Values. */
	uint32_t CPU_C1_Source;  /*!< CPU_C1 source from @ref MDR_RST_CLK_CPU_C1_Values. */
	uint32_t PLL_CPU_Mul;    /*!< CPU PLL multiplier from @ref MDR_RST_CLK_PLL_CPU_Mul_Values. */
	uint32_t CPU_C2_Source;  /*!< CPU_C2 source from @ref MDR_RST_CLK_CPU_C2_Values. */
	uint32_t CPU_C3_Div;     /*!< CPU_C3 divider from @ref MDR_RST_CLK_CPU_C3_Div_Values. */
	uint32_t HCLK_Source;    /*!< HCLK source from @ref MDR_RST_CLK_HCLK_Values. */
	uint32_t ReadyTimeout;   /*!< Maximum polling iterations while waiting for ready flags. */
} MDR_RST_CLK_CPU_InitTypeDef;

/**
 * @brief USB clock-tree initialization parameters.
 */
typedef struct
{
	uint32_t HSE_Mode;       /*!< HSE mode from @ref MDR_RST_CLK_HSE_Mode_Values. */
	uint32_t USB_C1_Source;  /*!< USB_C1 source from @ref MDR_RST_CLK_USB_C1_Values. */
	uint32_t PLL_USB_Mul;    /*!< USB PLL multiplier from @ref MDR_RST_CLK_PLL_USB_Mul_Values. */
	uint32_t USB_C2_Source;  /*!< USB_C2 source from @ref MDR_RST_CLK_USB_C2_Values. */
	uint32_t USB_C3_Div;     /*!< USB_C3 divider from @ref MDR_RST_CLK_USB_C3_Div_Values. */
	uint32_t ReadyTimeout;   /*!< Maximum polling iterations while waiting for ready flags. */
} MDR_RST_CLK_USB_InitTypeDef;

/**
 * @brief ADC clock-tree initialization parameters.
 */
typedef struct
{
	uint32_t ADC_C1_Source;  /*!< ADC_C1 source from @ref MDR_RST_CLK_ADC_C1_Values. */
	uint32_t ADC_C2_Source;  /*!< ADC_C2 source from @ref MDR_RST_CLK_ADC_C2_Values. */
	uint32_t ADC_C3_Div;     /*!< ADC_C3 divider from @ref MDR_RST_CLK_ADC_C3_Div_Values. */
} MDR_RST_CLK_ADC_InitTypeDef;

/**
 * @brief UART clock selector.
 */
typedef enum
{
	MDR_RST_CLK_UART_1 = 0,
	MDR_RST_CLK_UART_2
} MDR_RST_CLK_UART_TypeDef;

/**
 * @brief General-purpose timer clock selector.
 */
typedef enum
{
	MDR_RST_CLK_TIMER_1 = 0,
	MDR_RST_CLK_TIMER_2,
	MDR_RST_CLK_TIMER_3
} MDR_RST_CLK_TIMER_TypeDef;

/**
 * @brief CAN clock selector.
 */
typedef enum
{
	MDR_RST_CLK_CAN_1 = 0,
	MDR_RST_CLK_CAN_2
} MDR_RST_CLK_CAN_TypeDef;

/**
 * @brief SSP clock selector.
 */
typedef enum
{
	MDR_RST_CLK_SSP_1 = 0,
	MDR_RST_CLK_SSP_2
} MDR_RST_CLK_SSP_TypeDef;

/* Exported constants --------------------------------------------------------*/

/** @defgroup MDR_RST_CLK_Clock_Status_Bits Clock status bits
 * @{
 */
#define MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_Pos      0U
#define MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_Pos      1U
#define MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_Pos          2U

#define MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_Msk      (1UL << MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_Pos)
#define MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_Msk      (1UL << MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_Pos)
#define MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_Msk          (1UL << MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_Pos)
/** @} */

/** @defgroup MDR_RST_CLK_PLL_Control_Bits PLL control bits
 * @{
 */
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_Pos        0U
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_Pos       1U
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_Pos        2U
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_Pos       3U
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos       4U
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos       8U

#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_Msk        (1UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_Pos)
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_Msk       (1UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_Pos)
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_Msk        (1UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_Pos)
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_Msk       (1UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_Pos)
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Msk       (0x0FUL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos)
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Msk       (0x0FUL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos)
/** @} */

/** @defgroup MDR_RST_CLK_HSE_Mode_Values HSE mode values
 * @{
 */
#define MDR_RST_CLK_HSE_OSCILLATOR                    (0UL << 1U)  /*!< External crystal/resonator mode. */
#define MDR_RST_CLK_HSE_BYPASS                        (1UL << 1U)  /*!< External clock generator on OSC_IN. */
#define IS_MDR_RST_CLK_HSE_MODE(MODE)                 (((MODE) == MDR_RST_CLK_HSE_OSCILLATOR) || \
                                                        ((MODE) == MDR_RST_CLK_HSE_BYPASS))
/** @} */

#define MDR_RST_CLK_HS_CONTROL_HSE_ON_Msk             (1UL << 0U)
#define MDR_RST_CLK_HS_CONTROL_HSE_BYP_Msk            (1UL << 1U)

/** @defgroup MDR_RST_CLK_PLL_CPU_Mul_Values CPU PLL multiplier values
 * @{
 */
#define MDR_RST_CLK_PLL_CPU_MUL_4                     (0x03UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos)
#define MDR_RST_CLK_PLL_CPU_MUL_5                     (0x04UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos)
#define MDR_RST_CLK_PLL_CPU_MUL_6                     (0x05UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos)
#define MDR_RST_CLK_PLL_CPU_MUL_7                     (0x06UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos)
#define MDR_RST_CLK_PLL_CPU_MUL_8                     (0x07UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos)
#define MDR_RST_CLK_PLL_CPU_MUL_9                     (0x08UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos)
#define MDR_RST_CLK_PLL_CPU_MUL_10                    (0x09UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos)
#define MDR_RST_CLK_PLL_CPU_MUL_11                    (0x0AUL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos)
#define MDR_RST_CLK_PLL_CPU_MUL_12                    (0x0BUL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos)
#define MDR_RST_CLK_PLL_CPU_MUL_13                    (0x0CUL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos)
#define MDR_RST_CLK_PLL_CPU_MUL_14                    (0x0DUL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos)
#define MDR_RST_CLK_PLL_CPU_MUL_15                    (0x0EUL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos)
#define MDR_RST_CLK_PLL_CPU_MUL_16                    (0x0FUL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos)
#define IS_MDR_RST_CLK_PLL_CPU_MUL(MUL)               (((MUL) >= MDR_RST_CLK_PLL_CPU_MUL_4) && \
                                                        ((MUL) <= MDR_RST_CLK_PLL_CPU_MUL_16))
/** @} */

/** @defgroup MDR_RST_CLK_PLL_USB_Mul_Values USB PLL multiplier values
 * @{
 */
#define MDR_RST_CLK_PLL_USB_MUL_4                     (0x03UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos)
#define MDR_RST_CLK_PLL_USB_MUL_5                     (0x04UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos)
#define MDR_RST_CLK_PLL_USB_MUL_6                     (0x05UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos)
#define MDR_RST_CLK_PLL_USB_MUL_7                     (0x06UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos)
#define MDR_RST_CLK_PLL_USB_MUL_8                     (0x07UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos)
#define MDR_RST_CLK_PLL_USB_MUL_9                     (0x08UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos)
#define MDR_RST_CLK_PLL_USB_MUL_10                    (0x09UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos)
#define MDR_RST_CLK_PLL_USB_MUL_11                    (0x0AUL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos)
#define MDR_RST_CLK_PLL_USB_MUL_12                    (0x0BUL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos)
#define MDR_RST_CLK_PLL_USB_MUL_13                    (0x0CUL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos)
#define MDR_RST_CLK_PLL_USB_MUL_14                    (0x0DUL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos)
#define MDR_RST_CLK_PLL_USB_MUL_15                    (0x0EUL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos)
#define MDR_RST_CLK_PLL_USB_MUL_16                    (0x0FUL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos)
#define IS_MDR_RST_CLK_PLL_USB_MUL(MUL)               ((((MUL) & ~MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Msk) == 0UL) && \
                                                        (((MUL) >> MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos) >= 3UL) && \
                                                        (((MUL) >> MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos) <= 15UL))
/** @} */

/** @defgroup MDR_RST_CLK_CPU_C1_Values CPU_C1 source values
 * @{
 */
#define MDR_RST_CLK_CPU_C1_HSI                        (0x00UL << 0U)
#define MDR_RST_CLK_CPU_C1_HSI_DIV_2                  (0x01UL << 0U)
#define MDR_RST_CLK_CPU_C1_HSE                        (0x02UL << 0U)
#define MDR_RST_CLK_CPU_C1_HSE_DIV_2                  (0x03UL << 0U)
#define MDR_RST_CLK_CPU_C1_Msk                        (0x03UL << 0U)
#define IS_MDR_RST_CLK_CPU_C1(SOURCE)                 (((SOURCE) & ~MDR_RST_CLK_CPU_C1_Msk) == 0UL)
/** @} */

/** @defgroup MDR_RST_CLK_CPU_C2_Values CPU_C2 source values
 * @{
 */
#define MDR_RST_CLK_CPU_C2_CPU_C1                     (0x00UL << 2U)
#define MDR_RST_CLK_CPU_C2_PLL_CPU                    (0x01UL << 2U)
#define MDR_RST_CLK_CPU_C2_Msk                        (0x01UL << 2U)
#define IS_MDR_RST_CLK_CPU_C2(SOURCE)                 (((SOURCE) == MDR_RST_CLK_CPU_C2_CPU_C1) || \
                                                        ((SOURCE) == MDR_RST_CLK_CPU_C2_PLL_CPU))
/** @} */

/** @defgroup MDR_RST_CLK_CPU_C3_Div_Values CPU_C3 divider values
 * @{
 */
#define MDR_RST_CLK_CPU_C3_DIV_1                      (0x00UL << 4U)
#define MDR_RST_CLK_CPU_C3_DIV_2                      (0x08UL << 4U)
#define MDR_RST_CLK_CPU_C3_DIV_4                      (0x09UL << 4U)
#define MDR_RST_CLK_CPU_C3_DIV_8                      (0x0AUL << 4U)
#define MDR_RST_CLK_CPU_C3_DIV_16                     (0x0BUL << 4U)
#define MDR_RST_CLK_CPU_C3_DIV_32                     (0x0CUL << 4U)
#define MDR_RST_CLK_CPU_C3_DIV_64                     (0x0DUL << 4U)
#define MDR_RST_CLK_CPU_C3_DIV_128                    (0x0EUL << 4U)
#define MDR_RST_CLK_CPU_C3_DIV_256                    (0x0FUL << 4U)
#define MDR_RST_CLK_CPU_C3_Msk                        (0x0FUL << 4U)
#define IS_MDR_RST_CLK_CPU_C3(DIV)                    ((((DIV) == MDR_RST_CLK_CPU_C3_DIV_1)) || \
                                                        (((DIV) >= MDR_RST_CLK_CPU_C3_DIV_2) && \
                                                         ((DIV) <= MDR_RST_CLK_CPU_C3_DIV_256)))
/** @} */

/** @defgroup MDR_RST_CLK_HCLK_Values HCLK source values
 * @{
 */
#define MDR_RST_CLK_HCLK_HSI                          (0x00UL << 8U)
#define MDR_RST_CLK_HCLK_CPU_C3                       (0x01UL << 8U)
#define MDR_RST_CLK_HCLK_LSE                          (0x02UL << 8U)
#define MDR_RST_CLK_HCLK_LSI                          (0x03UL << 8U)
#define MDR_RST_CLK_HCLK_Msk                          (0x03UL << 8U)
#define IS_MDR_RST_CLK_HCLK(SOURCE)                   ((((SOURCE) & ~MDR_RST_CLK_HCLK_Msk) == 0UL) && \
                                                        (((SOURCE) >> 8U) <= 3UL))
/** @} */

/** @defgroup MDR_RST_CLK_USB_C1_Values USB_C1 source values
 * @{
 */
#define MDR_RST_CLK_USB_C1_HSI                        (0x00UL << 0U)
#define MDR_RST_CLK_USB_C1_HSI_DIV_2                  (0x01UL << 0U)
#define MDR_RST_CLK_USB_C1_HSE                        (0x02UL << 0U)
#define MDR_RST_CLK_USB_C1_HSE_DIV_2                  (0x03UL << 0U)
#define MDR_RST_CLK_USB_C1_Msk                        (0x03UL << 0U)
#define IS_MDR_RST_CLK_USB_C1(SOURCE)                 (((SOURCE) & ~MDR_RST_CLK_USB_C1_Msk) == 0UL)
/** @} */

/** @defgroup MDR_RST_CLK_USB_C2_Values USB_C2 source values
 * @{
 */
#define MDR_RST_CLK_USB_C2_USB_C1                     (0x00UL << 2U)
#define MDR_RST_CLK_USB_C2_PLL_USB                    (0x01UL << 2U)
#define MDR_RST_CLK_USB_C2_Msk                        (0x01UL << 2U)
#define IS_MDR_RST_CLK_USB_C2(SOURCE)                 (((SOURCE) == MDR_RST_CLK_USB_C2_USB_C1) || \
                                                        ((SOURCE) == MDR_RST_CLK_USB_C2_PLL_USB))
/** @} */

/** @defgroup MDR_RST_CLK_USB_C3_Div_Values USB_C3 divider values
 * @{
 */
#define MDR_RST_CLK_USB_C3_DIV_1                      (0x00UL << 4U)
#define MDR_RST_CLK_USB_C3_DIV_2                      (0x01UL << 4U)
#define MDR_RST_CLK_USB_C3_Msk                        (0x01UL << 4U)
#define IS_MDR_RST_CLK_USB_C3(DIV)                    (((DIV) == MDR_RST_CLK_USB_C3_DIV_1) || \
                                                        ((DIV) == MDR_RST_CLK_USB_C3_DIV_2))
/** @} */

#define MDR_RST_CLK_USB_CLK_EN_Msk                    (1UL << 8U)

/** @defgroup MDR_RST_CLK_ADC_C1_Values ADC_C1 source values
 * @{
 */
#define MDR_RST_CLK_ADC_C1_CPU_C1                     (0x00UL << 0U)
#define MDR_RST_CLK_ADC_C1_USB_C1                     (0x01UL << 0U)
#define MDR_RST_CLK_ADC_C1_CPU_C2                     (0x02UL << 0U)
#define MDR_RST_CLK_ADC_C1_USB_C2                     (0x03UL << 0U)
#define MDR_RST_CLK_ADC_C1_Msk                        (0x03UL << 0U)
#define IS_MDR_RST_CLK_ADC_C1(SOURCE)                 (((SOURCE) & ~MDR_RST_CLK_ADC_C1_Msk) == 0UL)
/** @} */

/** @defgroup MDR_RST_CLK_ADC_C2_Values ADC_C2 source values
 * @{
 */
#define MDR_RST_CLK_ADC_C2_LSE                        (0x00UL << 4U)
#define MDR_RST_CLK_ADC_C2_LSI                        (0x01UL << 4U)
#define MDR_RST_CLK_ADC_C2_ADC_C1                     (0x02UL << 4U)
#define MDR_RST_CLK_ADC_C2_HSI_C1                     (0x03UL << 4U)
#define MDR_RST_CLK_ADC_C2_Msk                        (0x03UL << 4U)
#define IS_MDR_RST_CLK_ADC_C2(SOURCE)                 ((((SOURCE) & ~MDR_RST_CLK_ADC_C2_Msk) == 0UL) && \
                                                        (((SOURCE) >> 4U) <= 3UL))
/** @} */

/** @defgroup MDR_RST_CLK_ADC_C3_Div_Values ADC_C3 divider values
 * @{
 */
#define MDR_RST_CLK_ADC_C3_DIV_1                      (0x00UL << 8U)
#define MDR_RST_CLK_ADC_C3_DIV_2                      (0x08UL << 8U)
#define MDR_RST_CLK_ADC_C3_DIV_4                      (0x09UL << 8U)
#define MDR_RST_CLK_ADC_C3_DIV_8                      (0x0AUL << 8U)
#define MDR_RST_CLK_ADC_C3_DIV_16                     (0x0BUL << 8U)
#define MDR_RST_CLK_ADC_C3_DIV_32                     (0x0CUL << 8U)
#define MDR_RST_CLK_ADC_C3_DIV_64                     (0x0DUL << 8U)
#define MDR_RST_CLK_ADC_C3_DIV_128                    (0x0EUL << 8U)
#define MDR_RST_CLK_ADC_C3_DIV_256                    (0x0FUL << 8U)
#define MDR_RST_CLK_ADC_C3_Msk                        (0x0FUL << 8U)
#define IS_MDR_RST_CLK_ADC_C3(DIV)                    (((DIV) == MDR_RST_CLK_ADC_C3_DIV_1) || \
                                                        (((DIV) >= MDR_RST_CLK_ADC_C3_DIV_2) && \
                                                         ((DIV) <= MDR_RST_CLK_ADC_C3_DIV_256)))
/** @} */

#define MDR_RST_CLK_ADC_CLK_EN_Msk                    (1UL << 13U)

/** @defgroup MDR_RST_CLK_RTC_Clock_Values RTC clock output values
 * @{
 */
#define MDR_RST_CLK_RTC_HSE_DIV_1                     (0x00UL << 0U)
#define MDR_RST_CLK_RTC_HSE_DIV_2                     (0x08UL << 0U)
#define MDR_RST_CLK_RTC_HSE_DIV_4                     (0x09UL << 0U)
#define MDR_RST_CLK_RTC_HSE_DIV_8                     (0x0AUL << 0U)
#define MDR_RST_CLK_RTC_HSE_DIV_16                    (0x0BUL << 0U)
#define MDR_RST_CLK_RTC_HSE_DIV_32                    (0x0CUL << 0U)
#define MDR_RST_CLK_RTC_HSE_DIV_64                    (0x0DUL << 0U)
#define MDR_RST_CLK_RTC_HSE_DIV_128                   (0x0EUL << 0U)
#define MDR_RST_CLK_RTC_HSE_DIV_256                   (0x0FUL << 0U)
#define MDR_RST_CLK_RTC_HSE_Msk                       (0x0FUL << 0U)

#define MDR_RST_CLK_RTC_HSI_DIV_1                     (0x00UL << 4U)
#define MDR_RST_CLK_RTC_HSI_DIV_2                     (0x08UL << 4U)
#define MDR_RST_CLK_RTC_HSI_DIV_4                     (0x09UL << 4U)
#define MDR_RST_CLK_RTC_HSI_DIV_8                     (0x0AUL << 4U)
#define MDR_RST_CLK_RTC_HSI_DIV_16                    (0x0BUL << 4U)
#define MDR_RST_CLK_RTC_HSI_DIV_32                    (0x0CUL << 4U)
#define MDR_RST_CLK_RTC_HSI_DIV_64                    (0x0DUL << 4U)
#define MDR_RST_CLK_RTC_HSI_DIV_128                   (0x0EUL << 4U)
#define MDR_RST_CLK_RTC_HSI_DIV_256                   (0x0FUL << 4U)
#define MDR_RST_CLK_RTC_HSI_Msk                       (0x0FUL << 4U)

#define MDR_RST_CLK_RTC_HSE_EN_Msk                    (1UL << 8U)
#define MDR_RST_CLK_RTC_HSI_EN_Msk                    (1UL << 9U)
/** @} */

/** @defgroup MDR_RST_CLK_Peripheral_Clock_Values Peripheral PCLK masks
 * @{
 */
#define MDR_RST_CLK_PER_CLOCK_CAN1                    (1UL << 0U)
#define MDR_RST_CLK_PER_CLOCK_CAN2                    (1UL << 1U)
#define MDR_RST_CLK_PER_CLOCK_USB                     (1UL << 2U)
#define MDR_RST_CLK_PER_CLOCK_EEPROM                  (1UL << 3U)
#define MDR_RST_CLK_PER_CLOCK_RST_CLK                 (1UL << 4U)
#define MDR_RST_CLK_PER_CLOCK_DMA                     (1UL << 5U)
#define MDR_RST_CLK_PER_CLOCK_UART1                   (1UL << 6U)
#define MDR_RST_CLK_PER_CLOCK_UART2                   (1UL << 7U)
#define MDR_RST_CLK_PER_CLOCK_SSP1                    (1UL << 8U)
#define MDR_RST_CLK_PER_CLOCK_I2C                     (1UL << 10U)
#define MDR_RST_CLK_PER_CLOCK_POWER                   (1UL << 11U)
#define MDR_RST_CLK_PER_CLOCK_WWDG                    (1UL << 12U)
#define MDR_RST_CLK_PER_CLOCK_IWDG                    (1UL << 13U)
#define MDR_RST_CLK_PER_CLOCK_TIMER1                  (1UL << 14U)
#define MDR_RST_CLK_PER_CLOCK_TIMER2                  (1UL << 15U)
#define MDR_RST_CLK_PER_CLOCK_TIMER3                  (1UL << 16U)
#define MDR_RST_CLK_PER_CLOCK_ADC                     (1UL << 17U)
#define MDR_RST_CLK_PER_CLOCK_DAC                     (1UL << 18U)
#define MDR_RST_CLK_PER_CLOCK_COMP                    (1UL << 19U)
#define MDR_RST_CLK_PER_CLOCK_SSP2                    (1UL << 20U)
#define MDR_RST_CLK_PER_CLOCK_PORTA                   (1UL << 21U)
#define MDR_RST_CLK_PER_CLOCK_PORTB                   (1UL << 22U)
#define MDR_RST_CLK_PER_CLOCK_PORTC                   (1UL << 23U)
#define MDR_RST_CLK_PER_CLOCK_PORTD                   (1UL << 24U)
#define MDR_RST_CLK_PER_CLOCK_PORTE                   (1UL << 25U)
#define MDR_RST_CLK_PER_CLOCK_BKP                     (1UL << 27U)
#define MDR_RST_CLK_PER_CLOCK_PORTF                   (1UL << 29U)
#define MDR_RST_CLK_PER_CLOCK_EXT_BUS                 (1UL << 30U)
/** @} */

/** @defgroup MDR_RST_CLK_Peripheral_Divider_Values UART/TIMER/CAN/SSP divider codes
 * @{
 */
#define MDR_RST_CLK_DIV_1                             0x00U
#define MDR_RST_CLK_DIV_2                             0x01U
#define MDR_RST_CLK_DIV_4                             0x02U
#define MDR_RST_CLK_DIV_8                             0x03U
#define MDR_RST_CLK_DIV_16                            0x04U
#define MDR_RST_CLK_DIV_32                            0x05U
#define MDR_RST_CLK_DIV_64                            0x06U
#define MDR_RST_CLK_DIV_128                           0x07U
#define IS_MDR_RST_CLK_PERIPHERAL_DIV(DIV)            ((DIV) <= MDR_RST_CLK_DIV_128)
/** @} */

/* Exported macro ------------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/

/**
 * @brief      Fills CPU clock configuration with safe reset-like defaults.
 * @param[out] config  Destination configuration structure.
 */
void MDR_RST_CLK_CPU_StructInit(MDR_RST_CLK_CPU_InitTypeDef *config);

/**
 * @brief      Configures the complete CPU clock tree.
 * @param[in]  config  CPU clock configuration.
 * @return     Configuration status.
 * @warning    Flash wait states and DUCC regulator mode are not modified.
 */
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_CPU_Init(const MDR_RST_CLK_CPU_InitTypeDef *config);

/**
 * @brief      Fills USB clock configuration with safe defaults.
 * @param[out] config  Destination configuration structure.
 */
void MDR_RST_CLK_USB_StructInit(MDR_RST_CLK_USB_InitTypeDef *config);

/**
 * @brief      Configures the complete USB clock tree and enables USB clock output.
 * @param[in]  config  USB clock configuration.
 * @return     Configuration status.
 * @note       The resulting USB clock frequency must satisfy the USB controller requirements.
 */
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_USB_Init(const MDR_RST_CLK_USB_InitTypeDef *config);

/**
 * @brief      Fills ADC clock configuration with defaults.
 * @param[out] config  Destination configuration structure.
 */
void MDR_RST_CLK_ADC_StructInit(MDR_RST_CLK_ADC_InitTypeDef *config);

/**
 * @brief      Configures the ADC clock tree and enables ADC_CLK.
 * @param[in]  config  ADC clock configuration.
 * @return     Configuration status.
 */
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_ADC_Init(const MDR_RST_CLK_ADC_InitTypeDef *config);

/** @brief Enables PCLK for the selected peripheral mask. */
void MDR_RST_CLK_PeripheralEnable(uint32_t peripheral_mask);
/** @brief Disables PCLK for the selected peripheral mask. */
void MDR_RST_CLK_PeripheralDisable(uint32_t peripheral_mask);

/** @brief Enables HSI through MDR_BKP REG_0F. */
void MDR_RST_CLK_HSI_Enable(void);
/** @brief Disables HSI through MDR_BKP REG_0F. */
void MDR_RST_CLK_HSI_Disable(void);
/** @brief Returns non-zero when HSI is stable. */
uint32_t MDR_RST_CLK_HSI_IsReady(void);

/** @brief Enables LSI through MDR_BKP REG_0F. */
void MDR_RST_CLK_LSI_Enable(void);
/** @brief Disables LSI through MDR_BKP REG_0F. */
void MDR_RST_CLK_LSI_Disable(void);
/** @brief Returns non-zero when LSI is stable. */
uint32_t MDR_RST_CLK_LSI_IsReady(void);

/** @brief Sets HSE oscillator/bypass mode. */
void MDR_RST_CLK_HSE_SetMode(uint32_t hse_mode);
/** @brief Enables HSE. */
void MDR_RST_CLK_HSE_Enable(void);
/** @brief Disables HSE. */
void MDR_RST_CLK_HSE_Disable(void);
/** @brief Returns non-zero when HSE is stable. */
uint32_t MDR_RST_CLK_HSE_IsReady(void);

/** @brief Configures CPU_C1 source and CPU PLL multiplier. */
void MDR_RST_CLK_CPU_PLL_Configure(uint32_t cpu_c1_source, uint32_t pll_cpu_mul);
/** @brief Enables CPU PLL using the required RLD refresh sequence when needed. */
void MDR_RST_CLK_CPU_PLL_Enable(void);
/** @brief Disables CPU PLL using the required RLD refresh sequence when needed. */
void MDR_RST_CLK_CPU_PLL_Disable(void);
/** @brief Returns non-zero when CPU PLL is stable. */
uint32_t MDR_RST_CLK_CPU_PLL_IsReady(void);
/** @brief Selects CPU_C2 source. */
void MDR_RST_CLK_CPU_C2_Select(uint32_t cpu_c2_source);
/** @brief Sets CPU_C3 divider. */
void MDR_RST_CLK_CPU_C3_Div(uint32_t cpu_c3_div);
/** @brief Selects HCLK source. */
void MDR_RST_CLK_CPU_HCLK_Select(uint32_t hclk_source);

/** @brief Configures USB_C1 source and USB PLL multiplier. */
void MDR_RST_CLK_USB_PLL_Configure(uint32_t usb_c1_source, uint32_t pll_usb_mul);
/** @brief Enables USB PLL using the required RLD refresh sequence when needed. */
void MDR_RST_CLK_USB_PLL_Enable(void);
/** @brief Disables USB PLL using the required RLD refresh sequence when needed. */
void MDR_RST_CLK_USB_PLL_Disable(void);
/** @brief Returns non-zero when USB PLL is stable. */
uint32_t MDR_RST_CLK_USB_PLL_IsReady(void);
/** @brief Selects USB_C2 source. */
void MDR_RST_CLK_USB_C2_Select(uint32_t usb_c2_source);
/** @brief Sets USB_C3 divider. */
void MDR_RST_CLK_USB_C3_Div(uint32_t usb_c3_div);
/** @brief Enables USB_CLK output. */
void MDR_RST_CLK_USB_ClockEnable(void);
/** @brief Disables USB_CLK output. */
void MDR_RST_CLK_USB_ClockDisable(void);

/** @brief Selects ADC_C1 source. */
void MDR_RST_CLK_ADC_C1_Select(uint32_t adc_c1_source);
/** @brief Selects ADC_C2 source. */
void MDR_RST_CLK_ADC_C2_Select(uint32_t adc_c2_source);
/** @brief Sets ADC_C3 divider. */
void MDR_RST_CLK_ADC_SetDivider(uint32_t adc_c3_div);
/** @brief Enables ADC_CLK output. */
void MDR_RST_CLK_ADC_ClockEnable(void);
/** @brief Disables ADC_CLK output. */
void MDR_RST_CLK_ADC_ClockDisable(void);

/** @brief Sets the HSE_RTC divider field. */
void MDR_RST_CLK_RTC_HSE_SetDivider(uint32_t hse_rtc_div);
/** @brief Sets the HSI_RTC divider field. */
void MDR_RST_CLK_RTC_HSI_SetDivider(uint32_t hsi_rtc_div);
/** @brief Enables HSE_RTC output. */
void MDR_RST_CLK_RTC_HSE_ClockEnable(void);
/** @brief Disables HSE_RTC output. */
void MDR_RST_CLK_RTC_HSE_ClockDisable(void);
/** @brief Enables HSI_RTC output. */
void MDR_RST_CLK_RTC_HSI_ClockEnable(void);
/** @brief Disables HSI_RTC output. */
void MDR_RST_CLK_RTC_HSI_ClockDisable(void);

/**
 * @brief      Fully configures and enables one UART clock.
 * @param[in]  uart     UART selector.
 * @param[in]  divider  Divider code from @ref MDR_RST_CLK_Peripheral_Divider_Values.
 * @return     Configuration status.
 */
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_UART_Configure(MDR_RST_CLK_UART_TypeDef uart,
	uint32_t divider);

/** @brief Sets UART1 clock divider. */
void MDR_RST_CLK_UART1_SetDivider(uint32_t divider);
/** @brief Sets UART2 clock divider. */
void MDR_RST_CLK_UART2_SetDivider(uint32_t divider);
/** @brief Enables UART1_CLK. */
void MDR_RST_CLK_UART1_ClockEnable(void);
/** @brief Disables UART1_CLK. */
void MDR_RST_CLK_UART1_ClockDisable(void);
/** @brief Enables UART2_CLK. */
void MDR_RST_CLK_UART2_ClockEnable(void);
/** @brief Disables UART2_CLK. */
void MDR_RST_CLK_UART2_ClockDisable(void);

/**
 * @brief      Fully configures and enables one general-purpose timer clock.
 * @param[in]  timer    Timer selector.
 * @param[in]  divider  Divider code from @ref MDR_RST_CLK_Peripheral_Divider_Values.
 * @return     Configuration status.
 */
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_TIMER_Configure(MDR_RST_CLK_TIMER_TypeDef timer,
	uint32_t divider);

void MDR_RST_CLK_TIMER1_SetDivider(uint32_t divider);
void MDR_RST_CLK_TIMER1_ClockEnable(void);
void MDR_RST_CLK_TIMER1_ClockDisable(void);
void MDR_RST_CLK_TIMER2_SetDivider(uint32_t divider);
void MDR_RST_CLK_TIMER2_ClockEnable(void);
void MDR_RST_CLK_TIMER2_ClockDisable(void);
void MDR_RST_CLK_TIMER3_SetDivider(uint32_t divider);
void MDR_RST_CLK_TIMER3_ClockEnable(void);
void MDR_RST_CLK_TIMER3_ClockDisable(void);

/**
 * @brief      Fully configures and enables one CAN clock.
 * @param[in]  can      CAN selector.
 * @param[in]  divider  Divider code from @ref MDR_RST_CLK_Peripheral_Divider_Values.
 * @return     Configuration status.
 */
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_CAN_Configure(MDR_RST_CLK_CAN_TypeDef can,
	uint32_t divider);

void MDR_RST_CLK_CAN1_SetDivider(uint32_t divider);
void MDR_RST_CLK_CAN1_ClockEnable(void);
void MDR_RST_CLK_CAN1_ClockDisable(void);
void MDR_RST_CLK_CAN2_SetDivider(uint32_t divider);
void MDR_RST_CLK_CAN2_ClockEnable(void);
void MDR_RST_CLK_CAN2_ClockDisable(void);

/**
 * @brief      Fully configures and enables one SSP clock.
 * @param[in]  ssp      SSP selector.
 * @param[in]  divider  Divider code from @ref MDR_RST_CLK_Peripheral_Divider_Values.
 * @return     Configuration status.
 */
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_SSP_Configure(MDR_RST_CLK_SSP_TypeDef ssp,
	uint32_t divider);

void MDR_RST_CLK_SSP1_SetDivider(uint32_t divider);
void MDR_RST_CLK_SSP1_ClockEnable(void);
void MDR_RST_CLK_SSP1_ClockDisable(void);
void MDR_RST_CLK_SSP2_SetDivider(uint32_t divider);
void MDR_RST_CLK_SSP2_ClockEnable(void);
void MDR_RST_CLK_SSP2_ClockDisable(void);

#ifdef __cplusplus
}
#endif

#endif /* MILUINO_MDR_RST_CLK_H */