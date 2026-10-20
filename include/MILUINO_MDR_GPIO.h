/** ****************************************************************************
 * @file    MILUINO_MDR_GPIO.h
 * @brief   GPIO/PORT driver for Milandr K1986BE92/94 microcontrollers
 * @author  Max @maxdev
 * @author  Roma @r3m4k
 *
 * @date    September 2026
 *
 * @details Provides low-level access to MDR_PORTx registers and a high-level
 *          GPIO configuration API. The high-level API reuses the low-level
 *          register functions and does not duplicate register writes.
 * ************************************************************************** */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef MILUINO_MDR_GPIO_H
#define MILUINO_MDR_GPIO_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>

#include "MDR32F9Q2I.h"

/* Exported types ------------------------------------------------------------*/

/**
 * @brief GPIO operation status.
 */
typedef enum
{
	MDR_GPIO_STATUS_OK = 0,
	MDR_GPIO_STATUS_INVALID_ARGUMENT
} MDR_GPIO_StatusTypeDef;

/**
 * @brief GPIO pin direction used by the high-level configuration API.
 */
typedef enum
{
	MDR_GPIO_DIRECTION_INPUT = 0,
	MDR_GPIO_DIRECTION_OUTPUT
} MDR_GPIO_DirectionTypeDef;

/**
 * @brief GPIO pin function used by the high-level configuration API.
 */
typedef enum
{
	MDR_GPIO_FUNCTION_PORT = 0,
	MDR_GPIO_FUNCTION_MAIN,
	MDR_GPIO_FUNCTION_ALTERNATE,
	MDR_GPIO_FUNCTION_REDEFINED
} MDR_GPIO_FunctionTypeDef;

/**
 * @brief GPIO analog/digital mode used by the high-level configuration API.
 */
typedef enum
{
	MDR_GPIO_MODE_ANALOG = 0,
	MDR_GPIO_MODE_DIGITAL
} MDR_GPIO_ModeTypeDef;

/**
 * @brief GPIO pull resistor state used by the high-level configuration API.
 */
typedef enum
{
	MDR_GPIO_PULL_DISABLE = 0,
	MDR_GPIO_PULL_ENABLE
} MDR_GPIO_PullStateTypeDef;

/**
 * @brief GPIO output driver mode used by the high-level configuration API.
 */
typedef enum
{
	MDR_GPIO_OUTPUT_DRIVER_CONTROLLED = 0,
	MDR_GPIO_OUTPUT_DRIVER_OPEN_DRAIN
} MDR_GPIO_OutputDriverTypeDef;

/**
 * @brief GPIO Schmitt-trigger hysteresis used by the high-level configuration API.
 */
typedef enum
{
	MDR_GPIO_SCHMITT_200_MV = 0,
	MDR_GPIO_SCHMITT_400_MV
} MDR_GPIO_SchmittTypeDef;

/**
 * @brief GPIO output slew-rate/power mode used by the high-level configuration API.
 */
typedef enum
{
	MDR_GPIO_POWER_DISABLED = 0,
	MDR_GPIO_POWER_SLOW,
	MDR_GPIO_POWER_FAST,
	MDR_GPIO_POWER_MAXIMUM
} MDR_GPIO_PowerTypeDef;

/**
 * @brief GPIO input filter state used by the high-level configuration API.
 */
typedef enum
{
	MDR_GPIO_FILTER_DISABLE = 0,
	MDR_GPIO_FILTER_ENABLE
} MDR_GPIO_FilterTypeDef;

/**
 * @brief GPIO initial output level used by the high-level configuration API.
 */
typedef enum
{
	MDR_GPIO_OUTPUT_LOW = 0,
	MDR_GPIO_OUTPUT_HIGH
} MDR_GPIO_OutputStateTypeDef;

/**
 * @brief Complete configuration for one or more GPIO pins.
 *
 * The same configuration is applied to every pin selected by the pin mask.
 */
typedef struct
{
	MDR_GPIO_DirectionTypeDef    Direction;
	MDR_GPIO_FunctionTypeDef     Function;
	MDR_GPIO_ModeTypeDef         Mode;
	MDR_GPIO_PullStateTypeDef    PullUp;
	MDR_GPIO_PullStateTypeDef    PullDown;
	MDR_GPIO_OutputDriverTypeDef OutputDriver;
	MDR_GPIO_SchmittTypeDef      Schmitt;
	MDR_GPIO_PowerTypeDef        Power;
	MDR_GPIO_FilterTypeDef       Filter;
	MDR_GPIO_OutputStateTypeDef  OutputState;
} MDR_GPIO_ConfigTypeDef;

/* Exported constants --------------------------------------------------------*/

/** @defgroup MDR_GPIO_Pin_Masks GPIO pin masks
 * @{
 */

#define MDR_GPIO_PIN_0                                                 ( 1UL << 0U )
#define MDR_GPIO_PIN_1                                                 ( 1UL << 1U )
#define MDR_GPIO_PIN_2                                                 ( 1UL << 2U )
#define MDR_GPIO_PIN_3                                                 ( 1UL << 3U )
#define MDR_GPIO_PIN_4                                                 ( 1UL << 4U )
#define MDR_GPIO_PIN_5                                                 ( 1UL << 5U )
#define MDR_GPIO_PIN_6                                                 ( 1UL << 6U )
#define MDR_GPIO_PIN_7                                                 ( 1UL << 7U )
#define MDR_GPIO_PIN_8                                                 ( 1UL << 8U )
#define MDR_GPIO_PIN_9                                                 ( 1UL << 9U )
#define MDR_GPIO_PIN_10                                                ( 1UL << 10U )
#define MDR_GPIO_PIN_11                                                ( 1UL << 11U )
#define MDR_GPIO_PIN_12                                                ( 1UL << 12U )
#define MDR_GPIO_PIN_13                                                ( 1UL << 13U )
#define MDR_GPIO_PIN_14                                                ( 1UL << 14U )
#define MDR_GPIO_PIN_15                                                ( 1UL << 15U )
#define MDR_GPIO_PIN_ALL                                               0x0000FFFFUL
/** @} */

/** @defgroup MDR_PORT_RXTX_Bits RXTX register bits
 * @{
 */
#define MDR_PORT_RXTX_PIN_0_Pos                                        0U
#define MDR_PORT_RXTX_PIN_1_Pos                                        1U
#define MDR_PORT_RXTX_PIN_2_Pos                                        2U
#define MDR_PORT_RXTX_PIN_3_Pos                                        3U
#define MDR_PORT_RXTX_PIN_4_Pos                                        4U
#define MDR_PORT_RXTX_PIN_5_Pos                                        5U
#define MDR_PORT_RXTX_PIN_6_Pos                                        6U
#define MDR_PORT_RXTX_PIN_7_Pos                                        7U
#define MDR_PORT_RXTX_PIN_8_Pos                                        8U
#define MDR_PORT_RXTX_PIN_9_Pos                                        9U
#define MDR_PORT_RXTX_PIN_10_Pos                                       10U
#define MDR_PORT_RXTX_PIN_11_Pos                                       11U
#define MDR_PORT_RXTX_PIN_12_Pos                                       12U
#define MDR_PORT_RXTX_PIN_13_Pos                                       13U
#define MDR_PORT_RXTX_PIN_14_Pos                                       14U
#define MDR_PORT_RXTX_PIN_15_Pos                                       15U

#define MDR_PORT_RXTX_PIN_0_Msk                                        ( 0x01UL << MDR_PORT_RXTX_PIN_0_Pos  )
#define MDR_PORT_RXTX_PIN_1_Msk                                        ( 0x01UL << MDR_PORT_RXTX_PIN_1_Pos  )
#define MDR_PORT_RXTX_PIN_2_Msk                                        ( 0x01UL << MDR_PORT_RXTX_PIN_2_Pos  )
#define MDR_PORT_RXTX_PIN_3_Msk                                        ( 0x01UL << MDR_PORT_RXTX_PIN_3_Pos  )
#define MDR_PORT_RXTX_PIN_4_Msk                                        ( 0x01UL << MDR_PORT_RXTX_PIN_4_Pos  )
#define MDR_PORT_RXTX_PIN_5_Msk                                        ( 0x01UL << MDR_PORT_RXTX_PIN_5_Pos  )
#define MDR_PORT_RXTX_PIN_6_Msk                                        ( 0x01UL << MDR_PORT_RXTX_PIN_6_Pos  )
#define MDR_PORT_RXTX_PIN_7_Msk                                        ( 0x01UL << MDR_PORT_RXTX_PIN_7_Pos  )
#define MDR_PORT_RXTX_PIN_8_Msk                                        ( 0x01UL << MDR_PORT_RXTX_PIN_8_Pos  )
#define MDR_PORT_RXTX_PIN_9_Msk                                        ( 0x01UL << MDR_PORT_RXTX_PIN_9_Pos  )
#define MDR_PORT_RXTX_PIN_10_Msk                                       ( 0x01UL << MDR_PORT_RXTX_PIN_10_Pos )
#define MDR_PORT_RXTX_PIN_11_Msk                                       ( 0x01UL << MDR_PORT_RXTX_PIN_11_Pos )
#define MDR_PORT_RXTX_PIN_12_Msk                                       ( 0x01UL << MDR_PORT_RXTX_PIN_12_Pos )
#define MDR_PORT_RXTX_PIN_13_Msk                                       ( 0x01UL << MDR_PORT_RXTX_PIN_13_Pos )
#define MDR_PORT_RXTX_PIN_14_Msk                                       ( 0x01UL << MDR_PORT_RXTX_PIN_14_Pos )
#define MDR_PORT_RXTX_PIN_15_Msk                                       ( 0x01UL << MDR_PORT_RXTX_PIN_15_Pos )

#define MDR_PORT_RXTX_PIN_0_LOW                                        ( 0x00UL << MDR_PORT_RXTX_PIN_0_Pos  )
#define MDR_PORT_RXTX_PIN_1_LOW                                        ( 0x00UL << MDR_PORT_RXTX_PIN_1_Pos  )
#define MDR_PORT_RXTX_PIN_2_LOW                                        ( 0x00UL << MDR_PORT_RXTX_PIN_2_Pos  )
#define MDR_PORT_RXTX_PIN_3_LOW                                        ( 0x00UL << MDR_PORT_RXTX_PIN_3_Pos  )
#define MDR_PORT_RXTX_PIN_4_LOW                                        ( 0x00UL << MDR_PORT_RXTX_PIN_4_Pos  )
#define MDR_PORT_RXTX_PIN_5_LOW                                        ( 0x00UL << MDR_PORT_RXTX_PIN_5_Pos  )
#define MDR_PORT_RXTX_PIN_6_LOW                                        ( 0x00UL << MDR_PORT_RXTX_PIN_6_Pos  )
#define MDR_PORT_RXTX_PIN_7_LOW                                        ( 0x00UL << MDR_PORT_RXTX_PIN_7_Pos  )
#define MDR_PORT_RXTX_PIN_8_LOW                                        ( 0x00UL << MDR_PORT_RXTX_PIN_8_Pos  )
#define MDR_PORT_RXTX_PIN_9_LOW                                        ( 0x00UL << MDR_PORT_RXTX_PIN_9_Pos  )
#define MDR_PORT_RXTX_PIN_10_LOW                                       ( 0x00UL << MDR_PORT_RXTX_PIN_10_Pos )
#define MDR_PORT_RXTX_PIN_11_LOW                                       ( 0x00UL << MDR_PORT_RXTX_PIN_11_Pos )
#define MDR_PORT_RXTX_PIN_12_LOW                                       ( 0x00UL << MDR_PORT_RXTX_PIN_12_Pos )
#define MDR_PORT_RXTX_PIN_13_LOW                                       ( 0x00UL << MDR_PORT_RXTX_PIN_13_Pos )
#define MDR_PORT_RXTX_PIN_14_LOW                                       ( 0x00UL << MDR_PORT_RXTX_PIN_14_Pos )
#define MDR_PORT_RXTX_PIN_15_LOW                                       ( 0x00UL << MDR_PORT_RXTX_PIN_15_Pos )

