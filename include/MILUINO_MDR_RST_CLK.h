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
 * @brief CPU clock-tree configuration.
 */
typedef struct
{
	uint32_t HSEMode;
	uint32_t CPUC1Source;
	uint32_t PLLCPUMultiplier;
	uint32_t CPUC2Source;
	uint32_t CPUC3Divider;
	uint32_t HCLKSource;
	uint32_t ReadyTimeout;
} MDR_RST_CLK_CPU_InitTypeDef;

/**
 * @brief USB clock-tree configuration.
 */
typedef struct
{
	uint32_t HSEMode;
	uint32_t USBC1Source;
	uint32_t PLLUSBMultiplier;
	uint32_t USBC2Source;
	uint32_t USBC3Divider;
	uint32_t ReadyTimeout;
} MDR_RST_CLK_USB_InitTypeDef;

/* Exported constants --------------------------------------------------------*/

/** @defgroup MDR_RST_CLK_Clock_Status_Bits Clock status bits
 * @{
 */
#define MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_Pos    0U
#define MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_Pos    1U
#define MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_Pos        2U

#define MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_Msk    ( 1UL << MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_Pos )
#define MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_Msk    ( 1UL << MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_Pos )
#define MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_Msk        ( 1UL << MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_Pos     )

#define MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_RESET    ( 0UL << MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_Pos )
#define MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_SET      ( 1UL << MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_Pos )
#define MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_RESET    ( 0UL << MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_Pos )
#define MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_SET      ( 1UL << MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_Pos )
#define MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_RESET        ( 0UL << MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_Pos     )
#define MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_SET          ( 1UL << MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_Pos     )
/** @} */

/** @defgroup MDR_RST_CLK_PLL_Control_Bits PLL control bits
 * @{
 */
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_Pos     0U
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_Pos    1U
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_Pos     2U
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_Pos    3U
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos    4U
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos    8U

#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_Msk     ( 1UL    << MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_Pos  )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_Msk    ( 1UL    << MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_Pos )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_Msk     ( 1UL    << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_Pos  )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_Msk    ( 1UL    << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_Pos )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Msk    ( 0x0FUL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Msk    ( 0x0FUL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos )

#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_DISABLE     ( 0UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_Pos  )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_ENABLE      ( 1UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_Pos  )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_DISABLE    ( 0UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_Pos )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_ENABLE     ( 1UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_Pos )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_DISABLE     ( 0UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_Pos  )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_ENABLE      ( 1UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_Pos  )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_DISABLE    ( 0UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_Pos )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_ENABLE     ( 1UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_Pos )

#define MDR_RST_CLK_PLL_USB_MUL_4                  ( 0x03UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos )
#define MDR_RST_CLK_PLL_USB_MUL_5                  ( 0x04UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos )
#define MDR_RST_CLK_PLL_USB_MUL_6                  ( 0x05UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos )
#define MDR_RST_CLK_PLL_USB_MUL_7                  ( 0x06UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos )
#define MDR_RST_CLK_PLL_USB_MUL_8                  ( 0x07UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos )
#define MDR_RST_CLK_PLL_USB_MUL_9                  ( 0x08UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos )
#define MDR_RST_CLK_PLL_USB_MUL_10                 ( 0x09UL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos )
#define MDR_RST_CLK_PLL_USB_MUL_11                 ( 0x0AUL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos )
#define MDR_RST_CLK_PLL_USB_MUL_12                 ( 0x0BUL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos )
#define MDR_RST_CLK_PLL_USB_MUL_13                 ( 0x0CUL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos )
#define MDR_RST_CLK_PLL_USB_MUL_14                 ( 0x0DUL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos )
#define MDR_RST_CLK_PLL_USB_MUL_15                 ( 0x0EUL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos )
#define MDR_RST_CLK_PLL_USB_MUL_16                 ( 0x0FUL << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_Pos )

#define MDR_RST_CLK_PLL_CPU_MUL_4                  ( 0x03UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos )
#define MDR_RST_CLK_PLL_CPU_MUL_5                  ( 0x04UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos )
#define MDR_RST_CLK_PLL_CPU_MUL_6                  ( 0x05UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos )
#define MDR_RST_CLK_PLL_CPU_MUL_7                  ( 0x06UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos )
#define MDR_RST_CLK_PLL_CPU_MUL_8                  ( 0x07UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos )
#define MDR_RST_CLK_PLL_CPU_MUL_9                  ( 0x08UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos )
#define MDR_RST_CLK_PLL_CPU_MUL_10                 ( 0x09UL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos )
#define MDR_RST_CLK_PLL_CPU_MUL_11                 ( 0x0AUL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos )
#define MDR_RST_CLK_PLL_CPU_MUL_12                 ( 0x0BUL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos )
#define MDR_RST_CLK_PLL_CPU_MUL_13                 ( 0x0CUL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos )
#define MDR_RST_CLK_PLL_CPU_MUL_14                 ( 0x0DUL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos )
#define MDR_RST_CLK_PLL_CPU_MUL_15                 ( 0x0EUL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos )
#define MDR_RST_CLK_PLL_CPU_MUL_16                 ( 0x0FUL << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_Pos )
/** @} */

#define IS_MDR_RST_CLK_PLL_CPU_MUL(MUL)    (((MUL) >= MDR_RST_CLK_PLL_CPU_MUL_4) && ((MUL) <= MDR_RST_CLK_PLL_CPU_MUL_16))
#define IS_MDR_RST_CLK_PLL_USB_MUL(MUL)    (((MUL) >= MDR_RST_CLK_PLL_USB_MUL_4) && ((MUL) <= MDR_RST_CLK_PLL_USB_MUL_16))

/** @defgroup MDR_RST_CLK_HS_Control_Bits HSE control bits
 * @{
 */
#define MDR_RST_CLK_HS_CONTROL_HSE_ON_Pos     0U
#define MDR_RST_CLK_HS_CONTROL_HSE_BYP_Pos    1U

#define MDR_RST_CLK_HS_CONTROL_HSE_ON_Msk     ( 1UL << MDR_RST_CLK_HS_CONTROL_HSE_ON_Pos  )
#define MDR_RST_CLK_HS_CONTROL_HSE_BYP_Msk    ( 1UL << MDR_RST_CLK_HS_CONTROL_HSE_BYP_Pos )

#define MDR_RST_CLK_HS_CONTROL_HSE_ON_DISABLE     ( 0UL << MDR_RST_CLK_HS_CONTROL_HSE_ON_Pos  )
#define MDR_RST_CLK_HS_CONTROL_HSE_ON_ENABLE      ( 1UL << MDR_RST_CLK_HS_CONTROL_HSE_ON_Pos  )
#define MDR_RST_CLK_HS_CONTROL_HSE_BYP_OSCILLATOR ( 0UL << MDR_RST_CLK_HS_CONTROL_HSE_BYP_Pos )
#define MDR_RST_CLK_HS_CONTROL_HSE_BYP_BYPASS     ( 1UL << MDR_RST_CLK_HS_CONTROL_HSE_BYP_Pos )

#define MDR_RST_CLK_HSE_OSCILLATOR    MDR_RST_CLK_HS_CONTROL_HSE_BYP_OSCILLATOR
#define MDR_RST_CLK_HSE_BYPASS        MDR_RST_CLK_HS_CONTROL_HSE_BYP_BYPASS
#define IS_MDR_RST_CLK_HSE_MODE(MODE)    (((MODE) == MDR_RST_CLK_HSE_OSCILLATOR) || ((MODE) == MDR_RST_CLK_HSE_BYPASS))
/** @} */

/** @defgroup MDR_RST_CLK_CPU_Clock_Bits CPU clock fields
 * @{
 */
#define MDR_RST_CLK_CPU_C1_Pos     0U
#define MDR_RST_CLK_CPU_C2_Pos     2U
#define MDR_RST_CLK_CPU_C3_Pos     4U
#define MDR_RST_CLK_HCLK_Pos       8U

#define MDR_RST_CLK_CPU_C1_Msk     ( 0x03UL << MDR_RST_CLK_CPU_C1_Pos )
#define MDR_RST_CLK_CPU_C2_Msk     ( 0x01UL << MDR_RST_CLK_CPU_C2_Pos )
#define MDR_RST_CLK_CPU_C3_Msk     ( 0x0FUL << MDR_RST_CLK_CPU_C3_Pos )
#define MDR_RST_CLK_HCLK_Msk       ( 0x03UL << MDR_RST_CLK_HCLK_Pos   )

