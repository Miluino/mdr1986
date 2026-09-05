#ifndef __MILUINO_MDR_PORT_H
#define __MILUINO_MDR_PORT_H

#include "MDR32F9Q2I.h"
#include <stdint.h>

// RXTX register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_PORT_RXTX_PIN_0_POS                                       0
#define MDR_PORT_RXTX_PIN_1_POS                                       1
#define MDR_PORT_RXTX_PIN_2_POS                                       2
#define MDR_PORT_RXTX_PIN_3_POS                                       3
#define MDR_PORT_RXTX_PIN_4_POS                                       4
#define MDR_PORT_RXTX_PIN_5_POS                                       5
#define MDR_PORT_RXTX_PIN_6_POS                                       6
#define MDR_PORT_RXTX_PIN_7_POS                                       7
#define MDR_PORT_RXTX_PIN_8_POS                                       8
#define MDR_PORT_RXTX_PIN_9_POS                                       9
#define MDR_PORT_RXTX_PIN_10_POS                                      10
#define MDR_PORT_RXTX_PIN_11_POS                                      11
#define MDR_PORT_RXTX_PIN_12_POS                                      12
#define MDR_PORT_RXTX_PIN_13_POS                                      13
#define MDR_PORT_RXTX_PIN_14_POS                                      14
#define MDR_PORT_RXTX_PIN_15_POS                                      15

#define MDR_PORT_RXTX_PIN_0_MSK                                       ( 0x01 << MDR_PORT_RXTX_PIN_0_POS )
#define MDR_PORT_RXTX_PIN_1_MSK                                       ( 0x01 << MDR_PORT_RXTX_PIN_1_POS )
#define MDR_PORT_RXTX_PIN_2_MSK                                       ( 0x01 << MDR_PORT_RXTX_PIN_2_POS )
#define MDR_PORT_RXTX_PIN_3_MSK                                       ( 0x01 << MDR_PORT_RXTX_PIN_3_POS )
#define MDR_PORT_RXTX_PIN_4_MSK                                       ( 0x01 << MDR_PORT_RXTX_PIN_4_POS )
#define MDR_PORT_RXTX_PIN_5_MSK                                       ( 0x01 << MDR_PORT_RXTX_PIN_5_POS )
#define MDR_PORT_RXTX_PIN_6_MSK                                       ( 0x01 << MDR_PORT_RXTX_PIN_6_POS )
#define MDR_PORT_RXTX_PIN_7_MSK                                       ( 0x01 << MDR_PORT_RXTX_PIN_7_POS )
#define MDR_PORT_RXTX_PIN_8_MSK                                       ( 0x01 << MDR_PORT_RXTX_PIN_8_POS )
#define MDR_PORT_RXTX_PIN_9_MSK                                       ( 0x01 << MDR_PORT_RXTX_PIN_9_POS )
#define MDR_PORT_RXTX_PIN_10_MSK                                      ( 0x01 << MDR_PORT_RXTX_PIN_10_POS )
#define MDR_PORT_RXTX_PIN_11_MSK                                      ( 0x01 << MDR_PORT_RXTX_PIN_11_POS )
#define MDR_PORT_RXTX_PIN_12_MSK                                      ( 0x01 << MDR_PORT_RXTX_PIN_12_POS )
#define MDR_PORT_RXTX_PIN_13_MSK                                      ( 0x01 << MDR_PORT_RXTX_PIN_13_POS )
#define MDR_PORT_RXTX_PIN_14_MSK                                      ( 0x01 << MDR_PORT_RXTX_PIN_14_POS )
#define MDR_PORT_RXTX_PIN_15_MSK                                      ( 0x01 << MDR_PORT_RXTX_PIN_15_POS )

#define MDR_PORT_RXTX_PIN_0_LOW                                       ~( 0x01 << MDR_PORT_RXTX_PIN_0_POS )
#define MDR_PORT_RXTX_PIN_1_LOW                                       ~( 0x01 << MDR_PORT_RXTX_PIN_1_POS )
#define MDR_PORT_RXTX_PIN_2_LOW                                       ~( 0x01 << MDR_PORT_RXTX_PIN_2_POS )
#define MDR_PORT_RXTX_PIN_3_LOW                                       ~( 0x01 << MDR_PORT_RXTX_PIN_3_POS )
#define MDR_PORT_RXTX_PIN_4_LOW                                       ~( 0x01 << MDR_PORT_RXTX_PIN_4_POS )
#define MDR_PORT_RXTX_PIN_5_LOW                                       ~( 0x01 << MDR_PORT_RXTX_PIN_5_POS )
#define MDR_PORT_RXTX_PIN_6_LOW                                       ~( 0x01 << MDR_PORT_RXTX_PIN_6_POS )
#define MDR_PORT_RXTX_PIN_7_LOW                                       ~( 0x01 << MDR_PORT_RXTX_PIN_7_POS )
#define MDR_PORT_RXTX_PIN_8_LOW                                       ~( 0x01 << MDR_PORT_RXTX_PIN_8_POS )
#define MDR_PORT_RXTX_PIN_9_LOW                                       ~( 0x01 << MDR_PORT_RXTX_PIN_9_POS )
#define MDR_PORT_RXTX_PIN_10_LOW                                      ~( 0x01 << MDR_PORT_RXTX_PIN_10_POS )
#define MDR_PORT_RXTX_PIN_11_LOW                                      ~( 0x01 << MDR_PORT_RXTX_PIN_11_POS )
#define MDR_PORT_RXTX_PIN_12_LOW                                      ~( 0x01 << MDR_PORT_RXTX_PIN_12_POS )
#define MDR_PORT_RXTX_PIN_13_LOW                                      ~( 0x01 << MDR_PORT_RXTX_PIN_13_POS )
#define MDR_PORT_RXTX_PIN_14_LOW                                      ~( 0x01 << MDR_PORT_RXTX_PIN_14_POS )
#define MDR_PORT_RXTX_PIN_15_LOW                                      ~( 0x01 << MDR_PORT_RXTX_PIN_15_POS )

#define MDR_PORT_RXTX_PIN_0_HIGH                                       ( 0x01 << MDR_PORT_RXTX_PIN_0_POS )
#define MDR_PORT_RXTX_PIN_1_HIGH                                       ( 0x01 << MDR_PORT_RXTX_PIN_1_POS )
#define MDR_PORT_RXTX_PIN_2_HIGH                                       ( 0x01 << MDR_PORT_RXTX_PIN_2_POS )
#define MDR_PORT_RXTX_PIN_3_HIGH                                       ( 0x01 << MDR_PORT_RXTX_PIN_3_POS )
#define MDR_PORT_RXTX_PIN_4_HIGH                                       ( 0x01 << MDR_PORT_RXTX_PIN_4_POS )
#define MDR_PORT_RXTX_PIN_5_HIGH                                       ( 0x01 << MDR_PORT_RXTX_PIN_5_POS )
#define MDR_PORT_RXTX_PIN_6_HIGH                                       ( 0x01 << MDR_PORT_RXTX_PIN_6_POS )
#define MDR_PORT_RXTX_PIN_7_HIGH                                       ( 0x01 << MDR_PORT_RXTX_PIN_7_POS )
#define MDR_PORT_RXTX_PIN_8_HIGH                                       ( 0x01 << MDR_PORT_RXTX_PIN_8_POS )
#define MDR_PORT_RXTX_PIN_9_HIGH                                       ( 0x01 << MDR_PORT_RXTX_PIN_9_POS )
#define MDR_PORT_RXTX_PIN_10_HIGH                                      ( 0x01 << MDR_PORT_RXTX_PIN_10_POS )
#define MDR_PORT_RXTX_PIN_11_HIGH                                      ( 0x01 << MDR_PORT_RXTX_PIN_11_POS )
#define MDR_PORT_RXTX_PIN_12_HIGH                                      ( 0x01 << MDR_PORT_RXTX_PIN_12_POS )
#define MDR_PORT_RXTX_PIN_13_HIGH                                      ( 0x01 << MDR_PORT_RXTX_PIN_13_POS )
#define MDR_PORT_RXTX_PIN_14_HIGH                                      ( 0x01 << MDR_PORT_RXTX_PIN_14_POS )
#define MDR_PORT_RXTX_PIN_15_HIGH                                      ( 0x01 << MDR_PORT_RXTX_PIN_15_POS )

#define RXTX_PIN_POS( x )                                              ( x )
#define RXTX_PIN_MSK( x )                                              ( 0x01 << RXTX_PIN_POS( x ) )

#define RXTX_PIN_LOW( x )                                             ~( 0x01 << RXTX_PIN_POS( x ) )
#define RXTX_PIN_HIGH( x )                                             ( 0x01 << RXTX_PIN_POS( x ) )
// OE register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_PORT_OE_PIN_0_POS                                         0
#define MDR_PORT_OE_PIN_1_POS                                         1
#define MDR_PORT_OE_PIN_2_POS                                         2
#define MDR_PORT_OE_PIN_3_POS                                         3
#define MDR_PORT_OE_PIN_4_POS                                         4
#define MDR_PORT_OE_PIN_5_POS                                         5
#define MDR_PORT_OE_PIN_6_POS                                         6
#define MDR_PORT_OE_PIN_7_POS                                         7
#define MDR_PORT_OE_PIN_8_POS                                         8
#define MDR_PORT_OE_PIN_9_POS                                         9
#define MDR_PORT_OE_PIN_10_POS                                        10
#define MDR_PORT_OE_PIN_11_POS                                        11
#define MDR_PORT_OE_PIN_12_POS                                        12
#define MDR_PORT_OE_PIN_13_POS                                        13
#define MDR_PORT_OE_PIN_14_POS                                        14
#define MDR_PORT_OE_PIN_15_POS                                        15

#define MDR_PORT_OE_PIN_0_MSK                                         ( 0x01 << MDR_PORT_OE_PIN_0_POS )
#define MDR_PORT_OE_PIN_1_MSK                                         ( 0x01 << MDR_PORT_OE_PIN_1_POS )
#define MDR_PORT_OE_PIN_2_MSK                                         ( 0x01 << MDR_PORT_OE_PIN_2_POS )
#define MDR_PORT_OE_PIN_3_MSK                                         ( 0x01 << MDR_PORT_OE_PIN_3_POS )
#define MDR_PORT_OE_PIN_4_MSK                                         ( 0x01 << MDR_PORT_OE_PIN_4_POS )
#define MDR_PORT_OE_PIN_5_MSK                                         ( 0x01 << MDR_PORT_OE_PIN_5_POS )
#define MDR_PORT_OE_PIN_6_MSK                                         ( 0x01 << MDR_PORT_OE_PIN_6_POS )
#define MDR_PORT_OE_PIN_7_MSK                                         ( 0x01 << MDR_PORT_OE_PIN_7_POS )
#define MDR_PORT_OE_PIN_8_MSK                                         ( 0x01 << MDR_PORT_OE_PIN_8_POS )
#define MDR_PORT_OE_PIN_9_MSK                                         ( 0x01 << MDR_PORT_OE_PIN_9_POS )
#define MDR_PORT_OE_PIN_10_MSK                                        ( 0x01 << MDR_PORT_OE_PIN_10_POS )
#define MDR_PORT_OE_PIN_11_MSK                                        ( 0x01 << MDR_PORT_OE_PIN_11_POS )
#define MDR_PORT_OE_PIN_12_MSK                                        ( 0x01 << MDR_PORT_OE_PIN_12_POS )
#define MDR_PORT_OE_PIN_13_MSK                                        ( 0x01 << MDR_PORT_OE_PIN_13_POS )
#define MDR_PORT_OE_PIN_14_MSK                                        ( 0x01 << MDR_PORT_OE_PIN_14_POS )
#define MDR_PORT_OE_PIN_15_MSK                                        ( 0x01 << MDR_PORT_OE_PIN_15_POS )

#define MDR_PORT_OE_PIN_0_INPUT                                       ~( 0x01 << MDR_PORT_OE_PIN_0_POS )
#define MDR_PORT_OE_PIN_1_INPUT                                       ~( 0x01 << MDR_PORT_OE_PIN_1_POS )
#define MDR_PORT_OE_PIN_2_INPUT                                       ~( 0x01 << MDR_PORT_OE_PIN_2_POS )
#define MDR_PORT_OE_PIN_3_INPUT                                       ~( 0x01 << MDR_PORT_OE_PIN_3_POS )
#define MDR_PORT_OE_PIN_4_INPUT                                       ~( 0x01 << MDR_PORT_OE_PIN_4_POS )
#define MDR_PORT_OE_PIN_5_INPUT                                       ~( 0x01 << MDR_PORT_OE_PIN_5_POS )
#define MDR_PORT_OE_PIN_6_INPUT                                       ~( 0x01 << MDR_PORT_OE_PIN_6_POS )
#define MDR_PORT_OE_PIN_7_INPUT                                       ~( 0x01 << MDR_PORT_OE_PIN_7_POS )
#define MDR_PORT_OE_PIN_8_INPUT                                       ~( 0x01 << MDR_PORT_OE_PIN_8_POS )
#define MDR_PORT_OE_PIN_9_INPUT                                       ~( 0x01 << MDR_PORT_OE_PIN_9_POS )
#define MDR_PORT_OE_PIN_10_INPUT                                      ~( 0x01 << MDR_PORT_OE_PIN_10_POS )
#define MDR_PORT_OE_PIN_11_INPUT                                      ~( 0x01 << MDR_PORT_OE_PIN_11_POS )
#define MDR_PORT_OE_PIN_12_INPUT                                      ~( 0x01 << MDR_PORT_OE_PIN_12_POS )
#define MDR_PORT_OE_PIN_13_INPUT                                      ~( 0x01 << MDR_PORT_OE_PIN_13_POS )
#define MDR_PORT_OE_PIN_14_INPUT                                      ~( 0x01 << MDR_PORT_OE_PIN_14_POS )
#define MDR_PORT_OE_PIN_15_INPUT                                      ~( 0x01 << MDR_PORT_OE_PIN_15_POS )

#define MDR_PORT_OE_PIN_0_OUTPUT                                       ( 0x01 << MDR_PORT_OE_PIN_0_POS )
#define MDR_PORT_OE_PIN_1_OUTPUT                                       ( 0x01 << MDR_PORT_OE_PIN_1_POS )
#define MDR_PORT_OE_PIN_2_OUTPUT                                       ( 0x01 << MDR_PORT_OE_PIN_2_POS )
#define MDR_PORT_OE_PIN_3_OUTPUT                                       ( 0x01 << MDR_PORT_OE_PIN_3_POS )
#define MDR_PORT_OE_PIN_4_OUTPUT                                       ( 0x01 << MDR_PORT_OE_PIN_4_POS )
#define MDR_PORT_OE_PIN_5_OUTPUT                                       ( 0x01 << MDR_PORT_OE_PIN_5_POS )
#define MDR_PORT_OE_PIN_6_OUTPUT                                       ( 0x01 << MDR_PORT_OE_PIN_6_POS )
#define MDR_PORT_OE_PIN_7_OUTPUT                                       ( 0x01 << MDR_PORT_OE_PIN_7_POS )
#define MDR_PORT_OE_PIN_8_OUTPUT                                       ( 0x01 << MDR_PORT_OE_PIN_8_POS )
#define MDR_PORT_OE_PIN_9_OUTPUT                                       ( 0x01 << MDR_PORT_OE_PIN_9_POS )
#define MDR_PORT_OE_PIN_10_OUTPUT                                      ( 0x01 << MDR_PORT_OE_PIN_10_POS )
#define MDR_PORT_OE_PIN_11_OUTPUT                                      ( 0x01 << MDR_PORT_OE_PIN_11_POS )
#define MDR_PORT_OE_PIN_12_OUTPUT                                      ( 0x01 << MDR_PORT_OE_PIN_12_POS )
#define MDR_PORT_OE_PIN_13_OUTPUT                                      ( 0x01 << MDR_PORT_OE_PIN_13_POS )
#define MDR_PORT_OE_PIN_14_OUTPUT                                      ( 0x01 << MDR_PORT_OE_PIN_14_POS )
#define MDR_PORT_OE_PIN_15_OUTPUT                                      ( 0x01 << MDR_PORT_OE_PIN_15_POS )

#define OE_PIN_POS( x )                                                ( x )
#define OE_PIN_MSK( x )                                                ( 0x01 << OE_PIN_POS( x ) )

#define OE_PIN_INPUT( x )                                             ~( 0x01 << OE_PIN_POS( x ) )
#define OE_PIN_OUTPUT( x )                                             ( 0x01 << OE_PIN_POS( x ) )
// FUNC register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_PORT_FUNC_PIN_0_POS                                       0
#define MDR_PORT_FUNC_PIN_1_POS                                       2
#define MDR_PORT_FUNC_PIN_2_POS                                       4
#define MDR_PORT_FUNC_PIN_3_POS                                       6
#define MDR_PORT_FUNC_PIN_4_POS                                       8
#define MDR_PORT_FUNC_PIN_5_POS                                       10
#define MDR_PORT_FUNC_PIN_6_POS                                       12
#define MDR_PORT_FUNC_PIN_7_POS                                       14
#define MDR_PORT_FUNC_PIN_8_POS                                       16
#define MDR_PORT_FUNC_PIN_9_POS                                       18
#define MDR_PORT_FUNC_PIN_10_POS                                      20
#define MDR_PORT_FUNC_PIN_11_POS                                      22
#define MDR_PORT_FUNC_PIN_12_POS                                      24
#define MDR_PORT_FUNC_PIN_13_POS                                      26
#define MDR_PORT_FUNC_PIN_14_POS                                      28
#define MDR_PORT_FUNC_PIN_15_POS                                      30