#define MDR_PORT_RXTX_PIN_0_HIGH                                       ( 0x01UL << MDR_PORT_RXTX_PIN_0_Pos  )
#define MDR_PORT_RXTX_PIN_1_HIGH                                       ( 0x01UL << MDR_PORT_RXTX_PIN_1_Pos  )
#define MDR_PORT_RXTX_PIN_2_HIGH                                       ( 0x01UL << MDR_PORT_RXTX_PIN_2_Pos  )
#define MDR_PORT_RXTX_PIN_3_HIGH                                       ( 0x01UL << MDR_PORT_RXTX_PIN_3_Pos  )
#define MDR_PORT_RXTX_PIN_4_HIGH                                       ( 0x01UL << MDR_PORT_RXTX_PIN_4_Pos  )
#define MDR_PORT_RXTX_PIN_5_HIGH                                       ( 0x01UL << MDR_PORT_RXTX_PIN_5_Pos  )
#define MDR_PORT_RXTX_PIN_6_HIGH                                       ( 0x01UL << MDR_PORT_RXTX_PIN_6_Pos  )
#define MDR_PORT_RXTX_PIN_7_HIGH                                       ( 0x01UL << MDR_PORT_RXTX_PIN_7_Pos  )
#define MDR_PORT_RXTX_PIN_8_HIGH                                       ( 0x01UL << MDR_PORT_RXTX_PIN_8_Pos  )
#define MDR_PORT_RXTX_PIN_9_HIGH                                       ( 0x01UL << MDR_PORT_RXTX_PIN_9_Pos  )
#define MDR_PORT_RXTX_PIN_10_HIGH                                      ( 0x01UL << MDR_PORT_RXTX_PIN_10_Pos )
#define MDR_PORT_RXTX_PIN_11_HIGH                                      ( 0x01UL << MDR_PORT_RXTX_PIN_11_Pos )
#define MDR_PORT_RXTX_PIN_12_HIGH                                      ( 0x01UL << MDR_PORT_RXTX_PIN_12_Pos )
#define MDR_PORT_RXTX_PIN_13_HIGH                                      ( 0x01UL << MDR_PORT_RXTX_PIN_13_Pos )
#define MDR_PORT_RXTX_PIN_14_HIGH                                      ( 0x01UL << MDR_PORT_RXTX_PIN_14_Pos )
#define MDR_PORT_RXTX_PIN_15_HIGH                                      ( 0x01UL << MDR_PORT_RXTX_PIN_15_Pos )
/** @} */

/** @defgroup MDR_PORT_OE_Bits OE register bits
 * @{
 */
#define MDR_PORT_OE_PIN_0_Pos                                          0U
#define MDR_PORT_OE_PIN_1_Pos                                          1U
#define MDR_PORT_OE_PIN_2_Pos                                          2U
#define MDR_PORT_OE_PIN_3_Pos                                          3U
#define MDR_PORT_OE_PIN_4_Pos                                          4U
#define MDR_PORT_OE_PIN_5_Pos                                          5U
#define MDR_PORT_OE_PIN_6_Pos                                          6U
#define MDR_PORT_OE_PIN_7_Pos                                          7U
#define MDR_PORT_OE_PIN_8_Pos                                          8U
#define MDR_PORT_OE_PIN_9_Pos                                          9U
#define MDR_PORT_OE_PIN_10_Pos                                         10U
#define MDR_PORT_OE_PIN_11_Pos                                         11U
#define MDR_PORT_OE_PIN_12_Pos                                         12U
#define MDR_PORT_OE_PIN_13_Pos                                         13U
#define MDR_PORT_OE_PIN_14_Pos                                         14U
#define MDR_PORT_OE_PIN_15_Pos                                         15U

#define MDR_PORT_OE_PIN_0_Msk                                          ( 0x01UL << MDR_PORT_OE_PIN_0_Pos  )
#define MDR_PORT_OE_PIN_1_Msk                                          ( 0x01UL << MDR_PORT_OE_PIN_1_Pos  )
#define MDR_PORT_OE_PIN_2_Msk                                          ( 0x01UL << MDR_PORT_OE_PIN_2_Pos  )
#define MDR_PORT_OE_PIN_3_Msk                                          ( 0x01UL << MDR_PORT_OE_PIN_3_Pos  )
#define MDR_PORT_OE_PIN_4_Msk                                          ( 0x01UL << MDR_PORT_OE_PIN_4_Pos  )
#define MDR_PORT_OE_PIN_5_Msk                                          ( 0x01UL << MDR_PORT_OE_PIN_5_Pos  )
#define MDR_PORT_OE_PIN_6_Msk                                          ( 0x01UL << MDR_PORT_OE_PIN_6_Pos  )
#define MDR_PORT_OE_PIN_7_Msk                                          ( 0x01UL << MDR_PORT_OE_PIN_7_Pos  )
#define MDR_PORT_OE_PIN_8_Msk                                          ( 0x01UL << MDR_PORT_OE_PIN_8_Pos  )
#define MDR_PORT_OE_PIN_9_Msk                                          ( 0x01UL << MDR_PORT_OE_PIN_9_Pos  )
#define MDR_PORT_OE_PIN_10_Msk                                         ( 0x01UL << MDR_PORT_OE_PIN_10_Pos )
#define MDR_PORT_OE_PIN_11_Msk                                         ( 0x01UL << MDR_PORT_OE_PIN_11_Pos )
#define MDR_PORT_OE_PIN_12_Msk                                         ( 0x01UL << MDR_PORT_OE_PIN_12_Pos )
#define MDR_PORT_OE_PIN_13_Msk                                         ( 0x01UL << MDR_PORT_OE_PIN_13_Pos )
#define MDR_PORT_OE_PIN_14_Msk                                         ( 0x01UL << MDR_PORT_OE_PIN_14_Pos )
#define MDR_PORT_OE_PIN_15_Msk                                         ( 0x01UL << MDR_PORT_OE_PIN_15_Pos )

#define MDR_PORT_OE_PIN_0_INPUT                                        ( 0x00UL << MDR_PORT_OE_PIN_0_Pos  )
#define MDR_PORT_OE_PIN_1_INPUT                                        ( 0x00UL << MDR_PORT_OE_PIN_1_Pos  )
#define MDR_PORT_OE_PIN_2_INPUT                                        ( 0x00UL << MDR_PORT_OE_PIN_2_Pos  )
#define MDR_PORT_OE_PIN_3_INPUT                                        ( 0x00UL << MDR_PORT_OE_PIN_3_Pos  )
#define MDR_PORT_OE_PIN_4_INPUT                                        ( 0x00UL << MDR_PORT_OE_PIN_4_Pos  )
#define MDR_PORT_OE_PIN_5_INPUT                                        ( 0x00UL << MDR_PORT_OE_PIN_5_Pos  )
#define MDR_PORT_OE_PIN_6_INPUT                                        ( 0x00UL << MDR_PORT_OE_PIN_6_Pos  )
#define MDR_PORT_OE_PIN_7_INPUT                                        ( 0x00UL << MDR_PORT_OE_PIN_7_Pos  )
#define MDR_PORT_OE_PIN_8_INPUT                                        ( 0x00UL << MDR_PORT_OE_PIN_8_Pos  )
#define MDR_PORT_OE_PIN_9_INPUT                                        ( 0x00UL << MDR_PORT_OE_PIN_9_Pos  )
#define MDR_PORT_OE_PIN_10_INPUT                                       ( 0x00UL << MDR_PORT_OE_PIN_10_Pos )
#define MDR_PORT_OE_PIN_11_INPUT                                       ( 0x00UL << MDR_PORT_OE_PIN_11_Pos )
#define MDR_PORT_OE_PIN_12_INPUT                                       ( 0x00UL << MDR_PORT_OE_PIN_12_Pos )
#define MDR_PORT_OE_PIN_13_INPUT                                       ( 0x00UL << MDR_PORT_OE_PIN_13_Pos )
#define MDR_PORT_OE_PIN_14_INPUT                                       ( 0x00UL << MDR_PORT_OE_PIN_14_Pos )
#define MDR_PORT_OE_PIN_15_INPUT                                       ( 0x00UL << MDR_PORT_OE_PIN_15_Pos )

#define MDR_PORT_OE_PIN_0_OUTPUT                                       ( 0x01UL << MDR_PORT_OE_PIN_0_Pos  )
#define MDR_PORT_OE_PIN_1_OUTPUT                                       ( 0x01UL << MDR_PORT_OE_PIN_1_Pos  )
#define MDR_PORT_OE_PIN_2_OUTPUT                                       ( 0x01UL << MDR_PORT_OE_PIN_2_Pos  )
#define MDR_PORT_OE_PIN_3_OUTPUT                                       ( 0x01UL << MDR_PORT_OE_PIN_3_Pos  )
#define MDR_PORT_OE_PIN_4_OUTPUT                                       ( 0x01UL << MDR_PORT_OE_PIN_4_Pos  )
#define MDR_PORT_OE_PIN_5_OUTPUT                                       ( 0x01UL << MDR_PORT_OE_PIN_5_Pos  )
#define MDR_PORT_OE_PIN_6_OUTPUT                                       ( 0x01UL << MDR_PORT_OE_PIN_6_Pos  )
#define MDR_PORT_OE_PIN_7_OUTPUT                                       ( 0x01UL << MDR_PORT_OE_PIN_7_Pos  )
#define MDR_PORT_OE_PIN_8_OUTPUT                                       ( 0x01UL << MDR_PORT_OE_PIN_8_Pos  )
#define MDR_PORT_OE_PIN_9_OUTPUT                                       ( 0x01UL << MDR_PORT_OE_PIN_9_Pos  )
#define MDR_PORT_OE_PIN_10_OUTPUT                                      ( 0x01UL << MDR_PORT_OE_PIN_10_Pos )
#define MDR_PORT_OE_PIN_11_OUTPUT                                      ( 0x01UL << MDR_PORT_OE_PIN_11_Pos )
#define MDR_PORT_OE_PIN_12_OUTPUT                                      ( 0x01UL << MDR_PORT_OE_PIN_12_Pos )
#define MDR_PORT_OE_PIN_13_OUTPUT                                      ( 0x01UL << MDR_PORT_OE_PIN_13_Pos )
#define MDR_PORT_OE_PIN_14_OUTPUT                                      ( 0x01UL << MDR_PORT_OE_PIN_14_Pos )
#define MDR_PORT_OE_PIN_15_OUTPUT                                      ( 0x01UL << MDR_PORT_OE_PIN_15_Pos )
/** @} */

/** @defgroup MDR_PORT_FUNC_Fields FUNC register fields
 * @{
 */
#define MDR_PORT_FUNC_PIN_0_Pos                                        0U
#define MDR_PORT_FUNC_PIN_1_Pos                                        2U
#define MDR_PORT_FUNC_PIN_2_Pos                                        4U
#define MDR_PORT_FUNC_PIN_3_Pos                                        6U
#define MDR_PORT_FUNC_PIN_4_Pos                                        8U
#define MDR_PORT_FUNC_PIN_5_Pos                                        10U
#define MDR_PORT_FUNC_PIN_6_Pos                                        12U
#define MDR_PORT_FUNC_PIN_7_Pos                                        14U
#define MDR_PORT_FUNC_PIN_8_Pos                                        16U
#define MDR_PORT_FUNC_PIN_9_Pos                                        18U
#define MDR_PORT_FUNC_PIN_10_Pos                                       20U
#define MDR_PORT_FUNC_PIN_11_Pos                                       22U
#define MDR_PORT_FUNC_PIN_12_Pos                                       24U
#define MDR_PORT_FUNC_PIN_13_Pos                                       26U
#define MDR_PORT_FUNC_PIN_14_Pos                                       28U
#define MDR_PORT_FUNC_PIN_15_Pos                                       30U

#define MDR_PORT_FUNC_PIN_0_Msk                                        ( 0x03UL << MDR_PORT_FUNC_PIN_0_Pos  )
#define MDR_PORT_FUNC_PIN_1_Msk                                        ( 0x03UL << MDR_PORT_FUNC_PIN_1_Pos  )
#define MDR_PORT_FUNC_PIN_2_Msk                                        ( 0x03UL << MDR_PORT_FUNC_PIN_2_Pos  )
#define MDR_PORT_FUNC_PIN_3_Msk                                        ( 0x03UL << MDR_PORT_FUNC_PIN_3_Pos  )
#define MDR_PORT_FUNC_PIN_4_Msk                                        ( 0x03UL << MDR_PORT_FUNC_PIN_4_Pos  )
#define MDR_PORT_FUNC_PIN_5_Msk                                        ( 0x03UL << MDR_PORT_FUNC_PIN_5_Pos  )
#define MDR_PORT_FUNC_PIN_6_Msk                                        ( 0x03UL << MDR_PORT_FUNC_PIN_6_Pos  )
#define MDR_PORT_FUNC_PIN_7_Msk                                        ( 0x03UL << MDR_PORT_FUNC_PIN_7_Pos  )
#define MDR_PORT_FUNC_PIN_8_Msk                                        ( 0x03UL << MDR_PORT_FUNC_PIN_8_Pos  )
#define MDR_PORT_FUNC_PIN_9_Msk                                        ( 0x03UL << MDR_PORT_FUNC_PIN_9_Pos  )
#define MDR_PORT_FUNC_PIN_10_Msk                                       ( 0x03UL << MDR_PORT_FUNC_PIN_10_Pos )
#define MDR_PORT_FUNC_PIN_11_Msk                                       ( 0x03UL << MDR_PORT_FUNC_PIN_11_Pos )
#define MDR_PORT_FUNC_PIN_12_Msk                                       ( 0x03UL << MDR_PORT_FUNC_PIN_12_Pos )
#define MDR_PORT_FUNC_PIN_13_Msk                                       ( 0x03UL << MDR_PORT_FUNC_PIN_13_Pos )
#define MDR_PORT_FUNC_PIN_14_Msk                                       ( 0x03UL << MDR_PORT_FUNC_PIN_14_Pos )
#define MDR_PORT_FUNC_PIN_15_Msk                                       ( 0x03UL << MDR_PORT_FUNC_PIN_15_Pos )