#define MDR_RST_CLK_CPU_C1_HSI          ( 0x00UL << MDR_RST_CLK_CPU_C1_Pos )
#define MDR_RST_CLK_CPU_C1_HSI_DIV_2    ( 0x01UL << MDR_RST_CLK_CPU_C1_Pos )
#define MDR_RST_CLK_CPU_C1_HSE          ( 0x02UL << MDR_RST_CLK_CPU_C1_Pos )
#define MDR_RST_CLK_CPU_C1_HSE_DIV_2    ( 0x03UL << MDR_RST_CLK_CPU_C1_Pos )

#define MDR_RST_CLK_CPU_C2_CPU_C1     ( 0x00UL << MDR_RST_CLK_CPU_C2_Pos )
#define MDR_RST_CLK_CPU_C2_PLL_CPU    ( 0x01UL << MDR_RST_CLK_CPU_C2_Pos )

#define MDR_RST_CLK_CPU_C3_DIV_1              ( 0x00UL << MDR_RST_CLK_CPU_C3_Pos )
#define MDR_RST_CLK_CPU_C3_DIV_2              ( 0x08UL << MDR_RST_CLK_CPU_C3_Pos )
#define MDR_RST_CLK_CPU_C3_DIV_4              ( 0x09UL << MDR_RST_CLK_CPU_C3_Pos )
#define MDR_RST_CLK_CPU_C3_DIV_8              ( 0x0AUL << MDR_RST_CLK_CPU_C3_Pos )
#define MDR_RST_CLK_CPU_C3_DIV_16             ( 0x0BUL << MDR_RST_CLK_CPU_C3_Pos )
#define MDR_RST_CLK_CPU_C3_DIV_32             ( 0x0CUL << MDR_RST_CLK_CPU_C3_Pos )
#define MDR_RST_CLK_CPU_C3_DIV_64             ( 0x0DUL << MDR_RST_CLK_CPU_C3_Pos )
#define MDR_RST_CLK_CPU_C3_DIV_128            ( 0x0EUL << MDR_RST_CLK_CPU_C3_Pos )
#define MDR_RST_CLK_CPU_C3_DIV_256            ( 0x0FUL << MDR_RST_CLK_CPU_C3_Pos )

#define MDR_RST_CLK_HCLK_HSI       ( 0x00UL << MDR_RST_CLK_HCLK_Pos )
#define MDR_RST_CLK_HCLK_CPU_C3    ( 0x01UL << MDR_RST_CLK_HCLK_Pos )
#define MDR_RST_CLK_HCLK_LSE       ( 0x02UL << MDR_RST_CLK_HCLK_Pos )
#define MDR_RST_CLK_HCLK_LSI       ( 0x03UL << MDR_RST_CLK_HCLK_Pos )

#define IS_MDR_RST_CLK_CPU_C1(SOURCE)    (((SOURCE) == MDR_RST_CLK_CPU_C1_HSI) || ((SOURCE) == MDR_RST_CLK_CPU_C1_HSI_DIV_2) || ((SOURCE) == MDR_RST_CLK_CPU_C1_HSE) || ((SOURCE) == MDR_RST_CLK_CPU_C1_HSE_DIV_2))
#define IS_MDR_RST_CLK_CPU_C2(SOURCE)    (((SOURCE) == MDR_RST_CLK_CPU_C2_CPU_C1) || ((SOURCE) == MDR_RST_CLK_CPU_C2_PLL_CPU))
#define IS_MDR_RST_CLK_CPU_C3(DIV)       (((DIV) == MDR_RST_CLK_CPU_C3_DIV_1) || (((DIV) >= MDR_RST_CLK_CPU_C3_DIV_2) && ((DIV) <= MDR_RST_CLK_CPU_C3_DIV_256)))
#define IS_MDR_RST_CLK_HCLK(SOURCE)      (((SOURCE) == MDR_RST_CLK_HCLK_HSI) || ((SOURCE) == MDR_RST_CLK_HCLK_CPU_C3) || ((SOURCE) == MDR_RST_CLK_HCLK_LSE) || ((SOURCE) == MDR_RST_CLK_HCLK_LSI))
/** @} */

/** @defgroup MDR_RST_CLK_USB_Clock_Bits USB clock fields
 * @{
 */
#define MDR_RST_CLK_USB_C1_Pos        0U
#define MDR_RST_CLK_USB_C2_Pos        2U
#define MDR_RST_CLK_USB_C3_Pos        4U
#define MDR_RST_CLK_USB_CLK_EN_Pos    8U

#define MDR_RST_CLK_USB_C1_Msk        ( 0x03UL << MDR_RST_CLK_USB_C1_Pos     )
#define MDR_RST_CLK_USB_C2_Msk        ( 0x01UL << MDR_RST_CLK_USB_C2_Pos     )
#define MDR_RST_CLK_USB_C3_Msk        ( 0x01UL << MDR_RST_CLK_USB_C3_Pos     )
#define MDR_RST_CLK_USB_CLK_EN_Msk    ( 1UL    << MDR_RST_CLK_USB_CLK_EN_Pos )

#define MDR_RST_CLK_USB_C1_HSI          ( 0x00UL << MDR_RST_CLK_USB_C1_Pos )
#define MDR_RST_CLK_USB_C1_HSI_DIV_2    ( 0x01UL << MDR_RST_CLK_USB_C1_Pos )
#define MDR_RST_CLK_USB_C1_HSE          ( 0x02UL << MDR_RST_CLK_USB_C1_Pos )
#define MDR_RST_CLK_USB_C1_HSE_DIV_2    ( 0x03UL << MDR_RST_CLK_USB_C1_Pos )
#define MDR_RST_CLK_USB_C2_USB_C1       ( 0x00UL << MDR_RST_CLK_USB_C2_Pos )
#define MDR_RST_CLK_USB_C2_PLL_USB      ( 0x01UL << MDR_RST_CLK_USB_C2_Pos )
#define MDR_RST_CLK_USB_C3_DIV_1        ( 0x00UL << MDR_RST_CLK_USB_C3_Pos )
#define MDR_RST_CLK_USB_C3_DIV_2        ( 0x01UL << MDR_RST_CLK_USB_C3_Pos )
#define MDR_RST_CLK_USB_CLK_DISABLE     ( 0UL    << MDR_RST_CLK_USB_CLK_EN_Pos )
#define MDR_RST_CLK_USB_CLK_ENABLE      ( 1UL    << MDR_RST_CLK_USB_CLK_EN_Pos )

#define IS_MDR_RST_CLK_USB_C1(SOURCE)    (((SOURCE) == MDR_RST_CLK_USB_C1_HSI) || ((SOURCE) == MDR_RST_CLK_USB_C1_HSI_DIV_2) || ((SOURCE) == MDR_RST_CLK_USB_C1_HSE) || ((SOURCE) == MDR_RST_CLK_USB_C1_HSE_DIV_2))
#define IS_MDR_RST_CLK_USB_C2(SOURCE)    (((SOURCE) == MDR_RST_CLK_USB_C2_USB_C1) || ((SOURCE) == MDR_RST_CLK_USB_C2_PLL_USB))
#define IS_MDR_RST_CLK_USB_C3(DIV)       (((DIV) == MDR_RST_CLK_USB_C3_DIV_1) || ((DIV) == MDR_RST_CLK_USB_C3_DIV_2))
/** @} */

/** @defgroup MDR_RST_CLK_ADC_Clock_Bits ADC clock fields
 * @{
 */
#define MDR_RST_CLK_ADC_C1_Pos        0U
#define MDR_RST_CLK_ADC_C2_Pos        4U
#define MDR_RST_CLK_ADC_C3_Pos        8U
#define MDR_RST_CLK_ADC_CLK_EN_Pos    13U

#define MDR_RST_CLK_ADC_C1_Msk        ( 0x03UL << MDR_RST_CLK_ADC_C1_Pos     )
#define MDR_RST_CLK_ADC_C2_Msk        ( 0x03UL << MDR_RST_CLK_ADC_C2_Pos     )
#define MDR_RST_CLK_ADC_C3_Msk        ( 0x0FUL << MDR_RST_CLK_ADC_C3_Pos     )
#define MDR_RST_CLK_ADC_CLK_EN_Msk    ( 1UL    << MDR_RST_CLK_ADC_CLK_EN_Pos )