#define MDR_PORT_FUNC_PIN_0_MSK                                       ( 0x03 << MDR_PORT_FUNC_PIN_0_POS )
#define MDR_PORT_FUNC_PIN_1_MSK                                       ( 0x03 << MDR_PORT_FUNC_PIN_1_POS )
#define MDR_PORT_FUNC_PIN_2_MSK                                       ( 0x03 << MDR_PORT_FUNC_PIN_2_POS )
#define MDR_PORT_FUNC_PIN_3_MSK                                       ( 0x03 << MDR_PORT_FUNC_PIN_3_POS )
#define MDR_PORT_FUNC_PIN_4_MSK                                       ( 0x03 << MDR_PORT_FUNC_PIN_4_POS )
#define MDR_PORT_FUNC_PIN_5_MSK                                       ( 0x03 << MDR_PORT_FUNC_PIN_5_POS )
#define MDR_PORT_FUNC_PIN_6_MSK                                       ( 0x03 << MDR_PORT_FUNC_PIN_6_POS )
#define MDR_PORT_FUNC_PIN_7_MSK                                       ( 0x03 << MDR_PORT_FUNC_PIN_7_POS )
#define MDR_PORT_FUNC_PIN_8_MSK                                       ( 0x03 << MDR_PORT_FUNC_PIN_8_POS )
#define MDR_PORT_FUNC_PIN_9_MSK                                       ( 0x03 << MDR_PORT_FUNC_PIN_9_POS )
#define MDR_PORT_FUNC_PIN_10_MSK                                      ( 0x03 << MDR_PORT_FUNC_PIN_10_POS )
#define MDR_PORT_FUNC_PIN_11_MSK                                      ( 0x03 << MDR_PORT_FUNC_PIN_11_POS )
#define MDR_PORT_FUNC_PIN_12_MSK                                      ( 0x03 << MDR_PORT_FUNC_PIN_12_POS )
#define MDR_PORT_FUNC_PIN_13_MSK                                      ( 0x03 << MDR_PORT_FUNC_PIN_13_POS )
#define MDR_PORT_FUNC_PIN_14_MSK                                      ( 0x03 << MDR_PORT_FUNC_PIN_14_POS )
#define MDR_PORT_FUNC_PIN_15_MSK                                      ( 0x03 << MDR_PORT_FUNC_PIN_15_POS )

#define MDR_PORT_FUNC_PIN_0_PORT                                      ~( 0x03 << MDR_PORT_FUNC_PIN_0_POS )
#define MDR_PORT_FUNC_PIN_1_PORT                                      ~( 0x03 << MDR_PORT_FUNC_PIN_1_POS )
#define MDR_PORT_FUNC_PIN_2_PORT                                      ~( 0x03 << MDR_PORT_FUNC_PIN_2_POS )
#define MDR_PORT_FUNC_PIN_3_PORT                                      ~( 0x03 << MDR_PORT_FUNC_PIN_3_POS )
#define MDR_PORT_FUNC_PIN_4_PORT                                      ~( 0x03 << MDR_PORT_FUNC_PIN_4_POS )
#define MDR_PORT_FUNC_PIN_5_PORT                                      ~( 0x03 << MDR_PORT_FUNC_PIN_5_POS )
#define MDR_PORT_FUNC_PIN_6_PORT                                      ~( 0x03 << MDR_PORT_FUNC_PIN_6_POS )
#define MDR_PORT_FUNC_PIN_7_PORT                                      ~( 0x03 << MDR_PORT_FUNC_PIN_7_POS )
#define MDR_PORT_FUNC_PIN_8_PORT                                      ~( 0x03 << MDR_PORT_FUNC_PIN_8_POS )
#define MDR_PORT_FUNC_PIN_9_PORT                                      ~( 0x03 << MDR_PORT_FUNC_PIN_9_POS )
#define MDR_PORT_FUNC_PIN_10_PORT                                     ~( 0x03 << MDR_PORT_FUNC_PIN_10_POS )
#define MDR_PORT_FUNC_PIN_11_PORT                                     ~( 0x03 << MDR_PORT_FUNC_PIN_11_POS )
#define MDR_PORT_FUNC_PIN_12_PORT                                     ~( 0x03 << MDR_PORT_FUNC_PIN_12_POS )
#define MDR_PORT_FUNC_PIN_13_PORT                                     ~( 0x03 << MDR_PORT_FUNC_PIN_13_POS )
#define MDR_PORT_FUNC_PIN_14_PORT                                     ~( 0x03 << MDR_PORT_FUNC_PIN_14_POS )
#define MDR_PORT_FUNC_PIN_15_PORT                                     ~( 0x03 << MDR_PORT_FUNC_PIN_15_POS )

#define MDR_PORT_FUNC_PIN_0_MAIN                                       ( 0x01 << MDR_PORT_FUNC_PIN_0_POS )
#define MDR_PORT_FUNC_PIN_1_MAIN                                       ( 0x01 << MDR_PORT_FUNC_PIN_1_POS )
#define MDR_PORT_FUNC_PIN_2_MAIN                                       ( 0x01 << MDR_PORT_FUNC_PIN_2_POS )
#define MDR_PORT_FUNC_PIN_3_MAIN                                       ( 0x01 << MDR_PORT_FUNC_PIN_3_POS )
#define MDR_PORT_FUNC_PIN_4_MAIN                                       ( 0x01 << MDR_PORT_FUNC_PIN_4_POS )
#define MDR_PORT_FUNC_PIN_5_MAIN                                       ( 0x01 << MDR_PORT_FUNC_PIN_5_POS )
#define MDR_PORT_FUNC_PIN_6_MAIN                                       ( 0x01 << MDR_PORT_FUNC_PIN_6_POS )
#define MDR_PORT_FUNC_PIN_7_MAIN                                       ( 0x01 << MDR_PORT_FUNC_PIN_7_POS )
#define MDR_PORT_FUNC_PIN_8_MAIN                                       ( 0x01 << MDR_PORT_FUNC_PIN_8_POS )
#define MDR_PORT_FUNC_PIN_9_MAIN                                       ( 0x01 << MDR_PORT_FUNC_PIN_9_POS )
#define MDR_PORT_FUNC_PIN_10_MAIN                                      ( 0x01 << MDR_PORT_FUNC_PIN_10_POS )
#define MDR_PORT_FUNC_PIN_11_MAIN                                      ( 0x01 << MDR_PORT_FUNC_PIN_11_POS )
#define MDR_PORT_FUNC_PIN_12_MAIN                                      ( 0x01 << MDR_PORT_FUNC_PIN_12_POS )
#define MDR_PORT_FUNC_PIN_13_MAIN                                      ( 0x01 << MDR_PORT_FUNC_PIN_13_POS )
#define MDR_PORT_FUNC_PIN_14_MAIN                                      ( 0x01 << MDR_PORT_FUNC_PIN_14_POS )
#define MDR_PORT_FUNC_PIN_15_MAIN                                      ( 0x01 << MDR_PORT_FUNC_PIN_15_POS )

#define MDR_PORT_FUNC_PIN_0_ALTERNATE                                  ( 0x02 << MDR_PORT_FUNC_PIN_0_POS )
#define MDR_PORT_FUNC_PIN_1_ALTERNATE                                  ( 0x02 << MDR_PORT_FUNC_PIN_1_POS )
#define MDR_PORT_FUNC_PIN_2_ALTERNATE                                  ( 0x02 << MDR_PORT_FUNC_PIN_2_POS )
#define MDR_PORT_FUNC_PIN_3_ALTERNATE                                  ( 0x02 << MDR_PORT_FUNC_PIN_3_POS )
#define MDR_PORT_FUNC_PIN_4_ALTERNATE                                  ( 0x02 << MDR_PORT_FUNC_PIN_4_POS )
#define MDR_PORT_FUNC_PIN_5_ALTERNATE                                  ( 0x02 << MDR_PORT_FUNC_PIN_5_POS )
#define MDR_PORT_FUNC_PIN_6_ALTERNATE                                  ( 0x02 << MDR_PORT_FUNC_PIN_6_POS )
#define MDR_PORT_FUNC_PIN_7_ALTERNATE                                  ( 0x02 << MDR_PORT_FUNC_PIN_7_POS )
#define MDR_PORT_FUNC_PIN_8_ALTERNATE                                  ( 0x02 << MDR_PORT_FUNC_PIN_8_POS )
#define MDR_PORT_FUNC_PIN_9_ALTERNATE                                  ( 0x02 << MDR_PORT_FUNC_PIN_9_POS )
#define MDR_PORT_FUNC_PIN_10_ALTERNATE                                 ( 0x02 << MDR_PORT_FUNC_PIN_10_POS )
#define MDR_PORT_FUNC_PIN_11_ALTERNATE                                 ( 0x02 << MDR_PORT_FUNC_PIN_11_POS )
#define MDR_PORT_FUNC_PIN_12_ALTERNATE                                 ( 0x02 << MDR_PORT_FUNC_PIN_12_POS )
#define MDR_PORT_FUNC_PIN_13_ALTERNATE                                 ( 0x02 << MDR_PORT_FUNC_PIN_13_POS )
#define MDR_PORT_FUNC_PIN_14_ALTERNATE                                 ( 0x02 << MDR_PORT_FUNC_PIN_14_POS )
#define MDR_PORT_FUNC_PIN_15_ALTERNATE                                 ( 0x02 << MDR_PORT_FUNC_PIN_15_POS )

#define MDR_PORT_FUNC_PIN_0_REDEFINED                                  ( 0x03 << MDR_PORT_FUNC_PIN_0_POS )
#define MDR_PORT_FUNC_PIN_1_REDEFINED                                  ( 0x03 << MDR_PORT_FUNC_PIN_1_POS )
#define MDR_PORT_FUNC_PIN_2_REDEFINED                                  ( 0x03 << MDR_PORT_FUNC_PIN_2_POS )
#define MDR_PORT_FUNC_PIN_3_REDEFINED                                  ( 0x03 << MDR_PORT_FUNC_PIN_3_POS )
#define MDR_PORT_FUNC_PIN_4_REDEFINED                                  ( 0x03 << MDR_PORT_FUNC_PIN_4_POS )
#define MDR_PORT_FUNC_PIN_5_REDEFINED                                  ( 0x03 << MDR_PORT_FUNC_PIN_5_POS )
#define MDR_PORT_FUNC_PIN_6_REDEFINED                                  ( 0x03 << MDR_PORT_FUNC_PIN_6_POS )
#define MDR_PORT_FUNC_PIN_7_REDEFINED                                  ( 0x03 << MDR_PORT_FUNC_PIN_7_POS )
#define MDR_PORT_FUNC_PIN_8_REDEFINED                                  ( 0x03 << MDR_PORT_FUNC_PIN_8_POS )
#define MDR_PORT_FUNC_PIN_9_REDEFINED                                  ( 0x03 << MDR_PORT_FUNC_PIN_9_POS )
#define MDR_PORT_FUNC_PIN_10_REDEFINED                                 ( 0x03 << MDR_PORT_FUNC_PIN_10_POS )
#define MDR_PORT_FUNC_PIN_11_REDEFINED                                 ( 0x03 << MDR_PORT_FUNC_PIN_11_POS )
#define MDR_PORT_FUNC_PIN_12_REDEFINED                                 ( 0x03 << MDR_PORT_FUNC_PIN_12_POS )
#define MDR_PORT_FUNC_PIN_13_REDEFINED                                 ( 0x03 << MDR_PORT_FUNC_PIN_13_POS )
#define MDR_PORT_FUNC_PIN_14_REDEFINED                                 ( 0x03 << MDR_PORT_FUNC_PIN_14_POS )
#define MDR_PORT_FUNC_PIN_15_REDEFINED                                 ( 0x03 << MDR_PORT_FUNC_PIN_15_POS )

#define FUNC_PIN_POS( x )                                              ( ( x ) * 2 )
#define FUNC_PIN_MSK( x )                                              ( 0x03 << FUNC_PIN_POS( x ) )

#define FUNC_PIN_PORT( x )                                            ~( 0x03 << FUNC_PIN_POS( x ) )
#define FUNC_PIN_MAIN( x )                                             ( 0x01 << FUNC_PIN_POS( x ) )
#define FUNC_PIN_ALTERNATE( x )                                        ( 0x02 << FUNC_PIN_POS( x ) )
#define FUNC_PIN_REDEFINED( x )                                        ( 0x03 << FUNC_PIN_POS( x ) )
// ANALOG register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_PORT_ANALOG_PIN_0_POS                                     0
#define MDR_PORT_ANALOG_PIN_1_POS                                     1
#define MDR_PORT_ANALOG_PIN_2_POS                                     2
#define MDR_PORT_ANALOG_PIN_3_POS                                     3
#define MDR_PORT_ANALOG_PIN_4_POS                                     4
#define MDR_PORT_ANALOG_PIN_5_POS                                     5
#define MDR_PORT_ANALOG_PIN_6_POS                                     6
#define MDR_PORT_ANALOG_PIN_7_POS                                     7
#define MDR_PORT_ANALOG_PIN_8_POS                                     8
#define MDR_PORT_ANALOG_PIN_9_POS                                     9
#define MDR_PORT_ANALOG_PIN_10_POS                                    10
#define MDR_PORT_ANALOG_PIN_11_POS                                    11
#define MDR_PORT_ANALOG_PIN_12_POS                                    12
#define MDR_PORT_ANALOG_PIN_13_POS                                    13
#define MDR_PORT_ANALOG_PIN_14_POS                                    14
#define MDR_PORT_ANALOG_PIN_15_POS                                    15

#define MDR_PORT_ANALOG_PIN_0_MSK                                     ( 0x01 << MDR_PORT_ANALOG_PIN_0_POS )
#define MDR_PORT_ANALOG_PIN_1_MSK                                     ( 0x01 << MDR_PORT_ANALOG_PIN_1_POS )
#define MDR_PORT_ANALOG_PIN_2_MSK                                     ( 0x01 << MDR_PORT_ANALOG_PIN_2_POS )
#define MDR_PORT_ANALOG_PIN_3_MSK                                     ( 0x01 << MDR_PORT_ANALOG_PIN_3_POS )
#define MDR_PORT_ANALOG_PIN_4_MSK                                     ( 0x01 << MDR_PORT_ANALOG_PIN_4_POS )
#define MDR_PORT_ANALOG_PIN_5_MSK                                     ( 0x01 << MDR_PORT_ANALOG_PIN_5_POS )
#define MDR_PORT_ANALOG_PIN_6_MSK                                     ( 0x01 << MDR_PORT_ANALOG_PIN_6_POS )
#define MDR_PORT_ANALOG_PIN_7_MSK                                     ( 0x01 << MDR_PORT_ANALOG_PIN_7_POS )
#define MDR_PORT_ANALOG_PIN_8_MSK                                     ( 0x01 << MDR_PORT_ANALOG_PIN_8_POS )
#define MDR_PORT_ANALOG_PIN_9_MSK                                     ( 0x01 << MDR_PORT_ANALOG_PIN_9_POS )
#define MDR_PORT_ANALOG_PIN_10_MSK                                    ( 0x01 << MDR_PORT_ANALOG_PIN_10_POS )
#define MDR_PORT_ANALOG_PIN_11_MSK                                    ( 0x01 << MDR_PORT_ANALOG_PIN_11_POS )
#define MDR_PORT_ANALOG_PIN_12_MSK                                    ( 0x01 << MDR_PORT_ANALOG_PIN_12_POS )
#define MDR_PORT_ANALOG_PIN_13_MSK                                    ( 0x01 << MDR_PORT_ANALOG_PIN_13_POS )
#define MDR_PORT_ANALOG_PIN_14_MSK                                    ( 0x01 << MDR_PORT_ANALOG_PIN_14_POS )
#define MDR_PORT_ANALOG_PIN_15_MSK                                    ( 0x01 << MDR_PORT_ANALOG_PIN_15_POS )