#define MDR_PORT_FUNC_PIN_0_PORT                                       ( 0x00UL << MDR_PORT_FUNC_PIN_0_Pos  )
#define MDR_PORT_FUNC_PIN_1_PORT                                       ( 0x00UL << MDR_PORT_FUNC_PIN_1_Pos  )
#define MDR_PORT_FUNC_PIN_2_PORT                                       ( 0x00UL << MDR_PORT_FUNC_PIN_2_Pos  )
#define MDR_PORT_FUNC_PIN_3_PORT                                       ( 0x00UL << MDR_PORT_FUNC_PIN_3_Pos  )
#define MDR_PORT_FUNC_PIN_4_PORT                                       ( 0x00UL << MDR_PORT_FUNC_PIN_4_Pos  )
#define MDR_PORT_FUNC_PIN_5_PORT                                       ( 0x00UL << MDR_PORT_FUNC_PIN_5_Pos  )
#define MDR_PORT_FUNC_PIN_6_PORT                                       ( 0x00UL << MDR_PORT_FUNC_PIN_6_Pos  )
#define MDR_PORT_FUNC_PIN_7_PORT                                       ( 0x00UL << MDR_PORT_FUNC_PIN_7_Pos  )
#define MDR_PORT_FUNC_PIN_8_PORT                                       ( 0x00UL << MDR_PORT_FUNC_PIN_8_Pos  )
#define MDR_PORT_FUNC_PIN_9_PORT                                       ( 0x00UL << MDR_PORT_FUNC_PIN_9_Pos  )
#define MDR_PORT_FUNC_PIN_10_PORT                                      ( 0x00UL << MDR_PORT_FUNC_PIN_10_Pos )
#define MDR_PORT_FUNC_PIN_11_PORT                                      ( 0x00UL << MDR_PORT_FUNC_PIN_11_Pos )
#define MDR_PORT_FUNC_PIN_12_PORT                                      ( 0x00UL << MDR_PORT_FUNC_PIN_12_Pos )
#define MDR_PORT_FUNC_PIN_13_PORT                                      ( 0x00UL << MDR_PORT_FUNC_PIN_13_Pos )
#define MDR_PORT_FUNC_PIN_14_PORT                                      ( 0x00UL << MDR_PORT_FUNC_PIN_14_Pos )
#define MDR_PORT_FUNC_PIN_15_PORT                                      ( 0x00UL << MDR_PORT_FUNC_PIN_15_Pos )

#define MDR_PORT_FUNC_PIN_0_MAIN                                       ( 0x01UL << MDR_PORT_FUNC_PIN_0_Pos  )
#define MDR_PORT_FUNC_PIN_1_MAIN                                       ( 0x01UL << MDR_PORT_FUNC_PIN_1_Pos  )
#define MDR_PORT_FUNC_PIN_2_MAIN                                       ( 0x01UL << MDR_PORT_FUNC_PIN_2_Pos  )
#define MDR_PORT_FUNC_PIN_3_MAIN                                       ( 0x01UL << MDR_PORT_FUNC_PIN_3_Pos  )
#define MDR_PORT_FUNC_PIN_4_MAIN                                       ( 0x01UL << MDR_PORT_FUNC_PIN_4_Pos  )
#define MDR_PORT_FUNC_PIN_5_MAIN                                       ( 0x01UL << MDR_PORT_FUNC_PIN_5_Pos  )
#define MDR_PORT_FUNC_PIN_6_MAIN                                       ( 0x01UL << MDR_PORT_FUNC_PIN_6_Pos  )
#define MDR_PORT_FUNC_PIN_7_MAIN                                       ( 0x01UL << MDR_PORT_FUNC_PIN_7_Pos  )
#define MDR_PORT_FUNC_PIN_8_MAIN                                       ( 0x01UL << MDR_PORT_FUNC_PIN_8_Pos  )
#define MDR_PORT_FUNC_PIN_9_MAIN                                       ( 0x01UL << MDR_PORT_FUNC_PIN_9_Pos  )
#define MDR_PORT_FUNC_PIN_10_MAIN                                      ( 0x01UL << MDR_PORT_FUNC_PIN_10_Pos )
#define MDR_PORT_FUNC_PIN_11_MAIN                                      ( 0x01UL << MDR_PORT_FUNC_PIN_11_Pos )
#define MDR_PORT_FUNC_PIN_12_MAIN                                      ( 0x01UL << MDR_PORT_FUNC_PIN_12_Pos )
#define MDR_PORT_FUNC_PIN_13_MAIN                                      ( 0x01UL << MDR_PORT_FUNC_PIN_13_Pos )
#define MDR_PORT_FUNC_PIN_14_MAIN                                      ( 0x01UL << MDR_PORT_FUNC_PIN_14_Pos )
#define MDR_PORT_FUNC_PIN_15_MAIN                                      ( 0x01UL << MDR_PORT_FUNC_PIN_15_Pos )

#define MDR_PORT_FUNC_PIN_0_ALTERNATE                                  ( 0x02UL << MDR_PORT_FUNC_PIN_0_Pos  )
#define MDR_PORT_FUNC_PIN_1_ALTERNATE                                  ( 0x02UL << MDR_PORT_FUNC_PIN_1_Pos  )
#define MDR_PORT_FUNC_PIN_2_ALTERNATE                                  ( 0x02UL << MDR_PORT_FUNC_PIN_2_Pos  )
#define MDR_PORT_FUNC_PIN_3_ALTERNATE                                  ( 0x02UL << MDR_PORT_FUNC_PIN_3_Pos  )
#define MDR_PORT_FUNC_PIN_4_ALTERNATE                                  ( 0x02UL << MDR_PORT_FUNC_PIN_4_Pos  )
#define MDR_PORT_FUNC_PIN_5_ALTERNATE                                  ( 0x02UL << MDR_PORT_FUNC_PIN_5_Pos  )
#define MDR_PORT_FUNC_PIN_6_ALTERNATE                                  ( 0x02UL << MDR_PORT_FUNC_PIN_6_Pos  )
#define MDR_PORT_FUNC_PIN_7_ALTERNATE                                  ( 0x02UL << MDR_PORT_FUNC_PIN_7_Pos  )
#define MDR_PORT_FUNC_PIN_8_ALTERNATE                                  ( 0x02UL << MDR_PORT_FUNC_PIN_8_Pos  )
#define MDR_PORT_FUNC_PIN_9_ALTERNATE                                  ( 0x02UL << MDR_PORT_FUNC_PIN_9_Pos  )
#define MDR_PORT_FUNC_PIN_10_ALTERNATE                                 ( 0x02UL << MDR_PORT_FUNC_PIN_10_Pos )
#define MDR_PORT_FUNC_PIN_11_ALTERNATE                                 ( 0x02UL << MDR_PORT_FUNC_PIN_11_Pos )
#define MDR_PORT_FUNC_PIN_12_ALTERNATE                                 ( 0x02UL << MDR_PORT_FUNC_PIN_12_Pos )
#define MDR_PORT_FUNC_PIN_13_ALTERNATE                                 ( 0x02UL << MDR_PORT_FUNC_PIN_13_Pos )
#define MDR_PORT_FUNC_PIN_14_ALTERNATE                                 ( 0x02UL << MDR_PORT_FUNC_PIN_14_Pos )
#define MDR_PORT_FUNC_PIN_15_ALTERNATE                                 ( 0x02UL << MDR_PORT_FUNC_PIN_15_Pos )

#define MDR_PORT_FUNC_PIN_0_REDEFINED                                  ( 0x03UL << MDR_PORT_FUNC_PIN_0_Pos  )
#define MDR_PORT_FUNC_PIN_1_REDEFINED                                  ( 0x03UL << MDR_PORT_FUNC_PIN_1_Pos  )
#define MDR_PORT_FUNC_PIN_2_REDEFINED                                  ( 0x03UL << MDR_PORT_FUNC_PIN_2_Pos  )
#define MDR_PORT_FUNC_PIN_3_REDEFINED                                  ( 0x03UL << MDR_PORT_FUNC_PIN_3_Pos  )
#define MDR_PORT_FUNC_PIN_4_REDEFINED                                  ( 0x03UL << MDR_PORT_FUNC_PIN_4_Pos  )
#define MDR_PORT_FUNC_PIN_5_REDEFINED                                  ( 0x03UL << MDR_PORT_FUNC_PIN_5_Pos  )
#define MDR_PORT_FUNC_PIN_6_REDEFINED                                  ( 0x03UL << MDR_PORT_FUNC_PIN_6_Pos  )
#define MDR_PORT_FUNC_PIN_7_REDEFINED                                  ( 0x03UL << MDR_PORT_FUNC_PIN_7_Pos  )
#define MDR_PORT_FUNC_PIN_8_REDEFINED                                  ( 0x03UL << MDR_PORT_FUNC_PIN_8_Pos  )
#define MDR_PORT_FUNC_PIN_9_REDEFINED                                  ( 0x03UL << MDR_PORT_FUNC_PIN_9_Pos  )
#define MDR_PORT_FUNC_PIN_10_REDEFINED                                 ( 0x03UL << MDR_PORT_FUNC_PIN_10_Pos )
#define MDR_PORT_FUNC_PIN_11_REDEFINED                                 ( 0x03UL << MDR_PORT_FUNC_PIN_11_Pos )
#define MDR_PORT_FUNC_PIN_12_REDEFINED                                 ( 0x03UL << MDR_PORT_FUNC_PIN_12_Pos )
#define MDR_PORT_FUNC_PIN_13_REDEFINED                                 ( 0x03UL << MDR_PORT_FUNC_PIN_13_Pos )
#define MDR_PORT_FUNC_PIN_14_REDEFINED                                 ( 0x03UL << MDR_PORT_FUNC_PIN_14_Pos )
#define MDR_PORT_FUNC_PIN_15_REDEFINED                                 ( 0x03UL << MDR_PORT_FUNC_PIN_15_Pos )
/** @} */

/** @defgroup MDR_PORT_ANALOG_Bits ANALOG register bits
 * @{
 */
#define MDR_PORT_ANALOG_PIN_0_Pos                                      0U
#define MDR_PORT_ANALOG_PIN_1_Pos                                      1U
#define MDR_PORT_ANALOG_PIN_2_Pos                                      2U
#define MDR_PORT_ANALOG_PIN_3_Pos                                      3U
#define MDR_PORT_ANALOG_PIN_4_Pos                                      4U
#define MDR_PORT_ANALOG_PIN_5_Pos                                      5U
#define MDR_PORT_ANALOG_PIN_6_Pos                                      6U
#define MDR_PORT_ANALOG_PIN_7_Pos                                      7U
#define MDR_PORT_ANALOG_PIN_8_Pos                                      8U
#define MDR_PORT_ANALOG_PIN_9_Pos                                      9U
#define MDR_PORT_ANALOG_PIN_10_Pos                                     10U
#define MDR_PORT_ANALOG_PIN_11_Pos                                     11U
#define MDR_PORT_ANALOG_PIN_12_Pos                                     12U
#define MDR_PORT_ANALOG_PIN_13_Pos                                     13U
#define MDR_PORT_ANALOG_PIN_14_Pos                                     14U
#define MDR_PORT_ANALOG_PIN_15_Pos                                     15U