#define MDR_RST_CLK_ADC_C1_CPU_C1    ( 0x00UL << MDR_RST_CLK_ADC_C1_Pos )
#define MDR_RST_CLK_ADC_C1_USB_C1    ( 0x01UL << MDR_RST_CLK_ADC_C1_Pos )
#define MDR_RST_CLK_ADC_C1_CPU_C2    ( 0x02UL << MDR_RST_CLK_ADC_C1_Pos )
#define MDR_RST_CLK_ADC_C1_USB_C2    ( 0x03UL << MDR_RST_CLK_ADC_C1_Pos )
#define MDR_RST_CLK_ADC_C2_LSE       ( 0x00UL << MDR_RST_CLK_ADC_C2_Pos )
#define MDR_RST_CLK_ADC_C2_LSI       ( 0x01UL << MDR_RST_CLK_ADC_C2_Pos )
#define MDR_RST_CLK_ADC_C2_ADC_C1    ( 0x02UL << MDR_RST_CLK_ADC_C2_Pos )
#define MDR_RST_CLK_ADC_C2_HSI_C1    ( 0x03UL << MDR_RST_CLK_ADC_C2_Pos )
#define MDR_RST_CLK_ADC_C3_DIV_1              ( 0x00UL << MDR_RST_CLK_ADC_C3_Pos )
#define MDR_RST_CLK_ADC_C3_DIV_2              ( 0x08UL << MDR_RST_CLK_ADC_C3_Pos )
#define MDR_RST_CLK_ADC_C3_DIV_4              ( 0x09UL << MDR_RST_CLK_ADC_C3_Pos )
#define MDR_RST_CLK_ADC_C3_DIV_8              ( 0x0AUL << MDR_RST_CLK_ADC_C3_Pos )
#define MDR_RST_CLK_ADC_C3_DIV_16             ( 0x0BUL << MDR_RST_CLK_ADC_C3_Pos )
#define MDR_RST_CLK_ADC_C3_DIV_32             ( 0x0CUL << MDR_RST_CLK_ADC_C3_Pos )
#define MDR_RST_CLK_ADC_C3_DIV_64             ( 0x0DUL << MDR_RST_CLK_ADC_C3_Pos )
#define MDR_RST_CLK_ADC_C3_DIV_128            ( 0x0EUL << MDR_RST_CLK_ADC_C3_Pos )
#define MDR_RST_CLK_ADC_C3_DIV_256            ( 0x0FUL << MDR_RST_CLK_ADC_C3_Pos )
#define MDR_RST_CLK_ADC_CLK_DISABLE    ( 0UL << MDR_RST_CLK_ADC_CLK_EN_Pos )
#define MDR_RST_CLK_ADC_CLK_ENABLE     ( 1UL << MDR_RST_CLK_ADC_CLK_EN_Pos )

#define IS_MDR_RST_CLK_ADC_C1(SOURCE)    (((SOURCE) == MDR_RST_CLK_ADC_C1_CPU_C1) || ((SOURCE) == MDR_RST_CLK_ADC_C1_USB_C1) || ((SOURCE) == MDR_RST_CLK_ADC_C1_CPU_C2) || ((SOURCE) == MDR_RST_CLK_ADC_C1_USB_C2))
#define IS_MDR_RST_CLK_ADC_C2(SOURCE)    (((SOURCE) == MDR_RST_CLK_ADC_C2_LSE) || ((SOURCE) == MDR_RST_CLK_ADC_C2_LSI) || ((SOURCE) == MDR_RST_CLK_ADC_C2_ADC_C1) || ((SOURCE) == MDR_RST_CLK_ADC_C2_HSI_C1))
#define IS_MDR_RST_CLK_ADC_C3(DIV)       (((DIV) == MDR_RST_CLK_ADC_C3_DIV_1) || (((DIV) >= MDR_RST_CLK_ADC_C3_DIV_2) && ((DIV) <= MDR_RST_CLK_ADC_C3_DIV_256)))
/** @} */

/** @defgroup MDR_RST_CLK_RTC_Clock_Bits RTC clock fields
 * @{
 */
#define MDR_RST_CLK_RTC_HSE_Pos       0U
#define MDR_RST_CLK_RTC_HSI_Pos       4U
#define MDR_RST_CLK_RTC_HSE_EN_Pos    8U
#define MDR_RST_CLK_RTC_HSI_EN_Pos    9U

#define MDR_RST_CLK_RTC_HSE_Msk       ( 0x0FUL << MDR_RST_CLK_RTC_HSE_Pos    )
#define MDR_RST_CLK_RTC_HSI_Msk       ( 0x0FUL << MDR_RST_CLK_RTC_HSI_Pos    )
#define MDR_RST_CLK_RTC_HSE_EN_Msk    ( 1UL    << MDR_RST_CLK_RTC_HSE_EN_Pos )
#define MDR_RST_CLK_RTC_HSI_EN_Msk    ( 1UL    << MDR_RST_CLK_RTC_HSI_EN_Pos )

#define MDR_RST_CLK_RTC_HSE_DIV_1              ( 0x00UL << MDR_RST_CLK_RTC_HSE_Pos )
#define MDR_RST_CLK_RTC_HSE_DIV_2              ( 0x08UL << MDR_RST_CLK_RTC_HSE_Pos )
#define MDR_RST_CLK_RTC_HSE_DIV_4              ( 0x09UL << MDR_RST_CLK_RTC_HSE_Pos )
#define MDR_RST_CLK_RTC_HSE_DIV_8              ( 0x0AUL << MDR_RST_CLK_RTC_HSE_Pos )
#define MDR_RST_CLK_RTC_HSE_DIV_16             ( 0x0BUL << MDR_RST_CLK_RTC_HSE_Pos )
#define MDR_RST_CLK_RTC_HSE_DIV_32             ( 0x0CUL << MDR_RST_CLK_RTC_HSE_Pos )
#define MDR_RST_CLK_RTC_HSE_DIV_64             ( 0x0DUL << MDR_RST_CLK_RTC_HSE_Pos )
#define MDR_RST_CLK_RTC_HSE_DIV_128            ( 0x0EUL << MDR_RST_CLK_RTC_HSE_Pos )
#define MDR_RST_CLK_RTC_HSE_DIV_256            ( 0x0FUL << MDR_RST_CLK_RTC_HSE_Pos )
#define MDR_RST_CLK_RTC_HSI_DIV_1              ( 0x00UL << MDR_RST_CLK_RTC_HSI_Pos )
#define MDR_RST_CLK_RTC_HSI_DIV_2              ( 0x08UL << MDR_RST_CLK_RTC_HSI_Pos )
#define MDR_RST_CLK_RTC_HSI_DIV_4              ( 0x09UL << MDR_RST_CLK_RTC_HSI_Pos )
#define MDR_RST_CLK_RTC_HSI_DIV_8              ( 0x0AUL << MDR_RST_CLK_RTC_HSI_Pos )
#define MDR_RST_CLK_RTC_HSI_DIV_16             ( 0x0BUL << MDR_RST_CLK_RTC_HSI_Pos )
#define MDR_RST_CLK_RTC_HSI_DIV_32             ( 0x0CUL << MDR_RST_CLK_RTC_HSI_Pos )
#define MDR_RST_CLK_RTC_HSI_DIV_64             ( 0x0DUL << MDR_RST_CLK_RTC_HSI_Pos )
#define MDR_RST_CLK_RTC_HSI_DIV_128            ( 0x0EUL << MDR_RST_CLK_RTC_HSI_Pos )
#define MDR_RST_CLK_RTC_HSI_DIV_256            ( 0x0FUL << MDR_RST_CLK_RTC_HSI_Pos )
#define MDR_RST_CLK_RTC_HSE_DISABLE    ( 0UL << MDR_RST_CLK_RTC_HSE_EN_Pos )
#define MDR_RST_CLK_RTC_HSE_ENABLE     ( 1UL << MDR_RST_CLK_RTC_HSE_EN_Pos )
#define MDR_RST_CLK_RTC_HSI_DISABLE    ( 0UL << MDR_RST_CLK_RTC_HSI_EN_Pos )
#define MDR_RST_CLK_RTC_HSI_ENABLE     ( 1UL << MDR_RST_CLK_RTC_HSI_EN_Pos )
/** @} */