#define MDR_PORT_ANALOG_PIN_0_ANALOG                                  ~( 0x01 << MDR_PORT_ANALOG_PIN_0_POS )
#define MDR_PORT_ANALOG_PIN_1_ANALOG                                  ~( 0x01 << MDR_PORT_ANALOG_PIN_1_POS )
#define MDR_PORT_ANALOG_PIN_2_ANALOG                                  ~( 0x01 << MDR_PORT_ANALOG_PIN_2_POS )
#define MDR_PORT_ANALOG_PIN_3_ANALOG                                  ~( 0x01 << MDR_PORT_ANALOG_PIN_3_POS )
#define MDR_PORT_ANALOG_PIN_4_ANALOG                                  ~( 0x01 << MDR_PORT_ANALOG_PIN_4_POS )
#define MDR_PORT_ANALOG_PIN_5_ANALOG                                  ~( 0x01 << MDR_PORT_ANALOG_PIN_5_POS )
#define MDR_PORT_ANALOG_PIN_6_ANALOG                                  ~( 0x01 << MDR_PORT_ANALOG_PIN_6_POS )
#define MDR_PORT_ANALOG_PIN_7_ANALOG                                  ~( 0x01 << MDR_PORT_ANALOG_PIN_7_POS )
#define MDR_PORT_ANALOG_PIN_8_ANALOG                                  ~( 0x01 << MDR_PORT_ANALOG_PIN_8_POS )
#define MDR_PORT_ANALOG_PIN_9_ANALOG                                  ~( 0x01 << MDR_PORT_ANALOG_PIN_9_POS )
#define MDR_PORT_ANALOG_PIN_10_ANALOG                                 ~( 0x01 << MDR_PORT_ANALOG_PIN_10_POS )
#define MDR_PORT_ANALOG_PIN_11_ANALOG                                 ~( 0x01 << MDR_PORT_ANALOG_PIN_11_POS )
#define MDR_PORT_ANALOG_PIN_12_ANALOG                                 ~( 0x01 << MDR_PORT_ANALOG_PIN_12_POS )
#define MDR_PORT_ANALOG_PIN_13_ANALOG                                 ~( 0x01 << MDR_PORT_ANALOG_PIN_13_POS )
#define MDR_PORT_ANALOG_PIN_14_ANALOG                                 ~( 0x01 << MDR_PORT_ANALOG_PIN_14_POS )
#define MDR_PORT_ANALOG_PIN_15_ANALOG                                 ~( 0x01 << MDR_PORT_ANALOG_PIN_15_POS )

#define MDR_PORT_ANALOG_PIN_0_DIGITAL                                  ( 0x01 << MDR_PORT_ANALOG_PIN_0_POS )
#define MDR_PORT_ANALOG_PIN_1_DIGITAL                                  ( 0x01 << MDR_PORT_ANALOG_PIN_1_POS )
#define MDR_PORT_ANALOG_PIN_2_DIGITAL                                  ( 0x01 << MDR_PORT_ANALOG_PIN_2_POS )
#define MDR_PORT_ANALOG_PIN_3_DIGITAL                                  ( 0x01 << MDR_PORT_ANALOG_PIN_3_POS )
#define MDR_PORT_ANALOG_PIN_4_DIGITAL                                  ( 0x01 << MDR_PORT_ANALOG_PIN_4_POS )
#define MDR_PORT_ANALOG_PIN_5_DIGITAL                                  ( 0x01 << MDR_PORT_ANALOG_PIN_5_POS )
#define MDR_PORT_ANALOG_PIN_6_DIGITAL                                  ( 0x01 << MDR_PORT_ANALOG_PIN_6_POS )
#define MDR_PORT_ANALOG_PIN_7_DIGITAL                                  ( 0x01 << MDR_PORT_ANALOG_PIN_7_POS )
#define MDR_PORT_ANALOG_PIN_8_DIGITAL                                  ( 0x01 << MDR_PORT_ANALOG_PIN_8_POS )
#define MDR_PORT_ANALOG_PIN_9_DIGITAL                                  ( 0x01 << MDR_PORT_ANALOG_PIN_9_POS )
#define MDR_PORT_ANALOG_PIN_10_DIGITAL                                 ( 0x01 << MDR_PORT_ANALOG_PIN_10_POS )
#define MDR_PORT_ANALOG_PIN_11_DIGITAL                                 ( 0x01 << MDR_PORT_ANALOG_PIN_11_POS )
#define MDR_PORT_ANALOG_PIN_12_DIGITAL                                 ( 0x01 << MDR_PORT_ANALOG_PIN_12_POS )
#define MDR_PORT_ANALOG_PIN_13_DIGITAL                                 ( 0x01 << MDR_PORT_ANALOG_PIN_13_POS )
#define MDR_PORT_ANALOG_PIN_14_DIGITAL                                 ( 0x01 << MDR_PORT_ANALOG_PIN_14_POS )
#define MDR_PORT_ANALOG_PIN_15_DIGITAL                                 ( 0x01 << MDR_PORT_ANALOG_PIN_15_POS )

#define ANALOG_PIN_POS( x )                                            ( x )
#define ANALOG_PIN_MSK( x )                                            ( 0x01 << ANALOG_PIN_POS( x ) )

#define ANALOG_PIN_ANALOG( x )                                        ~( 0x01 << ANALOG_PIN_POS( x ) )
#define ANALOG_PIN_DIGITAL( x )                                        ( 0x01 << ANALOG_PIN_POS( x ) )
// PULL register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_PORT_PULL_DOWN_PIN_0_POS                                  0
#define MDR_PORT_PULL_DOWN_PIN_1_POS                                  1
#define MDR_PORT_PULL_DOWN_PIN_2_POS                                  2
#define MDR_PORT_PULL_DOWN_PIN_3_POS                                  3
#define MDR_PORT_PULL_DOWN_PIN_4_POS                                  4
#define MDR_PORT_PULL_DOWN_PIN_5_POS                                  5
#define MDR_PORT_PULL_DOWN_PIN_6_POS                                  6
#define MDR_PORT_PULL_DOWN_PIN_7_POS                                  7
#define MDR_PORT_PULL_DOWN_PIN_8_POS                                  8
#define MDR_PORT_PULL_DOWN_PIN_9_POS                                  9
#define MDR_PORT_PULL_DOWN_PIN_10_POS                                 10
#define MDR_PORT_PULL_DOWN_PIN_11_POS                                 11
#define MDR_PORT_PULL_DOWN_PIN_12_POS                                 12
#define MDR_PORT_PULL_DOWN_PIN_13_POS                                 13
#define MDR_PORT_PULL_DOWN_PIN_14_POS                                 14
#define MDR_PORT_PULL_DOWN_PIN_15_POS                                 15
#define MDR_PORT_PULL_UP_PIN_0_POS                                    16
#define MDR_PORT_PULL_UP_PIN_1_POS                                    17
#define MDR_PORT_PULL_UP_PIN_2_POS                                    18
#define MDR_PORT_PULL_UP_PIN_3_POS                                    19
#define MDR_PORT_PULL_UP_PIN_4_POS                                    20
#define MDR_PORT_PULL_UP_PIN_5_POS                                    21
#define MDR_PORT_PULL_UP_PIN_6_POS                                    22
#define MDR_PORT_PULL_UP_PIN_7_POS                                    23
#define MDR_PORT_PULL_UP_PIN_8_POS                                    24
#define MDR_PORT_PULL_UP_PIN_9_POS                                    25
#define MDR_PORT_PULL_UP_PIN_10_POS                                   26
#define MDR_PORT_PULL_UP_PIN_11_POS                                   27
#define MDR_PORT_PULL_UP_PIN_12_POS                                   28
#define MDR_PORT_PULL_UP_PIN_13_POS                                   29
#define MDR_PORT_PULL_UP_PIN_14_POS                                   30
#define MDR_PORT_PULL_UP_PIN_15_POS                                   31

#define MDR_PORT_PULL_DOWN_PIN_0_MSK                                  ( 0x01 << MDR_PORT_PULL_DOWN_PIN_0_POS )
#define MDR_PORT_PULL_DOWN_PIN_1_MSK                                  ( 0x01 << MDR_PORT_PULL_DOWN_PIN_1_POS )
#define MDR_PORT_PULL_DOWN_PIN_2_MSK                                  ( 0x01 << MDR_PORT_PULL_DOWN_PIN_2_POS )
#define MDR_PORT_PULL_DOWN_PIN_3_MSK                                  ( 0x01 << MDR_PORT_PULL_DOWN_PIN_3_POS )
#define MDR_PORT_PULL_DOWN_PIN_4_MSK                                  ( 0x01 << MDR_PORT_PULL_DOWN_PIN_4_POS )
#define MDR_PORT_PULL_DOWN_PIN_5_MSK                                  ( 0x01 << MDR_PORT_PULL_DOWN_PIN_5_POS )
#define MDR_PORT_PULL_DOWN_PIN_6_MSK                                  ( 0x01 << MDR_PORT_PULL_DOWN_PIN_6_POS )
#define MDR_PORT_PULL_DOWN_PIN_7_MSK                                  ( 0x01 << MDR_PORT_PULL_DOWN_PIN_7_POS )
#define MDR_PORT_PULL_DOWN_PIN_8_MSK                                  ( 0x01 << MDR_PORT_PULL_DOWN_PIN_8_POS )
#define MDR_PORT_PULL_DOWN_PIN_9_MSK                                  ( 0x01 << MDR_PORT_PULL_DOWN_PIN_9_POS )
#define MDR_PORT_PULL_DOWN_PIN_10_MSK                                 ( 0x01 << MDR_PORT_PULL_DOWN_PIN_10_POS )
#define MDR_PORT_PULL_DOWN_PIN_11_MSK                                 ( 0x01 << MDR_PORT_PULL_DOWN_PIN_11_POS )
#define MDR_PORT_PULL_DOWN_PIN_12_MSK                                 ( 0x01 << MDR_PORT_PULL_DOWN_PIN_12_POS )
#define MDR_PORT_PULL_DOWN_PIN_13_MSK                                 ( 0x01 << MDR_PORT_PULL_DOWN_PIN_13_POS )
#define MDR_PORT_PULL_DOWN_PIN_14_MSK                                 ( 0x01 << MDR_PORT_PULL_DOWN_PIN_14_POS )
#define MDR_PORT_PULL_DOWN_PIN_15_MSK                                 ( 0x01 << MDR_PORT_PULL_DOWN_PIN_15_POS )
#define MDR_PORT_PULL_UP_PIN_0_MSK                                    ( 0x01 << MDR_PORT_PULL_UP_PIN_0_POS )
#define MDR_PORT_PULL_UP_PIN_1_MSK                                    ( 0x01 << MDR_PORT_PULL_UP_PIN_1_POS )
#define MDR_PORT_PULL_UP_PIN_2_MSK                                    ( 0x01 << MDR_PORT_PULL_UP_PIN_2_POS )
#define MDR_PORT_PULL_UP_PIN_3_MSK                                    ( 0x01 << MDR_PORT_PULL_UP_PIN_3_POS )
#define MDR_PORT_PULL_UP_PIN_4_MSK                                    ( 0x01 << MDR_PORT_PULL_UP_PIN_4_POS )
#define MDR_PORT_PULL_UP_PIN_5_MSK                                    ( 0x01 << MDR_PORT_PULL_UP_PIN_5_POS )
#define MDR_PORT_PULL_UP_PIN_6_MSK                                    ( 0x01 << MDR_PORT_PULL_UP_PIN_6_POS )
#define MDR_PORT_PULL_UP_PIN_7_MSK                                    ( 0x01 << MDR_PORT_PULL_UP_PIN_7_POS )
#define MDR_PORT_PULL_UP_PIN_8_MSK                                    ( 0x01 << MDR_PORT_PULL_UP_PIN_8_POS )
#define MDR_PORT_PULL_UP_PIN_9_MSK                                    ( 0x01 << MDR_PORT_PULL_UP_PIN_9_POS )
#define MDR_PORT_PULL_UP_PIN_10_MSK                                   ( 0x01 << MDR_PORT_PULL_UP_PIN_10_POS )
#define MDR_PORT_PULL_UP_PIN_11_MSK                                   ( 0x01 << MDR_PORT_PULL_UP_PIN_11_POS )
#define MDR_PORT_PULL_UP_PIN_12_MSK                                   ( 0x01 << MDR_PORT_PULL_UP_PIN_12_POS )
#define MDR_PORT_PULL_UP_PIN_13_MSK                                   ( 0x01 << MDR_PORT_PULL_UP_PIN_13_POS )
#define MDR_PORT_PULL_UP_PIN_14_MSK                                   ( 0x01 << MDR_PORT_PULL_UP_PIN_14_POS )
#define MDR_PORT_PULL_UP_PIN_15_MSK                                   ( 0x01 << MDR_PORT_PULL_UP_PIN_15_POS )

#define MDR_PORT_PULL_DOWN_PIN_0_DISABLE                              ~( 0x01 << MDR_PORT_PULL_DOWN_PIN_0_POS )
#define MDR_PORT_PULL_DOWN_PIN_1_DISABLE                              ~( 0x01 << MDR_PORT_PULL_DOWN_PIN_1_POS )
#define MDR_PORT_PULL_DOWN_PIN_2_DISABLE                              ~( 0x01 << MDR_PORT_PULL_DOWN_PIN_2_POS )
#define MDR_PORT_PULL_DOWN_PIN_3_DISABLE                              ~( 0x01 << MDR_PORT_PULL_DOWN_PIN_3_POS )
#define MDR_PORT_PULL_DOWN_PIN_4_DISABLE                              ~( 0x01 << MDR_PORT_PULL_DOWN_PIN_4_POS )
#define MDR_PORT_PULL_DOWN_PIN_5_DISABLE                              ~( 0x01 << MDR_PORT_PULL_DOWN_PIN_5_POS )
#define MDR_PORT_PULL_DOWN_PIN_6_DISABLE                              ~( 0x01 << MDR_PORT_PULL_DOWN_PIN_6_POS )
#define MDR_PORT_PULL_DOWN_PIN_7_DISABLE                              ~( 0x01 << MDR_PORT_PULL_DOWN_PIN_7_POS )
#define MDR_PORT_PULL_DOWN_PIN_8_DISABLE                              ~( 0x01 << MDR_PORT_PULL_DOWN_PIN_8_POS )
#define MDR_PORT_PULL_DOWN_PIN_9_DISABLE                              ~( 0x01 << MDR_PORT_PULL_DOWN_PIN_9_POS )
#define MDR_PORT_PULL_DOWN_PIN_10_DISABLE                             ~( 0x01 << MDR_PORT_PULL_DOWN_PIN_10_POS )
#define MDR_PORT_PULL_DOWN_PIN_11_DISABLE                             ~( 0x01 << MDR_PORT_PULL_DOWN_PIN_11_POS )
#define MDR_PORT_PULL_DOWN_PIN_12_DISABLE                             ~( 0x01 << MDR_PORT_PULL_DOWN_PIN_12_POS )
#define MDR_PORT_PULL_DOWN_PIN_13_DISABLE                             ~( 0x01 << MDR_PORT_PULL_DOWN_PIN_13_POS )
#define MDR_PORT_PULL_DOWN_PIN_14_DISABLE                             ~( 0x01 << MDR_PORT_PULL_DOWN_PIN_14_POS )
#define MDR_PORT_PULL_DOWN_PIN_15_DISABLE                             ~( 0x01 << MDR_PORT_PULL_DOWN_PIN_15_POS )

#define MDR_PORT_PULL_DOWN_PIN_0_ENABLE                                ( 0x01 << MDR_PORT_PULL_DOWN_PIN_0_POS )
#define MDR_PORT_PULL_DOWN_PIN_1_ENABLE                                ( 0x01 << MDR_PORT_PULL_DOWN_PIN_1_POS )
#define MDR_PORT_PULL_DOWN_PIN_2_ENABLE                                ( 0x01 << MDR_PORT_PULL_DOWN_PIN_2_POS )
#define MDR_PORT_PULL_DOWN_PIN_3_ENABLE                                ( 0x01 << MDR_PORT_PULL_DOWN_PIN_3_POS )
#define MDR_PORT_PULL_DOWN_PIN_4_ENABLE                                ( 0x01 << MDR_PORT_PULL_DOWN_PIN_4_POS )
#define MDR_PORT_PULL_DOWN_PIN_5_ENABLE                                ( 0x01 << MDR_PORT_PULL_DOWN_PIN_5_POS )
#define MDR_PORT_PULL_DOWN_PIN_6_ENABLE                                ( 0x01 << MDR_PORT_PULL_DOWN_PIN_6_POS )
#define MDR_PORT_PULL_DOWN_PIN_7_ENABLE                                ( 0x01 << MDR_PORT_PULL_DOWN_PIN_7_POS )
#define MDR_PORT_PULL_DOWN_PIN_8_ENABLE                                ( 0x01 << MDR_PORT_PULL_DOWN_PIN_8_POS )
#define MDR_PORT_PULL_DOWN_PIN_9_ENABLE                                ( 0x01 << MDR_PORT_PULL_DOWN_PIN_9_POS )
#define MDR_PORT_PULL_DOWN_PIN_10_ENABLE                               ( 0x01 << MDR_PORT_PULL_DOWN_PIN_10_POS )
#define MDR_PORT_PULL_DOWN_PIN_11_ENABLE                               ( 0x01 << MDR_PORT_PULL_DOWN_PIN_11_POS )
#define MDR_PORT_PULL_DOWN_PIN_12_ENABLE                               ( 0x01 << MDR_PORT_PULL_DOWN_PIN_12_POS )
#define MDR_PORT_PULL_DOWN_PIN_13_ENABLE                               ( 0x01 << MDR_PORT_PULL_DOWN_PIN_13_POS )
#define MDR_PORT_PULL_DOWN_PIN_14_ENABLE                               ( 0x01 << MDR_PORT_PULL_DOWN_PIN_14_POS )
#define MDR_PORT_PULL_DOWN_PIN_15_ENABLE                               ( 0x01 << MDR_PORT_PULL_DOWN_PIN_15_POS )