#define MDR_PORT_ANALOG_PIN_0_Msk                                      ( 0x01UL << MDR_PORT_ANALOG_PIN_0_Pos )
#define MDR_PORT_ANALOG_PIN_1_Msk                                      ( 0x01UL << MDR_PORT_ANALOG_PIN_1_Pos )
#define MDR_PORT_ANALOG_PIN_2_Msk                                      ( 0x01UL << MDR_PORT_ANALOG_PIN_2_Pos )
#define MDR_PORT_ANALOG_PIN_3_Msk                                      ( 0x01UL << MDR_PORT_ANALOG_PIN_3_Pos )
#define MDR_PORT_ANALOG_PIN_4_Msk                                      ( 0x01UL << MDR_PORT_ANALOG_PIN_4_Pos )
#define MDR_PORT_ANALOG_PIN_5_Msk                                      ( 0x01UL << MDR_PORT_ANALOG_PIN_5_Pos )
#define MDR_PORT_ANALOG_PIN_6_Msk                                      ( 0x01UL << MDR_PORT_ANALOG_PIN_6_Pos )
#define MDR_PORT_ANALOG_PIN_7_Msk                                      ( 0x01UL << MDR_PORT_ANALOG_PIN_7_Pos )
#define MDR_PORT_ANALOG_PIN_8_Msk                                      ( 0x01UL << MDR_PORT_ANALOG_PIN_8_Pos )
#define MDR_PORT_ANALOG_PIN_9_Msk                                      ( 0x01UL << MDR_PORT_ANALOG_PIN_9_Pos )
#define MDR_PORT_ANALOG_PIN_10_Msk                                     ( 0x01UL << MDR_PORT_ANALOG_PIN_10_Pos )
#define MDR_PORT_ANALOG_PIN_11_Msk                                     ( 0x01UL << MDR_PORT_ANALOG_PIN_11_Pos )
#define MDR_PORT_ANALOG_PIN_12_Msk                                     ( 0x01UL << MDR_PORT_ANALOG_PIN_12_Pos )
#define MDR_PORT_ANALOG_PIN_13_Msk                                     ( 0x01UL << MDR_PORT_ANALOG_PIN_13_Pos )
#define MDR_PORT_ANALOG_PIN_14_Msk                                     ( 0x01UL << MDR_PORT_ANALOG_PIN_14_Pos )
#define MDR_PORT_ANALOG_PIN_15_Msk                                     ( 0x01UL << MDR_PORT_ANALOG_PIN_15_Pos )

#define MDR_PORT_ANALOG_PIN_0_ANALOG                                   ( 0x00UL << MDR_PORT_ANALOG_PIN_0_Pos  )
#define MDR_PORT_ANALOG_PIN_1_ANALOG                                   ( 0x00UL << MDR_PORT_ANALOG_PIN_1_Pos  )
#define MDR_PORT_ANALOG_PIN_2_ANALOG                                   ( 0x00UL << MDR_PORT_ANALOG_PIN_2_Pos  )
#define MDR_PORT_ANALOG_PIN_3_ANALOG                                   ( 0x00UL << MDR_PORT_ANALOG_PIN_3_Pos  )
#define MDR_PORT_ANALOG_PIN_4_ANALOG                                   ( 0x00UL << MDR_PORT_ANALOG_PIN_4_Pos  )
#define MDR_PORT_ANALOG_PIN_5_ANALOG                                   ( 0x00UL << MDR_PORT_ANALOG_PIN_5_Pos  )
#define MDR_PORT_ANALOG_PIN_6_ANALOG                                   ( 0x00UL << MDR_PORT_ANALOG_PIN_6_Pos  )
#define MDR_PORT_ANALOG_PIN_7_ANALOG                                   ( 0x00UL << MDR_PORT_ANALOG_PIN_7_Pos  )
#define MDR_PORT_ANALOG_PIN_8_ANALOG                                   ( 0x00UL << MDR_PORT_ANALOG_PIN_8_Pos  )
#define MDR_PORT_ANALOG_PIN_9_ANALOG                                   ( 0x00UL << MDR_PORT_ANALOG_PIN_9_Pos  )
#define MDR_PORT_ANALOG_PIN_10_ANALOG                                  ( 0x00UL << MDR_PORT_ANALOG_PIN_10_Pos )
#define MDR_PORT_ANALOG_PIN_11_ANALOG                                  ( 0x00UL << MDR_PORT_ANALOG_PIN_11_Pos )
#define MDR_PORT_ANALOG_PIN_12_ANALOG                                  ( 0x00UL << MDR_PORT_ANALOG_PIN_12_Pos )
#define MDR_PORT_ANALOG_PIN_13_ANALOG                                  ( 0x00UL << MDR_PORT_ANALOG_PIN_13_Pos )
#define MDR_PORT_ANALOG_PIN_14_ANALOG                                  ( 0x00UL << MDR_PORT_ANALOG_PIN_14_Pos )
#define MDR_PORT_ANALOG_PIN_15_ANALOG                                  ( 0x00UL << MDR_PORT_ANALOG_PIN_15_Pos )

#define MDR_PORT_ANALOG_PIN_0_DIGITAL                                  ( 0x01UL << MDR_PORT_ANALOG_PIN_0_Pos  )
#define MDR_PORT_ANALOG_PIN_1_DIGITAL                                  ( 0x01UL << MDR_PORT_ANALOG_PIN_1_Pos  )
#define MDR_PORT_ANALOG_PIN_2_DIGITAL                                  ( 0x01UL << MDR_PORT_ANALOG_PIN_2_Pos  )
#define MDR_PORT_ANALOG_PIN_3_DIGITAL                                  ( 0x01UL << MDR_PORT_ANALOG_PIN_3_Pos  )
#define MDR_PORT_ANALOG_PIN_4_DIGITAL                                  ( 0x01UL << MDR_PORT_ANALOG_PIN_4_Pos  )
#define MDR_PORT_ANALOG_PIN_5_DIGITAL                                  ( 0x01UL << MDR_PORT_ANALOG_PIN_5_Pos  )
#define MDR_PORT_ANALOG_PIN_6_DIGITAL                                  ( 0x01UL << MDR_PORT_ANALOG_PIN_6_Pos  )
#define MDR_PORT_ANALOG_PIN_7_DIGITAL                                  ( 0x01UL << MDR_PORT_ANALOG_PIN_7_Pos  )
#define MDR_PORT_ANALOG_PIN_8_DIGITAL                                  ( 0x01UL << MDR_PORT_ANALOG_PIN_8_Pos  )
#define MDR_PORT_ANALOG_PIN_9_DIGITAL                                  ( 0x01UL << MDR_PORT_ANALOG_PIN_9_Pos  )
#define MDR_PORT_ANALOG_PIN_10_DIGITAL                                 ( 0x01UL << MDR_PORT_ANALOG_PIN_10_Pos )
#define MDR_PORT_ANALOG_PIN_11_DIGITAL                                 ( 0x01UL << MDR_PORT_ANALOG_PIN_11_Pos )
#define MDR_PORT_ANALOG_PIN_12_DIGITAL                                 ( 0x01UL << MDR_PORT_ANALOG_PIN_12_Pos )
#define MDR_PORT_ANALOG_PIN_13_DIGITAL                                 ( 0x01UL << MDR_PORT_ANALOG_PIN_13_Pos )
#define MDR_PORT_ANALOG_PIN_14_DIGITAL                                 ( 0x01UL << MDR_PORT_ANALOG_PIN_14_Pos )
#define MDR_PORT_ANALOG_PIN_15_DIGITAL                                 ( 0x01UL << MDR_PORT_ANALOG_PIN_15_Pos )
/** @} */

/** @defgroup MDR_PORT_PULL_Bits PULL register bits
 * @{
 */
#define MDR_PORT_PULL_DOWN_PIN_0_Pos                                   0U
#define MDR_PORT_PULL_DOWN_PIN_1_Pos                                   1U
#define MDR_PORT_PULL_DOWN_PIN_2_Pos                                   2U
#define MDR_PORT_PULL_DOWN_PIN_3_Pos                                   3U
#define MDR_PORT_PULL_DOWN_PIN_4_Pos                                   4U
#define MDR_PORT_PULL_DOWN_PIN_5_Pos                                   5U
#define MDR_PORT_PULL_DOWN_PIN_6_Pos                                   6U
#define MDR_PORT_PULL_DOWN_PIN_7_Pos                                   7U
#define MDR_PORT_PULL_DOWN_PIN_8_Pos                                   8U
#define MDR_PORT_PULL_DOWN_PIN_9_Pos                                   9U
#define MDR_PORT_PULL_DOWN_PIN_10_Pos                                  10U
#define MDR_PORT_PULL_DOWN_PIN_11_Pos                                  11U
#define MDR_PORT_PULL_DOWN_PIN_12_Pos                                  12U
#define MDR_PORT_PULL_DOWN_PIN_13_Pos                                  13U
#define MDR_PORT_PULL_DOWN_PIN_14_Pos                                  14U
#define MDR_PORT_PULL_DOWN_PIN_15_Pos                                  15U
#define MDR_PORT_PULL_UP_PIN_0_Pos                                     16U
#define MDR_PORT_PULL_UP_PIN_1_Pos                                     17U
#define MDR_PORT_PULL_UP_PIN_2_Pos                                     18U
#define MDR_PORT_PULL_UP_PIN_3_Pos                                     19U
#define MDR_PORT_PULL_UP_PIN_4_Pos                                     20U
#define MDR_PORT_PULL_UP_PIN_5_Pos                                     21U
#define MDR_PORT_PULL_UP_PIN_6_Pos                                     22U
#define MDR_PORT_PULL_UP_PIN_7_Pos                                     23U
#define MDR_PORT_PULL_UP_PIN_8_Pos                                     24U
#define MDR_PORT_PULL_UP_PIN_9_Pos                                     25U
#define MDR_PORT_PULL_UP_PIN_10_Pos                                    26U
#define MDR_PORT_PULL_UP_PIN_11_Pos                                    27U
#define MDR_PORT_PULL_UP_PIN_12_Pos                                    28U
#define MDR_PORT_PULL_UP_PIN_13_Pos                                    29U
#define MDR_PORT_PULL_UP_PIN_14_Pos                                    30U
#define MDR_PORT_PULL_UP_PIN_15_Pos                                    31U

#define MDR_PORT_PULL_DOWN_PIN_0_Msk                                   ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_0_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_1_Msk                                   ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_1_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_2_Msk                                   ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_2_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_3_Msk                                   ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_3_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_4_Msk                                   ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_4_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_5_Msk                                   ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_5_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_6_Msk                                   ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_6_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_7_Msk                                   ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_7_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_8_Msk                                   ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_8_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_9_Msk                                   ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_9_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_10_Msk                                  ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_10_Pos )
#define MDR_PORT_PULL_DOWN_PIN_11_Msk                                  ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_11_Pos )
#define MDR_PORT_PULL_DOWN_PIN_12_Msk                                  ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_12_Pos )
#define MDR_PORT_PULL_DOWN_PIN_13_Msk                                  ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_13_Pos )
#define MDR_PORT_PULL_DOWN_PIN_14_Msk                                  ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_14_Pos )
#define MDR_PORT_PULL_DOWN_PIN_15_Msk                                  ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_15_Pos )

#define MDR_PORT_PULL_UP_PIN_0_Msk                                     ( 0x01UL << MDR_PORT_PULL_UP_PIN_0_Pos  )
#define MDR_PORT_PULL_UP_PIN_1_Msk                                     ( 0x01UL << MDR_PORT_PULL_UP_PIN_1_Pos  )
#define MDR_PORT_PULL_UP_PIN_2_Msk                                     ( 0x01UL << MDR_PORT_PULL_UP_PIN_2_Pos  )
#define MDR_PORT_PULL_UP_PIN_3_Msk                                     ( 0x01UL << MDR_PORT_PULL_UP_PIN_3_Pos  )
#define MDR_PORT_PULL_UP_PIN_4_Msk                                     ( 0x01UL << MDR_PORT_PULL_UP_PIN_4_Pos  )
#define MDR_PORT_PULL_UP_PIN_5_Msk                                     ( 0x01UL << MDR_PORT_PULL_UP_PIN_5_Pos  )
#define MDR_PORT_PULL_UP_PIN_6_Msk                                     ( 0x01UL << MDR_PORT_PULL_UP_PIN_6_Pos  )
#define MDR_PORT_PULL_UP_PIN_7_Msk                                     ( 0x01UL << MDR_PORT_PULL_UP_PIN_7_Pos  )
#define MDR_PORT_PULL_UP_PIN_8_Msk                                     ( 0x01UL << MDR_PORT_PULL_UP_PIN_8_Pos  )
#define MDR_PORT_PULL_UP_PIN_9_Msk                                     ( 0x01UL << MDR_PORT_PULL_UP_PIN_9_Pos  )
#define MDR_PORT_PULL_UP_PIN_10_Msk                                    ( 0x01UL << MDR_PORT_PULL_UP_PIN_10_Pos )
#define MDR_PORT_PULL_UP_PIN_11_Msk                                    ( 0x01UL << MDR_PORT_PULL_UP_PIN_11_Pos )
#define MDR_PORT_PULL_UP_PIN_12_Msk                                    ( 0x01UL << MDR_PORT_PULL_UP_PIN_12_Pos )
#define MDR_PORT_PULL_UP_PIN_13_Msk                                    ( 0x01UL << MDR_PORT_PULL_UP_PIN_13_Pos )
#define MDR_PORT_PULL_UP_PIN_14_Msk                                    ( 0x01UL << MDR_PORT_PULL_UP_PIN_14_Pos )
#define MDR_PORT_PULL_UP_PIN_15_Msk                                    ( 0x01UL << MDR_PORT_PULL_UP_PIN_15_Pos )