/** @defgroup MDR_RST_CLK_Peripheral_Clock_Values Peripheral PCLK masks
 * @{
 */
#define MDR_RST_CLK_PER_CLOCK_CAN1_Pos       0U
#define MDR_RST_CLK_PER_CLOCK_CAN2_Pos       1U
#define MDR_RST_CLK_PER_CLOCK_USB_Pos        2U
#define MDR_RST_CLK_PER_CLOCK_EEPROM_Pos     3U
#define MDR_RST_CLK_PER_CLOCK_RST_CLK_Pos    4U
#define MDR_RST_CLK_PER_CLOCK_DMA_Pos        5U
#define MDR_RST_CLK_PER_CLOCK_UART1_Pos      6U
#define MDR_RST_CLK_PER_CLOCK_UART2_Pos      7U
#define MDR_RST_CLK_PER_CLOCK_SSP1_Pos       8U
#define MDR_RST_CLK_PER_CLOCK_I2C_Pos        10U
#define MDR_RST_CLK_PER_CLOCK_POWER_Pos      11U
#define MDR_RST_CLK_PER_CLOCK_WWDG_Pos       12U
#define MDR_RST_CLK_PER_CLOCK_IWDG_Pos       13U
#define MDR_RST_CLK_PER_CLOCK_TIMER1_Pos     14U
#define MDR_RST_CLK_PER_CLOCK_TIMER2_Pos     15U
#define MDR_RST_CLK_PER_CLOCK_TIMER3_Pos     16U
#define MDR_RST_CLK_PER_CLOCK_ADC_Pos        17U
#define MDR_RST_CLK_PER_CLOCK_DAC_Pos        18U
#define MDR_RST_CLK_PER_CLOCK_COMP_Pos       19U
#define MDR_RST_CLK_PER_CLOCK_SSP2_Pos       20U
#define MDR_RST_CLK_PER_CLOCK_PORTA_Pos      21U
#define MDR_RST_CLK_PER_CLOCK_PORTB_Pos      22U
#define MDR_RST_CLK_PER_CLOCK_PORTC_Pos      23U
#define MDR_RST_CLK_PER_CLOCK_PORTD_Pos      24U
#define MDR_RST_CLK_PER_CLOCK_PORTE_Pos      25U
#define MDR_RST_CLK_PER_CLOCK_BKP_Pos        27U
#define MDR_RST_CLK_PER_CLOCK_PORTF_Pos      29U
#define MDR_RST_CLK_PER_CLOCK_EXT_BUS_Pos    30U

#define MDR_RST_CLK_PER_CLOCK_CAN1_Msk       ( 1UL << MDR_RST_CLK_PER_CLOCK_CAN1_Pos    )
#define MDR_RST_CLK_PER_CLOCK_CAN2_Msk       ( 1UL << MDR_RST_CLK_PER_CLOCK_CAN2_Pos    )
#define MDR_RST_CLK_PER_CLOCK_USB_Msk        ( 1UL << MDR_RST_CLK_PER_CLOCK_USB_Pos     )
#define MDR_RST_CLK_PER_CLOCK_EEPROM_Msk     ( 1UL << MDR_RST_CLK_PER_CLOCK_EEPROM_Pos  )
#define MDR_RST_CLK_PER_CLOCK_RST_CLK_Msk    ( 1UL << MDR_RST_CLK_PER_CLOCK_RST_CLK_Pos )
#define MDR_RST_CLK_PER_CLOCK_DMA_Msk        ( 1UL << MDR_RST_CLK_PER_CLOCK_DMA_Pos     )
#define MDR_RST_CLK_PER_CLOCK_UART1_Msk      ( 1UL << MDR_RST_CLK_PER_CLOCK_UART1_Pos   )
#define MDR_RST_CLK_PER_CLOCK_UART2_Msk      ( 1UL << MDR_RST_CLK_PER_CLOCK_UART2_Pos   )
#define MDR_RST_CLK_PER_CLOCK_SSP1_Msk       ( 1UL << MDR_RST_CLK_PER_CLOCK_SSP1_Pos    )
#define MDR_RST_CLK_PER_CLOCK_I2C_Msk        ( 1UL << MDR_RST_CLK_PER_CLOCK_I2C_Pos     )
#define MDR_RST_CLK_PER_CLOCK_POWER_Msk      ( 1UL << MDR_RST_CLK_PER_CLOCK_POWER_Pos   )
#define MDR_RST_CLK_PER_CLOCK_WWDG_Msk       ( 1UL << MDR_RST_CLK_PER_CLOCK_WWDG_Pos    )
#define MDR_RST_CLK_PER_CLOCK_IWDG_Msk       ( 1UL << MDR_RST_CLK_PER_CLOCK_IWDG_Pos    )
#define MDR_RST_CLK_PER_CLOCK_TIMER1_Msk     ( 1UL << MDR_RST_CLK_PER_CLOCK_TIMER1_Pos  )
#define MDR_RST_CLK_PER_CLOCK_TIMER2_Msk     ( 1UL << MDR_RST_CLK_PER_CLOCK_TIMER2_Pos  )
#define MDR_RST_CLK_PER_CLOCK_TIMER3_Msk     ( 1UL << MDR_RST_CLK_PER_CLOCK_TIMER3_Pos  )
#define MDR_RST_CLK_PER_CLOCK_ADC_Msk        ( 1UL << MDR_RST_CLK_PER_CLOCK_ADC_Pos     )
#define MDR_RST_CLK_PER_CLOCK_DAC_Msk        ( 1UL << MDR_RST_CLK_PER_CLOCK_DAC_Pos     )
#define MDR_RST_CLK_PER_CLOCK_COMP_Msk       ( 1UL << MDR_RST_CLK_PER_CLOCK_COMP_Pos    )
#define MDR_RST_CLK_PER_CLOCK_SSP2_Msk       ( 1UL << MDR_RST_CLK_PER_CLOCK_SSP2_Pos    )
#define MDR_RST_CLK_PER_CLOCK_PORTA_Msk      ( 1UL << MDR_RST_CLK_PER_CLOCK_PORTA_Pos   )
#define MDR_RST_CLK_PER_CLOCK_PORTB_Msk      ( 1UL << MDR_RST_CLK_PER_CLOCK_PORTB_Pos   )
#define MDR_RST_CLK_PER_CLOCK_PORTC_Msk      ( 1UL << MDR_RST_CLK_PER_CLOCK_PORTC_Pos   )
#define MDR_RST_CLK_PER_CLOCK_PORTD_Msk      ( 1UL << MDR_RST_CLK_PER_CLOCK_PORTD_Pos   )
#define MDR_RST_CLK_PER_CLOCK_PORTE_Msk      ( 1UL << MDR_RST_CLK_PER_CLOCK_PORTE_Pos   )
#define MDR_RST_CLK_PER_CLOCK_BKP_Msk        ( 1UL << MDR_RST_CLK_PER_CLOCK_BKP_Pos     )
#define MDR_RST_CLK_PER_CLOCK_PORTF_Msk      ( 1UL << MDR_RST_CLK_PER_CLOCK_PORTF_Pos   )
#define MDR_RST_CLK_PER_CLOCK_EXT_BUS_Msk    ( 1UL << MDR_RST_CLK_PER_CLOCK_EXT_BUS_Pos )