#define MDR_PORT_PULL_UP_PIN_0_DISABLE                                ~( 0x01 << MDR_PORT_PULL_UP_PIN_0_POS )
#define MDR_PORT_PULL_UP_PIN_1_DISABLE                                ~( 0x01 << MDR_PORT_PULL_UP_PIN_1_POS )
#define MDR_PORT_PULL_UP_PIN_2_DISABLE                                ~( 0x01 << MDR_PORT_PULL_UP_PIN_2_POS )
#define MDR_PORT_PULL_UP_PIN_3_DISABLE                                ~( 0x01 << MDR_PORT_PULL_UP_PIN_3_POS )
#define MDR_PORT_PULL_UP_PIN_4_DISABLE                                ~( 0x01 << MDR_PORT_PULL_UP_PIN_4_POS )
#define MDR_PORT_PULL_UP_PIN_5_DISABLE                                ~( 0x01 << MDR_PORT_PULL_UP_PIN_5_POS )
#define MDR_PORT_PULL_UP_PIN_6_DISABLE                                ~( 0x01 << MDR_PORT_PULL_UP_PIN_6_POS )
#define MDR_PORT_PULL_UP_PIN_7_DISABLE                                ~( 0x01 << MDR_PORT_PULL_UP_PIN_7_POS )
#define MDR_PORT_PULL_UP_PIN_8_DISABLE                                ~( 0x01 << MDR_PORT_PULL_UP_PIN_8_POS )
#define MDR_PORT_PULL_UP_PIN_9_DISABLE                                ~( 0x01 << MDR_PORT_PULL_UP_PIN_9_POS )
#define MDR_PORT_PULL_UP_PIN_10_DISABLE                               ~( 0x01 << MDR_PORT_PULL_UP_PIN_10_POS )
#define MDR_PORT_PULL_UP_PIN_11_DISABLE                               ~( 0x01 << MDR_PORT_PULL_UP_PIN_11_POS )
#define MDR_PORT_PULL_UP_PIN_12_DISABLE                               ~( 0x01 << MDR_PORT_PULL_UP_PIN_12_POS )
#define MDR_PORT_PULL_UP_PIN_13_DISABLE                               ~( 0x01 << MDR_PORT_PULL_UP_PIN_13_POS )
#define MDR_PORT_PULL_UP_PIN_14_DISABLE                               ~( 0x01 << MDR_PORT_PULL_UP_PIN_14_POS )
#define MDR_PORT_PULL_UP_PIN_15_DISABLE                               ~( 0x01 << MDR_PORT_PULL_UP_PIN_15_POS )

#define MDR_PORT_PULL_UP_PIN_0_ENABLE                                  ( 0x01 << MDR_PORT_PULL_UP_PIN_0_POS )
#define MDR_PORT_PULL_UP_PIN_1_ENABLE                                  ( 0x01 << MDR_PORT_PULL_UP_PIN_1_POS )
#define MDR_PORT_PULL_UP_PIN_2_ENABLE                                  ( 0x01 << MDR_PORT_PULL_UP_PIN_2_POS )
#define MDR_PORT_PULL_UP_PIN_3_ENABLE                                  ( 0x01 << MDR_PORT_PULL_UP_PIN_3_POS )
#define MDR_PORT_PULL_UP_PIN_4_ENABLE                                  ( 0x01 << MDR_PORT_PULL_UP_PIN_4_POS )
#define MDR_PORT_PULL_UP_PIN_5_ENABLE                                  ( 0x01 << MDR_PORT_PULL_UP_PIN_5_POS )
#define MDR_PORT_PULL_UP_PIN_6_ENABLE                                  ( 0x01 << MDR_PORT_PULL_UP_PIN_6_POS )
#define MDR_PORT_PULL_UP_PIN_7_ENABLE                                  ( 0x01 << MDR_PORT_PULL_UP_PIN_7_POS )
#define MDR_PORT_PULL_UP_PIN_8_ENABLE                                  ( 0x01 << MDR_PORT_PULL_UP_PIN_8_POS )
#define MDR_PORT_PULL_UP_PIN_9_ENABLE                                  ( 0x01 << MDR_PORT_PULL_UP_PIN_9_POS )
#define MDR_PORT_PULL_UP_PIN_10_ENABLE                                 ( 0x01 << MDR_PORT_PULL_UP_PIN_10_POS )
#define MDR_PORT_PULL_UP_PIN_11_ENABLE                                 ( 0x01 << MDR_PORT_PULL_UP_PIN_11_POS )
#define MDR_PORT_PULL_UP_PIN_12_ENABLE                                 ( 0x01 << MDR_PORT_PULL_UP_PIN_12_POS )
#define MDR_PORT_PULL_UP_PIN_13_ENABLE                                 ( 0x01 << MDR_PORT_PULL_UP_PIN_13_POS )
#define MDR_PORT_PULL_UP_PIN_14_ENABLE                                 ( 0x01 << MDR_PORT_PULL_UP_PIN_14_POS )
#define MDR_PORT_PULL_UP_PIN_15_ENABLE                                 ( 0x01 << MDR_PORT_PULL_UP_PIN_15_POS )

#define PULL_DOWN_PIN_POS( x )                                         ( x )
#define PULL_UP_PIN_POS( x )                                           ( ( x ) + 16 )

#define PULL_DOWN_PIN_MSK( x )                                         ( 0x01 << PULL_DOWN_PIN_POS( x ) )
#define PULL_UP_PIN_MSK( x )                                           ( 0x01 << PULL_UP_PIN_POS( x ) )

#define PULL_DOWN_PIN_DISABLE( x )                                    ~( 0x01 << PULL_DOWN_PIN_POS( x ) )
#define PULL_DOWN_PIN_ENABLE( x )                                      ( 0x01 << PULL_DOWN_PIN_POS( x ) )

#define PULL_UP_PIN_DISABLE( x )                                      ~( 0x01 << PULL_UP_PIN_POS( x ) )
#define PULL_UP_PIN_ENABLE( x )                                        ( 0x01 << PULL_UP_PIN_POS( x ) )
// PD register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_PORT_PD_OPEN_DRAIN_PIN_0_POS                              0
#define MDR_PORT_PD_OPEN_DRAIN_PIN_1_POS                              1
#define MDR_PORT_PD_OPEN_DRAIN_PIN_2_POS                              2
#define MDR_PORT_PD_OPEN_DRAIN_PIN_3_POS                              3
#define MDR_PORT_PD_OPEN_DRAIN_PIN_4_POS                              4
#define MDR_PORT_PD_OPEN_DRAIN_PIN_5_POS                              5
#define MDR_PORT_PD_OPEN_DRAIN_PIN_6_POS                              6
#define MDR_PORT_PD_OPEN_DRAIN_PIN_7_POS                              7
#define MDR_PORT_PD_OPEN_DRAIN_PIN_8_POS                              8
#define MDR_PORT_PD_OPEN_DRAIN_PIN_9_POS                              9
#define MDR_PORT_PD_OPEN_DRAIN_PIN_10_POS                             10
#define MDR_PORT_PD_OPEN_DRAIN_PIN_11_POS                             11
#define MDR_PORT_PD_OPEN_DRAIN_PIN_12_POS                             12
#define MDR_PORT_PD_OPEN_DRAIN_PIN_13_POS                             13
#define MDR_PORT_PD_OPEN_DRAIN_PIN_14_POS                             14
#define MDR_PORT_PD_OPEN_DRAIN_PIN_15_POS                             15
#define MDR_PORT_PD_SCHMITT_PIN_0_POS                                 16
#define MDR_PORT_PD_SCHMITT_PIN_1_POS                                 17
#define MDR_PORT_PD_SCHMITT_PIN_2_POS                                 18
#define MDR_PORT_PD_SCHMITT_PIN_3_POS                                 19
#define MDR_PORT_PD_SCHMITT_PIN_4_POS                                 20
#define MDR_PORT_PD_SCHMITT_PIN_5_POS                                 21
#define MDR_PORT_PD_SCHMITT_PIN_6_POS                                 22
#define MDR_PORT_PD_SCHMITT_PIN_7_POS                                 23
#define MDR_PORT_PD_SCHMITT_PIN_8_POS                                 24
#define MDR_PORT_PD_SCHMITT_PIN_9_POS                                 25
#define MDR_PORT_PD_SCHMITT_PIN_10_POS                                26
#define MDR_PORT_PD_SCHMITT_PIN_11_POS                                27
#define MDR_PORT_PD_SCHMITT_PIN_12_POS                                28
#define MDR_PORT_PD_SCHMITT_PIN_13_POS                                29
#define MDR_PORT_PD_SCHMITT_PIN_14_POS                                30
#define MDR_PORT_PD_SCHMITT_PIN_15_POS                                31

#define MDR_PORT_PD_OPEN_DRAIN_PIN_0_MSK                              ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_0_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_1_MSK                              ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_1_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_2_MSK                              ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_2_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_3_MSK                              ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_3_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_4_MSK                              ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_4_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_5_MSK                              ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_5_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_6_MSK                              ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_6_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_7_MSK                              ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_7_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_8_MSK                              ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_8_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_9_MSK                              ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_9_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_10_MSK                             ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_10_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_11_MSK                             ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_11_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_12_MSK                             ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_12_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_13_MSK                             ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_13_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_14_MSK                             ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_14_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_15_MSK                             ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_15_POS )
#define MDR_PORT_PD_SCHMITT_PIN_0_MSK                                 ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_0_POS )
#define MDR_PORT_PD_SCHMITT_PIN_1_MSK                                 ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_1_POS )
#define MDR_PORT_PD_SCHMITT_PIN_2_MSK                                 ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_2_POS )
#define MDR_PORT_PD_SCHMITT_PIN_3_MSK                                 ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_3_POS )
#define MDR_PORT_PD_SCHMITT_PIN_4_MSK                                 ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_4_POS )
#define MDR_PORT_PD_SCHMITT_PIN_5_MSK                                 ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_5_POS )
#define MDR_PORT_PD_SCHMITT_PIN_6_MSK                                 ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_6_POS )
#define MDR_PORT_PD_SCHMITT_PIN_7_MSK                                 ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_7_POS )
#define MDR_PORT_PD_SCHMITT_PIN_8_MSK                                 ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_8_POS )
#define MDR_PORT_PD_SCHMITT_PIN_9_MSK                                 ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_9_POS )
#define MDR_PORT_PD_SCHMITT_PIN_10_MSK                                ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_10_POS )
#define MDR_PORT_PD_SCHMITT_PIN_11_MSK                                ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_11_POS )
#define MDR_PORT_PD_SCHMITT_PIN_12_MSK                                ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_12_POS )
#define MDR_PORT_PD_SCHMITT_PIN_13_MSK                                ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_13_POS )
#define MDR_PORT_PD_SCHMITT_PIN_14_MSK                                ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_14_POS )
#define MDR_PORT_PD_SCHMITT_PIN_15_MSK                                ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_15_POS )

#define MDR_PORT_PD_OPEN_DRAIN_PIN_0_CONTROLLED_DRIVER                ~( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_0_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_1_CONTROLLED_DRIVER                ~( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_1_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_2_CONTROLLED_DRIVER                ~( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_2_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_3_CONTROLLED_DRIVER                ~( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_3_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_4_CONTROLLED_DRIVER                ~( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_4_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_5_CONTROLLED_DRIVER                ~( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_5_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_6_CONTROLLED_DRIVER                ~( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_6_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_7_CONTROLLED_DRIVER                ~( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_7_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_8_CONTROLLED_DRIVER                ~( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_8_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_9_CONTROLLED_DRIVER                ~( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_9_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_10_CONTROLLED_DRIVER               ~( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_10_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_11_CONTROLLED_DRIVER               ~( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_11_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_12_CONTROLLED_DRIVER               ~( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_12_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_13_CONTROLLED_DRIVER               ~( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_13_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_14_CONTROLLED_DRIVER               ~( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_14_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_15_CONTROLLED_DRIVER               ~( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_15_POS )

#define MDR_PORT_PD_OPEN_DRAIN_PIN_0_OPEN_DRAIN                        ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_0_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_1_OPEN_DRAIN                        ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_1_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_2_OPEN_DRAIN                        ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_2_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_3_OPEN_DRAIN                        ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_3_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_4_OPEN_DRAIN                        ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_4_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_5_OPEN_DRAIN                        ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_5_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_6_OPEN_DRAIN                        ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_6_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_7_OPEN_DRAIN                        ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_7_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_8_OPEN_DRAIN                        ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_8_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_9_OPEN_DRAIN                        ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_9_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_10_OPEN_DRAIN                       ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_10_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_11_OPEN_DRAIN                       ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_11_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_12_OPEN_DRAIN                       ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_12_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_13_OPEN_DRAIN                       ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_13_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_14_OPEN_DRAIN                       ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_14_POS )
#define MDR_PORT_PD_OPEN_DRAIN_PIN_15_OPEN_DRAIN                       ( 0x01 << MDR_PORT_PD_OPEN_DRAIN_PIN_15_POS )

#define MDR_PORT_PD_SCHMITT_PIN_0_HYSTERESIS_200_MV                   ~( 0x01 << MDR_PORT_PD_SCHMITT_PIN_0_POS )
#define MDR_PORT_PD_SCHMITT_PIN_1_HYSTERESIS_200_MV                   ~( 0x01 << MDR_PORT_PD_SCHMITT_PIN_1_POS )
#define MDR_PORT_PD_SCHMITT_PIN_2_HYSTERESIS_200_MV                   ~( 0x01 << MDR_PORT_PD_SCHMITT_PIN_2_POS )
#define MDR_PORT_PD_SCHMITT_PIN_3_HYSTERESIS_200_MV                   ~( 0x01 << MDR_PORT_PD_SCHMITT_PIN_3_POS )
#define MDR_PORT_PD_SCHMITT_PIN_4_HYSTERESIS_200_MV                   ~( 0x01 << MDR_PORT_PD_SCHMITT_PIN_4_POS )
#define MDR_PORT_PD_SCHMITT_PIN_5_HYSTERESIS_200_MV                   ~( 0x01 << MDR_PORT_PD_SCHMITT_PIN_5_POS )
#define MDR_PORT_PD_SCHMITT_PIN_6_HYSTERESIS_200_MV                   ~( 0x01 << MDR_PORT_PD_SCHMITT_PIN_6_POS )
#define MDR_PORT_PD_SCHMITT_PIN_7_HYSTERESIS_200_MV                   ~( 0x01 << MDR_PORT_PD_SCHMITT_PIN_7_POS )
#define MDR_PORT_PD_SCHMITT_PIN_8_HYSTERESIS_200_MV                   ~( 0x01 << MDR_PORT_PD_SCHMITT_PIN_8_POS )
#define MDR_PORT_PD_SCHMITT_PIN_9_HYSTERESIS_200_MV                   ~( 0x01 << MDR_PORT_PD_SCHMITT_PIN_9_POS )
#define MDR_PORT_PD_SCHMITT_PIN_10_HYSTERESIS_200_MV                  ~( 0x01 << MDR_PORT_PD_SCHMITT_PIN_10_POS )
#define MDR_PORT_PD_SCHMITT_PIN_11_HYSTERESIS_200_MV                  ~( 0x01 << MDR_PORT_PD_SCHMITT_PIN_11_POS )
#define MDR_PORT_PD_SCHMITT_PIN_12_HYSTERESIS_200_MV                  ~( 0x01 << MDR_PORT_PD_SCHMITT_PIN_12_POS )
#define MDR_PORT_PD_SCHMITT_PIN_13_HYSTERESIS_200_MV                  ~( 0x01 << MDR_PORT_PD_SCHMITT_PIN_13_POS )
#define MDR_PORT_PD_SCHMITT_PIN_14_HYSTERESIS_200_MV                  ~( 0x01 << MDR_PORT_PD_SCHMITT_PIN_14_POS )
#define MDR_PORT_PD_SCHMITT_PIN_15_HYSTERESIS_200_MV                  ~( 0x01 << MDR_PORT_PD_SCHMITT_PIN_15_POS )

#define MDR_PORT_PD_SCHMITT_PIN_0_HYSTERESIS_400_MV                    ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_0_POS )
#define MDR_PORT_PD_SCHMITT_PIN_1_HYSTERESIS_400_MV                    ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_1_POS )
#define MDR_PORT_PD_SCHMITT_PIN_2_HYSTERESIS_400_MV                    ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_2_POS )
#define MDR_PORT_PD_SCHMITT_PIN_3_HYSTERESIS_400_MV                    ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_3_POS )
#define MDR_PORT_PD_SCHMITT_PIN_4_HYSTERESIS_400_MV                    ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_4_POS )
#define MDR_PORT_PD_SCHMITT_PIN_5_HYSTERESIS_400_MV                    ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_5_POS )
#define MDR_PORT_PD_SCHMITT_PIN_6_HYSTERESIS_400_MV                    ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_6_POS )
#define MDR_PORT_PD_SCHMITT_PIN_7_HYSTERESIS_400_MV                    ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_7_POS )
#define MDR_PORT_PD_SCHMITT_PIN_8_HYSTERESIS_400_MV                    ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_8_POS )
#define MDR_PORT_PD_SCHMITT_PIN_9_HYSTERESIS_400_MV                    ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_9_POS )
#define MDR_PORT_PD_SCHMITT_PIN_10_HYSTERESIS_400_MV                   ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_10_POS )
#define MDR_PORT_PD_SCHMITT_PIN_11_HYSTERESIS_400_MV                   ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_11_POS )
#define MDR_PORT_PD_SCHMITT_PIN_12_HYSTERESIS_400_MV                   ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_12_POS )
#define MDR_PORT_PD_SCHMITT_PIN_13_HYSTERESIS_400_MV                   ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_13_POS )
#define MDR_PORT_PD_SCHMITT_PIN_14_HYSTERESIS_400_MV                   ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_14_POS )
#define MDR_PORT_PD_SCHMITT_PIN_15_HYSTERESIS_400_MV                   ( 0x01 << MDR_PORT_PD_SCHMITT_PIN_15_POS )