#define MDR_PORT_PULL_DOWN_PIN_0_DISABLE                               ( 0x00UL << MDR_PORT_PULL_DOWN_PIN_0_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_1_DISABLE                               ( 0x00UL << MDR_PORT_PULL_DOWN_PIN_1_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_2_DISABLE                               ( 0x00UL << MDR_PORT_PULL_DOWN_PIN_2_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_3_DISABLE                               ( 0x00UL << MDR_PORT_PULL_DOWN_PIN_3_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_4_DISABLE                               ( 0x00UL << MDR_PORT_PULL_DOWN_PIN_4_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_5_DISABLE                               ( 0x00UL << MDR_PORT_PULL_DOWN_PIN_5_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_6_DISABLE                               ( 0x00UL << MDR_PORT_PULL_DOWN_PIN_6_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_7_DISABLE                               ( 0x00UL << MDR_PORT_PULL_DOWN_PIN_7_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_8_DISABLE                               ( 0x00UL << MDR_PORT_PULL_DOWN_PIN_8_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_9_DISABLE                               ( 0x00UL << MDR_PORT_PULL_DOWN_PIN_9_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_10_DISABLE                              ( 0x00UL << MDR_PORT_PULL_DOWN_PIN_10_Pos )
#define MDR_PORT_PULL_DOWN_PIN_11_DISABLE                              ( 0x00UL << MDR_PORT_PULL_DOWN_PIN_11_Pos )
#define MDR_PORT_PULL_DOWN_PIN_12_DISABLE                              ( 0x00UL << MDR_PORT_PULL_DOWN_PIN_12_Pos )
#define MDR_PORT_PULL_DOWN_PIN_13_DISABLE                              ( 0x00UL << MDR_PORT_PULL_DOWN_PIN_13_Pos )
#define MDR_PORT_PULL_DOWN_PIN_14_DISABLE                              ( 0x00UL << MDR_PORT_PULL_DOWN_PIN_14_Pos )
#define MDR_PORT_PULL_DOWN_PIN_15_DISABLE                              ( 0x00UL << MDR_PORT_PULL_DOWN_PIN_15_Pos )

#define MDR_PORT_PULL_DOWN_PIN_0_ENABLE                                ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_0_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_1_ENABLE                                ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_1_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_2_ENABLE                                ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_2_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_3_ENABLE                                ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_3_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_4_ENABLE                                ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_4_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_5_ENABLE                                ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_5_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_6_ENABLE                                ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_6_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_7_ENABLE                                ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_7_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_8_ENABLE                                ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_8_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_9_ENABLE                                ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_9_Pos  )
#define MDR_PORT_PULL_DOWN_PIN_10_ENABLE                               ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_10_Pos )
#define MDR_PORT_PULL_DOWN_PIN_11_ENABLE                               ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_11_Pos )
#define MDR_PORT_PULL_DOWN_PIN_12_ENABLE                               ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_12_Pos )
#define MDR_PORT_PULL_DOWN_PIN_13_ENABLE                               ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_13_Pos )
#define MDR_PORT_PULL_DOWN_PIN_14_ENABLE                               ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_14_Pos )
#define MDR_PORT_PULL_DOWN_PIN_15_ENABLE                               ( 0x01UL << MDR_PORT_PULL_DOWN_PIN_15_Pos )

#define MDR_PORT_PULL_UP_PIN_0_DISABLE                                 ( 0x00UL << MDR_PORT_PULL_UP_PIN_0_Pos  )
#define MDR_PORT_PULL_UP_PIN_1_DISABLE                                 ( 0x00UL << MDR_PORT_PULL_UP_PIN_1_Pos  )
#define MDR_PORT_PULL_UP_PIN_2_DISABLE                                 ( 0x00UL << MDR_PORT_PULL_UP_PIN_2_Pos  )
#define MDR_PORT_PULL_UP_PIN_3_DISABLE                                 ( 0x00UL << MDR_PORT_PULL_UP_PIN_3_Pos  )
#define MDR_PORT_PULL_UP_PIN_4_DISABLE                                 ( 0x00UL << MDR_PORT_PULL_UP_PIN_4_Pos  )
#define MDR_PORT_PULL_UP_PIN_5_DISABLE                                 ( 0x00UL << MDR_PORT_PULL_UP_PIN_5_Pos  )
#define MDR_PORT_PULL_UP_PIN_6_DISABLE                                 ( 0x00UL << MDR_PORT_PULL_UP_PIN_6_Pos  )
#define MDR_PORT_PULL_UP_PIN_7_DISABLE                                 ( 0x00UL << MDR_PORT_PULL_UP_PIN_7_Pos  )
#define MDR_PORT_PULL_UP_PIN_8_DISABLE                                 ( 0x00UL << MDR_PORT_PULL_UP_PIN_8_Pos  )
#define MDR_PORT_PULL_UP_PIN_9_DISABLE                                 ( 0x00UL << MDR_PORT_PULL_UP_PIN_9_Pos  )
#define MDR_PORT_PULL_UP_PIN_10_DISABLE                                ( 0x00UL << MDR_PORT_PULL_UP_PIN_10_Pos )
#define MDR_PORT_PULL_UP_PIN_11_DISABLE                                ( 0x00UL << MDR_PORT_PULL_UP_PIN_11_Pos )
#define MDR_PORT_PULL_UP_PIN_12_DISABLE                                ( 0x00UL << MDR_PORT_PULL_UP_PIN_12_Pos )
#define MDR_PORT_PULL_UP_PIN_13_DISABLE                                ( 0x00UL << MDR_PORT_PULL_UP_PIN_13_Pos )
#define MDR_PORT_PULL_UP_PIN_14_DISABLE                                ( 0x00UL << MDR_PORT_PULL_UP_PIN_14_Pos )
#define MDR_PORT_PULL_UP_PIN_15_DISABLE                                ( 0x00UL << MDR_PORT_PULL_UP_PIN_15_Pos )

#define MDR_PORT_PULL_UP_PIN_0_ENABLE                                  ( 0x01UL << MDR_PORT_PULL_UP_PIN_0_Pos  )
#define MDR_PORT_PULL_UP_PIN_1_ENABLE                                  ( 0x01UL << MDR_PORT_PULL_UP_PIN_1_Pos  )
#define MDR_PORT_PULL_UP_PIN_2_ENABLE                                  ( 0x01UL << MDR_PORT_PULL_UP_PIN_2_Pos  )
#define MDR_PORT_PULL_UP_PIN_3_ENABLE                                  ( 0x01UL << MDR_PORT_PULL_UP_PIN_3_Pos  )
#define MDR_PORT_PULL_UP_PIN_4_ENABLE                                  ( 0x01UL << MDR_PORT_PULL_UP_PIN_4_Pos  )
#define MDR_PORT_PULL_UP_PIN_5_ENABLE                                  ( 0x01UL << MDR_PORT_PULL_UP_PIN_5_Pos  )
#define MDR_PORT_PULL_UP_PIN_6_ENABLE                                  ( 0x01UL << MDR_PORT_PULL_UP_PIN_6_Pos  )
#define MDR_PORT_PULL_UP_PIN_7_ENABLE                                  ( 0x01UL << MDR_PORT_PULL_UP_PIN_7_Pos  )
#define MDR_PORT_PULL_UP_PIN_8_ENABLE                                  ( 0x01UL << MDR_PORT_PULL_UP_PIN_8_Pos  )
#define MDR_PORT_PULL_UP_PIN_9_ENABLE                                  ( 0x01UL << MDR_PORT_PULL_UP_PIN_9_Pos  )
#define MDR_PORT_PULL_UP_PIN_10_ENABLE                                 ( 0x01UL << MDR_PORT_PULL_UP_PIN_10_Pos )
#define MDR_PORT_PULL_UP_PIN_11_ENABLE                                 ( 0x01UL << MDR_PORT_PULL_UP_PIN_11_Pos )
#define MDR_PORT_PULL_UP_PIN_12_ENABLE                                 ( 0x01UL << MDR_PORT_PULL_UP_PIN_12_Pos )
#define MDR_PORT_PULL_UP_PIN_13_ENABLE                                 ( 0x01UL << MDR_PORT_PULL_UP_PIN_13_Pos )
#define MDR_PORT_PULL_UP_PIN_14_ENABLE                                 ( 0x01UL << MDR_PORT_PULL_UP_PIN_14_Pos )
#define MDR_PORT_PULL_UP_PIN_15_ENABLE                                 ( 0x01UL << MDR_PORT_PULL_UP_PIN_15_Pos )
/** @} */

/** @defgroup MDR_PORT_PD_Bits PD register bits
 * @{
 */
#define MDR_PORT_PD_OPEN_DRAIN_PIN_0_Pos                               0U
#define MDR_PORT_PD_OPEN_DRAIN_PIN_1_Pos                               1U
#define MDR_PORT_PD_OPEN_DRAIN_PIN_2_Pos                               2U
#define MDR_PORT_PD_OPEN_DRAIN_PIN_3_Pos                               3U
#define MDR_PORT_PD_OPEN_DRAIN_PIN_4_Pos                               4U
#define MDR_PORT_PD_OPEN_DRAIN_PIN_5_Pos                               5U
#define MDR_PORT_PD_OPEN_DRAIN_PIN_6_Pos                               6U
#define MDR_PORT_PD_OPEN_DRAIN_PIN_7_Pos                               7U
#define MDR_PORT_PD_OPEN_DRAIN_PIN_8_Pos                               8U
#define MDR_PORT_PD_OPEN_DRAIN_PIN_9_Pos                               9U
#define MDR_PORT_PD_OPEN_DRAIN_PIN_10_Pos                              10U
#define MDR_PORT_PD_OPEN_DRAIN_PIN_11_Pos                              11U
#define MDR_PORT_PD_OPEN_DRAIN_PIN_12_Pos                              12U
#define MDR_PORT_PD_OPEN_DRAIN_PIN_13_Pos                              13U
#define MDR_PORT_PD_OPEN_DRAIN_PIN_14_Pos                              14U
#define MDR_PORT_PD_OPEN_DRAIN_PIN_15_Pos                              15U
#define MDR_PORT_PD_SCHMITT_PIN_0_Pos                                  16U
#define MDR_PORT_PD_SCHMITT_PIN_1_Pos                                  17U
#define MDR_PORT_PD_SCHMITT_PIN_2_Pos                                  18U
#define MDR_PORT_PD_SCHMITT_PIN_3_Pos                                  19U
#define MDR_PORT_PD_SCHMITT_PIN_4_Pos                                  20U
#define MDR_PORT_PD_SCHMITT_PIN_5_Pos                                  21U
#define MDR_PORT_PD_SCHMITT_PIN_6_Pos                                  22U
#define MDR_PORT_PD_SCHMITT_PIN_7_Pos                                  23U
#define MDR_PORT_PD_SCHMITT_PIN_8_Pos                                  24U
#define MDR_PORT_PD_SCHMITT_PIN_9_Pos                                  25U
#define MDR_PORT_PD_SCHMITT_PIN_10_Pos                                 26U
#define MDR_PORT_PD_SCHMITT_PIN_11_Pos                                 27U
#define MDR_PORT_PD_SCHMITT_PIN_12_Pos                                 28U
#define MDR_PORT_PD_SCHMITT_PIN_13_Pos                                 29U
#define MDR_PORT_PD_SCHMITT_PIN_14_Pos                                 30U
#define MDR_PORT_PD_SCHMITT_PIN_15_Pos                                 31U

#define MDR_PORT_PD_OPEN_DRAIN_PIN_0_Msk                               ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_0_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_1_Msk                               ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_1_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_2_Msk                               ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_2_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_3_Msk                               ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_3_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_4_Msk                               ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_4_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_5_Msk                               ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_5_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_6_Msk                               ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_6_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_7_Msk                               ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_7_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_8_Msk                               ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_8_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_9_Msk                               ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_9_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_10_Msk                              ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_10_Pos )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_11_Msk                              ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_11_Pos )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_12_Msk                              ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_12_Pos )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_13_Msk                              ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_13_Pos )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_14_Msk                              ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_14_Pos )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_15_Msk                              ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_15_Pos )

#define MDR_PORT_PD_SCHMITT_PIN_0_Msk                                  ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_0_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_1_Msk                                  ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_1_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_2_Msk                                  ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_2_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_3_Msk                                  ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_3_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_4_Msk                                  ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_4_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_5_Msk                                  ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_5_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_6_Msk                                  ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_6_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_7_Msk                                  ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_7_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_8_Msk                                  ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_8_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_9_Msk                                  ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_9_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_10_Msk                                 ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_10_Pos )
#define MDR_PORT_PD_SCHMITT_PIN_11_Msk                                 ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_11_Pos )
#define MDR_PORT_PD_SCHMITT_PIN_12_Msk                                 ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_12_Pos )
#define MDR_PORT_PD_SCHMITT_PIN_13_Msk                                 ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_13_Pos )
#define MDR_PORT_PD_SCHMITT_PIN_14_Msk                                 ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_14_Pos )
#define MDR_PORT_PD_SCHMITT_PIN_15_Msk                                 ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_15_Pos )