#define MDR_RST_CLK_PER_CLOCK_CAN1_ENABLE             ( 0x01UL << MDR_RST_CLK_PER_CLOCK_CAN1_Pos     )
#define MDR_RST_CLK_PER_CLOCK_CAN2_ENABLE             ( 0x01UL << MDR_RST_CLK_PER_CLOCK_CAN2_Pos     )
#define MDR_RST_CLK_PER_CLOCK_USB_ENABLE              ( 0x01UL << MDR_RST_CLK_PER_CLOCK_USB_Pos      )
#define MDR_RST_CLK_PER_CLOCK_EEPROM_ENABLE           ( 0x01UL << MDR_RST_CLK_PER_CLOCK_EEPROM_Pos   )
#define MDR_RST_CLK_PER_CLOCK_RST_CLK_ENABLE          ( 0x01UL << MDR_RST_CLK_PER_CLOCK_RST_CLK_Pos  )
#define MDR_RST_CLK_PER_CLOCK_DMA_ENABLE              ( 0x01UL << MDR_RST_CLK_PER_CLOCK_DMA_Pos      )
#define MDR_RST_CLK_PER_CLOCK_UART1_ENABLE            ( 0x01UL << MDR_RST_CLK_PER_CLOCK_UART1_Pos    )
#define MDR_RST_CLK_PER_CLOCK_UART2_ENABLE            ( 0x01UL << MDR_RST_CLK_PER_CLOCK_UART2_Pos    )
#define MDR_RST_CLK_PER_CLOCK_SSP1_ENABLE             ( 0x01UL << MDR_RST_CLK_PER_CLOCK_SSP1_Pos     )
#define MDR_RST_CLK_PER_CLOCK_I2C_ENABLE              ( 0x01UL << MDR_RST_CLK_PER_CLOCK_I2C_Pos      )
#define MDR_RST_CLK_PER_CLOCK_POWER_ENABLE            ( 0x01UL << MDR_RST_CLK_PER_CLOCK_POWER_Pos    )
#define MDR_RST_CLK_PER_CLOCK_WWDG_ENABLE             ( 0x01UL << MDR_RST_CLK_PER_CLOCK_WWDG_Pos     )
#define MDR_RST_CLK_PER_CLOCK_IWDG_ENABLE             ( 0x01UL << MDR_RST_CLK_PER_CLOCK_IWDG_Pos     )
#define MDR_RST_CLK_PER_CLOCK_TIMER1_ENABLE           ( 0x01UL << MDR_RST_CLK_PER_CLOCK_TIMER1_Pos   )
#define MDR_RST_CLK_PER_CLOCK_TIMER2_ENABLE           ( 0x01UL << MDR_RST_CLK_PER_CLOCK_TIMER2_Pos   )
#define MDR_RST_CLK_PER_CLOCK_TIMER3_ENABLE           ( 0x01UL << MDR_RST_CLK_PER_CLOCK_TIMER3_Pos   )
#define MDR_RST_CLK_PER_CLOCK_ADC_ENABLE              ( 0x01UL << MDR_RST_CLK_PER_CLOCK_ADC_Pos      )
#define MDR_RST_CLK_PER_CLOCK_DAC_ENABLE              ( 0x01UL << MDR_RST_CLK_PER_CLOCK_DAC_Pos      )
#define MDR_RST_CLK_PER_CLOCK_COMP_ENABLE             ( 0x01UL << MDR_RST_CLK_PER_CLOCK_COMP_Pos     )
#define MDR_RST_CLK_PER_CLOCK_SSP2_ENABLE             ( 0x01UL << MDR_RST_CLK_PER_CLOCK_SSP2_Pos     )
#define MDR_RST_CLK_PER_CLOCK_PORTA_ENABLE            ( 0x01UL << MDR_RST_CLK_PER_CLOCK_PORTA_Pos    )
#define MDR_RST_CLK_PER_CLOCK_PORTB_ENABLE            ( 0x01UL << MDR_RST_CLK_PER_CLOCK_PORTB_Pos    )
#define MDR_RST_CLK_PER_CLOCK_PORTC_ENABLE            ( 0x01UL << MDR_RST_CLK_PER_CLOCK_PORTC_Pos    )
#define MDR_RST_CLK_PER_CLOCK_PORTD_ENABLE            ( 0x01UL << MDR_RST_CLK_PER_CLOCK_PORTD_Pos    )
#define MDR_RST_CLK_PER_CLOCK_PORTE_ENABLE            ( 0x01UL << MDR_RST_CLK_PER_CLOCK_PORTE_Pos    )
#define MDR_RST_CLK_PER_CLOCK_BKP_ENABLE              ( 0x01UL << MDR_RST_CLK_PER_CLOCK_BKP_Pos      )
#define MDR_RST_CLK_PER_CLOCK_PORTF_ENABLE            ( 0x01UL << MDR_RST_CLK_PER_CLOCK_PORTF_Pos    )
#define MDR_RST_CLK_PER_CLOCK_EXT_BUS_ENABLE          ( 0x01UL << MDR_RST_CLK_PER_CLOCK_EXT_BUS_Pos  )

#define MDR_RST_CLK_PER_CLOCK_CAN1_DISABLE            ( 0x00UL << MDR_RST_CLK_PER_CLOCK_CAN1_Pos     )
#define MDR_RST_CLK_PER_CLOCK_CAN2_DISABLE            ( 0x00UL << MDR_RST_CLK_PER_CLOCK_CAN2_Pos     )
#define MDR_RST_CLK_PER_CLOCK_USB_DISABLE             ( 0x00UL << MDR_RST_CLK_PER_CLOCK_USB_Pos      )
#define MDR_RST_CLK_PER_CLOCK_EEPROM_DISABLE          ( 0x00UL << MDR_RST_CLK_PER_CLOCK_EEPROM_Pos   )
#define MDR_RST_CLK_PER_CLOCK_RST_CLK_DISABLE         ( 0x00UL << MDR_RST_CLK_PER_CLOCK_RST_CLK_Pos  )
#define MDR_RST_CLK_PER_CLOCK_DMA_DISABLE             ( 0x00UL << MDR_RST_CLK_PER_CLOCK_DMA_Pos      )
#define MDR_RST_CLK_PER_CLOCK_UART1_DISABLE           ( 0x00UL << MDR_RST_CLK_PER_CLOCK_UART1_Pos    )
#define MDR_RST_CLK_PER_CLOCK_UART2_DISABLE           ( 0x00UL << MDR_RST_CLK_PER_CLOCK_UART2_Pos    )
#define MDR_RST_CLK_PER_CLOCK_SSP1_DISABLE            ( 0x00UL << MDR_RST_CLK_PER_CLOCK_SSP1_Pos     )
#define MDR_RST_CLK_PER_CLOCK_I2C_DISABLE             ( 0x00UL << MDR_RST_CLK_PER_CLOCK_I2C_Pos      )
#define MDR_RST_CLK_PER_CLOCK_POWER_DISABLE           ( 0x00UL << MDR_RST_CLK_PER_CLOCK_POWER_Pos    )
#define MDR_RST_CLK_PER_CLOCK_WWDG_DISABLE            ( 0x00UL << MDR_RST_CLK_PER_CLOCK_WWDG_Pos     )
#define MDR_RST_CLK_PER_CLOCK_IWDG_DISABLE            ( 0x00UL << MDR_RST_CLK_PER_CLOCK_IWDG_Pos     )
#define MDR_RST_CLK_PER_CLOCK_TIMER1_DISABLE          ( 0x00UL << MDR_RST_CLK_PER_CLOCK_TIMER1_Pos   )
#define MDR_RST_CLK_PER_CLOCK_TIMER2_DISABLE          ( 0x00UL << MDR_RST_CLK_PER_CLOCK_TIMER2_Pos   )
#define MDR_RST_CLK_PER_CLOCK_TIMER3_DISABLE          ( 0x00UL << MDR_RST_CLK_PER_CLOCK_TIMER3_Pos   )
#define MDR_RST_CLK_PER_CLOCK_ADC_DISABLE             ( 0x00UL << MDR_RST_CLK_PER_CLOCK_ADC_Pos      )
#define MDR_RST_CLK_PER_CLOCK_DAC_DISABLE             ( 0x00UL << MDR_RST_CLK_PER_CLOCK_DAC_Pos      )
#define MDR_RST_CLK_PER_CLOCK_COMP_DISABLE            ( 0x00UL << MDR_RST_CLK_PER_CLOCK_COMP_Pos     )
#define MDR_RST_CLK_PER_CLOCK_SSP2_DISABLE            ( 0x00UL << MDR_RST_CLK_PER_CLOCK_SSP2_Pos     )
#define MDR_RST_CLK_PER_CLOCK_PORTA_DISABLE           ( 0x00UL << MDR_RST_CLK_PER_CLOCK_PORTA_Pos    )
#define MDR_RST_CLK_PER_CLOCK_PORTB_DISABLE           ( 0x00UL << MDR_RST_CLK_PER_CLOCK_PORTB_Pos    )
#define MDR_RST_CLK_PER_CLOCK_PORTC_DISABLE           ( 0x00UL << MDR_RST_CLK_PER_CLOCK_PORTC_Pos    )
#define MDR_RST_CLK_PER_CLOCK_PORTD_DISABLE           ( 0x00UL << MDR_RST_CLK_PER_CLOCK_PORTD_Pos    )
#define MDR_RST_CLK_PER_CLOCK_PORTE_DISABLE           ( 0x00UL << MDR_RST_CLK_PER_CLOCK_PORTE_Pos    )
#define MDR_RST_CLK_PER_CLOCK_BKP_DISABLE             ( 0x00UL << MDR_RST_CLK_PER_CLOCK_BKP_Pos      )
#define MDR_RST_CLK_PER_CLOCK_PORTF_DISABLE           ( 0x00UL << MDR_RST_CLK_PER_CLOCK_PORTF_Pos    )
#define MDR_RST_CLK_PER_CLOCK_EXT_BUS_DISABLE         ( 0x00UL << MDR_RST_CLK_PER_CLOCK_EXT_BUS_Pos  )
/** @} */