#define PD_OPEN_DRAIN_PIN_POS( x )                                     ( x )
#define PD_SCHMITT_PIN_POS( x )                                        ( ( x ) + 16 )

#define PD_OPEN_DRAIN_PIN_MSK( x )                                     ( 0x01 << PD_OPEN_DRAIN_PIN_POS( x ) )
#define PD_SCHMITT_PIN_MSK( x )                                        ( 0x01 << PD_SCHMITT_PIN_POS( x ) )

#define PD_OPEN_DRAIN_PIN_CONTROLLED_DRIVER( x )                       ~( 0x01 << PD_OPEN_DRAIN_PIN_POS( x ) )
#define PD_OPEN_DRAIN_PIN_OPEN_DRAIN( x )                               ( 0x01 << PD_OPEN_DRAIN_PIN_POS( x ) )

#define PD_SCHMITT_PIN_HYSTERESIS_200_MV( x )                          ~( 0x01 << PD_SCHMITT_PIN_POS( x ) )
#define PD_SCHMITT_PIN_HYSTERESIS_400_MV( x )                           ( 0x01 << PD_SCHMITT_PIN_POS( x ) )
// PWR register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_PORT_PWR_PIN_0_POS                                        0
#define MDR_PORT_PWR_PIN_1_POS                                        2
#define MDR_PORT_PWR_PIN_2_POS                                        4
#define MDR_PORT_PWR_PIN_3_POS                                        6
#define MDR_PORT_PWR_PIN_4_POS                                        8
#define MDR_PORT_PWR_PIN_5_POS                                        10
#define MDR_PORT_PWR_PIN_6_POS                                        12
#define MDR_PORT_PWR_PIN_7_POS                                        14
#define MDR_PORT_PWR_PIN_8_POS                                        16
#define MDR_PORT_PWR_PIN_9_POS                                        18
#define MDR_PORT_PWR_PIN_10_POS                                       20
#define MDR_PORT_PWR_PIN_11_POS                                       22
#define MDR_PORT_PWR_PIN_12_POS                                       24
#define MDR_PORT_PWR_PIN_13_POS                                       26
#define MDR_PORT_PWR_PIN_14_POS                                       28
#define MDR_PORT_PWR_PIN_15_POS                                       30

#define MDR_PORT_PWR_PIN_0_MSK                                        ( 0x03 << MDR_PORT_PWR_PIN_0_POS )
#define MDR_PORT_PWR_PIN_1_MSK                                        ( 0x03 << MDR_PORT_PWR_PIN_1_POS )
#define MDR_PORT_PWR_PIN_2_MSK                                        ( 0x03 << MDR_PORT_PWR_PIN_2_POS )
#define MDR_PORT_PWR_PIN_3_MSK                                        ( 0x03 << MDR_PORT_PWR_PIN_3_POS )
#define MDR_PORT_PWR_PIN_4_MSK                                        ( 0x03 << MDR_PORT_PWR_PIN_4_POS )
#define MDR_PORT_PWR_PIN_5_MSK                                        ( 0x03 << MDR_PORT_PWR_PIN_5_POS )
#define MDR_PORT_PWR_PIN_6_MSK                                        ( 0x03 << MDR_PORT_PWR_PIN_6_POS )
#define MDR_PORT_PWR_PIN_7_MSK                                        ( 0x03 << MDR_PORT_PWR_PIN_7_POS )
#define MDR_PORT_PWR_PIN_8_MSK                                        ( 0x03 << MDR_PORT_PWR_PIN_8_POS )
#define MDR_PORT_PWR_PIN_9_MSK                                        ( 0x03 << MDR_PORT_PWR_PIN_9_POS )
#define MDR_PORT_PWR_PIN_10_MSK                                       ( 0x03 << MDR_PORT_PWR_PIN_10_POS )
#define MDR_PORT_PWR_PIN_11_MSK                                       ( 0x03 << MDR_PORT_PWR_PIN_11_POS )
#define MDR_PORT_PWR_PIN_12_MSK                                       ( 0x03 << MDR_PORT_PWR_PIN_12_POS )
#define MDR_PORT_PWR_PIN_13_MSK                                       ( 0x03 << MDR_PORT_PWR_PIN_13_POS )
#define MDR_PORT_PWR_PIN_14_MSK                                       ( 0x03 << MDR_PORT_PWR_PIN_14_POS )
#define MDR_PORT_PWR_PIN_15_MSK                                       ( 0x03 << MDR_PORT_PWR_PIN_15_POS )

#define MDR_PORT_PWR_PIN_0_DISABLED                                   ~( 0x03 << MDR_PORT_PWR_PIN_0_POS )
#define MDR_PORT_PWR_PIN_1_DISABLED                                   ~( 0x03 << MDR_PORT_PWR_PIN_1_POS )
#define MDR_PORT_PWR_PIN_2_DISABLED                                   ~( 0x03 << MDR_PORT_PWR_PIN_2_POS )
#define MDR_PORT_PWR_PIN_3_DISABLED                                   ~( 0x03 << MDR_PORT_PWR_PIN_3_POS )
#define MDR_PORT_PWR_PIN_4_DISABLED                                   ~( 0x03 << MDR_PORT_PWR_PIN_4_POS )
#define MDR_PORT_PWR_PIN_5_DISABLED                                   ~( 0x03 << MDR_PORT_PWR_PIN_5_POS )
#define MDR_PORT_PWR_PIN_6_DISABLED                                   ~( 0x03 << MDR_PORT_PWR_PIN_6_POS )
#define MDR_PORT_PWR_PIN_7_DISABLED                                   ~( 0x03 << MDR_PORT_PWR_PIN_7_POS )
#define MDR_PORT_PWR_PIN_8_DISABLED                                   ~( 0x03 << MDR_PORT_PWR_PIN_8_POS )
#define MDR_PORT_PWR_PIN_9_DISABLED                                   ~( 0x03 << MDR_PORT_PWR_PIN_9_POS )
#define MDR_PORT_PWR_PIN_10_DISABLED                                  ~( 0x03 << MDR_PORT_PWR_PIN_10_POS )
#define MDR_PORT_PWR_PIN_11_DISABLED                                  ~( 0x03 << MDR_PORT_PWR_PIN_11_POS )
#define MDR_PORT_PWR_PIN_12_DISABLED                                  ~( 0x03 << MDR_PORT_PWR_PIN_12_POS )
#define MDR_PORT_PWR_PIN_13_DISABLED                                  ~( 0x03 << MDR_PORT_PWR_PIN_13_POS )
#define MDR_PORT_PWR_PIN_14_DISABLED                                  ~( 0x03 << MDR_PORT_PWR_PIN_14_POS )
#define MDR_PORT_PWR_PIN_15_DISABLED                                  ~( 0x03 << MDR_PORT_PWR_PIN_15_POS )

#define MDR_PORT_PWR_PIN_0_SLOW                                        ( 0x01 << MDR_PORT_PWR_PIN_0_POS )
#define MDR_PORT_PWR_PIN_1_SLOW                                        ( 0x01 << MDR_PORT_PWR_PIN_1_POS )
#define MDR_PORT_PWR_PIN_2_SLOW                                        ( 0x01 << MDR_PORT_PWR_PIN_2_POS )
#define MDR_PORT_PWR_PIN_3_SLOW                                        ( 0x01 << MDR_PORT_PWR_PIN_3_POS )
#define MDR_PORT_PWR_PIN_4_SLOW                                        ( 0x01 << MDR_PORT_PWR_PIN_4_POS )
#define MDR_PORT_PWR_PIN_5_SLOW                                        ( 0x01 << MDR_PORT_PWR_PIN_5_POS )
#define MDR_PORT_PWR_PIN_6_SLOW                                        ( 0x01 << MDR_PORT_PWR_PIN_6_POS )
#define MDR_PORT_PWR_PIN_7_SLOW                                        ( 0x01 << MDR_PORT_PWR_PIN_7_POS )
#define MDR_PORT_PWR_PIN_8_SLOW                                        ( 0x01 << MDR_PORT_PWR_PIN_8_POS )
#define MDR_PORT_PWR_PIN_9_SLOW                                        ( 0x01 << MDR_PORT_PWR_PIN_9_POS )
#define MDR_PORT_PWR_PIN_10_SLOW                                       ( 0x01 << MDR_PORT_PWR_PIN_10_POS )
#define MDR_PORT_PWR_PIN_11_SLOW                                       ( 0x01 << MDR_PORT_PWR_PIN_11_POS )
#define MDR_PORT_PWR_PIN_12_SLOW                                       ( 0x01 << MDR_PORT_PWR_PIN_12_POS )
#define MDR_PORT_PWR_PIN_13_SLOW                                       ( 0x01 << MDR_PORT_PWR_PIN_13_POS )
#define MDR_PORT_PWR_PIN_14_SLOW                                       ( 0x01 << MDR_PORT_PWR_PIN_14_POS )
#define MDR_PORT_PWR_PIN_15_SLOW                                       ( 0x01 << MDR_PORT_PWR_PIN_15_POS )

#define MDR_PORT_PWR_PIN_0_FAST                                        ( 0x02 << MDR_PORT_PWR_PIN_0_POS )
#define MDR_PORT_PWR_PIN_1_FAST                                        ( 0x02 << MDR_PORT_PWR_PIN_1_POS )
#define MDR_PORT_PWR_PIN_2_FAST                                        ( 0x02 << MDR_PORT_PWR_PIN_2_POS )
#define MDR_PORT_PWR_PIN_3_FAST                                        ( 0x02 << MDR_PORT_PWR_PIN_3_POS )
#define MDR_PORT_PWR_PIN_4_FAST                                        ( 0x02 << MDR_PORT_PWR_PIN_4_POS )
#define MDR_PORT_PWR_PIN_5_FAST                                        ( 0x02 << MDR_PORT_PWR_PIN_5_POS )
#define MDR_PORT_PWR_PIN_6_FAST                                        ( 0x02 << MDR_PORT_PWR_PIN_6_POS )
#define MDR_PORT_PWR_PIN_7_FAST                                        ( 0x02 << MDR_PORT_PWR_PIN_7_POS )
#define MDR_PORT_PWR_PIN_8_FAST                                        ( 0x02 << MDR_PORT_PWR_PIN_8_POS )
#define MDR_PORT_PWR_PIN_9_FAST                                        ( 0x02 << MDR_PORT_PWR_PIN_9_POS )
#define MDR_PORT_PWR_PIN_10_FAST                                       ( 0x02 << MDR_PORT_PWR_PIN_10_POS )
#define MDR_PORT_PWR_PIN_11_FAST                                       ( 0x02 << MDR_PORT_PWR_PIN_11_POS )
#define MDR_PORT_PWR_PIN_12_FAST                                       ( 0x02 << MDR_PORT_PWR_PIN_12_POS )
#define MDR_PORT_PWR_PIN_13_FAST                                       ( 0x02 << MDR_PORT_PWR_PIN_13_POS )
#define MDR_PORT_PWR_PIN_14_FAST                                       ( 0x02 << MDR_PORT_PWR_PIN_14_POS )
#define MDR_PORT_PWR_PIN_15_FAST                                       ( 0x02 << MDR_PORT_PWR_PIN_15_POS )

#define MDR_PORT_PWR_PIN_0_MAXIMUM                                     ( 0x03 << MDR_PORT_PWR_PIN_0_POS )
#define MDR_PORT_PWR_PIN_1_MAXIMUM                                     ( 0x03 << MDR_PORT_PWR_PIN_1_POS )
#define MDR_PORT_PWR_PIN_2_MAXIMUM                                     ( 0x03 << MDR_PORT_PWR_PIN_2_POS )
#define MDR_PORT_PWR_PIN_3_MAXIMUM                                     ( 0x03 << MDR_PORT_PWR_PIN_3_POS )
#define MDR_PORT_PWR_PIN_4_MAXIMUM                                     ( 0x03 << MDR_PORT_PWR_PIN_4_POS )
#define MDR_PORT_PWR_PIN_5_MAXIMUM                                     ( 0x03 << MDR_PORT_PWR_PIN_5_POS )
#define MDR_PORT_PWR_PIN_6_MAXIMUM                                     ( 0x03 << MDR_PORT_PWR_PIN_6_POS )
#define MDR_PORT_PWR_PIN_7_MAXIMUM                                     ( 0x03 << MDR_PORT_PWR_PIN_7_POS )
#define MDR_PORT_PWR_PIN_8_MAXIMUM                                     ( 0x03 << MDR_PORT_PWR_PIN_8_POS )
#define MDR_PORT_PWR_PIN_9_MAXIMUM                                     ( 0x03 << MDR_PORT_PWR_PIN_9_POS )
#define MDR_PORT_PWR_PIN_10_MAXIMUM                                    ( 0x03 << MDR_PORT_PWR_PIN_10_POS )
#define MDR_PORT_PWR_PIN_11_MAXIMUM                                    ( 0x03 << MDR_PORT_PWR_PIN_11_POS )
#define MDR_PORT_PWR_PIN_12_MAXIMUM                                    ( 0x03 << MDR_PORT_PWR_PIN_12_POS )
#define MDR_PORT_PWR_PIN_13_MAXIMUM                                    ( 0x03 << MDR_PORT_PWR_PIN_13_POS )
#define MDR_PORT_PWR_PIN_14_MAXIMUM                                    ( 0x03 << MDR_PORT_PWR_PIN_14_POS )
#define MDR_PORT_PWR_PIN_15_MAXIMUM                                    ( 0x03 << MDR_PORT_PWR_PIN_15_POS )

#define PWR_PIN_POS( x )                                               ( ( x ) * 2 )
#define PWR_PIN_MSK( x )                                               ( 0x03 << PWR_PIN_POS( x ) )

#define PWR_PIN_DISABLED( x )                                         ~( 0x03 << PWR_PIN_POS( x ) )
#define PWR_PIN_SLOW( x )                                              ( 0x01 << PWR_PIN_POS( x ) )
#define PWR_PIN_FAST( x )                                              ( 0x02 << PWR_PIN_POS( x ) )
#define PWR_PIN_MAXIMUM( x )                                           ( 0x03 << PWR_PIN_POS( x ) )
// GFEN register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_PORT_GFEN_PIN_0_POS                                       0
#define MDR_PORT_GFEN_PIN_1_POS                                       1
#define MDR_PORT_GFEN_PIN_2_POS                                       2
#define MDR_PORT_GFEN_PIN_3_POS                                       3
#define MDR_PORT_GFEN_PIN_4_POS                                       4
#define MDR_PORT_GFEN_PIN_5_POS                                       5
#define MDR_PORT_GFEN_PIN_6_POS                                       6
#define MDR_PORT_GFEN_PIN_7_POS                                       7
#define MDR_PORT_GFEN_PIN_8_POS                                       8
#define MDR_PORT_GFEN_PIN_9_POS                                       9
#define MDR_PORT_GFEN_PIN_10_POS                                      10
#define MDR_PORT_GFEN_PIN_11_POS                                      11
#define MDR_PORT_GFEN_PIN_12_POS                                      12
#define MDR_PORT_GFEN_PIN_13_POS                                      13
#define MDR_PORT_GFEN_PIN_14_POS                                      14
#define MDR_PORT_GFEN_PIN_15_POS                                      15

#define MDR_PORT_GFEN_PIN_0_MSK                                       ( 0x01 << MDR_PORT_GFEN_PIN_0_POS )
#define MDR_PORT_GFEN_PIN_1_MSK                                       ( 0x01 << MDR_PORT_GFEN_PIN_1_POS )
#define MDR_PORT_GFEN_PIN_2_MSK                                       ( 0x01 << MDR_PORT_GFEN_PIN_2_POS )
#define MDR_PORT_GFEN_PIN_3_MSK                                       ( 0x01 << MDR_PORT_GFEN_PIN_3_POS )
#define MDR_PORT_GFEN_PIN_4_MSK                                       ( 0x01 << MDR_PORT_GFEN_PIN_4_POS )
#define MDR_PORT_GFEN_PIN_5_MSK                                       ( 0x01 << MDR_PORT_GFEN_PIN_5_POS )
#define MDR_PORT_GFEN_PIN_6_MSK                                       ( 0x01 << MDR_PORT_GFEN_PIN_6_POS )
#define MDR_PORT_GFEN_PIN_7_MSK                                       ( 0x01 << MDR_PORT_GFEN_PIN_7_POS )
#define MDR_PORT_GFEN_PIN_8_MSK                                       ( 0x01 << MDR_PORT_GFEN_PIN_8_POS )
#define MDR_PORT_GFEN_PIN_9_MSK                                       ( 0x01 << MDR_PORT_GFEN_PIN_9_POS )
#define MDR_PORT_GFEN_PIN_10_MSK                                      ( 0x01 << MDR_PORT_GFEN_PIN_10_POS )
#define MDR_PORT_GFEN_PIN_11_MSK                                      ( 0x01 << MDR_PORT_GFEN_PIN_11_POS )
#define MDR_PORT_GFEN_PIN_12_MSK                                      ( 0x01 << MDR_PORT_GFEN_PIN_12_POS )
#define MDR_PORT_GFEN_PIN_13_MSK                                      ( 0x01 << MDR_PORT_GFEN_PIN_13_POS )
#define MDR_PORT_GFEN_PIN_14_MSK                                      ( 0x01 << MDR_PORT_GFEN_PIN_14_POS )
#define MDR_PORT_GFEN_PIN_15_MSK                                      ( 0x01 << MDR_PORT_GFEN_PIN_15_POS )