#define MDR_PORT_PD_OPEN_DRAIN_PIN_0_CONTROLLED_DRIVER                 ( 0x00UL << MDR_PORT_PD_OPEN_DRAIN_PIN_0_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_1_CONTROLLED_DRIVER                 ( 0x00UL << MDR_PORT_PD_OPEN_DRAIN_PIN_1_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_2_CONTROLLED_DRIVER                 ( 0x00UL << MDR_PORT_PD_OPEN_DRAIN_PIN_2_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_3_CONTROLLED_DRIVER                 ( 0x00UL << MDR_PORT_PD_OPEN_DRAIN_PIN_3_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_4_CONTROLLED_DRIVER                 ( 0x00UL << MDR_PORT_PD_OPEN_DRAIN_PIN_4_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_5_CONTROLLED_DRIVER                 ( 0x00UL << MDR_PORT_PD_OPEN_DRAIN_PIN_5_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_6_CONTROLLED_DRIVER                 ( 0x00UL << MDR_PORT_PD_OPEN_DRAIN_PIN_6_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_7_CONTROLLED_DRIVER                 ( 0x00UL << MDR_PORT_PD_OPEN_DRAIN_PIN_7_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_8_CONTROLLED_DRIVER                 ( 0x00UL << MDR_PORT_PD_OPEN_DRAIN_PIN_8_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_9_CONTROLLED_DRIVER                 ( 0x00UL << MDR_PORT_PD_OPEN_DRAIN_PIN_9_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_10_CONTROLLED_DRIVER                ( 0x00UL << MDR_PORT_PD_OPEN_DRAIN_PIN_10_Pos )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_11_CONTROLLED_DRIVER                ( 0x00UL << MDR_PORT_PD_OPEN_DRAIN_PIN_11_Pos )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_12_CONTROLLED_DRIVER                ( 0x00UL << MDR_PORT_PD_OPEN_DRAIN_PIN_12_Pos )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_13_CONTROLLED_DRIVER                ( 0x00UL << MDR_PORT_PD_OPEN_DRAIN_PIN_13_Pos )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_14_CONTROLLED_DRIVER                ( 0x00UL << MDR_PORT_PD_OPEN_DRAIN_PIN_14_Pos )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_15_CONTROLLED_DRIVER                ( 0x00UL << MDR_PORT_PD_OPEN_DRAIN_PIN_15_Pos )

#define MDR_PORT_PD_OPEN_DRAIN_PIN_0_OPEN_DRAIN                        ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_0_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_1_OPEN_DRAIN                        ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_1_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_2_OPEN_DRAIN                        ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_2_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_3_OPEN_DRAIN                        ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_3_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_4_OPEN_DRAIN                        ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_4_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_5_OPEN_DRAIN                        ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_5_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_6_OPEN_DRAIN                        ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_6_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_7_OPEN_DRAIN                        ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_7_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_8_OPEN_DRAIN                        ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_8_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_9_OPEN_DRAIN                        ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_9_Pos  )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_10_OPEN_DRAIN                       ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_10_Pos )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_11_OPEN_DRAIN                       ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_11_Pos )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_12_OPEN_DRAIN                       ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_12_Pos )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_13_OPEN_DRAIN                       ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_13_Pos )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_14_OPEN_DRAIN                       ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_14_Pos )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_15_OPEN_DRAIN                       ( 0x01UL << MDR_PORT_PD_OPEN_DRAIN_PIN_15_Pos )

#define MDR_PORT_PD_SCHMITT_PIN_0_HYSTERESIS_200_MV                    ( 0x00UL << MDR_PORT_PD_SCHMITT_PIN_0_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_1_HYSTERESIS_200_MV                    ( 0x00UL << MDR_PORT_PD_SCHMITT_PIN_1_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_2_HYSTERESIS_200_MV                    ( 0x00UL << MDR_PORT_PD_SCHMITT_PIN_2_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_3_HYSTERESIS_200_MV                    ( 0x00UL << MDR_PORT_PD_SCHMITT_PIN_3_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_4_HYSTERESIS_200_MV                    ( 0x00UL << MDR_PORT_PD_SCHMITT_PIN_4_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_5_HYSTERESIS_200_MV                    ( 0x00UL << MDR_PORT_PD_SCHMITT_PIN_5_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_6_HYSTERESIS_200_MV                    ( 0x00UL << MDR_PORT_PD_SCHMITT_PIN_6_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_7_HYSTERESIS_200_MV                    ( 0x00UL << MDR_PORT_PD_SCHMITT_PIN_7_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_8_HYSTERESIS_200_MV                    ( 0x00UL << MDR_PORT_PD_SCHMITT_PIN_8_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_9_HYSTERESIS_200_MV                    ( 0x00UL << MDR_PORT_PD_SCHMITT_PIN_9_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_10_HYSTERESIS_200_MV                   ( 0x00UL << MDR_PORT_PD_SCHMITT_PIN_10_Pos )
#define MDR_PORT_PD_SCHMITT_PIN_11_HYSTERESIS_200_MV                   ( 0x00UL << MDR_PORT_PD_SCHMITT_PIN_11_Pos )
#define MDR_PORT_PD_SCHMITT_PIN_12_HYSTERESIS_200_MV                   ( 0x00UL << MDR_PORT_PD_SCHMITT_PIN_12_Pos )
#define MDR_PORT_PD_SCHMITT_PIN_13_HYSTERESIS_200_MV                   ( 0x00UL << MDR_PORT_PD_SCHMITT_PIN_13_Pos )
#define MDR_PORT_PD_SCHMITT_PIN_14_HYSTERESIS_200_MV                   ( 0x00UL << MDR_PORT_PD_SCHMITT_PIN_14_Pos )
#define MDR_PORT_PD_SCHMITT_PIN_15_HYSTERESIS_200_MV                   ( 0x00UL << MDR_PORT_PD_SCHMITT_PIN_15_Pos )

#define MDR_PORT_PD_SCHMITT_PIN_0_HYSTERESIS_400_MV                    ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_0_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_1_HYSTERESIS_400_MV                    ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_1_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_2_HYSTERESIS_400_MV                    ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_2_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_3_HYSTERESIS_400_MV                    ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_3_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_4_HYSTERESIS_400_MV                    ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_4_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_5_HYSTERESIS_400_MV                    ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_5_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_6_HYSTERESIS_400_MV                    ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_6_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_7_HYSTERESIS_400_MV                    ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_7_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_8_HYSTERESIS_400_MV                    ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_8_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_9_HYSTERESIS_400_MV                    ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_9_Pos  )
#define MDR_PORT_PD_SCHMITT_PIN_10_HYSTERESIS_400_MV                   ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_10_Pos )
#define MDR_PORT_PD_SCHMITT_PIN_11_HYSTERESIS_400_MV                   ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_11_Pos )
#define MDR_PORT_PD_SCHMITT_PIN_12_HYSTERESIS_400_MV                   ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_12_Pos )
#define MDR_PORT_PD_SCHMITT_PIN_13_HYSTERESIS_400_MV                   ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_13_Pos )
#define MDR_PORT_PD_SCHMITT_PIN_14_HYSTERESIS_400_MV                   ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_14_Pos )
#define MDR_PORT_PD_SCHMITT_PIN_15_HYSTERESIS_400_MV                   ( 0x01UL << MDR_PORT_PD_SCHMITT_PIN_15_Pos )
/** @} */

/** @defgroup MDR_PORT_PWR_Fields PWR register fields
 * @{
 */
#define MDR_PORT_PWR_PIN_0_Pos                                         0U
#define MDR_PORT_PWR_PIN_1_Pos                                         2U
#define MDR_PORT_PWR_PIN_2_Pos                                         4U
#define MDR_PORT_PWR_PIN_3_Pos                                         6U
#define MDR_PORT_PWR_PIN_4_Pos                                         8U
#define MDR_PORT_PWR_PIN_5_Pos                                         10U
#define MDR_PORT_PWR_PIN_6_Pos                                         12U
#define MDR_PORT_PWR_PIN_7_Pos                                         14U
#define MDR_PORT_PWR_PIN_8_Pos                                         16U
#define MDR_PORT_PWR_PIN_9_Pos                                         18U
#define MDR_PORT_PWR_PIN_10_Pos                                        20U
#define MDR_PORT_PWR_PIN_11_Pos                                        22U
#define MDR_PORT_PWR_PIN_12_Pos                                        24U
#define MDR_PORT_PWR_PIN_13_Pos                                        26U
#define MDR_PORT_PWR_PIN_14_Pos                                        28U
#define MDR_PORT_PWR_PIN_15_Pos                                        30U

#define MDR_PORT_PWR_PIN_0_Msk                                         ( 0x03UL << MDR_PORT_PWR_PIN_0_Pos  )
#define MDR_PORT_PWR_PIN_1_Msk                                         ( 0x03UL << MDR_PORT_PWR_PIN_1_Pos  )
#define MDR_PORT_PWR_PIN_2_Msk                                         ( 0x03UL << MDR_PORT_PWR_PIN_2_Pos  )
#define MDR_PORT_PWR_PIN_3_Msk                                         ( 0x03UL << MDR_PORT_PWR_PIN_3_Pos  )
#define MDR_PORT_PWR_PIN_4_Msk                                         ( 0x03UL << MDR_PORT_PWR_PIN_4_Pos  )
#define MDR_PORT_PWR_PIN_5_Msk                                         ( 0x03UL << MDR_PORT_PWR_PIN_5_Pos  )
#define MDR_PORT_PWR_PIN_6_Msk                                         ( 0x03UL << MDR_PORT_PWR_PIN_6_Pos  )
#define MDR_PORT_PWR_PIN_7_Msk                                         ( 0x03UL << MDR_PORT_PWR_PIN_7_Pos  )
#define MDR_PORT_PWR_PIN_8_Msk                                         ( 0x03UL << MDR_PORT_PWR_PIN_8_Pos  )
#define MDR_PORT_PWR_PIN_9_Msk                                         ( 0x03UL << MDR_PORT_PWR_PIN_9_Pos  )
#define MDR_PORT_PWR_PIN_10_Msk                                        ( 0x03UL << MDR_PORT_PWR_PIN_10_Pos )
#define MDR_PORT_PWR_PIN_11_Msk                                        ( 0x03UL << MDR_PORT_PWR_PIN_11_Pos )
#define MDR_PORT_PWR_PIN_12_Msk                                        ( 0x03UL << MDR_PORT_PWR_PIN_12_Pos )
#define MDR_PORT_PWR_PIN_13_Msk                                        ( 0x03UL << MDR_PORT_PWR_PIN_13_Pos )
#define MDR_PORT_PWR_PIN_14_Msk                                        ( 0x03UL << MDR_PORT_PWR_PIN_14_Pos )
#define MDR_PORT_PWR_PIN_15_Msk                                        ( 0x03UL << MDR_PORT_PWR_PIN_15_Pos )

#define MDR_PORT_PWR_PIN_0_DISABLED                                    ( 0x00UL << MDR_PORT_PWR_PIN_0_Pos  )
#define MDR_PORT_PWR_PIN_1_DISABLED                                    ( 0x00UL << MDR_PORT_PWR_PIN_1_Pos  )
#define MDR_PORT_PWR_PIN_2_DISABLED                                    ( 0x00UL << MDR_PORT_PWR_PIN_2_Pos  )
#define MDR_PORT_PWR_PIN_3_DISABLED                                    ( 0x00UL << MDR_PORT_PWR_PIN_3_Pos  )
#define MDR_PORT_PWR_PIN_4_DISABLED                                    ( 0x00UL << MDR_PORT_PWR_PIN_4_Pos  )
#define MDR_PORT_PWR_PIN_5_DISABLED                                    ( 0x00UL << MDR_PORT_PWR_PIN_5_Pos  )
#define MDR_PORT_PWR_PIN_6_DISABLED                                    ( 0x00UL << MDR_PORT_PWR_PIN_6_Pos  )
#define MDR_PORT_PWR_PIN_7_DISABLED                                    ( 0x00UL << MDR_PORT_PWR_PIN_7_Pos  )
#define MDR_PORT_PWR_PIN_8_DISABLED                                    ( 0x00UL << MDR_PORT_PWR_PIN_8_Pos  )
#define MDR_PORT_PWR_PIN_9_DISABLED                                    ( 0x00UL << MDR_PORT_PWR_PIN_9_Pos  )
#define MDR_PORT_PWR_PIN_10_DISABLED                                   ( 0x00UL << MDR_PORT_PWR_PIN_10_Pos )
#define MDR_PORT_PWR_PIN_11_DISABLED                                   ( 0x00UL << MDR_PORT_PWR_PIN_11_Pos )
#define MDR_PORT_PWR_PIN_12_DISABLED                                   ( 0x00UL << MDR_PORT_PWR_PIN_12_Pos )
#define MDR_PORT_PWR_PIN_13_DISABLED                                   ( 0x00UL << MDR_PORT_PWR_PIN_13_Pos )
#define MDR_PORT_PWR_PIN_14_DISABLED                                   ( 0x00UL << MDR_PORT_PWR_PIN_14_Pos )
#define MDR_PORT_PWR_PIN_15_DISABLED                                   ( 0x00UL << MDR_PORT_PWR_PIN_15_Pos )