/** @defgroup MDR_RST_CLK_Peripheral_Clock_Fields UART/TIMER/CAN/SSP clock fields
 * @{
 */
#define MDR_RST_CLK_UART1_BRG_Pos       0U
#define MDR_RST_CLK_UART2_BRG_Pos       8U
#define MDR_RST_CLK_UART1_CLK_EN_Pos    24U
#define MDR_RST_CLK_UART2_CLK_EN_Pos    25U

#define MDR_RST_CLK_TIMER1_BRG_Pos       0U
#define MDR_RST_CLK_TIMER2_BRG_Pos       8U
#define MDR_RST_CLK_TIMER3_BRG_Pos       16U
#define MDR_RST_CLK_TIMER1_CLK_EN_Pos    24U
#define MDR_RST_CLK_TIMER2_CLK_EN_Pos    25U
#define MDR_RST_CLK_TIMER3_CLK_EN_Pos    26U

#define MDR_RST_CLK_CAN1_BRG_Pos       0U
#define MDR_RST_CLK_CAN2_BRG_Pos       8U
#define MDR_RST_CLK_CAN1_CLK_EN_Pos    24U
#define MDR_RST_CLK_CAN2_CLK_EN_Pos    25U

#define MDR_RST_CLK_SSP1_BRG_Pos       0U
#define MDR_RST_CLK_SSP2_BRG_Pos       8U
#define MDR_RST_CLK_SSP1_CLK_EN_Pos    24U
#define MDR_RST_CLK_SSP2_CLK_EN_Pos    25U

#define MDR_RST_CLK_UART1_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_UART1_BRG_Pos    )
#define MDR_RST_CLK_UART2_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_UART2_BRG_Pos    )
#define MDR_RST_CLK_UART1_CLK_EN_Msk    ( 1UL    << MDR_RST_CLK_UART1_CLK_EN_Pos )
#define MDR_RST_CLK_UART2_CLK_EN_Msk    ( 1UL    << MDR_RST_CLK_UART2_CLK_EN_Pos )

#define MDR_RST_CLK_TIMER1_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_TIMER1_BRG_Pos    )
#define MDR_RST_CLK_TIMER2_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_TIMER2_BRG_Pos    )
#define MDR_RST_CLK_TIMER3_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_TIMER3_BRG_Pos    )
#define MDR_RST_CLK_TIMER1_CLK_EN_Msk    ( 1UL    << MDR_RST_CLK_TIMER1_CLK_EN_Pos )
#define MDR_RST_CLK_TIMER2_CLK_EN_Msk    ( 1UL    << MDR_RST_CLK_TIMER2_CLK_EN_Pos )
#define MDR_RST_CLK_TIMER3_CLK_EN_Msk    ( 1UL    << MDR_RST_CLK_TIMER3_CLK_EN_Pos )

#define MDR_RST_CLK_CAN1_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_CAN1_BRG_Pos    )
#define MDR_RST_CLK_CAN2_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_CAN2_BRG_Pos    )
#define MDR_RST_CLK_CAN1_CLK_EN_Msk    ( 1UL    << MDR_RST_CLK_CAN1_CLK_EN_Pos )
#define MDR_RST_CLK_CAN2_CLK_EN_Msk    ( 1UL    << MDR_RST_CLK_CAN2_CLK_EN_Pos )

#define MDR_RST_CLK_SSP1_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_SSP1_BRG_Pos    )
#define MDR_RST_CLK_SSP2_BRG_Msk       ( 0xFFUL << MDR_RST_CLK_SSP2_BRG_Pos    )
#define MDR_RST_CLK_SSP1_CLK_EN_Msk    ( 1UL    << MDR_RST_CLK_SSP1_CLK_EN_Pos )
#define MDR_RST_CLK_SSP2_CLK_EN_Msk    ( 1UL    << MDR_RST_CLK_SSP2_CLK_EN_Pos )

#define MDR_RST_CLK_UART1_DIV_1              ( 0x00UL << MDR_RST_CLK_UART1_BRG_Pos )
#define MDR_RST_CLK_UART1_DIV_2              ( 0x01UL << MDR_RST_CLK_UART1_BRG_Pos )
#define MDR_RST_CLK_UART1_DIV_4              ( 0x02UL << MDR_RST_CLK_UART1_BRG_Pos )
#define MDR_RST_CLK_UART1_DIV_8              ( 0x03UL << MDR_RST_CLK_UART1_BRG_Pos )
#define MDR_RST_CLK_UART1_DIV_16             ( 0x04UL << MDR_RST_CLK_UART1_BRG_Pos )
#define MDR_RST_CLK_UART1_DIV_32             ( 0x05UL << MDR_RST_CLK_UART1_BRG_Pos )
#define MDR_RST_CLK_UART1_DIV_64             ( 0x06UL << MDR_RST_CLK_UART1_BRG_Pos )
#define MDR_RST_CLK_UART1_DIV_128            ( 0x07UL << MDR_RST_CLK_UART1_BRG_Pos )
#define MDR_RST_CLK_UART2_DIV_1              ( 0x00UL << MDR_RST_CLK_UART2_BRG_Pos )
#define MDR_RST_CLK_UART2_DIV_2              ( 0x01UL << MDR_RST_CLK_UART2_BRG_Pos )
#define MDR_RST_CLK_UART2_DIV_4              ( 0x02UL << MDR_RST_CLK_UART2_BRG_Pos )
#define MDR_RST_CLK_UART2_DIV_8              ( 0x03UL << MDR_RST_CLK_UART2_BRG_Pos )
#define MDR_RST_CLK_UART2_DIV_16             ( 0x04UL << MDR_RST_CLK_UART2_BRG_Pos )
#define MDR_RST_CLK_UART2_DIV_32             ( 0x05UL << MDR_RST_CLK_UART2_BRG_Pos )
#define MDR_RST_CLK_UART2_DIV_64             ( 0x06UL << MDR_RST_CLK_UART2_BRG_Pos )
#define MDR_RST_CLK_UART2_DIV_128            ( 0x07UL << MDR_RST_CLK_UART2_BRG_Pos )