#define MDR_PORT_GFEN_PIN_0_DISABLE                                   ~( 0x01 << MDR_PORT_GFEN_PIN_0_POS )
#define MDR_PORT_GFEN_PIN_1_DISABLE                                   ~( 0x01 << MDR_PORT_GFEN_PIN_1_POS )
#define MDR_PORT_GFEN_PIN_2_DISABLE                                   ~( 0x01 << MDR_PORT_GFEN_PIN_2_POS )
#define MDR_PORT_GFEN_PIN_3_DISABLE                                   ~( 0x01 << MDR_PORT_GFEN_PIN_3_POS )
#define MDR_PORT_GFEN_PIN_4_DISABLE                                   ~( 0x01 << MDR_PORT_GFEN_PIN_4_POS )
#define MDR_PORT_GFEN_PIN_5_DISABLE                                   ~( 0x01 << MDR_PORT_GFEN_PIN_5_POS )
#define MDR_PORT_GFEN_PIN_6_DISABLE                                   ~( 0x01 << MDR_PORT_GFEN_PIN_6_POS )
#define MDR_PORT_GFEN_PIN_7_DISABLE                                   ~( 0x01 << MDR_PORT_GFEN_PIN_7_POS )
#define MDR_PORT_GFEN_PIN_8_DISABLE                                   ~( 0x01 << MDR_PORT_GFEN_PIN_8_POS )
#define MDR_PORT_GFEN_PIN_9_DISABLE                                   ~( 0x01 << MDR_PORT_GFEN_PIN_9_POS )
#define MDR_PORT_GFEN_PIN_10_DISABLE                                  ~( 0x01 << MDR_PORT_GFEN_PIN_10_POS )
#define MDR_PORT_GFEN_PIN_11_DISABLE                                  ~( 0x01 << MDR_PORT_GFEN_PIN_11_POS )
#define MDR_PORT_GFEN_PIN_12_DISABLE                                  ~( 0x01 << MDR_PORT_GFEN_PIN_12_POS )
#define MDR_PORT_GFEN_PIN_13_DISABLE                                  ~( 0x01 << MDR_PORT_GFEN_PIN_13_POS )
#define MDR_PORT_GFEN_PIN_14_DISABLE                                  ~( 0x01 << MDR_PORT_GFEN_PIN_14_POS )
#define MDR_PORT_GFEN_PIN_15_DISABLE                                  ~( 0x01 << MDR_PORT_GFEN_PIN_15_POS )

#define MDR_PORT_GFEN_PIN_0_ENABLE                                     ( 0x01 << MDR_PORT_GFEN_PIN_0_POS )
#define MDR_PORT_GFEN_PIN_1_ENABLE                                     ( 0x01 << MDR_PORT_GFEN_PIN_1_POS )
#define MDR_PORT_GFEN_PIN_2_ENABLE                                     ( 0x01 << MDR_PORT_GFEN_PIN_2_POS )
#define MDR_PORT_GFEN_PIN_3_ENABLE                                     ( 0x01 << MDR_PORT_GFEN_PIN_3_POS )
#define MDR_PORT_GFEN_PIN_4_ENABLE                                     ( 0x01 << MDR_PORT_GFEN_PIN_4_POS )
#define MDR_PORT_GFEN_PIN_5_ENABLE                                     ( 0x01 << MDR_PORT_GFEN_PIN_5_POS )
#define MDR_PORT_GFEN_PIN_6_ENABLE                                     ( 0x01 << MDR_PORT_GFEN_PIN_6_POS )
#define MDR_PORT_GFEN_PIN_7_ENABLE                                     ( 0x01 << MDR_PORT_GFEN_PIN_7_POS )
#define MDR_PORT_GFEN_PIN_8_ENABLE                                     ( 0x01 << MDR_PORT_GFEN_PIN_8_POS )
#define MDR_PORT_GFEN_PIN_9_ENABLE                                     ( 0x01 << MDR_PORT_GFEN_PIN_9_POS )
#define MDR_PORT_GFEN_PIN_10_ENABLE                                    ( 0x01 << MDR_PORT_GFEN_PIN_10_POS )
#define MDR_PORT_GFEN_PIN_11_ENABLE                                    ( 0x01 << MDR_PORT_GFEN_PIN_11_POS )
#define MDR_PORT_GFEN_PIN_12_ENABLE                                    ( 0x01 << MDR_PORT_GFEN_PIN_12_POS )
#define MDR_PORT_GFEN_PIN_13_ENABLE                                    ( 0x01 << MDR_PORT_GFEN_PIN_13_POS )
#define MDR_PORT_GFEN_PIN_14_ENABLE                                    ( 0x01 << MDR_PORT_GFEN_PIN_14_POS )
#define MDR_PORT_GFEN_PIN_15_ENABLE                                    ( 0x01 << MDR_PORT_GFEN_PIN_15_POS )

#define GFEN_PIN_POS( x )                                              ( x )
#define GFEN_PIN_MSK( x )                                              ( 0x01 << GFEN_PIN_POS( x ) )

#define GFEN_PIN_DISABLE( x )                                         ~( 0x01 << GFEN_PIN_POS( x ) )
#define GFEN_PIN_ENABLE( x )                                           ( 0x01 << GFEN_PIN_POS( x ) )
// RXTX register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_PORT_RXTX_PIN_0_LOW_VAL                                   0
#define MDR_PORT_RXTX_PIN_1_LOW_VAL                                   0
#define MDR_PORT_RXTX_PIN_2_LOW_VAL                                   0
#define MDR_PORT_RXTX_PIN_3_LOW_VAL                                   0
#define MDR_PORT_RXTX_PIN_4_LOW_VAL                                   0
#define MDR_PORT_RXTX_PIN_5_LOW_VAL                                   0
#define MDR_PORT_RXTX_PIN_6_LOW_VAL                                   0
#define MDR_PORT_RXTX_PIN_7_LOW_VAL                                   0
#define MDR_PORT_RXTX_PIN_8_LOW_VAL                                   0
#define MDR_PORT_RXTX_PIN_9_LOW_VAL                                   0
#define MDR_PORT_RXTX_PIN_10_LOW_VAL                                  0
#define MDR_PORT_RXTX_PIN_11_LOW_VAL                                  0
#define MDR_PORT_RXTX_PIN_12_LOW_VAL                                  0
#define MDR_PORT_RXTX_PIN_13_LOW_VAL                                  0
#define MDR_PORT_RXTX_PIN_14_LOW_VAL                                  0
#define MDR_PORT_RXTX_PIN_15_LOW_VAL                                  0

#define MDR_PORT_RXTX_PIN_0_HIGH_VAL                                  1
#define MDR_PORT_RXTX_PIN_1_HIGH_VAL                                  1
#define MDR_PORT_RXTX_PIN_2_HIGH_VAL                                  1
#define MDR_PORT_RXTX_PIN_3_HIGH_VAL                                  1
#define MDR_PORT_RXTX_PIN_4_HIGH_VAL                                  1
#define MDR_PORT_RXTX_PIN_5_HIGH_VAL                                  1
#define MDR_PORT_RXTX_PIN_6_HIGH_VAL                                  1
#define MDR_PORT_RXTX_PIN_7_HIGH_VAL                                  1
#define MDR_PORT_RXTX_PIN_8_HIGH_VAL                                  1
#define MDR_PORT_RXTX_PIN_9_HIGH_VAL                                  1
#define MDR_PORT_RXTX_PIN_10_HIGH_VAL                                 1
#define MDR_PORT_RXTX_PIN_11_HIGH_VAL                                 1
#define MDR_PORT_RXTX_PIN_12_HIGH_VAL                                 1
#define MDR_PORT_RXTX_PIN_13_HIGH_VAL                                 1
#define MDR_PORT_RXTX_PIN_14_HIGH_VAL                                 1
#define MDR_PORT_RXTX_PIN_15_HIGH_VAL                                 1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t PIN_0  : 1;
        uint32_t PIN_1  : 1;
        uint32_t PIN_2  : 1;
        uint32_t PIN_3  : 1;
        uint32_t PIN_4  : 1;
        uint32_t PIN_5  : 1;
        uint32_t PIN_6  : 1;
        uint32_t PIN_7  : 1;
        uint32_t PIN_8  : 1;
        uint32_t PIN_9  : 1;
        uint32_t PIN_10 : 1;
        uint32_t PIN_11 : 1;
        uint32_t PIN_12 : 1;
        uint32_t PIN_13 : 1;
        uint32_t PIN_14 : 1;
        uint32_t PIN_15 : 1;
        uint32_t        : 16;
    };

} MDR_PORT_RXTX_TypeDef;

// OE register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_PORT_OE_PIN_0_INPUT_VAL                                   0
#define MDR_PORT_OE_PIN_1_INPUT_VAL                                   0
#define MDR_PORT_OE_PIN_2_INPUT_VAL                                   0
#define MDR_PORT_OE_PIN_3_INPUT_VAL                                   0
#define MDR_PORT_OE_PIN_4_INPUT_VAL                                   0
#define MDR_PORT_OE_PIN_5_INPUT_VAL                                   0
#define MDR_PORT_OE_PIN_6_INPUT_VAL                                   0
#define MDR_PORT_OE_PIN_7_INPUT_VAL                                   0
#define MDR_PORT_OE_PIN_8_INPUT_VAL                                   0
#define MDR_PORT_OE_PIN_9_INPUT_VAL                                   0
#define MDR_PORT_OE_PIN_10_INPUT_VAL                                  0
#define MDR_PORT_OE_PIN_11_INPUT_VAL                                  0
#define MDR_PORT_OE_PIN_12_INPUT_VAL                                  0
#define MDR_PORT_OE_PIN_13_INPUT_VAL                                  0
#define MDR_PORT_OE_PIN_14_INPUT_VAL                                  0
#define MDR_PORT_OE_PIN_15_INPUT_VAL                                  0

#define MDR_PORT_OE_PIN_0_OUTPUT_VAL                                  1
#define MDR_PORT_OE_PIN_1_OUTPUT_VAL                                  1
#define MDR_PORT_OE_PIN_2_OUTPUT_VAL                                  1
#define MDR_PORT_OE_PIN_3_OUTPUT_VAL                                  1
#define MDR_PORT_OE_PIN_4_OUTPUT_VAL                                  1
#define MDR_PORT_OE_PIN_5_OUTPUT_VAL                                  1
#define MDR_PORT_OE_PIN_6_OUTPUT_VAL                                  1
#define MDR_PORT_OE_PIN_7_OUTPUT_VAL                                  1
#define MDR_PORT_OE_PIN_8_OUTPUT_VAL                                  1
#define MDR_PORT_OE_PIN_9_OUTPUT_VAL                                  1
#define MDR_PORT_OE_PIN_10_OUTPUT_VAL                                 1
#define MDR_PORT_OE_PIN_11_OUTPUT_VAL                                 1
#define MDR_PORT_OE_PIN_12_OUTPUT_VAL                                 1
#define MDR_PORT_OE_PIN_13_OUTPUT_VAL                                 1
#define MDR_PORT_OE_PIN_14_OUTPUT_VAL                                 1
#define MDR_PORT_OE_PIN_15_OUTPUT_VAL                                 1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t PIN_0  : 1;
        uint32_t PIN_1  : 1;
        uint32_t PIN_2  : 1;
        uint32_t PIN_3  : 1;
        uint32_t PIN_4  : 1;
        uint32_t PIN_5  : 1;
        uint32_t PIN_6  : 1;
        uint32_t PIN_7  : 1;
        uint32_t PIN_8  : 1;
        uint32_t PIN_9  : 1;
        uint32_t PIN_10 : 1;
        uint32_t PIN_11 : 1;
        uint32_t PIN_12 : 1;
        uint32_t PIN_13 : 1;
        uint32_t PIN_14 : 1;
        uint32_t PIN_15 : 1;
        uint32_t        : 16;
    };

} MDR_PORT_OE_TypeDef;

// FUNC register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_PORT_FUNC_PIN_0_PORT_VAL                                  0
#define MDR_PORT_FUNC_PIN_1_PORT_VAL                                  0
#define MDR_PORT_FUNC_PIN_2_PORT_VAL                                  0
#define MDR_PORT_FUNC_PIN_3_PORT_VAL                                  0
#define MDR_PORT_FUNC_PIN_4_PORT_VAL                                  0
#define MDR_PORT_FUNC_PIN_5_PORT_VAL                                  0
#define MDR_PORT_FUNC_PIN_6_PORT_VAL                                  0
#define MDR_PORT_FUNC_PIN_7_PORT_VAL                                  0
#define MDR_PORT_FUNC_PIN_8_PORT_VAL                                  0
#define MDR_PORT_FUNC_PIN_9_PORT_VAL                                  0
#define MDR_PORT_FUNC_PIN_10_PORT_VAL                                 0
#define MDR_PORT_FUNC_PIN_11_PORT_VAL                                 0
#define MDR_PORT_FUNC_PIN_12_PORT_VAL                                 0
#define MDR_PORT_FUNC_PIN_13_PORT_VAL                                 0
#define MDR_PORT_FUNC_PIN_14_PORT_VAL                                 0
#define MDR_PORT_FUNC_PIN_15_PORT_VAL                                 0

#define MDR_PORT_FUNC_PIN_0_MAIN_VAL                                  1
#define MDR_PORT_FUNC_PIN_1_MAIN_VAL                                  1
#define MDR_PORT_FUNC_PIN_2_MAIN_VAL                                  1
#define MDR_PORT_FUNC_PIN_3_MAIN_VAL                                  1
#define MDR_PORT_FUNC_PIN_4_MAIN_VAL                                  1
#define MDR_PORT_FUNC_PIN_5_MAIN_VAL                                  1
#define MDR_PORT_FUNC_PIN_6_MAIN_VAL                                  1
#define MDR_PORT_FUNC_PIN_7_MAIN_VAL                                  1
#define MDR_PORT_FUNC_PIN_8_MAIN_VAL                                  1
#define MDR_PORT_FUNC_PIN_9_MAIN_VAL                                  1
#define MDR_PORT_FUNC_PIN_10_MAIN_VAL                                 1
#define MDR_PORT_FUNC_PIN_11_MAIN_VAL                                 1
#define MDR_PORT_FUNC_PIN_12_MAIN_VAL                                 1
#define MDR_PORT_FUNC_PIN_13_MAIN_VAL                                 1
#define MDR_PORT_FUNC_PIN_14_MAIN_VAL                                 1
#define MDR_PORT_FUNC_PIN_15_MAIN_VAL                                 1

#define MDR_PORT_FUNC_PIN_0_ALTERNATE_VAL                             2
#define MDR_PORT_FUNC_PIN_1_ALTERNATE_VAL                             2
#define MDR_PORT_FUNC_PIN_2_ALTERNATE_VAL                             2
#define MDR_PORT_FUNC_PIN_3_ALTERNATE_VAL                             2
#define MDR_PORT_FUNC_PIN_4_ALTERNATE_VAL                             2
#define MDR_PORT_FUNC_PIN_5_ALTERNATE_VAL                             2
#define MDR_PORT_FUNC_PIN_6_ALTERNATE_VAL                             2
#define MDR_PORT_FUNC_PIN_7_ALTERNATE_VAL                             2
#define MDR_PORT_FUNC_PIN_8_ALTERNATE_VAL                             2
#define MDR_PORT_FUNC_PIN_9_ALTERNATE_VAL                             2
#define MDR_PORT_FUNC_PIN_10_ALTERNATE_VAL                            2
#define MDR_PORT_FUNC_PIN_11_ALTERNATE_VAL                            2
#define MDR_PORT_FUNC_PIN_12_ALTERNATE_VAL                            2
#define MDR_PORT_FUNC_PIN_13_ALTERNATE_VAL                            2
#define MDR_PORT_FUNC_PIN_14_ALTERNATE_VAL                            2
#define MDR_PORT_FUNC_PIN_15_ALTERNATE_VAL                            2