#define MDR_PORT_PWR_PIN_0_SLOW                                        ( 0x01UL << MDR_PORT_PWR_PIN_0_Pos  )
#define MDR_PORT_PWR_PIN_1_SLOW                                        ( 0x01UL << MDR_PORT_PWR_PIN_1_Pos  )
#define MDR_PORT_PWR_PIN_2_SLOW                                        ( 0x01UL << MDR_PORT_PWR_PIN_2_Pos  )
#define MDR_PORT_PWR_PIN_3_SLOW                                        ( 0x01UL << MDR_PORT_PWR_PIN_3_Pos  )
#define MDR_PORT_PWR_PIN_4_SLOW                                        ( 0x01UL << MDR_PORT_PWR_PIN_4_Pos  )
#define MDR_PORT_PWR_PIN_5_SLOW                                        ( 0x01UL << MDR_PORT_PWR_PIN_5_Pos  )
#define MDR_PORT_PWR_PIN_6_SLOW                                        ( 0x01UL << MDR_PORT_PWR_PIN_6_Pos  )
#define MDR_PORT_PWR_PIN_7_SLOW                                        ( 0x01UL << MDR_PORT_PWR_PIN_7_Pos  )
#define MDR_PORT_PWR_PIN_8_SLOW                                        ( 0x01UL << MDR_PORT_PWR_PIN_8_Pos  )
#define MDR_PORT_PWR_PIN_9_SLOW                                        ( 0x01UL << MDR_PORT_PWR_PIN_9_Pos  )
#define MDR_PORT_PWR_PIN_10_SLOW                                       ( 0x01UL << MDR_PORT_PWR_PIN_10_Pos )
#define MDR_PORT_PWR_PIN_11_SLOW                                       ( 0x01UL << MDR_PORT_PWR_PIN_11_Pos )
#define MDR_PORT_PWR_PIN_12_SLOW                                       ( 0x01UL << MDR_PORT_PWR_PIN_12_Pos )
#define MDR_PORT_PWR_PIN_13_SLOW                                       ( 0x01UL << MDR_PORT_PWR_PIN_13_Pos )
#define MDR_PORT_PWR_PIN_14_SLOW                                       ( 0x01UL << MDR_PORT_PWR_PIN_14_Pos )
#define MDR_PORT_PWR_PIN_15_SLOW                                       ( 0x01UL << MDR_PORT_PWR_PIN_15_Pos )

#define MDR_PORT_PWR_PIN_0_FAST                                        ( 0x02UL << MDR_PORT_PWR_PIN_0_Pos  )
#define MDR_PORT_PWR_PIN_1_FAST                                        ( 0x02UL << MDR_PORT_PWR_PIN_1_Pos  )
#define MDR_PORT_PWR_PIN_2_FAST                                        ( 0x02UL << MDR_PORT_PWR_PIN_2_Pos  )
#define MDR_PORT_PWR_PIN_3_FAST                                        ( 0x02UL << MDR_PORT_PWR_PIN_3_Pos  )
#define MDR_PORT_PWR_PIN_4_FAST                                        ( 0x02UL << MDR_PORT_PWR_PIN_4_Pos  )
#define MDR_PORT_PWR_PIN_5_FAST                                        ( 0x02UL << MDR_PORT_PWR_PIN_5_Pos  )
#define MDR_PORT_PWR_PIN_6_FAST                                        ( 0x02UL << MDR_PORT_PWR_PIN_6_Pos  )
#define MDR_PORT_PWR_PIN_7_FAST                                        ( 0x02UL << MDR_PORT_PWR_PIN_7_Pos  )
#define MDR_PORT_PWR_PIN_8_FAST                                        ( 0x02UL << MDR_PORT_PWR_PIN_8_Pos  )
#define MDR_PORT_PWR_PIN_9_FAST                                        ( 0x02UL << MDR_PORT_PWR_PIN_9_Pos  )
#define MDR_PORT_PWR_PIN_10_FAST                                       ( 0x02UL << MDR_PORT_PWR_PIN_10_Pos )
#define MDR_PORT_PWR_PIN_11_FAST                                       ( 0x02UL << MDR_PORT_PWR_PIN_11_Pos )
#define MDR_PORT_PWR_PIN_12_FAST                                       ( 0x02UL << MDR_PORT_PWR_PIN_12_Pos )
#define MDR_PORT_PWR_PIN_13_FAST                                       ( 0x02UL << MDR_PORT_PWR_PIN_13_Pos )
#define MDR_PORT_PWR_PIN_14_FAST                                       ( 0x02UL << MDR_PORT_PWR_PIN_14_Pos )
#define MDR_PORT_PWR_PIN_15_FAST                                       ( 0x02UL << MDR_PORT_PWR_PIN_15_Pos )

#define MDR_PORT_PWR_PIN_0_MAXIMUM                                     ( 0x03UL << MDR_PORT_PWR_PIN_0_Pos  )
#define MDR_PORT_PWR_PIN_1_MAXIMUM                                     ( 0x03UL << MDR_PORT_PWR_PIN_1_Pos  )
#define MDR_PORT_PWR_PIN_2_MAXIMUM                                     ( 0x03UL << MDR_PORT_PWR_PIN_2_Pos  )
#define MDR_PORT_PWR_PIN_3_MAXIMUM                                     ( 0x03UL << MDR_PORT_PWR_PIN_3_Pos  )
#define MDR_PORT_PWR_PIN_4_MAXIMUM                                     ( 0x03UL << MDR_PORT_PWR_PIN_4_Pos  )
#define MDR_PORT_PWR_PIN_5_MAXIMUM                                     ( 0x03UL << MDR_PORT_PWR_PIN_5_Pos  )
#define MDR_PORT_PWR_PIN_6_MAXIMUM                                     ( 0x03UL << MDR_PORT_PWR_PIN_6_Pos  )
#define MDR_PORT_PWR_PIN_7_MAXIMUM                                     ( 0x03UL << MDR_PORT_PWR_PIN_7_Pos  )
#define MDR_PORT_PWR_PIN_8_MAXIMUM                                     ( 0x03UL << MDR_PORT_PWR_PIN_8_Pos  )
#define MDR_PORT_PWR_PIN_9_MAXIMUM                                     ( 0x03UL << MDR_PORT_PWR_PIN_9_Pos  )
#define MDR_PORT_PWR_PIN_10_MAXIMUM                                    ( 0x03UL << MDR_PORT_PWR_PIN_10_Pos )
#define MDR_PORT_PWR_PIN_11_MAXIMUM                                    ( 0x03UL << MDR_PORT_PWR_PIN_11_Pos )
#define MDR_PORT_PWR_PIN_12_MAXIMUM                                    ( 0x03UL << MDR_PORT_PWR_PIN_12_Pos )
#define MDR_PORT_PWR_PIN_13_MAXIMUM                                    ( 0x03UL << MDR_PORT_PWR_PIN_13_Pos )
#define MDR_PORT_PWR_PIN_14_MAXIMUM                                    ( 0x03UL << MDR_PORT_PWR_PIN_14_Pos )
#define MDR_PORT_PWR_PIN_15_MAXIMUM                                    ( 0x03UL << MDR_PORT_PWR_PIN_15_Pos )
/** @} */

/** @defgroup MDR_PORT_GFEN_Bits GFEN register bits
 * @{
 */
#define MDR_PORT_GFEN_PIN_0_Pos                                        0U
#define MDR_PORT_GFEN_PIN_1_Pos                                        1U
#define MDR_PORT_GFEN_PIN_2_Pos                                        2U
#define MDR_PORT_GFEN_PIN_3_Pos                                        3U
#define MDR_PORT_GFEN_PIN_4_Pos                                        4U
#define MDR_PORT_GFEN_PIN_5_Pos                                        5U
#define MDR_PORT_GFEN_PIN_6_Pos                                        6U
#define MDR_PORT_GFEN_PIN_7_Pos                                        7U
#define MDR_PORT_GFEN_PIN_8_Pos                                        8U
#define MDR_PORT_GFEN_PIN_9_Pos                                        9U
#define MDR_PORT_GFEN_PIN_10_Pos                                       10U
#define MDR_PORT_GFEN_PIN_11_Pos                                       11U
#define MDR_PORT_GFEN_PIN_12_Pos                                       12U
#define MDR_PORT_GFEN_PIN_13_Pos                                       13U
#define MDR_PORT_GFEN_PIN_14_Pos                                       14U
#define MDR_PORT_GFEN_PIN_15_Pos                                       15U

#define MDR_PORT_GFEN_PIN_0_Msk                                        ( 0x01UL << MDR_PORT_GFEN_PIN_0_Pos  )
#define MDR_PORT_GFEN_PIN_1_Msk                                        ( 0x01UL << MDR_PORT_GFEN_PIN_1_Pos  )
#define MDR_PORT_GFEN_PIN_2_Msk                                        ( 0x01UL << MDR_PORT_GFEN_PIN_2_Pos  )
#define MDR_PORT_GFEN_PIN_3_Msk                                        ( 0x01UL << MDR_PORT_GFEN_PIN_3_Pos  )
#define MDR_PORT_GFEN_PIN_4_Msk                                        ( 0x01UL << MDR_PORT_GFEN_PIN_4_Pos  )
#define MDR_PORT_GFEN_PIN_5_Msk                                        ( 0x01UL << MDR_PORT_GFEN_PIN_5_Pos  )
#define MDR_PORT_GFEN_PIN_6_Msk                                        ( 0x01UL << MDR_PORT_GFEN_PIN_6_Pos  )
#define MDR_PORT_GFEN_PIN_7_Msk                                        ( 0x01UL << MDR_PORT_GFEN_PIN_7_Pos  )
#define MDR_PORT_GFEN_PIN_8_Msk                                        ( 0x01UL << MDR_PORT_GFEN_PIN_8_Pos  )
#define MDR_PORT_GFEN_PIN_9_Msk                                        ( 0x01UL << MDR_PORT_GFEN_PIN_9_Pos  )
#define MDR_PORT_GFEN_PIN_10_Msk                                       ( 0x01UL << MDR_PORT_GFEN_PIN_10_Pos )
#define MDR_PORT_GFEN_PIN_11_Msk                                       ( 0x01UL << MDR_PORT_GFEN_PIN_11_Pos )
#define MDR_PORT_GFEN_PIN_12_Msk                                       ( 0x01UL << MDR_PORT_GFEN_PIN_12_Pos )
#define MDR_PORT_GFEN_PIN_13_Msk                                       ( 0x01UL << MDR_PORT_GFEN_PIN_13_Pos )
#define MDR_PORT_GFEN_PIN_14_Msk                                       ( 0x01UL << MDR_PORT_GFEN_PIN_14_Pos )
#define MDR_PORT_GFEN_PIN_15_Msk                                       ( 0x01UL << MDR_PORT_GFEN_PIN_15_Pos )

#define MDR_PORT_GFEN_PIN_0_DISABLE                                    ( 0x00UL << MDR_PORT_GFEN_PIN_0_Pos  )
#define MDR_PORT_GFEN_PIN_1_DISABLE                                    ( 0x00UL << MDR_PORT_GFEN_PIN_1_Pos  )
#define MDR_PORT_GFEN_PIN_2_DISABLE                                    ( 0x00UL << MDR_PORT_GFEN_PIN_2_Pos  )
#define MDR_PORT_GFEN_PIN_3_DISABLE                                    ( 0x00UL << MDR_PORT_GFEN_PIN_3_Pos  )
#define MDR_PORT_GFEN_PIN_4_DISABLE                                    ( 0x00UL << MDR_PORT_GFEN_PIN_4_Pos  )
#define MDR_PORT_GFEN_PIN_5_DISABLE                                    ( 0x00UL << MDR_PORT_GFEN_PIN_5_Pos  )
#define MDR_PORT_GFEN_PIN_6_DISABLE                                    ( 0x00UL << MDR_PORT_GFEN_PIN_6_Pos  )
#define MDR_PORT_GFEN_PIN_7_DISABLE                                    ( 0x00UL << MDR_PORT_GFEN_PIN_7_Pos  )
#define MDR_PORT_GFEN_PIN_8_DISABLE                                    ( 0x00UL << MDR_PORT_GFEN_PIN_8_Pos  )
#define MDR_PORT_GFEN_PIN_9_DISABLE                                    ( 0x00UL << MDR_PORT_GFEN_PIN_9_Pos  )
#define MDR_PORT_GFEN_PIN_10_DISABLE                                   ( 0x00UL << MDR_PORT_GFEN_PIN_10_Pos )
#define MDR_PORT_GFEN_PIN_11_DISABLE                                   ( 0x00UL << MDR_PORT_GFEN_PIN_11_Pos )
#define MDR_PORT_GFEN_PIN_12_DISABLE                                   ( 0x00UL << MDR_PORT_GFEN_PIN_12_Pos )
#define MDR_PORT_GFEN_PIN_13_DISABLE                                   ( 0x00UL << MDR_PORT_GFEN_PIN_13_Pos )
#define MDR_PORT_GFEN_PIN_14_DISABLE                                   ( 0x00UL << MDR_PORT_GFEN_PIN_14_Pos )
#define MDR_PORT_GFEN_PIN_15_DISABLE                                   ( 0x00UL << MDR_PORT_GFEN_PIN_15_Pos )