#define MDR_RST_CLK_TIMER1_DIV_1              ( 0x00UL << MDR_RST_CLK_TIMER1_BRG_Pos )
#define MDR_RST_CLK_TIMER1_DIV_2              ( 0x01UL << MDR_RST_CLK_TIMER1_BRG_Pos )
#define MDR_RST_CLK_TIMER1_DIV_4              ( 0x02UL << MDR_RST_CLK_TIMER1_BRG_Pos )
#define MDR_RST_CLK_TIMER1_DIV_8              ( 0x03UL << MDR_RST_CLK_TIMER1_BRG_Pos )
#define MDR_RST_CLK_TIMER1_DIV_16             ( 0x04UL << MDR_RST_CLK_TIMER1_BRG_Pos )
#define MDR_RST_CLK_TIMER1_DIV_32             ( 0x05UL << MDR_RST_CLK_TIMER1_BRG_Pos )
#define MDR_RST_CLK_TIMER1_DIV_64             ( 0x06UL << MDR_RST_CLK_TIMER1_BRG_Pos )
#define MDR_RST_CLK_TIMER1_DIV_128            ( 0x07UL << MDR_RST_CLK_TIMER1_BRG_Pos )
#define MDR_RST_CLK_TIMER2_DIV_1              ( 0x00UL << MDR_RST_CLK_TIMER2_BRG_Pos )
#define MDR_RST_CLK_TIMER2_DIV_2              ( 0x01UL << MDR_RST_CLK_TIMER2_BRG_Pos )
#define MDR_RST_CLK_TIMER2_DIV_4              ( 0x02UL << MDR_RST_CLK_TIMER2_BRG_Pos )
#define MDR_RST_CLK_TIMER2_DIV_8              ( 0x03UL << MDR_RST_CLK_TIMER2_BRG_Pos )
#define MDR_RST_CLK_TIMER2_DIV_16             ( 0x04UL << MDR_RST_CLK_TIMER2_BRG_Pos )
#define MDR_RST_CLK_TIMER2_DIV_32             ( 0x05UL << MDR_RST_CLK_TIMER2_BRG_Pos )
#define MDR_RST_CLK_TIMER2_DIV_64             ( 0x06UL << MDR_RST_CLK_TIMER2_BRG_Pos )
#define MDR_RST_CLK_TIMER2_DIV_128            ( 0x07UL << MDR_RST_CLK_TIMER2_BRG_Pos )
#define MDR_RST_CLK_TIMER3_DIV_1              ( 0x00UL << MDR_RST_CLK_TIMER3_BRG_Pos )
#define MDR_RST_CLK_TIMER3_DIV_2              ( 0x01UL << MDR_RST_CLK_TIMER3_BRG_Pos )
#define MDR_RST_CLK_TIMER3_DIV_4              ( 0x02UL << MDR_RST_CLK_TIMER3_BRG_Pos )
#define MDR_RST_CLK_TIMER3_DIV_8              ( 0x03UL << MDR_RST_CLK_TIMER3_BRG_Pos )
#define MDR_RST_CLK_TIMER3_DIV_16             ( 0x04UL << MDR_RST_CLK_TIMER3_BRG_Pos )
#define MDR_RST_CLK_TIMER3_DIV_32             ( 0x05UL << MDR_RST_CLK_TIMER3_BRG_Pos )
#define MDR_RST_CLK_TIMER3_DIV_64             ( 0x06UL << MDR_RST_CLK_TIMER3_BRG_Pos )
#define MDR_RST_CLK_TIMER3_DIV_128            ( 0x07UL << MDR_RST_CLK_TIMER3_BRG_Pos )

#define MDR_RST_CLK_CAN1_DIV_1              ( 0x00UL << MDR_RST_CLK_CAN1_BRG_Pos )
#define MDR_RST_CLK_CAN1_DIV_2              ( 0x01UL << MDR_RST_CLK_CAN1_BRG_Pos )
#define MDR_RST_CLK_CAN1_DIV_4              ( 0x02UL << MDR_RST_CLK_CAN1_BRG_Pos )
#define MDR_RST_CLK_CAN1_DIV_8              ( 0x03UL << MDR_RST_CLK_CAN1_BRG_Pos )
#define MDR_RST_CLK_CAN1_DIV_16             ( 0x04UL << MDR_RST_CLK_CAN1_BRG_Pos )
#define MDR_RST_CLK_CAN1_DIV_32             ( 0x05UL << MDR_RST_CLK_CAN1_BRG_Pos )
#define MDR_RST_CLK_CAN1_DIV_64             ( 0x06UL << MDR_RST_CLK_CAN1_BRG_Pos )
#define MDR_RST_CLK_CAN1_DIV_128            ( 0x07UL << MDR_RST_CLK_CAN1_BRG_Pos )

#define MDR_RST_CLK_CAN2_DIV_1              ( 0x00UL << MDR_RST_CLK_CAN2_BRG_Pos )
#define MDR_RST_CLK_CAN2_DIV_2              ( 0x01UL << MDR_RST_CLK_CAN2_BRG_Pos )
#define MDR_RST_CLK_CAN2_DIV_4              ( 0x02UL << MDR_RST_CLK_CAN2_BRG_Pos )
#define MDR_RST_CLK_CAN2_DIV_8              ( 0x03UL << MDR_RST_CLK_CAN2_BRG_Pos )
#define MDR_RST_CLK_CAN2_DIV_16             ( 0x04UL << MDR_RST_CLK_CAN2_BRG_Pos )
#define MDR_RST_CLK_CAN2_DIV_32             ( 0x05UL << MDR_RST_CLK_CAN2_BRG_Pos )
#define MDR_RST_CLK_CAN2_DIV_64             ( 0x06UL << MDR_RST_CLK_CAN2_BRG_Pos )
#define MDR_RST_CLK_CAN2_DIV_128            ( 0x07UL << MDR_RST_CLK_CAN2_BRG_Pos )

#define MDR_RST_CLK_SSP1_DIV_1              ( 0x00UL << MDR_RST_CLK_SSP1_BRG_Pos )
#define MDR_RST_CLK_SSP1_DIV_2              ( 0x01UL << MDR_RST_CLK_SSP1_BRG_Pos )
#define MDR_RST_CLK_SSP1_DIV_4              ( 0x02UL << MDR_RST_CLK_SSP1_BRG_Pos )
#define MDR_RST_CLK_SSP1_DIV_8              ( 0x03UL << MDR_RST_CLK_SSP1_BRG_Pos )
#define MDR_RST_CLK_SSP1_DIV_16             ( 0x04UL << MDR_RST_CLK_SSP1_BRG_Pos )
#define MDR_RST_CLK_SSP1_DIV_32             ( 0x05UL << MDR_RST_CLK_SSP1_BRG_Pos )
#define MDR_RST_CLK_SSP1_DIV_64             ( 0x06UL << MDR_RST_CLK_SSP1_BRG_Pos )
#define MDR_RST_CLK_SSP1_DIV_128            ( 0x07UL << MDR_RST_CLK_SSP1_BRG_Pos )

#define MDR_RST_CLK_SSP2_DIV_1              ( 0x00UL << MDR_RST_CLK_SSP2_BRG_Pos )
#define MDR_RST_CLK_SSP2_DIV_2              ( 0x01UL << MDR_RST_CLK_SSP2_BRG_Pos )
#define MDR_RST_CLK_SSP2_DIV_4              ( 0x02UL << MDR_RST_CLK_SSP2_BRG_Pos )
#define MDR_RST_CLK_SSP2_DIV_8              ( 0x03UL << MDR_RST_CLK_SSP2_BRG_Pos )
#define MDR_RST_CLK_SSP2_DIV_16             ( 0x04UL << MDR_RST_CLK_SSP2_BRG_Pos )
#define MDR_RST_CLK_SSP2_DIV_32             ( 0x05UL << MDR_RST_CLK_SSP2_BRG_Pos )
#define MDR_RST_CLK_SSP2_DIV_64             ( 0x06UL << MDR_RST_CLK_SSP2_BRG_Pos )
#define MDR_RST_CLK_SSP2_DIV_128            ( 0x07UL << MDR_RST_CLK_SSP2_BRG_Pos )

#define MDR_RST_CLK_UART1_CLK_DISABLE     ( 0UL << MDR_RST_CLK_UART1_CLK_EN_Pos )
#define MDR_RST_CLK_UART1_CLK_ENABLE      ( 1UL << MDR_RST_CLK_UART1_CLK_EN_Pos )
#define MDR_RST_CLK_UART2_CLK_DISABLE     ( 0UL << MDR_RST_CLK_UART2_CLK_EN_Pos )
#define MDR_RST_CLK_UART2_CLK_ENABLE      ( 1UL << MDR_RST_CLK_UART2_CLK_EN_Pos )

#define MDR_RST_CLK_TIMER1_CLK_DISABLE    ( 0UL << MDR_RST_CLK_TIMER1_CLK_EN_Pos )
#define MDR_RST_CLK_TIMER1_CLK_ENABLE     ( 1UL << MDR_RST_CLK_TIMER1_CLK_EN_Pos )
#define MDR_RST_CLK_TIMER2_CLK_DISABLE    ( 0UL << MDR_RST_CLK_TIMER2_CLK_EN_Pos )
#define MDR_RST_CLK_TIMER2_CLK_ENABLE     ( 1UL << MDR_RST_CLK_TIMER2_CLK_EN_Pos )
#define MDR_RST_CLK_TIMER3_CLK_DISABLE    ( 0UL << MDR_RST_CLK_TIMER3_CLK_EN_Pos )
#define MDR_RST_CLK_TIMER3_CLK_ENABLE     ( 1UL << MDR_RST_CLK_TIMER3_CLK_EN_Pos )