#define MDR_PORT_FUNC_PIN_0_REDEFINED_VAL                             3
#define MDR_PORT_FUNC_PIN_1_REDEFINED_VAL                             3
#define MDR_PORT_FUNC_PIN_2_REDEFINED_VAL                             3
#define MDR_PORT_FUNC_PIN_3_REDEFINED_VAL                             3
#define MDR_PORT_FUNC_PIN_4_REDEFINED_VAL                             3
#define MDR_PORT_FUNC_PIN_5_REDEFINED_VAL                             3
#define MDR_PORT_FUNC_PIN_6_REDEFINED_VAL                             3
#define MDR_PORT_FUNC_PIN_7_REDEFINED_VAL                             3
#define MDR_PORT_FUNC_PIN_8_REDEFINED_VAL                             3
#define MDR_PORT_FUNC_PIN_9_REDEFINED_VAL                             3
#define MDR_PORT_FUNC_PIN_10_REDEFINED_VAL                            3
#define MDR_PORT_FUNC_PIN_11_REDEFINED_VAL                            3
#define MDR_PORT_FUNC_PIN_12_REDEFINED_VAL                            3
#define MDR_PORT_FUNC_PIN_13_REDEFINED_VAL                            3
#define MDR_PORT_FUNC_PIN_14_REDEFINED_VAL                            3
#define MDR_PORT_FUNC_PIN_15_REDEFINED_VAL                            3

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t PIN_0  : 2;
        uint32_t PIN_1  : 2;
        uint32_t PIN_2  : 2;
        uint32_t PIN_3  : 2;
        uint32_t PIN_4  : 2;
        uint32_t PIN_5  : 2;
        uint32_t PIN_6  : 2;
        uint32_t PIN_7  : 2;
        uint32_t PIN_8  : 2;
        uint32_t PIN_9  : 2;
        uint32_t PIN_10 : 2;
        uint32_t PIN_11 : 2;
        uint32_t PIN_12 : 2;
        uint32_t PIN_13 : 2;
        uint32_t PIN_14 : 2;
        uint32_t PIN_15 : 2;
    };

} MDR_PORT_FUNC_TypeDef;

// ANALOG register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_PORT_ANALOG_PIN_0_ANALOG_VAL                              0
#define MDR_PORT_ANALOG_PIN_1_ANALOG_VAL                              0
#define MDR_PORT_ANALOG_PIN_2_ANALOG_VAL                              0
#define MDR_PORT_ANALOG_PIN_3_ANALOG_VAL                              0
#define MDR_PORT_ANALOG_PIN_4_ANALOG_VAL                              0
#define MDR_PORT_ANALOG_PIN_5_ANALOG_VAL                              0
#define MDR_PORT_ANALOG_PIN_6_ANALOG_VAL                              0
#define MDR_PORT_ANALOG_PIN_7_ANALOG_VAL                              0
#define MDR_PORT_ANALOG_PIN_8_ANALOG_VAL                              0
#define MDR_PORT_ANALOG_PIN_9_ANALOG_VAL                              0
#define MDR_PORT_ANALOG_PIN_10_ANALOG_VAL                             0
#define MDR_PORT_ANALOG_PIN_11_ANALOG_VAL                             0
#define MDR_PORT_ANALOG_PIN_12_ANALOG_VAL                             0
#define MDR_PORT_ANALOG_PIN_13_ANALOG_VAL                             0
#define MDR_PORT_ANALOG_PIN_14_ANALOG_VAL                             0
#define MDR_PORT_ANALOG_PIN_15_ANALOG_VAL                             0

#define MDR_PORT_ANALOG_PIN_0_DIGITAL_VAL                             1
#define MDR_PORT_ANALOG_PIN_1_DIGITAL_VAL                             1
#define MDR_PORT_ANALOG_PIN_2_DIGITAL_VAL                             1
#define MDR_PORT_ANALOG_PIN_3_DIGITAL_VAL                             1
#define MDR_PORT_ANALOG_PIN_4_DIGITAL_VAL                             1
#define MDR_PORT_ANALOG_PIN_5_DIGITAL_VAL                             1
#define MDR_PORT_ANALOG_PIN_6_DIGITAL_VAL                             1
#define MDR_PORT_ANALOG_PIN_7_DIGITAL_VAL                             1
#define MDR_PORT_ANALOG_PIN_8_DIGITAL_VAL                             1
#define MDR_PORT_ANALOG_PIN_9_DIGITAL_VAL                             1
#define MDR_PORT_ANALOG_PIN_10_DIGITAL_VAL                            1
#define MDR_PORT_ANALOG_PIN_11_DIGITAL_VAL                            1
#define MDR_PORT_ANALOG_PIN_12_DIGITAL_VAL                            1
#define MDR_PORT_ANALOG_PIN_13_DIGITAL_VAL                            1
#define MDR_PORT_ANALOG_PIN_14_DIGITAL_VAL                            1
#define MDR_PORT_ANALOG_PIN_15_DIGITAL_VAL                            1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t PIN_0  : 1;
        uint32_t PIN_1  : 1;
        uint32_t PIN_2  : 1;
        uint32_t PIN_3  : 1;
        uint32_t PIN_4  : 1;
        uint32_t PIN_5  : 1;
        uint32_t PIN_6  : 1;
        uint32_t PIN_7  : 1;
        uint32_t PIN_8  : 1;
        uint32_t PIN_9  : 1;
        uint32_t PIN_10 : 1;
        uint32_t PIN_11 : 1;
        uint32_t PIN_12 : 1;
        uint32_t PIN_13 : 1;
        uint32_t PIN_14 : 1;
        uint32_t PIN_15 : 1;
        uint32_t        : 16;
    };

} MDR_PORT_ANALOG_TypeDef;

// PULL register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_PORT_PULL_DOWN_PIN_0_DISABLE_VAL                          0
#define MDR_PORT_PULL_DOWN_PIN_1_DISABLE_VAL                          0
#define MDR_PORT_PULL_DOWN_PIN_2_DISABLE_VAL                          0
#define MDR_PORT_PULL_DOWN_PIN_3_DISABLE_VAL                          0
#define MDR_PORT_PULL_DOWN_PIN_4_DISABLE_VAL                          0
#define MDR_PORT_PULL_DOWN_PIN_5_DISABLE_VAL                          0
#define MDR_PORT_PULL_DOWN_PIN_6_DISABLE_VAL                          0
#define MDR_PORT_PULL_DOWN_PIN_7_DISABLE_VAL                          0
#define MDR_PORT_PULL_DOWN_PIN_8_DISABLE_VAL                          0
#define MDR_PORT_PULL_DOWN_PIN_9_DISABLE_VAL                          0
#define MDR_PORT_PULL_DOWN_PIN_10_DISABLE_VAL                         0
#define MDR_PORT_PULL_DOWN_PIN_11_DISABLE_VAL                         0
#define MDR_PORT_PULL_DOWN_PIN_12_DISABLE_VAL                         0
#define MDR_PORT_PULL_DOWN_PIN_13_DISABLE_VAL                         0
#define MDR_PORT_PULL_DOWN_PIN_14_DISABLE_VAL                         0
#define MDR_PORT_PULL_DOWN_PIN_15_DISABLE_VAL                         0

#define MDR_PORT_PULL_DOWN_PIN_0_ENABLE_VAL                           1
#define MDR_PORT_PULL_DOWN_PIN_1_ENABLE_VAL                           1
#define MDR_PORT_PULL_DOWN_PIN_2_ENABLE_VAL                           1
#define MDR_PORT_PULL_DOWN_PIN_3_ENABLE_VAL                           1
#define MDR_PORT_PULL_DOWN_PIN_4_ENABLE_VAL                           1
#define MDR_PORT_PULL_DOWN_PIN_5_ENABLE_VAL                           1
#define MDR_PORT_PULL_DOWN_PIN_6_ENABLE_VAL                           1
#define MDR_PORT_PULL_DOWN_PIN_7_ENABLE_VAL                           1
#define MDR_PORT_PULL_DOWN_PIN_8_ENABLE_VAL                           1
#define MDR_PORT_PULL_DOWN_PIN_9_ENABLE_VAL                           1
#define MDR_PORT_PULL_DOWN_PIN_10_ENABLE_VAL                          1
#define MDR_PORT_PULL_DOWN_PIN_11_ENABLE_VAL                          1
#define MDR_PORT_PULL_DOWN_PIN_12_ENABLE_VAL                          1
#define MDR_PORT_PULL_DOWN_PIN_13_ENABLE_VAL                          1
#define MDR_PORT_PULL_DOWN_PIN_14_ENABLE_VAL                          1
#define MDR_PORT_PULL_DOWN_PIN_15_ENABLE_VAL                          1

#define MDR_PORT_PULL_UP_PIN_0_DISABLE_VAL                            0
#define MDR_PORT_PULL_UP_PIN_1_DISABLE_VAL                            0
#define MDR_PORT_PULL_UP_PIN_2_DISABLE_VAL                            0
#define MDR_PORT_PULL_UP_PIN_3_DISABLE_VAL                            0
#define MDR_PORT_PULL_UP_PIN_4_DISABLE_VAL                            0
#define MDR_PORT_PULL_UP_PIN_5_DISABLE_VAL                            0
#define MDR_PORT_PULL_UP_PIN_6_DISABLE_VAL                            0
#define MDR_PORT_PULL_UP_PIN_7_DISABLE_VAL                            0
#define MDR_PORT_PULL_UP_PIN_8_DISABLE_VAL                            0
#define MDR_PORT_PULL_UP_PIN_9_DISABLE_VAL                            0
#define MDR_PORT_PULL_UP_PIN_10_DISABLE_VAL                           0
#define MDR_PORT_PULL_UP_PIN_11_DISABLE_VAL                           0
#define MDR_PORT_PULL_UP_PIN_12_DISABLE_VAL                           0
#define MDR_PORT_PULL_UP_PIN_13_DISABLE_VAL                           0
#define MDR_PORT_PULL_UP_PIN_14_DISABLE_VAL                           0
#define MDR_PORT_PULL_UP_PIN_15_DISABLE_VAL                           0

#define MDR_PORT_PULL_UP_PIN_0_ENABLE_VAL                             1
#define MDR_PORT_PULL_UP_PIN_1_ENABLE_VAL                             1
#define MDR_PORT_PULL_UP_PIN_2_ENABLE_VAL                             1
#define MDR_PORT_PULL_UP_PIN_3_ENABLE_VAL                             1
#define MDR_PORT_PULL_UP_PIN_4_ENABLE_VAL                             1
#define MDR_PORT_PULL_UP_PIN_5_ENABLE_VAL                             1
#define MDR_PORT_PULL_UP_PIN_6_ENABLE_VAL                             1
#define MDR_PORT_PULL_UP_PIN_7_ENABLE_VAL                             1
#define MDR_PORT_PULL_UP_PIN_8_ENABLE_VAL                             1
#define MDR_PORT_PULL_UP_PIN_9_ENABLE_VAL                             1
#define MDR_PORT_PULL_UP_PIN_10_ENABLE_VAL                            1
#define MDR_PORT_PULL_UP_PIN_11_ENABLE_VAL                            1
#define MDR_PORT_PULL_UP_PIN_12_ENABLE_VAL                            1
#define MDR_PORT_PULL_UP_PIN_13_ENABLE_VAL                            1
#define MDR_PORT_PULL_UP_PIN_14_ENABLE_VAL                            1
#define MDR_PORT_PULL_UP_PIN_15_ENABLE_VAL                            1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t PULL_DOWN_0  : 1;
        uint32_t PULL_DOWN_1  : 1;
        uint32_t PULL_DOWN_2  : 1;
        uint32_t PULL_DOWN_3  : 1;
        uint32_t PULL_DOWN_4  : 1;
        uint32_t PULL_DOWN_5  : 1;
        uint32_t PULL_DOWN_6  : 1;
        uint32_t PULL_DOWN_7  : 1;
        uint32_t PULL_DOWN_8  : 1;
        uint32_t PULL_DOWN_9  : 1;
        uint32_t PULL_DOWN_10 : 1;
        uint32_t PULL_DOWN_11 : 1;
        uint32_t PULL_DOWN_12 : 1;
        uint32_t PULL_DOWN_13 : 1;
        uint32_t PULL_DOWN_14 : 1;
        uint32_t PULL_DOWN_15 : 1;
        uint32_t PULL_UP_0    : 1;
        uint32_t PULL_UP_1    : 1;
        uint32_t PULL_UP_2    : 1;
        uint32_t PULL_UP_3    : 1;
        uint32_t PULL_UP_4    : 1;
        uint32_t PULL_UP_5    : 1;
        uint32_t PULL_UP_6    : 1;
        uint32_t PULL_UP_7    : 1;
        uint32_t PULL_UP_8    : 1;
        uint32_t PULL_UP_9    : 1;
        uint32_t PULL_UP_10   : 1;
        uint32_t PULL_UP_11   : 1;
        uint32_t PULL_UP_12   : 1;
        uint32_t PULL_UP_13   : 1;
        uint32_t PULL_UP_14   : 1;
        uint32_t PULL_UP_15   : 1;
    };

} MDR_PORT_PULL_TypeDef;

// PD register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_PORT_PD_OPEN_DRAIN_PIN_0_CONTROLLED_DRIVER_VAL            0
#define MDR_PORT_PD_OPEN_DRAIN_PIN_1_CONTROLLED_DRIVER_VAL            0
#define MDR_PORT_PD_OPEN_DRAIN_PIN_2_CONTROLLED_DRIVER_VAL            0
#define MDR_PORT_PD_OPEN_DRAIN_PIN_3_CONTROLLED_DRIVER_VAL            0
#define MDR_PORT_PD_OPEN_DRAIN_PIN_4_CONTROLLED_DRIVER_VAL            0
#define MDR_PORT_PD_OPEN_DRAIN_PIN_5_CONTROLLED_DRIVER_VAL            0
#define MDR_PORT_PD_OPEN_DRAIN_PIN_6_CONTROLLED_DRIVER_VAL            0
#define MDR_PORT_PD_OPEN_DRAIN_PIN_7_CONTROLLED_DRIVER_VAL            0
#define MDR_PORT_PD_OPEN_DRAIN_PIN_8_CONTROLLED_DRIVER_VAL            0
#define MDR_PORT_PD_OPEN_DRAIN_PIN_9_CONTROLLED_DRIVER_VAL            0
#define MDR_PORT_PD_OPEN_DRAIN_PIN_10_CONTROLLED_DRIVER_VAL           0
#define MDR_PORT_PD_OPEN_DRAIN_PIN_11_CONTROLLED_DRIVER_VAL           0
#define MDR_PORT_PD_OPEN_DRAIN_PIN_12_CONTROLLED_DRIVER_VAL           0
#define MDR_PORT_PD_OPEN_DRAIN_PIN_13_CONTROLLED_DRIVER_VAL           0
#define MDR_PORT_PD_OPEN_DRAIN_PIN_14_CONTROLLED_DRIVER_VAL           0
#define MDR_PORT_PD_OPEN_DRAIN_PIN_15_CONTROLLED_DRIVER_VAL           0

#define MDR_PORT_PD_OPEN_DRAIN_PIN_0_OPEN_DRAIN_VAL                   1
#define MDR_PORT_PD_OPEN_DRAIN_PIN_1_OPEN_DRAIN_VAL                   1
#define MDR_PORT_PD_OPEN_DRAIN_PIN_2_OPEN_DRAIN_VAL                   1
#define MDR_PORT_PD_OPEN_DRAIN_PIN_3_OPEN_DRAIN_VAL                   1
#define MDR_PORT_PD_OPEN_DRAIN_PIN_4_OPEN_DRAIN_VAL                   1
#define MDR_PORT_PD_OPEN_DRAIN_PIN_5_OPEN_DRAIN_VAL                   1
#define MDR_PORT_PD_OPEN_DRAIN_PIN_6_OPEN_DRAIN_VAL                   1
#define MDR_PORT_PD_OPEN_DRAIN_PIN_7_OPEN_DRAIN_VAL                   1
#define MDR_PORT_PD_OPEN_DRAIN_PIN_8_OPEN_DRAIN_VAL                   1
#define MDR_PORT_PD_OPEN_DRAIN_PIN_9_OPEN_DRAIN_VAL                   1
#define MDR_PORT_PD_OPEN_DRAIN_PIN_10_OPEN_DRAIN_VAL                  1
#define MDR_PORT_PD_OPEN_DRAIN_PIN_11_OPEN_DRAIN_VAL                  1
#define MDR_PORT_PD_OPEN_DRAIN_PIN_12_OPEN_DRAIN_VAL                  1
#define MDR_PORT_PD_OPEN_DRAIN_PIN_13_OPEN_DRAIN_VAL                  1
#define MDR_PORT_PD_OPEN_DRAIN_PIN_14_OPEN_DRAIN_VAL                  1
#define MDR_PORT_PD_OPEN_DRAIN_PIN_15_OPEN_DRAIN_VAL                  1