#define MDR_PORT_GFEN_PIN_0_ENABLE                                     ( 0x01UL << MDR_PORT_GFEN_PIN_0_Pos  )
#define MDR_PORT_GFEN_PIN_1_ENABLE                                     ( 0x01UL << MDR_PORT_GFEN_PIN_1_Pos  )
#define MDR_PORT_GFEN_PIN_2_ENABLE                                     ( 0x01UL << MDR_PORT_GFEN_PIN_2_Pos  )
#define MDR_PORT_GFEN_PIN_3_ENABLE                                     ( 0x01UL << MDR_PORT_GFEN_PIN_3_Pos  )
#define MDR_PORT_GFEN_PIN_4_ENABLE                                     ( 0x01UL << MDR_PORT_GFEN_PIN_4_Pos  )
#define MDR_PORT_GFEN_PIN_5_ENABLE                                     ( 0x01UL << MDR_PORT_GFEN_PIN_5_Pos  )
#define MDR_PORT_GFEN_PIN_6_ENABLE                                     ( 0x01UL << MDR_PORT_GFEN_PIN_6_Pos  )
#define MDR_PORT_GFEN_PIN_7_ENABLE                                     ( 0x01UL << MDR_PORT_GFEN_PIN_7_Pos  )
#define MDR_PORT_GFEN_PIN_8_ENABLE                                     ( 0x01UL << MDR_PORT_GFEN_PIN_8_Pos  )
#define MDR_PORT_GFEN_PIN_9_ENABLE                                     ( 0x01UL << MDR_PORT_GFEN_PIN_9_Pos  )
#define MDR_PORT_GFEN_PIN_10_ENABLE                                    ( 0x01UL << MDR_PORT_GFEN_PIN_10_Pos )
#define MDR_PORT_GFEN_PIN_11_ENABLE                                    ( 0x01UL << MDR_PORT_GFEN_PIN_11_Pos )
#define MDR_PORT_GFEN_PIN_12_ENABLE                                    ( 0x01UL << MDR_PORT_GFEN_PIN_12_Pos )
#define MDR_PORT_GFEN_PIN_13_ENABLE                                    ( 0x01UL << MDR_PORT_GFEN_PIN_13_Pos )
#define MDR_PORT_GFEN_PIN_14_ENABLE                                    ( 0x01UL << MDR_PORT_GFEN_PIN_14_Pos )
#define MDR_PORT_GFEN_PIN_15_ENABLE                                    ( 0x01UL << MDR_PORT_GFEN_PIN_15_Pos )
/** @} */

/* Exported macro ------------------------------------------------------------*/
  
#define IS_MDR_GPIO_PIN_MASK(MASK) (((MASK) != 0UL) && (((MASK) & 0xFFFF0000UL) == 0UL))

#define IS_MDR_GPIO_DIRECTION(VALUE) (((VALUE) == MDR_GPIO_DIRECTION_INPUT) || ((VALUE) == MDR_GPIO_DIRECTION_OUTPUT))

#define IS_MDR_GPIO_FUNCTION(VALUE) (((VALUE) == MDR_GPIO_FUNCTION_PORT) || ((VALUE) == MDR_GPIO_FUNCTION_MAIN) || ((VALUE) == MDR_GPIO_FUNCTION_ALTERNATE) || ((VALUE) == MDR_GPIO_FUNCTION_REDEFINED))

#define IS_MDR_GPIO_MODE(VALUE) (((VALUE) == MDR_GPIO_MODE_ANALOG) || ((VALUE) == MDR_GPIO_MODE_DIGITAL))

#define IS_MDR_GPIO_PULL_STATE(VALUE) (((VALUE) == MDR_GPIO_PULL_DISABLE) || ((VALUE) == MDR_GPIO_PULL_ENABLE))

#define IS_MDR_GPIO_OUTPUT_DRIVER(VALUE) (((VALUE) == MDR_GPIO_OUTPUT_DRIVER_CONTROLLED) || ((VALUE) == MDR_GPIO_OUTPUT_DRIVER_OPEN_DRAIN))

#define IS_MDR_GPIO_SCHMITT(VALUE) (((VALUE) == MDR_GPIO_SCHMITT_200_MV) || ((VALUE) == MDR_GPIO_SCHMITT_400_MV))

#define IS_MDR_GPIO_POWER(VALUE) (((VALUE) == MDR_GPIO_POWER_DISABLED) || ((VALUE) == MDR_GPIO_POWER_SLOW) || ((VALUE) == MDR_GPIO_POWER_FAST) || ((VALUE) == MDR_GPIO_POWER_MAXIMUM))

#define IS_MDR_GPIO_FILTER(VALUE) (((VALUE) == MDR_GPIO_FILTER_DISABLE) || ((VALUE) == MDR_GPIO_FILTER_ENABLE))

#define IS_MDR_GPIO_OUTPUT_STATE(VALUE) (((VALUE) == MDR_GPIO_OUTPUT_LOW) || ((VALUE) == MDR_GPIO_OUTPUT_HIGH))

/* Exported functions --------------------------------------------------------*/

// -----------------------------------------------------------------------------
// High-level GPIO configuration
// -----------------------------------------------------------------------------

/**
 * @brief Returns the default GPIO configuration.
 *
 * The default state corresponds to the PORT reset-oriented configuration:
 * input, PORT function, analog mode, pull resistors disabled, controlled output
 * driver, 200 mV Schmitt hysteresis, transmitter disabled, input filter disabled
 * and low output latch.
 *
 * @return Default GPIO configuration structure.
 */
MDR_GPIO_ConfigTypeDef MDR_GPIO_GetDefaultConfig(void);

/**
 * @brief Configures one or more GPIO pins.
 *
 * All arguments are validated before the first hardware write. The same
 * configuration is applied to every pin selected by @p pin_mask. The function
 * does not enable the MDR_PORTx peripheral clock; clock control remains the
 * responsibility of the RST_CLK layer.
 *
 * @param[in,out] port     PORT instance.
 * @param[in]     pin_mask One or more MDR_GPIO_PIN_x masks.
 * @param[in]     config   GPIO configuration.
 *
 * @return GPIO configuration status.
 *
 * @warning Do not reconfigure JTAG pins while the active debug interface uses
 *          them. The device specification warns that writes to RXTX/OE on those
 *          pins can block the debug interface.
 */
MDR_GPIO_StatusTypeDef MDR_GPIO_Init( MDR_PORT_TypeDef *port,
	                                 uint32_t pin_mask,
	                                 const MDR_GPIO_ConfigTypeDef *config );

/**
 * @brief Restores selected GPIO pins to the register reset configuration.
 *
 * The selected pins are returned to input, PORT function, analog mode, pull
 * resistors disabled, controlled output driver, 200 mV Schmitt hysteresis,
 * transmitter disabled, input filter disabled and low output latch.
 *
 * @param[in,out] port     PORT instance.
 * @param[in]     pin_mask One or more MDR_GPIO_PIN_x masks.
 *
 * @return GPIO configuration status.
 */
MDR_GPIO_StatusTypeDef MDR_GPIO_DeInit(MDR_PORT_TypeDef *port, uint32_t pin_mask);

// -----------------------------------------------------------------------------
// RXTX
// -----------------------------------------------------------------------------

/** @brief Sets selected output latch bits to logic high. */
void MDR_PORT_RXTX_SetHigh(MDR_PORT_TypeDef *port, uint32_t pin_mask);

/** @brief Clears selected output latch bits to logic low. */
void MDR_PORT_RXTX_SetLow(MDR_PORT_TypeDef *port, uint32_t pin_mask);

/** @brief Toggles selected output latch bits. */
void MDR_PORT_RXTX_Toggle(MDR_PORT_TypeDef *port, uint32_t pin_mask);

/** @brief Returns the current RXTX register value. */
uint32_t MDR_PORT_RXTX_Read(MDR_PORT_TypeDef *port);

// -----------------------------------------------------------------------------
// OE
// -----------------------------------------------------------------------------

/** @brief Configures selected pins as inputs. */
void MDR_PORT_OE_SetInput(MDR_PORT_TypeDef *port, uint32_t pin_mask);

/** @brief Configures selected pins as outputs. */
void MDR_PORT_OE_SetOutput(MDR_PORT_TypeDef *port, uint32_t pin_mask);

// -----------------------------------------------------------------------------
// FUNC
// -----------------------------------------------------------------------------

/**
 * @brief Writes selected FUNC fields.
 * @param[in,out] port       PORT instance.
 * @param[in]     func_mask  Physical 2-bit field mask in the FUNC register.
 * @param[in]     func_value Physical shifted FUNC field value.
 */
void MDR_PORT_FUNC_Set(MDR_PORT_TypeDef *port, uint32_t func_mask, uint32_t func_value);

// -----------------------------------------------------------------------------
// ANALOG
// -----------------------------------------------------------------------------

/** @brief Enables digital mode for selected pins. */
void MDR_PORT_ANALOG_DigitalEnable(MDR_PORT_TypeDef *port, uint32_t pin_mask);

/** @brief Selects analog mode for selected pins. */
void MDR_PORT_ANALOG_DigitalDisable(MDR_PORT_TypeDef *port, uint32_t pin_mask);

// -----------------------------------------------------------------------------
// PULL
// -----------------------------------------------------------------------------

/**
 * @brief Enables pull-up for selected physical PULL.UP bits.
 *
 * @param[in] pin_mask Mask already positioned in PULL[31:16].
 */
void MDR_PORT_PULL_UpEnable(MDR_PORT_TypeDef *port, uint32_t pin_mask);

/** @brief Disables pull-up for selected physical PULL.UP bits. */
void MDR_PORT_PULL_UpDisable(MDR_PORT_TypeDef *port, uint32_t pin_mask);

/**
 * @brief Enables pull-down for selected physical PULL.DOWN bits.
 *
 * @param[in] pin_mask Mask positioned in PULL[15:0].
 */
void MDR_PORT_PULL_DownEnable(MDR_PORT_TypeDef *port, uint32_t pin_mask);

/** @brief Disables pull-down for selected physical PULL.DOWN bits. */
void MDR_PORT_PULL_DownDisable(MDR_PORT_TypeDef *port, uint32_t pin_mask);

// -----------------------------------------------------------------------------
// PD
// -----------------------------------------------------------------------------

/** @brief Selects open-drain mode for selected physical PD[15:0] bits. */
void MDR_PORT_PD_OpenDrainEnable(MDR_PORT_TypeDef *port, uint32_t pin_mask);

/** @brief Selects controlled-driver mode for selected physical PD[15:0] bits. */
void MDR_PORT_PD_OpenDrainDisable(MDR_PORT_TypeDef *port, uint32_t pin_mask);

/**
 * @brief Selects 400 mV Schmitt hysteresis for selected physical PD[31:16] bits.
 */
void MDR_PORT_PD_SchmittEnable(MDR_PORT_TypeDef *port, uint32_t pin_mask);

/**
 * @brief Selects 200 mV Schmitt hysteresis for selected physical PD[31:16] bits.
 */
void MDR_PORT_PD_SchmittDisable(MDR_PORT_TypeDef *port, uint32_t pin_mask);

// -----------------------------------------------------------------------------
// PWR
// -----------------------------------------------------------------------------

/**
 * @brief Writes selected PWR fields.
 * @param[in,out] port      PORT instance.
 * @param[in]     pwr_mask  Physical 2-bit field mask in the PWR register.
 * @param[in]     pwr_value Physical shifted PWR field value.
 */
void MDR_PORT_PWR_Set(MDR_PORT_TypeDef *port, uint32_t pwr_mask, uint32_t pwr_value);

// -----------------------------------------------------------------------------
// GFEN
// -----------------------------------------------------------------------------

/** @brief Enables the input glitch filter for selected pins. */
void MDR_PORT_GFEN_Enable(MDR_PORT_TypeDef *port, uint32_t gfen_mask);

/** @brief Disables the input glitch filter for selected pins. */
void MDR_PORT_GFEN_Disable(MDR_PORT_TypeDef *port, uint32_t gfen_mask);

#ifdef __cplusplus
}
#endif

#endif /* MILUINO_MDR_GPIO_H */