#define MDR_RST_CLK_CAN1_CLK_DISABLE      ( 0UL << MDR_RST_CLK_CAN1_CLK_EN_Pos )
#define MDR_RST_CLK_CAN1_CLK_ENABLE       ( 1UL << MDR_RST_CLK_CAN1_CLK_EN_Pos )
#define MDR_RST_CLK_CAN2_CLK_DISABLE      ( 0UL << MDR_RST_CLK_CAN2_CLK_EN_Pos )
#define MDR_RST_CLK_CAN2_CLK_ENABLE       ( 1UL << MDR_RST_CLK_CAN2_CLK_EN_Pos )

#define MDR_RST_CLK_SSP1_CLK_DISABLE      ( 0UL << MDR_RST_CLK_SSP1_CLK_EN_Pos )
#define MDR_RST_CLK_SSP1_CLK_ENABLE       ( 1UL << MDR_RST_CLK_SSP1_CLK_EN_Pos )
#define MDR_RST_CLK_SSP2_CLK_DISABLE      ( 0UL << MDR_RST_CLK_SSP2_CLK_EN_Pos )
#define MDR_RST_CLK_SSP2_CLK_ENABLE       ( 1UL << MDR_RST_CLK_SSP2_CLK_EN_Pos )

#define IS_MDR_RST_CLK_UART1_DIV(DIV)    (((DIV) & MDR_RST_CLK_UART1_BRG_Msk) <= MDR_RST_CLK_UART1_DIV_128)
#define IS_MDR_RST_CLK_UART2_DIV(DIV)    (((DIV) & MDR_RST_CLK_UART2_BRG_Msk) <= MDR_RST_CLK_UART2_DIV_128)
#define IS_MDR_RST_CLK_TIMER1_DIV(DIV)   (((DIV) & MDR_RST_CLK_TIMER1_BRG_Msk) <= MDR_RST_CLK_TIMER1_DIV_128)
#define IS_MDR_RST_CLK_TIMER2_DIV(DIV)   (((DIV) & MDR_RST_CLK_TIMER2_BRG_Msk) <= MDR_RST_CLK_TIMER2_DIV_128)
#define IS_MDR_RST_CLK_TIMER3_DIV(DIV)   (((DIV) & MDR_RST_CLK_TIMER3_BRG_Msk) <= MDR_RST_CLK_TIMER3_DIV_128)
#define IS_MDR_RST_CLK_CAN1_DIV(DIV)     (((DIV) & MDR_RST_CLK_CAN1_BRG_Msk) <= MDR_RST_CLK_CAN1_DIV_128)
#define IS_MDR_RST_CLK_CAN2_DIV(DIV)     (((DIV) & MDR_RST_CLK_CAN2_BRG_Msk) <= MDR_RST_CLK_CAN2_DIV_128)
#define IS_MDR_RST_CLK_SSP1_DIV(DIV)     (((DIV) & MDR_RST_CLK_SSP1_BRG_Msk) <= MDR_RST_CLK_SSP1_DIV_128)
#define IS_MDR_RST_CLK_SSP2_DIV(DIV)     (((DIV) & MDR_RST_CLK_SSP2_BRG_Msk) <= MDR_RST_CLK_SSP2_DIV_128)
/** @} */

/** @defgroup MDR_RST_CLK_Clock_State Generic clock state values
 * @{
 */
#define MDR_RST_CLK_CLOCK_DISABLE    0UL
#define MDR_RST_CLK_CLOCK_ENABLE     1UL

#define IS_MDR_RST_CLK_CLOCK_STATE(STATE)    (((STATE) == MDR_RST_CLK_CLOCK_DISABLE) || ((STATE) == MDR_RST_CLK_CLOCK_ENABLE))
/** @} */

/* Exported macro ------------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/

/**
 * @brief Returns the default CPU clock configuration.
 * @return Default CPU configuration structure.
 */
MDR_RST_CLK_CPU_InitTypeDef MDR_RST_CLK_CPU_GetDefaultConfig(void);

/**
 * @brief Configures the complete CPU clock tree.
 * @param[in] config Pointer to CPU clock configuration.
 * @return Configuration status.
 */
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_CPU_Init(const MDR_RST_CLK_CPU_InitTypeDef *config);

/**
 * @brief Returns the default USB clock configuration.
 * @return Default USB configuration structure.
 */
MDR_RST_CLK_USB_InitTypeDef MDR_RST_CLK_USB_GetDefaultConfig(void);

/**
 * @brief Configures the complete USB clock tree.
 * @param[in] config Pointer to USB clock configuration.
 * @return Configuration status.
 */
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_USB_Init(const MDR_RST_CLK_USB_InitTypeDef *config);

/**
 * @brief      Configures the ADC clock tree in one call and enables ADC_CLK.
 * @param[in]  adc_c1_source  ADC_C1 source from @ref MDR_RST_CLK_ADC_C1_Values.
 * @param[in]  adc_c2_source  ADC_C2 source from @ref MDR_RST_CLK_ADC_C2_Values.
 * @param[in]  adc_c3_div     ADC_C3 divider from @ref MDR_RST_CLK_ADC_C3_Div_Values.
 * @return     Configuration status.
 */
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_ADC_Init(	  uint32_t adc_c1_source,
	                                              uint32_t adc_c2_source,
	                                              uint32_t adc_c3_div );

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
 * @brief      Configures one UART clock and selects its enabled state.
 * @param[in]  uart     UART selector.
 * @param[in]  divider  Divider code from @ref MDR_RST_CLK_Peripheral_Divider_Values.
 * @param[in]  enable   Clock state from @ref MDR_RST_CLK_Peripheral_Clock_State.
 * @return     Configuration status.
 */
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_UART_Configure(	MDR_UART_TypeDef *USARTx,
	                                                    uint32_t divider,
	                                                    uint32_t enable );

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
 * @brief      Configures one general-purpose timer clock and selects its enabled state.
 * @param[in]  timer    Timer selector.
 * @param[in]  divider  Divider code from @ref MDR_RST_CLK_Peripheral_Divider_Values.
 * @param[in]  enable   Clock state from @ref MDR_RST_CLK_Peripheral_Clock_State.
 * @return     Configuration status.
 */
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_TIMER_Configure(	 MDR_TIMER_TypeDef *TIMERx,
	                                                     uint32_t divider,
	                                                     uint32_t enable);

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
 * @brief      Configures one CAN clock and selects its enabled state.
 * @param[in]  can      CAN selector.
 * @param[in]  divider  Divider code from @ref MDR_RST_CLK_Peripheral_Divider_Values.
 * @param[in]  enable   Clock state from @ref MDR_RST_CLK_Peripheral_Clock_State.
 * @return     Configuration status.
 * @note       Enabling performs both PER_CLOCK PCLK enable and CANx_CLK enable.
 */
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_CAN_Configure(   MDR_CAN_TypeDef *CANx,
	                                                   uint32_t divider,
	                                                   uint32_t enable );

void MDR_RST_CLK_CAN1_SetDivider(uint32_t divider);
void MDR_RST_CLK_CAN1_ClockEnable(void);
void MDR_RST_CLK_CAN1_ClockDisable(void);
void MDR_RST_CLK_CAN2_SetDivider(uint32_t divider);
void MDR_RST_CLK_CAN2_ClockEnable(void);
void MDR_RST_CLK_CAN2_ClockDisable(void);

/**
 * @brief      Configures one SSP clock and selects its enabled state.
 * @param[in]  ssp      SSP selector.
 * @param[in]  divider  Divider code from @ref MDR_RST_CLK_Peripheral_Divider_Values.
 * @param[in]  enable   Clock state from @ref MDR_RST_CLK_Peripheral_Clock_State.
 * @return     Configuration status.
 */
MDR_RST_CLK_StatusTypeDef MDR_RST_CLK_SSP_Configure(   MDR_SSP_TypeDef *SSPx,
	                                                   uint32_t divider,
	                                                   uint32_t enable);

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