#define MDR_PORT_PD_SCHMITT_PIN_0_HYSTERESIS_200_MV_VAL               0
#define MDR_PORT_PD_SCHMITT_PIN_1_HYSTERESIS_200_MV_VAL               0
#define MDR_PORT_PD_SCHMITT_PIN_2_HYSTERESIS_200_MV_VAL               0
#define MDR_PORT_PD_SCHMITT_PIN_3_HYSTERESIS_200_MV_VAL               0
#define MDR_PORT_PD_SCHMITT_PIN_4_HYSTERESIS_200_MV_VAL               0
#define MDR_PORT_PD_SCHMITT_PIN_5_HYSTERESIS_200_MV_VAL               0
#define MDR_PORT_PD_SCHMITT_PIN_6_HYSTERESIS_200_MV_VAL               0
#define MDR_PORT_PD_SCHMITT_PIN_7_HYSTERESIS_200_MV_VAL               0
#define MDR_PORT_PD_SCHMITT_PIN_8_HYSTERESIS_200_MV_VAL               0
#define MDR_PORT_PD_SCHMITT_PIN_9_HYSTERESIS_200_MV_VAL               0
#define MDR_PORT_PD_SCHMITT_PIN_10_HYSTERESIS_200_MV_VAL              0
#define MDR_PORT_PD_SCHMITT_PIN_11_HYSTERESIS_200_MV_VAL              0
#define MDR_PORT_PD_SCHMITT_PIN_12_HYSTERESIS_200_MV_VAL              0
#define MDR_PORT_PD_SCHMITT_PIN_13_HYSTERESIS_200_MV_VAL              0
#define MDR_PORT_PD_SCHMITT_PIN_14_HYSTERESIS_200_MV_VAL              0
#define MDR_PORT_PD_SCHMITT_PIN_15_HYSTERESIS_200_MV_VAL              0

#define MDR_PORT_PD_SCHMITT_PIN_0_HYSTERESIS_400_MV_VAL               1
#define MDR_PORT_PD_SCHMITT_PIN_1_HYSTERESIS_400_MV_VAL               1
#define MDR_PORT_PD_SCHMITT_PIN_2_HYSTERESIS_400_MV_VAL               1
#define MDR_PORT_PD_SCHMITT_PIN_3_HYSTERESIS_400_MV_VAL               1
#define MDR_PORT_PD_SCHMITT_PIN_4_HYSTERESIS_400_MV_VAL               1
#define MDR_PORT_PD_SCHMITT_PIN_5_HYSTERESIS_400_MV_VAL               1
#define MDR_PORT_PD_SCHMITT_PIN_6_HYSTERESIS_400_MV_VAL               1
#define MDR_PORT_PD_SCHMITT_PIN_7_HYSTERESIS_400_MV_VAL               1
#define MDR_PORT_PD_SCHMITT_PIN_8_HYSTERESIS_400_MV_VAL               1
#define MDR_PORT_PD_SCHMITT_PIN_9_HYSTERESIS_400_MV_VAL               1
#define MDR_PORT_PD_SCHMITT_PIN_10_HYSTERESIS_400_MV_VAL              1
#define MDR_PORT_PD_SCHMITT_PIN_11_HYSTERESIS_400_MV_VAL              1
#define MDR_PORT_PD_SCHMITT_PIN_12_HYSTERESIS_400_MV_VAL              1
#define MDR_PORT_PD_SCHMITT_PIN_13_HYSTERESIS_400_MV_VAL              1
#define MDR_PORT_PD_SCHMITT_PIN_14_HYSTERESIS_400_MV_VAL              1
#define MDR_PORT_PD_SCHMITT_PIN_15_HYSTERESIS_400_MV_VAL              1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t OPEN_DRAIN_0   : 1;
        uint32_t OPEN_DRAIN_1   : 1;
        uint32_t OPEN_DRAIN_2   : 1;
        uint32_t OPEN_DRAIN_3   : 1;
        uint32_t OPEN_DRAIN_4   : 1;
        uint32_t OPEN_DRAIN_5   : 1;
        uint32_t OPEN_DRAIN_6   : 1;
        uint32_t OPEN_DRAIN_7   : 1;
        uint32_t OPEN_DRAIN_8   : 1;
        uint32_t OPEN_DRAIN_9   : 1;
        uint32_t OPEN_DRAIN_10  : 1;
        uint32_t OPEN_DRAIN_11  : 1;
        uint32_t OPEN_DRAIN_12  : 1;
        uint32_t OPEN_DRAIN_13  : 1;
        uint32_t OPEN_DRAIN_14  : 1;
        uint32_t OPEN_DRAIN_15  : 1;
        uint32_t SCHMITT_0      : 1;
        uint32_t SCHMITT_1      : 1;
        uint32_t SCHMITT_2      : 1;
        uint32_t SCHMITT_3      : 1;
        uint32_t SCHMITT_4      : 1;
        uint32_t SCHMITT_5      : 1;
        uint32_t SCHMITT_6      : 1;
        uint32_t SCHMITT_7      : 1;
        uint32_t SCHMITT_8      : 1;
        uint32_t SCHMITT_9      : 1;
        uint32_t SCHMITT_10     : 1;
        uint32_t SCHMITT_11     : 1;
        uint32_t SCHMITT_12     : 1;
        uint32_t SCHMITT_13     : 1;
        uint32_t SCHMITT_14     : 1;
        uint32_t SCHMITT_15     : 1;
    };

} MDR_PORT_PD_TypeDef;

// PWR register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_PORT_PWR_PIN_0_DISABLED_VAL                               0
#define MDR_PORT_PWR_PIN_1_DISABLED_VAL                               0
#define MDR_PORT_PWR_PIN_2_DISABLED_VAL                               0
#define MDR_PORT_PWR_PIN_3_DISABLED_VAL                               0
#define MDR_PORT_PWR_PIN_4_DISABLED_VAL                               0
#define MDR_PORT_PWR_PIN_5_DISABLED_VAL                               0
#define MDR_PORT_PWR_PIN_6_DISABLED_VAL                               0
#define MDR_PORT_PWR_PIN_7_DISABLED_VAL                               0
#define MDR_PORT_PWR_PIN_8_DISABLED_VAL                               0
#define MDR_PORT_PWR_PIN_9_DISABLED_VAL                               0
#define MDR_PORT_PWR_PIN_10_DISABLED_VAL                              0
#define MDR_PORT_PWR_PIN_11_DISABLED_VAL                              0
#define MDR_PORT_PWR_PIN_12_DISABLED_VAL                              0
#define MDR_PORT_PWR_PIN_13_DISABLED_VAL                              0
#define MDR_PORT_PWR_PIN_14_DISABLED_VAL                              0
#define MDR_PORT_PWR_PIN_15_DISABLED_VAL                              0

#define MDR_PORT_PWR_PIN_0_SLOW_VAL                                   1
#define MDR_PORT_PWR_PIN_1_SLOW_VAL                                   1
#define MDR_PORT_PWR_PIN_2_SLOW_VAL                                   1
#define MDR_PORT_PWR_PIN_3_SLOW_VAL                                   1
#define MDR_PORT_PWR_PIN_4_SLOW_VAL                                   1
#define MDR_PORT_PWR_PIN_5_SLOW_VAL                                   1
#define MDR_PORT_PWR_PIN_6_SLOW_VAL                                   1
#define MDR_PORT_PWR_PIN_7_SLOW_VAL                                   1
#define MDR_PORT_PWR_PIN_8_SLOW_VAL                                   1
#define MDR_PORT_PWR_PIN_9_SLOW_VAL                                   1
#define MDR_PORT_PWR_PIN_10_SLOW_VAL                                  1
#define MDR_PORT_PWR_PIN_11_SLOW_VAL                                  1
#define MDR_PORT_PWR_PIN_12_SLOW_VAL                                  1
#define MDR_PORT_PWR_PIN_13_SLOW_VAL                                  1
#define MDR_PORT_PWR_PIN_14_SLOW_VAL                                  1
#define MDR_PORT_PWR_PIN_15_SLOW_VAL                                  1

#define MDR_PORT_PWR_PIN_0_FAST_VAL                                   2
#define MDR_PORT_PWR_PIN_1_FAST_VAL                                   2
#define MDR_PORT_PWR_PIN_2_FAST_VAL                                   2
#define MDR_PORT_PWR_PIN_3_FAST_VAL                                   2
#define MDR_PORT_PWR_PIN_4_FAST_VAL                                   2
#define MDR_PORT_PWR_PIN_5_FAST_VAL                                   2
#define MDR_PORT_PWR_PIN_6_FAST_VAL                                   2
#define MDR_PORT_PWR_PIN_7_FAST_VAL                                   2
#define MDR_PORT_PWR_PIN_8_FAST_VAL                                   2
#define MDR_PORT_PWR_PIN_9_FAST_VAL                                   2
#define MDR_PORT_PWR_PIN_10_FAST_VAL                                  2
#define MDR_PORT_PWR_PIN_11_FAST_VAL                                  2
#define MDR_PORT_PWR_PIN_12_FAST_VAL                                  2
#define MDR_PORT_PWR_PIN_13_FAST_VAL                                  2
#define MDR_PORT_PWR_PIN_14_FAST_VAL                                  2
#define MDR_PORT_PWR_PIN_15_FAST_VAL                                  2

#define MDR_PORT_PWR_PIN_0_MAXIMUM_VAL                                3
#define MDR_PORT_PWR_PIN_1_MAXIMUM_VAL                                3
#define MDR_PORT_PWR_PIN_2_MAXIMUM_VAL                                3
#define MDR_PORT_PWR_PIN_3_MAXIMUM_VAL                                3
#define MDR_PORT_PWR_PIN_4_MAXIMUM_VAL                                3
#define MDR_PORT_PWR_PIN_5_MAXIMUM_VAL                                3
#define MDR_PORT_PWR_PIN_6_MAXIMUM_VAL                                3
#define MDR_PORT_PWR_PIN_7_MAXIMUM_VAL                                3
#define MDR_PORT_PWR_PIN_8_MAXIMUM_VAL                                3
#define MDR_PORT_PWR_PIN_9_MAXIMUM_VAL                                3
#define MDR_PORT_PWR_PIN_10_MAXIMUM_VAL                               3
#define MDR_PORT_PWR_PIN_11_MAXIMUM_VAL                               3
#define MDR_PORT_PWR_PIN_12_MAXIMUM_VAL                               3
#define MDR_PORT_PWR_PIN_13_MAXIMUM_VAL                               3
#define MDR_PORT_PWR_PIN_14_MAXIMUM_VAL                               3
#define MDR_PORT_PWR_PIN_15_MAXIMUM_VAL                               3

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t PIN_0  : 2;
        uint32_t PIN_1  : 2;
        uint32_t PIN_2  : 2;
        uint32_t PIN_3  : 2;
        uint32_t PIN_4  : 2;
        uint32_t PIN_5  : 2;
        uint32_t PIN_6  : 2;
        uint32_t PIN_7  : 2;
        uint32_t PIN_8  : 2;
        uint32_t PIN_9  : 2;
        uint32_t PIN_10 : 2;
        uint32_t PIN_11 : 2;
        uint32_t PIN_12 : 2;
        uint32_t PIN_13 : 2;
        uint32_t PIN_14 : 2;
        uint32_t PIN_15 : 2;
    };

} MDR_PORT_PWR_TypeDef;

// GFEN register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_PORT_GFEN_PIN_0_DISABLE_VAL                               0
#define MDR_PORT_GFEN_PIN_1_DISABLE_VAL                               0
#define MDR_PORT_GFEN_PIN_2_DISABLE_VAL                               0
#define MDR_PORT_GFEN_PIN_3_DISABLE_VAL                               0
#define MDR_PORT_GFEN_PIN_4_DISABLE_VAL                               0
#define MDR_PORT_GFEN_PIN_5_DISABLE_VAL                               0
#define MDR_PORT_GFEN_PIN_6_DISABLE_VAL                               0
#define MDR_PORT_GFEN_PIN_7_DISABLE_VAL                               0
#define MDR_PORT_GFEN_PIN_8_DISABLE_VAL                               0
#define MDR_PORT_GFEN_PIN_9_DISABLE_VAL                               0
#define MDR_PORT_GFEN_PIN_10_DISABLE_VAL                              0
#define MDR_PORT_GFEN_PIN_11_DISABLE_VAL                              0
#define MDR_PORT_GFEN_PIN_12_DISABLE_VAL                              0
#define MDR_PORT_GFEN_PIN_13_DISABLE_VAL                              0
#define MDR_PORT_GFEN_PIN_14_DISABLE_VAL                              0
#define MDR_PORT_GFEN_PIN_15_DISABLE_VAL                              0

#define MDR_PORT_GFEN_PIN_0_ENABLE_VAL                                1
#define MDR_PORT_GFEN_PIN_1_ENABLE_VAL                                1
#define MDR_PORT_GFEN_PIN_2_ENABLE_VAL                                1
#define MDR_PORT_GFEN_PIN_3_ENABLE_VAL                                1
#define MDR_PORT_GFEN_PIN_4_ENABLE_VAL                                1
#define MDR_PORT_GFEN_PIN_5_ENABLE_VAL                                1
#define MDR_PORT_GFEN_PIN_6_ENABLE_VAL                                1
#define MDR_PORT_GFEN_PIN_7_ENABLE_VAL                                1
#define MDR_PORT_GFEN_PIN_8_ENABLE_VAL                                1
#define MDR_PORT_GFEN_PIN_9_ENABLE_VAL                                1
#define MDR_PORT_GFEN_PIN_10_ENABLE_VAL                               1
#define MDR_PORT_GFEN_PIN_11_ENABLE_VAL                               1
#define MDR_PORT_GFEN_PIN_12_ENABLE_VAL                               1
#define MDR_PORT_GFEN_PIN_13_ENABLE_VAL                               1
#define MDR_PORT_GFEN_PIN_14_ENABLE_VAL                               1
#define MDR_PORT_GFEN_PIN_15_ENABLE_VAL                               1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t PIN_0  : 1;
        uint32_t PIN_1  : 1;
        uint32_t PIN_2  : 1;
        uint32_t PIN_3  : 1;
        uint32_t PIN_4  : 1;
        uint32_t PIN_5  : 1;
        uint32_t PIN_6  : 1;
        uint32_t PIN_7  : 1;
        uint32_t PIN_8  : 1;
        uint32_t PIN_9  : 1;
        uint32_t PIN_10 : 1;
        uint32_t PIN_11 : 1;
        uint32_t PIN_12 : 1;
        uint32_t PIN_13 : 1;
        uint32_t PIN_14 : 1;
        uint32_t PIN_15 : 1;
        uint32_t        : 16;
    };

} MDR_PORT_GFEN_TypeDef;

// PORT structure Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef struct
{
    __IO MDR_PORT_RXTX_TypeDef   RXTX;
    __IO MDR_PORT_OE_TypeDef     OE;
    __IO MDR_PORT_FUNC_TypeDef   FUNC;
    __IO MDR_PORT_ANALOG_TypeDef ANALOG;
    __IO MDR_PORT_PULL_TypeDef   PULL;
    __IO MDR_PORT_PD_TypeDef     PD;
    __IO MDR_PORT_PWR_TypeDef    PWR;
    __IO MDR_PORT_GFEN_TypeDef   GFEN;
} MDR_PORT_TypeDefUnion;

// PORT addresses
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_PORTA_UNION                                              ( ( MDR_PORT_TypeDefUnion * ) MDR_PORTA_BASE )
#define MDR_PORTB_UNION                                              ( ( MDR_PORT_TypeDefUnion * ) MDR_PORTB_BASE )
#define MDR_PORTC_UNION                                              ( ( MDR_PORT_TypeDefUnion * ) MDR_PORTC_BASE )
#define MDR_PORTD_UNION                                              ( ( MDR_PORT_TypeDefUnion * ) MDR_PORTD_BASE )
#define MDR_PORTE_UNION                                              ( ( MDR_PORT_TypeDefUnion * ) MDR_PORTE_BASE )
#define MDR_PORTF_UNION                                              ( ( MDR_PORT_TypeDefUnion * ) MDR_PORTF_BASE )

// RXTX functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_RXTX_SetHigh( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask );
void MDR_PORT_RXTX_SetLow( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask );
void MDR_PORT_RXTX_Toggle( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask );
uint32_t MDR_PORT_RXTX_Read( MDR_PORT_TypeDefUnion *port );

// OE functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_OE_SetInput( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask );
void MDR_PORT_OE_SetOutput( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask );

// FUNC functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_FUNC_Set( MDR_PORT_TypeDefUnion *port, uint32_t func_mask, uint32_t func_value );

// ANALOG functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_ANALOG_DigitalEnable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask );
void MDR_PORT_ANALOG_DigitalDisable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask );

// PULL functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_PULL_UpEnable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask );
void MDR_PORT_PULL_UpDisable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask );
void MDR_PORT_PULL_DownEnable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask );
void MDR_PORT_PULL_DownDisable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask );

// PD functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_PD_OpenDrainEnable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask );
void MDR_PORT_PD_OpenDrainDisable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask );
void MDR_PORT_PD_SchmittEnable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask );
void MDR_PORT_PD_SchmittDisable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask );

// PWR functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_PWR_Set( MDR_PORT_TypeDefUnion *port, uint32_t pwr_mask, uint32_t pwr_value );

// GFEN functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_GFEN_Enable( MDR_PORT_TypeDefUnion *port, uint32_t gfen_mask );
void MDR_PORT_GFEN_Disable( MDR_PORT_TypeDefUnion *port, uint32_t gfen_mask );


#endif