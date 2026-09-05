#ifndef __MILUINO_MDR_ADC_H
#define __MILUINO_MDR_ADC_H

#include "MDR32F9Q2I.h"
#include <stdint.h>
#include <stdbool.h>
// ADC1_CFG register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_ADC_ADC1_CFG_ADON_POS                                                      0
#define MDR_ADC_ADC1_CFG_GO_POS                                                        1
#define MDR_ADC_ADC1_CFG_CLKS_POS                                                      2
#define MDR_ADC_ADC1_CFG_SAMPLE_POS                                                    3
#define MDR_ADC_ADC1_CFG_CHS_POS                                                       4
#define MDR_ADC_ADC1_CFG_CHCH_POS                                                      9
#define MDR_ADC_ADC1_CFG_RNGC_POS                                                      10
#define MDR_ADC_ADC1_CFG_M_REF_POS                                                     11
#define MDR_ADC_ADC1_CFG_DIVCLK_POS                                                    12
#define MDR_ADC_ADC1_CFG_SYNC_CONVER_POS                                               16
#define MDR_ADC_ADC1_CFG_TS_EN_POS                                                     17
#define MDR_ADC_ADC1_CFG_TS_BUF_EN_POS                                                 18
#define MDR_ADC_ADC1_CFG_SEL_TS_POS                                                    19
#define MDR_ADC_ADC1_CFG_SEL_VREF_POS                                                  20
#define MDR_ADC_ADC1_CFG_TR_POS                                                        21
#define MDR_ADC_ADC1_CFG_DELAY_GO_POS                                                  25
#define MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                                 28

#define MDR_ADC_ADC1_CFG_ADON_MSK                                                      ( 0x01          << MDR_ADC_ADC1_CFG_ADON_POS                                             )
#define MDR_ADC_ADC1_CFG_GO_MSK                                                        ( 0x01          << MDR_ADC_ADC1_CFG_GO_POS                                               )
#define MDR_ADC_ADC1_CFG_CLKS_MSK                                                      ( 0x01          << MDR_ADC_ADC1_CFG_CLKS_POS                                             )
#define MDR_ADC_ADC1_CFG_SAMPLE_MSK                                                    ( 0x01          << MDR_ADC_ADC1_CFG_SAMPLE_POS                                           )
#define MDR_ADC_ADC1_CFG_CHS_MSK                                                       ( 0x1F          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHCH_MSK                                                      ( 0x01          << MDR_ADC_ADC1_CFG_CHCH_POS                                             )
#define MDR_ADC_ADC1_CFG_RNGC_MSK                                                      ( 0x01          << MDR_ADC_ADC1_CFG_RNGC_POS                                             )
#define MDR_ADC_ADC1_CFG_M_REF_MSK                                                     ( 0x01          << MDR_ADC_ADC1_CFG_M_REF_POS                                            )
#define MDR_ADC_ADC1_CFG_DIVCLK_MSK                                                    ( 0x0F          << MDR_ADC_ADC1_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC1_CFG_SYNC_CONVER_MSK                                               ( 0x01          << MDR_ADC_ADC1_CFG_SYNC_CONVER_POS                                      )
#define MDR_ADC_ADC1_CFG_TS_EN_MSK                                                     ( 0x01          << MDR_ADC_ADC1_CFG_TS_EN_POS                                            )
#define MDR_ADC_ADC1_CFG_TS_BUF_EN_MSK                                                 ( 0x01          << MDR_ADC_ADC1_CFG_TS_BUF_EN_POS                                        )
#define MDR_ADC_ADC1_CFG_SEL_TS_MSK                                                    ( 0x01          << MDR_ADC_ADC1_CFG_SEL_TS_POS                                           )
#define MDR_ADC_ADC1_CFG_SEL_VREF_MSK                                                  ( 0x01          << MDR_ADC_ADC1_CFG_SEL_VREF_POS                                         )
#define MDR_ADC_ADC1_CFG_TR_MSK                                                        ( 0x0F          << MDR_ADC_ADC1_CFG_TR_POS                                               )
#define MDR_ADC_ADC1_CFG_DELAY_GO_MSK                                                  ( 0x07          << MDR_ADC_ADC1_CFG_DELAY_GO_POS                                         )
#define MDR_ADC_ADC1_CFG_DELAY_ADC_MSK                                                 ( (uint32_t)0xF << MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                        )

#define MDR_ADC_ADC1_CFG_ADON_DISABLE                                                 ~( 0x01          << MDR_ADC_ADC1_CFG_ADON_POS                                             )
#define MDR_ADC_ADC1_CFG_ADON_ENABLE                                                   ( 0x01          << MDR_ADC_ADC1_CFG_ADON_POS                                             )

#define MDR_ADC_ADC1_CFG_GO_NO_ACTION                                                 ~( 0x01          << MDR_ADC_ADC1_CFG_GO_POS                                               )
#define MDR_ADC_ADC1_CFG_GO_START                                                      ( 0x01          << MDR_ADC_ADC1_CFG_GO_POS                                               )

#define MDR_ADC_ADC1_CFG_CLKS_PCLKD                                                   ~( 0x01          << MDR_ADC_ADC1_CFG_CLKS_POS                                             )
#define MDR_ADC_ADC1_CFG_CLKS_ADC_CLK                                                  ( 0x01          << MDR_ADC_ADC1_CFG_CLKS_POS                                             )

#define MDR_ADC_ADC1_CFG_SAMPLE_SINGLE                                                ~( 0x01          << MDR_ADC_ADC1_CFG_SAMPLE_POS                                           )
#define MDR_ADC_ADC1_CFG_SAMPLE_SEQUENTIAL                                             ( 0x01          << MDR_ADC_ADC1_CFG_SAMPLE_POS                                           )


#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_0                                                 ( 0x00          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_1                                                 ( 0x01          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_2                                                 ( 0x02          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_3                                                 ( 0x03          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_4                                                 ( 0x04          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_5                                                 ( 0x05          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_6                                                 ( 0x06          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_7                                                 ( 0x07          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_8                                                 ( 0x08          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_9                                                 ( 0x09          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_10                                                ( 0x0A          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_11                                                ( 0x0B          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_12                                                ( 0x0C          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_13                                                ( 0x0D          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_14                                                ( 0x0E          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_15                                                ( 0x0F          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_16                                                ( 0x10          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_17                                                ( 0x11          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_18                                                ( 0x12          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_19                                                ( 0x13          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_20                                                ( 0x14          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_21                                                ( 0x15          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_22                                                ( 0x16          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_23                                                ( 0x17          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_24                                                ( 0x18          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_25                                                ( 0x19          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_26                                                ( 0x1A          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_27                                                ( 0x1B          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_28                                                ( 0x1C          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_29                                                ( 0x1D          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_30                                                ( 0x1E          << MDR_ADC_ADC1_CFG_CHS_POS                                              )
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_31                                                ( 0x1F          << MDR_ADC_ADC1_CFG_CHS_POS                                              )

#define MDR_ADC_ADC1_CFG_CHCH_SINGLE_CHANNEL                                          ~( 0x01          << MDR_ADC_ADC1_CFG_CHCH_POS                                             )
#define MDR_ADC_ADC1_CFG_CHCH_CHANNEL_SWITCHING                                        ( 0x01          << MDR_ADC_ADC1_CFG_CHCH_POS                                             )

#define MDR_ADC_ADC1_CFG_RNGC_DISABLE                                                 ~( 0x01          << MDR_ADC_ADC1_CFG_RNGC_POS                                             )
#define MDR_ADC_ADC1_CFG_RNGC_ENABLE                                                   ( 0x01          << MDR_ADC_ADC1_CFG_RNGC_POS                                             )

#define MDR_ADC_ADC1_CFG_M_REF_INTERNAL                                               ~( 0x01          << MDR_ADC_ADC1_CFG_M_REF_POS                                            )
#define MDR_ADC_ADC1_CFG_M_REF_EXTERNAL                                                ( 0x01          << MDR_ADC_ADC1_CFG_M_REF_POS                                            )

#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK                                                  ~( 0x0F          << MDR_ADC_ADC1_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_2                                             ( 0x01          << MDR_ADC_ADC1_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_4                                             ( 0x02          << MDR_ADC_ADC1_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_8                                             ( 0x03          << MDR_ADC_ADC1_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_16                                            ( 0x04          << MDR_ADC_ADC1_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_32                                            ( 0x05          << MDR_ADC_ADC1_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_64                                            ( 0x06          << MDR_ADC_ADC1_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_128                                           ( 0x07          << MDR_ADC_ADC1_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_256                                           ( 0x08          << MDR_ADC_ADC1_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_512                                           ( 0x09          << MDR_ADC_ADC1_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_1024                                          ( 0x0A          << MDR_ADC_ADC1_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_2048                                          ( 0x0B          << MDR_ADC_ADC1_CFG_DIVCLK_POS                                           )

#define MDR_ADC_ADC1_CFG_SYNC_CONVER_INDEPENDENT                                      ~( 0x01          << MDR_ADC_ADC1_CFG_SYNC_CONVER_POS                                      )
#define MDR_ADC_ADC1_CFG_SYNC_CONVER_SYNCHRONOUS                                       ( 0x01          << MDR_ADC_ADC1_CFG_SYNC_CONVER_POS                                      )

#define MDR_ADC_ADC1_CFG_TS_EN_DISABLE                                                ~( 0x01          << MDR_ADC_ADC1_CFG_TS_EN_POS                                            )
#define MDR_ADC_ADC1_CFG_TS_EN_ENABLE                                                  ( 0x01          << MDR_ADC_ADC1_CFG_TS_EN_POS                                            )

#define MDR_ADC_ADC1_CFG_TS_BUF_EN_DISABLE                                            ~( 0x01          << MDR_ADC_ADC1_CFG_TS_BUF_EN_POS                                        )
#define MDR_ADC_ADC1_CFG_TS_BUF_EN_ENABLE                                              ( 0x01          << MDR_ADC_ADC1_CFG_TS_BUF_EN_POS                                        )

#define MDR_ADC_ADC1_CFG_SEL_TS_NOT_SELECTED                                          ~( 0x01          << MDR_ADC_ADC1_CFG_SEL_TS_POS                                           )
#define MDR_ADC_ADC1_CFG_SEL_TS_SELECTED                                               ( 0x01          << MDR_ADC_ADC1_CFG_SEL_TS_POS                                           )

#define MDR_ADC_ADC1_CFG_SEL_VREF_NOT_SELECTED                                        ~( 0x01          << MDR_ADC_ADC1_CFG_SEL_VREF_POS                                         )
#define MDR_ADC_ADC1_CFG_SEL_VREF_SELECTED                                             ( 0x01          << MDR_ADC_ADC1_CFG_SEL_VREF_POS                                         )

#define MDR_ADC_ADC1_CFG_TR_ZERO                                                      ~( 0x0F          << MDR_ADC_ADC1_CFG_TR_POS                                               )
#define MDR_ADC_ADC1_CFG_TR_VALUE( x )                                                 ( ( x )         << MDR_ADC_ADC1_CFG_TR_POS                                               )

#define MDR_ADC_ADC1_CFG_DELAY_GO_1_PCLKD                                             ~( 0x07          << MDR_ADC_ADC1_CFG_DELAY_GO_POS                                         )
#define MDR_ADC_ADC1_CFG_DELAY_GO_2_PCLKD                                              ( 0x01          << MDR_ADC_ADC1_CFG_DELAY_GO_POS                                         )
#define MDR_ADC_ADC1_CFG_DELAY_GO_3_PCLKD                                              ( 0x02          << MDR_ADC_ADC1_CFG_DELAY_GO_POS                                         )
#define MDR_ADC_ADC1_CFG_DELAY_GO_4_PCLKD                                              ( 0x03          << MDR_ADC_ADC1_CFG_DELAY_GO_POS                                         )
#define MDR_ADC_ADC1_CFG_DELAY_GO_5_PCLKD                                              ( 0x04          << MDR_ADC_ADC1_CFG_DELAY_GO_POS                                         )
#define MDR_ADC_ADC1_CFG_DELAY_GO_6_PCLKD                                              ( 0x05          << MDR_ADC_ADC1_CFG_DELAY_GO_POS                                         )
#define MDR_ADC_ADC1_CFG_DELAY_GO_7_PCLKD                                              ( 0x06          << MDR_ADC_ADC1_CFG_DELAY_GO_POS                                         )
#define MDR_ADC_ADC1_CFG_DELAY_GO_8_PCLKD                                              ( 0x07          << MDR_ADC_ADC1_CFG_DELAY_GO_POS                                         )

#define MDR_ADC_ADC1_CFG_DELAY_ADC_1_PCLKD                                            ~( (uint32_t)0xF << MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                        )
#define MDR_ADC_ADC1_CFG_DELAY_ADC_2_PCLKD                                             ( (uint32_t)0x1 << MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                        )
#define MDR_ADC_ADC1_CFG_DELAY_ADC_3_PCLKD                                             ( (uint32_t)0x2 << MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                        )
#define MDR_ADC_ADC1_CFG_DELAY_ADC_4_PCLKD                                             ( (uint32_t)0x3 << MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                        )
#define MDR_ADC_ADC1_CFG_DELAY_ADC_5_PCLKD                                             ( (uint32_t)0x4 << MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                        )
#define MDR_ADC_ADC1_CFG_DELAY_ADC_6_PCLKD                                             ( (uint32_t)0x5 << MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                        )
#define MDR_ADC_ADC1_CFG_DELAY_ADC_7_PCLKD                                             ( (uint32_t)0x6 << MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                        )
#define MDR_ADC_ADC1_CFG_DELAY_ADC_8_PCLKD                                             ( (uint32_t)0x7 << MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                        )
#define MDR_ADC_ADC1_CFG_DELAY_ADC_9_PCLKD                                             ( (uint32_t)0x8 << MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                        )
#define MDR_ADC_ADC1_CFG_DELAY_ADC_10_PCLKD                                            ( (uint32_t)0x9 << MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                        )
#define MDR_ADC_ADC1_CFG_DELAY_ADC_11_PCLKD                                            ( (uint32_t)0xA << MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                        )
#define MDR_ADC_ADC1_CFG_DELAY_ADC_12_PCLKD                                            ( (uint32_t)0xB << MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                        )
#define MDR_ADC_ADC1_CFG_DELAY_ADC_13_PCLKD                                            ( (uint32_t)0xC << MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                        )
#define MDR_ADC_ADC1_CFG_DELAY_ADC_14_PCLKD                                            ( (uint32_t)0xD << MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                        )
#define MDR_ADC_ADC1_CFG_DELAY_ADC_15_PCLKD                                            ( (uint32_t)0xE << MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                        )
#define MDR_ADC_ADC1_CFG_DELAY_ADC_16_PCLKD                                            ( (uint32_t)0xF << MDR_ADC_ADC1_CFG_DELAY_ADC_POS                                        )


// ADC2_CFG register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_ADC_ADC2_CFG_ADON_POS                                                      0
#define MDR_ADC_ADC2_CFG_GO_POS                                                        1
#define MDR_ADC_ADC2_CFG_CLKS_POS                                                      2
#define MDR_ADC_ADC2_CFG_SAMPLE_POS                                                    3
#define MDR_ADC_ADC2_CFG_CHS_POS                                                       4
#define MDR_ADC_ADC2_CFG_CHCH_POS                                                      9
#define MDR_ADC_ADC2_CFG_RNGC_POS                                                      10
#define MDR_ADC_ADC2_CFG_M_REF_POS                                                     11
#define MDR_ADC_ADC2_CFG_DIVCLK_POS                                                    12
#define MDR_ADC_ADC2_CFG_ADC1_OP_POS                                                   17
#define MDR_ADC_ADC2_CFG_ADC2_OP_POS                                                   18
#define MDR_ADC_ADC2_CFG_DELAY_GO_POS                                                  25

#define MDR_ADC_ADC2_CFG_ADON_MSK                                                      ( 0x01          << MDR_ADC_ADC2_CFG_ADON_POS                                             )
#define MDR_ADC_ADC2_CFG_GO_MSK                                                        ( 0x01          << MDR_ADC_ADC2_CFG_GO_POS                                               )
#define MDR_ADC_ADC2_CFG_CLKS_MSK                                                      ( 0x01          << MDR_ADC_ADC2_CFG_CLKS_POS                                             )
#define MDR_ADC_ADC2_CFG_SAMPLE_MSK                                                    ( 0x01          << MDR_ADC_ADC2_CFG_SAMPLE_POS                                           )
#define MDR_ADC_ADC2_CFG_CHS_MSK                                                       ( 0x1F          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHCH_MSK                                                      ( 0x01          << MDR_ADC_ADC2_CFG_CHCH_POS                                             )
#define MDR_ADC_ADC2_CFG_RNGC_MSK                                                      ( 0x01          << MDR_ADC_ADC2_CFG_RNGC_POS                                             )
#define MDR_ADC_ADC2_CFG_M_REF_MSK                                                     ( 0x01          << MDR_ADC_ADC2_CFG_M_REF_POS                                            )
#define MDR_ADC_ADC2_CFG_DIVCLK_MSK                                                    ( 0x0F          << MDR_ADC_ADC2_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC2_CFG_ADC1_OP_MSK                                                   ( 0x01          << MDR_ADC_ADC2_CFG_ADC1_OP_POS                                          )
#define MDR_ADC_ADC2_CFG_ADC2_OP_MSK                                                   ( 0x01          << MDR_ADC_ADC2_CFG_ADC2_OP_POS                                          )
#define MDR_ADC_ADC2_CFG_DELAY_GO_MSK                                                  ( 0x07          << MDR_ADC_ADC2_CFG_DELAY_GO_POS                                         )

#define MDR_ADC_ADC2_CFG_ADON_DISABLE                                                 ~( 0x01          << MDR_ADC_ADC2_CFG_ADON_POS                                             )
#define MDR_ADC_ADC2_CFG_ADON_ENABLE                                                   ( 0x01          << MDR_ADC_ADC2_CFG_ADON_POS                                             )

#define MDR_ADC_ADC2_CFG_GO_NO_ACTION                                                 ~( 0x01          << MDR_ADC_ADC2_CFG_GO_POS                                               )
#define MDR_ADC_ADC2_CFG_GO_START                                                      ( 0x01          << MDR_ADC_ADC2_CFG_GO_POS                                               )

#define MDR_ADC_ADC2_CFG_CLKS_PCLKD                                                   ~( 0x01          << MDR_ADC_ADC2_CFG_CLKS_POS                                             )
#define MDR_ADC_ADC2_CFG_CLKS_ADC_CLK                                                  ( 0x01          << MDR_ADC_ADC2_CFG_CLKS_POS                                             )

#define MDR_ADC_ADC2_CFG_SAMPLE_SINGLE                                                ~( 0x01          << MDR_ADC_ADC2_CFG_SAMPLE_POS                                           )
#define MDR_ADC_ADC2_CFG_SAMPLE_SEQUENTIAL                                             ( 0x01          << MDR_ADC_ADC2_CFG_SAMPLE_POS                                           )

#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_0                                                ~( 0x1F          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_1                                                 ( 0x01          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_2                                                 ( 0x02          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_3                                                 ( 0x03          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_4                                                 ( 0x04          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_5                                                 ( 0x05          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_6                                                 ( 0x06          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_7                                                 ( 0x07          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_8                                                 ( 0x08          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_9                                                 ( 0x09          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_10                                                ( 0x0A          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_11                                                ( 0x0B          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_12                                                ( 0x0C          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_13                                                ( 0x0D          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_14                                                ( 0x0E          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_15                                                ( 0x0F          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_16                                                ( 0x10          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_17                                                ( 0x11          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_18                                                ( 0x12          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_19                                                ( 0x13          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_20                                                ( 0x14          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_21                                                ( 0x15          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_22                                                ( 0x16          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_23                                                ( 0x17          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_24                                                ( 0x18          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_25                                                ( 0x19          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_26                                                ( 0x1A          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_27                                                ( 0x1B          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_28                                                ( 0x1C          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_29                                                ( 0x1D          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_30                                                ( 0x1E          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_31                                                ( 0x1F          << MDR_ADC_ADC2_CFG_CHS_POS                                              )
#define MDR_ADC_ADC2_CFG_CHS_VALUE( x )                                                ( ( x )         << MDR_ADC_ADC2_CFG_CHS_POS                                              )

#define MDR_ADC_ADCx_CFG_CHCH_SINGLE_CHANNEL                                          ~( 0x01          << MDR_ADC_ADC2_CFG_CHCH_POS                                             )
#define MDR_ADC_ADC2_CFG_CHCH_CHANNEL_SWITCHING                                        ( 0x01          << MDR_ADC_ADC2_CFG_CHCH_POS                                             )

#define MDR_ADC_ADC2_CFG_RNGC_DISABLE                                                 ~( 0x01          << MDR_ADC_ADC2_CFG_RNGC_POS                                             )
#define MDR_ADC_ADC2_CFG_RNGC_ENABLE                                                   ( 0x01          << MDR_ADC_ADC2_CFG_RNGC_POS                                             )

#define MDR_ADC_ADC2_CFG_M_REF_INTERNAL                                               ~( 0x01          << MDR_ADC_ADC2_CFG_M_REF_POS                                            )
#define MDR_ADC_ADC2_CFG_M_REF_EXTERNAL                                                ( 0x01          << MDR_ADC_ADC2_CFG_M_REF_POS                                            )

#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK                                                  ~( 0x0F          << MDR_ADC_ADC2_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_2                                             ( 0x01          << MDR_ADC_ADC2_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_4                                             ( 0x02          << MDR_ADC_ADC2_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_8                                             ( 0x03          << MDR_ADC_ADC2_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_16                                            ( 0x04          << MDR_ADC_ADC2_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_32                                            ( 0x05          << MDR_ADC_ADC2_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_64                                            ( 0x06          << MDR_ADC_ADC2_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_128                                           ( 0x07          << MDR_ADC_ADC2_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_256                                           ( 0x08          << MDR_ADC_ADC2_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_512                                           ( 0x09          << MDR_ADC_ADC2_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_1024                                          ( 0x0A          << MDR_ADC_ADC2_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_2048                                          ( 0x0B          << MDR_ADC_ADC2_CFG_DIVCLK_POS                                           )
#define MDR_ADC_ADC2_CFG_DIVCLK_VALUE( x )                                             ( ( x )         << MDR_ADC_ADC2_CFG_DIVCLK_POS                                           )

#define MDR_ADC_ADC2_CFG_ADC1_OP_INTERNAL                                             ~( 0x01          << MDR_ADC_ADC2_CFG_ADC1_OP_POS                                          )
#define MDR_ADC_ADC2_CFG_ADC1_OP_TEMPERATURE_SENSOR                                    ( 0x01          << MDR_ADC_ADC2_CFG_ADC1_OP_POS                                          )

#define MDR_ADC_ADC2_CFG_ADC2_OP_INTERNAL                                             ~( 0x01          << MDR_ADC_ADC2_CFG_ADC2_OP_POS                                          )
#define MDR_ADC_ADC2_CFG_ADC2_OP_TEMPERATURE_SENSOR                                    ( 0x01          << MDR_ADC_ADC2_CFG_ADC2_OP_POS                                          )

#define MDR_ADC_ADC2_CFG_DELAY_GO_1_PCLKD                                             ~( 0x07          << MDR_ADC_ADC2_CFG_DELAY_GO_POS                                         )
#define MDR_ADC_ADC2_CFG_DELAY_GO_2_PCLKD                                              ( 0x01          << MDR_ADC_ADC2_CFG_DELAY_GO_POS                                         )
#define MDR_ADC_ADC2_CFG_DELAY_GO_3_PCLKD                                              ( 0x02          << MDR_ADC_ADC2_CFG_DELAY_GO_POS                                         )
#define MDR_ADC_ADC2_CFG_DELAY_GO_4_PCLKD                                              ( 0x03          << MDR_ADC_ADC2_CFG_DELAY_GO_POS                                         )
#define MDR_ADC_ADC2_CFG_DELAY_GO_5_PCLKD                                              ( 0x04          << MDR_ADC_ADC2_CFG_DELAY_GO_POS                                         )
#define MDR_ADC_ADC2_CFG_DELAY_GO_6_PCLKD                                              ( 0x05          << MDR_ADC_ADC2_CFG_DELAY_GO_POS                                         )
#define MDR_ADC_ADC2_CFG_DELAY_GO_7_PCLKD                                              ( 0x06          << MDR_ADC_ADC2_CFG_DELAY_GO_POS                                         )
#define MDR_ADC_ADC2_CFG_DELAY_GO_8_PCLKD                                              ( 0x07          << MDR_ADC_ADC2_CFG_DELAY_GO_POS                                         )
#define MDR_ADC_ADC2_CFG_DELAY_GO_VALUE( x )                                           ( ( x )         << MDR_ADC_ADC2_CFG_DELAY_GO_POS                                         )


// ADCx_H_LEVEL register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_ADC_ADC_H_LEVEL_REG_H_LEVEL_POS                                            0

#define MDR_ADC_ADC_H_LEVEL_REG_H_LEVEL_MSK                                            ( 0x0FFF        << MDR_ADC_ADC_H_LEVEL_REG_H_LEVEL_POS                                   )

#define MDR_ADC_ADC_H_LEVEL_REG_H_LEVEL_ZERO                                          ~( 0x0FFF        << MDR_ADC_ADC_H_LEVEL_REG_H_LEVEL_POS                                   )
#define MDR_ADC_ADC_H_LEVEL_REG_H_LEVEL_VALUE( x )                                     ( ( x )         << MDR_ADC_ADC_H_LEVEL_REG_H_LEVEL_POS                                   )


// ADCx_L_LEVEL register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_ADC_ADC_L_LEVEL_REG_L_LEVEL_POS                                            0

#define MDR_ADC_ADC_L_LEVEL_REG_L_LEVEL_MSK                                            ( 0x0FFF        << MDR_ADC_ADC_L_LEVEL_REG_L_LEVEL_POS                                   )

#define MDR_ADC_ADC_L_LEVEL_REG_L_LEVEL_ZERO                                          ~( 0x0FFF        << MDR_ADC_ADC_L_LEVEL_REG_L_LEVEL_POS                                   )
#define MDR_ADC_ADC_L_LEVEL_REG_L_LEVEL_VALUE( x )                                     ( ( x )         << MDR_ADC_ADC_L_LEVEL_REG_L_LEVEL_POS                                   )

#define ADC_L_LEVEL_REG_L_LEVEL_POS                                                    0
#define ADC_L_LEVEL_REG_L_LEVEL_MSK                                                    ( 0x0FFF        << ADC_L_LEVEL_REG_L_LEVEL_POS                                           )

#define ADC_L_LEVEL_REG_L_LEVEL_ZERO                                                  ~( 0x0FFF        << ADC_L_LEVEL_REG_L_LEVEL_POS                                           )
#define ADC_L_LEVEL_REG_L_LEVEL_VALUE( x )                                             ( ( x )         << ADC_L_LEVEL_REG_L_LEVEL_POS                                           )
// ADCx_RESULT register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_ADC_ADC_RESULT_RESULT_POS                                                  0
#define MDR_ADC_ADC_RESULT_CHANNEL_POS                                                 16

#define MDR_ADC_ADC_RESULT_RESULT_MSK                                                  ( 0x0FFF        << MDR_ADC_ADC_RESULT_RESULT_POS                                         )
#define MDR_ADC_ADC_RESULT_CHANNEL_MSK                                                 ( 0x1F          << MDR_ADC_ADC_RESULT_CHANNEL_POS                                        )

#define MDR_ADC_ADC_RESULT_RESULT_ZERO                                                ~( 0x0FFF        << MDR_ADC_ADC_RESULT_RESULT_POS                                         )
#define MDR_ADC_ADC_RESULT_RESULT_VALUE( x )                                           ( ( x )         << MDR_ADC_ADC_RESULT_RESULT_POS                                         )

#define MDR_ADC_ADC_RESULT_CHANNEL_0                                                  ~( 0x1F          << MDR_ADC_ADC_RESULT_CHANNEL_POS                                        )
#define MDR_ADC_ADC_RESULT_CHANNEL_VALUE( x )                                          ( ( x )         << MDR_ADC_ADC_RESULT_CHANNEL_POS                                        )

#define ADC_RESULT_FIELD_POS( x )                                                      ( x                                                                                      )
#define ADC_RESULT_FIELD_MSK( x, y )                                                   ( ( x )         << ADC_RESULT_FIELD_POS( y )                                             )

#define ADC_RESULT_FIELD_ZERO( x, y )                                                 ~( ( x )         << ADC_RESULT_FIELD_POS( y )                                             )
#define ADC_RESULT_FIELD_VALUE( x, y )                                                 ( ( x )         << ADC_RESULT_FIELD_POS( y )                                             )
// ADCx_STATUS register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_ADC_ADC_STATUS_OVERWRITE_POS                                               0
#define MDR_ADC_ADC_STATUS_AWOIFEN_POS                                                 1
#define MDR_ADC_ADC_STATUS_EOCIF_POS                                                   2
#define MDR_ADC_ADC_STATUS_AWOIF_IE_POS                                                3
#define MDR_ADC_ADC_STATUS_EOCIF_IE_POS                                                4

#define MDR_ADC_ADC_STATUS_OVERWRITE_MSK                                               ( 0x01          << MDR_ADC_ADC_STATUS_OVERWRITE_POS                                      )
#define MDR_ADC_ADC_STATUS_AWOIFEN_MSK                                                 ( 0x01          << MDR_ADC_ADC_STATUS_AWOIFEN_POS                                        )
#define MDR_ADC_ADC_STATUS_EOCIF_MSK                                                   ( 0x01          << MDR_ADC_ADC_STATUS_EOCIF_POS                                          )
#define MDR_ADC_ADC_STATUS_AWOIF_IE_MSK                                                ( 0x01          << MDR_ADC_ADC_STATUS_AWOIF_IE_POS                                       )
#define MDR_ADC_ADC_STATUS_EOCIF_IE_MSK                                                ( 0x01          << MDR_ADC_ADC_STATUS_EOCIF_IE_POS                                       )

#define MDR_ADC_ADC_STATUS_OVERWRITE_NOT_SET                                          ~( 0x01          << MDR_ADC_ADC_STATUS_OVERWRITE_POS                                      )
#define MDR_ADC_ADC_STATUS_OVERWRITE_SET                                               ( 0x01          << MDR_ADC_ADC_STATUS_OVERWRITE_POS                                      )

#define MDR_ADC_ADC_STATUS_AWOIFEN_IN_RANGE                                           ~( 0x01          << MDR_ADC_ADC_STATUS_AWOIFEN_POS                                        )
#define MDR_ADC_ADC_STATUS_AWOIFEN_OUT_OF_RANGE                                        ( 0x01          << MDR_ADC_ADC_STATUS_AWOIFEN_POS                                        )

#define MDR_ADC_ADC_STATUS_EOCIF_NO_RESULT                                            ~( 0x01          << MDR_ADC_ADC_STATUS_EOCIF_POS                                          )
#define MDR_ADC_ADC_STATUS_EOCIF_RESULT_READY                                          ( 0x01          << MDR_ADC_ADC_STATUS_EOCIF_POS                                          )

#define MDR_ADC_ADC_STATUS_AWOIF_IE_DISABLE                                           ~( 0x01          << MDR_ADC_ADC_STATUS_AWOIF_IE_POS                                       )
#define MDR_ADC_ADC_STATUS_AWOIF_IE_ENABLE                                             ( 0x01          << MDR_ADC_ADC_STATUS_AWOIF_IE_POS                                       )

#define MDR_ADC_ADC_STATUS_EOCIF_IE_DISABLE                                           ~( 0x01          << MDR_ADC_ADC_STATUS_EOCIF_IE_POS                                       )
#define MDR_ADC_ADC_STATUS_EOCIF_IE_ENABLE                                             ( 0x01          << MDR_ADC_ADC_STATUS_EOCIF_IE_POS                                       )


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_ADC_ADC_CHSEL_CHANNEL_0_POS                                                0
#define MDR_ADC_ADC_CHSEL_CHANNEL_1_POS                                                1
#define MDR_ADC_ADC_CHSEL_CHANNEL_2_POS                                                2
#define MDR_ADC_ADC_CHSEL_CHANNEL_3_POS                                                3
#define MDR_ADC_ADC_CHSEL_CHANNEL_4_POS                                                4
#define MDR_ADC_ADC_CHSEL_CHANNEL_5_POS                                                5
#define MDR_ADC_ADC_CHSEL_CHANNEL_6_POS                                                6
#define MDR_ADC_ADC_CHSEL_CHANNEL_7_POS                                                7
#define MDR_ADC_ADC_CHSEL_CHANNEL_8_POS                                                8
#define MDR_ADC_ADC_CHSEL_CHANNEL_9_POS                                                9
#define MDR_ADC_ADC_CHSEL_CHANNEL_10_POS                                               10
#define MDR_ADC_ADC_CHSEL_CHANNEL_11_POS                                               11
#define MDR_ADC_ADC_CHSEL_CHANNEL_12_POS                                               12
#define MDR_ADC_ADC_CHSEL_CHANNEL_13_POS                                               13
#define MDR_ADC_ADC_CHSEL_CHANNEL_14_POS                                               14
#define MDR_ADC_ADC_CHSEL_CHANNEL_15_POS                                               15
#define MDR_ADC_ADC_CHSEL_CHANNEL_16_POS                                               16
#define MDR_ADC_ADC_CHSEL_CHANNEL_17_POS                                               17
#define MDR_ADC_ADC_CHSEL_CHANNEL_18_POS                                               18
#define MDR_ADC_ADC_CHSEL_CHANNEL_19_POS                                               19
#define MDR_ADC_ADC_CHSEL_CHANNEL_20_POS                                               20
#define MDR_ADC_ADC_CHSEL_CHANNEL_21_POS                                               21
#define MDR_ADC_ADC_CHSEL_CHANNEL_22_POS                                               22
#define MDR_ADC_ADC_CHSEL_CHANNEL_23_POS                                               23
#define MDR_ADC_ADC_CHSEL_CHANNEL_24_POS                                               24
#define MDR_ADC_ADC_CHSEL_CHANNEL_25_POS                                               25
#define MDR_ADC_ADC_CHSEL_CHANNEL_26_POS                                               26
#define MDR_ADC_ADC_CHSEL_CHANNEL_27_POS                                               27
#define MDR_ADC_ADC_CHSEL_CHANNEL_28_POS                                               28
#define MDR_ADC_ADC_CHSEL_CHANNEL_29_POS                                               29
#define MDR_ADC_ADC_CHSEL_CHANNEL_30_POS                                               30
#define MDR_ADC_ADC_CHSEL_CHANNEL_31_POS                                               31

#define MDR_ADC_ADC_CHSEL_CHANNEL_0_MSK                                                ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_0_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_1_MSK                                                ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_1_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_2_MSK                                                ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_2_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_3_MSK                                                ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_3_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_4_MSK                                                ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_4_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_5_MSK                                                ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_5_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_6_MSK                                                ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_6_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_7_MSK                                                ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_7_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_8_MSK                                                ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_8_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_9_MSK                                                ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_9_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_10_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_10_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_11_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_11_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_12_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_12_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_13_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_13_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_14_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_14_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_15_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_15_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_16_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_16_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_17_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_17_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_18_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_18_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_19_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_19_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_20_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_20_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_21_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_21_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_22_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_22_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_23_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_23_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_24_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_24_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_25_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_25_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_26_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_26_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_27_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_27_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_28_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_28_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_29_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_29_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_30_MSK                                               ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_30_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_31_MSK                                               ( (uint32_t)0x1 << MDR_ADC_ADC_CHSEL_CHANNEL_31_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_0_NOT_SELECTED                                      ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_0_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_0_SELECTED                                           ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_0_POS                                       )

#define MDR_ADC_ADC_CHSEL_CHANNEL_1_NOT_SELECTED                                      ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_1_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_1_SELECTED                                           ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_1_POS                                       )

#define MDR_ADC_ADC_CHSEL_CHANNEL_2_NOT_SELECTED                                      ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_2_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_2_SELECTED                                           ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_2_POS                                       )

#define MDR_ADC_ADC_CHSEL_CHANNEL_3_NOT_SELECTED                                      ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_3_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_3_SELECTED                                           ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_3_POS                                       )

#define MDR_ADC_ADC_CHSEL_CHANNEL_4_NOT_SELECTED                                      ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_4_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_4_SELECTED                                           ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_4_POS                                       )

#define MDR_ADC_ADC_CHSEL_CHANNEL_5_NOT_SELECTED                                      ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_5_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_5_SELECTED                                           ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_5_POS                                       )

#define MDR_ADC_ADC_CHSEL_CHANNEL_6_NOT_SELECTED                                      ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_6_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_6_SELECTED                                           ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_6_POS                                       )

#define MDR_ADC_ADC_CHSEL_CHANNEL_7_NOT_SELECTED                                      ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_7_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_7_SELECTED                                           ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_7_POS                                       )

#define MDR_ADC_ADC_CHSEL_CHANNEL_8_NOT_SELECTED                                      ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_8_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_8_SELECTED                                           ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_8_POS                                       )

#define MDR_ADC_ADC_CHSEL_CHANNEL_9_NOT_SELECTED                                      ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_9_POS                                       )
#define MDR_ADC_ADC_CHSEL_CHANNEL_9_SELECTED                                           ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_9_POS                                       )

#define MDR_ADC_ADC_CHSEL_CHANNEL_10_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_10_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_10_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_10_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_11_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_11_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_11_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_11_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_12_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_12_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_12_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_12_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_13_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_13_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_13_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_13_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_14_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_14_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_14_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_14_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_15_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_15_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_15_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_15_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_16_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_16_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_16_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_16_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_17_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_17_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_17_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_17_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_18_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_18_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_18_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_18_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_19_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_19_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_19_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_19_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_20_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_20_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_20_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_20_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_21_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_21_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_21_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_21_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_22_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_22_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_22_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_22_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_23_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_23_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_23_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_23_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_24_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_24_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_24_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_24_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_25_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_25_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_25_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_25_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_26_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_26_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_26_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_26_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_27_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_27_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_27_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_27_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_28_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_28_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_28_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_28_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_29_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_29_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_29_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_29_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_30_NOT_SELECTED                                     ~( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_30_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_30_SELECTED                                          ( 0x01          << MDR_ADC_ADC_CHSEL_CHANNEL_30_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_31_NOT_SELECTED                                     ~( (uint32_t)0x1 << MDR_ADC_ADC_CHSEL_CHANNEL_31_POS                                      )
#define MDR_ADC_ADC_CHSEL_CHANNEL_31_SELECTED                                          ( (uint32_t)0x1 << MDR_ADC_ADC_CHSEL_CHANNEL_31_POS                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_POS( x )                                             ( x                                                                                      )

#define MDR_ADC_ADC_CHSEL_CHANNEL_MSK( x )                                             ( (uint32_t)0x1 << MDR_ADC_ADC_CHSEL_CHANNEL_POS( x )                                    )

#define MDR_ADC_ADC_CHSEL_CHANNEL_NOT_SELECTED( x )                                   ~( (uint32_t)0x1 << MDR_ADC_ADC_CHSEL_CHANNEL_POS( x )                                    )
#define MDR_ADC_ADC_CHSEL_CHANNEL_SELECTED( x )                                        ( (uint32_t)0x1 << MDR_ADC_ADC_CHSEL_CHANNEL_POS( x )                                    )

#define ADC_CHSEL_CHANNEL_POS( x )                                                     ( x                                                                                      )
#define ADC_CHSEL_CHANNEL_MSK( x )                                                     ( (uint32_t)0x1 << ADC_CHSEL_CHANNEL_POS( x )                                            )

#define ADC_CHSEL_CHANNEL_NOT_SELECTED( x )                                           ~( (uint32_t)0x1 << ADC_CHSEL_CHANNEL_POS( x )                                            )
#define ADC_CHSEL_CHANNEL_SELECTED( x )                                                ( (uint32_t)0x1 << ADC_CHSEL_CHANNEL_POS( x )                                            )



// ADC1_CFG register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_ADC_ADC1_CFG_ADON_DISABLE_VAL                                              0
#define ADON_ENABLE                                               1
#define MDR_ADC_ADC1_CFG_GO_NO_ACTION_VAL                                              0
#define MDR_ADC_ADC1_CFG_GO_START_VAL                                                  1
#define MDR_ADC_ADC1_CFG_CLKS_PCLKD_VAL                                                0
#define MDR_ADC_ADC1_CFG_CLKS_ADC_CLK_VAL                                              1
#define MDR_ADC_ADC1_CFG_SAMPLE_SINGLE_VAL                                             0
#define MDR_ADC_ADC1_CFG_SAMPLE_SEQUENTIAL_VAL                                         1
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_0_VAL                                             0
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_1_VAL                                             1
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_2_VAL                                             2
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_3_VAL                                             3
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_4_VAL                                             4
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_5_VAL                                             5
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_6_VAL                                             6
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_7_VAL                                             7
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_8_VAL                                             8
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_9_VAL                                             9
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_10_VAL                                            10
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_11_VAL                                            11
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_12_VAL                                            12
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_13_VAL                                            13
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_14_VAL                                            14
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_15_VAL                                            15
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_16_VAL                                            16
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_17_VAL                                            17
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_18_VAL                                            18
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_19_VAL                                            19
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_20_VAL                                            20
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_21_VAL                                            21
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_22_VAL                                            22
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_23_VAL                                            23
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_24_VAL                                            24
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_25_VAL                                            25
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_26_VAL                                            26
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_27_VAL                                            27
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_28_VAL                                            28
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_29_VAL                                            29
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_30_VAL                                            30
#define MDR_ADC_ADC1_CFG_CHS_CHANNEL_31_VAL                                            31
#define MDR_ADC_ADC1_CFG_CHS_VAL( x )                                                  ( x                                                                                      )
#define MDR_ADC_ADC1_CFG_CHCH_SINGLE_CHANNEL_VAL                                       0
#define MDR_ADC_ADC1_CFG_CHCH_CHANNEL_SWITCHING_VAL                                    1
#define MDR_ADC_ADC1_CFG_RNGC_DISABLE_VAL                                              0
#define MDR_ADC_ADC1_CFG_RNGC_ENABLE_VAL                                               1
#define MDR_ADC_ADC1_CFG_M_REF_INTERNAL_VAL                                            0
#define MDR_ADC_ADC1_CFG_M_REF_EXTERNAL_VAL                                            1
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_VAL                                               0
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_2_VAL                                         1
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_4_VAL                                         2
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_8_VAL                                         3
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_16_VAL                                        4
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_32_VAL                                        5
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_64_VAL                                        6
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_128_VAL                                       7
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_256_VAL                                       8
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_512_VAL                                       9
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_1024_VAL                                      10
#define MDR_ADC_ADC1_CFG_DIVCLK_PCLK_DIV_2048_VAL                                      11
#define MDR_ADC_ADC1_CFG_DIVCLK_VAL( x )                                               ( x                                                                                      )
#define MDR_ADC_ADC1_CFG_SYNC_CONVER_INDEPENDENT_VAL                                   0
#define MDR_ADC_ADC1_CFG_SYNC_CONVER_SYNCHRONOUS_VAL                                   1
#define MDR_ADC_ADC1_CFG_TS_EN_DISABLE_VAL                                             0
#define MDR_ADC_ADC1_CFG_TS_EN_ENABLE_VAL                                              1
#define MDR_ADC_ADC1_CFG_TS_BUF_EN_DISABLE_VAL                                         0
#define MDR_ADC_ADC1_CFG_TS_BUF_EN_ENABLE_VAL                                          1
#define MDR_ADC_ADC1_CFG_SEL_TS_NOT_SELECTED_VAL                                       0
#define MDR_ADC_ADC1_CFG_SEL_TS_SELECTED_VAL                                           1
#define MDR_ADC_ADC1_CFG_SEL_VREF_NOT_SELECTED_VAL                                     0
#define MDR_ADC_ADC1_CFG_SEL_VREF_SELECTED_VAL                                         1
#define MDR_ADC_ADC1_CFG_TR_ZERO_VAL                                                   0
#define MDR_ADC_ADC1_CFG_TR_VAL( x )                                                   ( x                                                                                      )
#define MDR_ADC_ADC1_CFG_DELAY_GO_1_PCLKD_VAL                                          0
#define MDR_ADC_ADC1_CFG_DELAY_GO_2_PCLKD_VAL                                                1
#define MDR_ADC_ADC1_CFG_DELAY_GO_3_PCLKD_VAL                                                2
#define MDR_ADC_ADC1_CFG_DELAY_GO_4_PCLKD_VAL                                                3
#define MDR_ADC_ADC1_CFG_DELAY_GO_5_PCLKD_VAL                                                4
#define MDR_ADC_ADC1_CFG_DELAY_GO_6_PCLKD_VAL                                                5
#define MDR_ADC_ADC1_CFG_DELAY_GO_7_PCLKD_VAL                                                6
#define MDR_ADC_ADC1_CFG_DELAY_GO_8_PCLKD_VAL                                                7
#define MDR_ADC_ADC1_CFG_DELAY_GO_VAL( x )                                             ( x                                                                                      )

#define MDR_ADC_ADC1_CFG_DELAY_ADC_1_PCLKD_VAL                                         0
#define MDR_ADC_ADC1_CFG_DELAY_ADC_2_PCLKD_VAL                                               1
#define MDR_ADC_ADC1_CFG_DELAY_ADC_3_PCLKD_VAL                                               2
#define MDR_ADC_ADC1_CFG_DELAY_ADC_4_PCLKD_VAL                                               3
#define MDR_ADC_ADC1_CFG_DELAY_ADC_5_PCLKD_VAL                                               4
#define MDR_ADC_ADC1_CFG_DELAY_ADC_6_PCLKD_VAL                                               5
#define MDR_ADC_ADC1_CFG_DELAY_ADC_7_PCLKD_VAL                                               6
#define MDR_ADC_ADC1_CFG_DELAY_ADC_8_PCLKD_VAL                                               7
#define MDR_ADC_ADC1_CFG_DELAY_ADC_9_PCLKD_VAL                                               8
#define MDR_ADC_ADC1_CFG_DELAY_ADC_10_PCLKD_VAL                                              9
#define MDR_ADC_ADC1_CFG_DELAY_ADC_11_PCLKD_VAL                                              10
#define MDR_ADC_ADC1_CFG_DELAY_ADC_12_PCLKD_VAL                                              11
#define MDR_ADC_ADC1_CFG_DELAY_ADC_13_PCLKD_VAL                                              12
#define MDR_ADC_ADC1_CFG_DELAY_ADC_14_PCLKD_VAL                                              13
#define MDR_ADC_ADC1_CFG_DELAY_ADC_15_PCLKD_VAL                                              14
#define MDR_ADC_ADC1_CFG_DELAY_ADC_16_PCLKD_VAL                                              15
#define MDR_ADC_ADC1_CFG_DELAY_ADC_VAL( x )                                            ( x                                                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t ADON        : 1;
        uint32_t GO          : 1;
        uint32_t CLKS        : 1;
        uint32_t SAMPLE      : 1;
        uint32_t CHS         : 5;
        uint32_t CHCH        : 1;
        uint32_t RNGC        : 1;
        uint32_t M_REF       : 1;
        uint32_t DIVCLK      : 4;
        uint32_t SYNC_CONVER : 1;
        uint32_t TS_EN       : 1;
        uint32_t TS_BUF_EN   : 1;
        uint32_t SEL_TS      : 1;
        uint32_t SEL_VREF    : 1;
        uint32_t TR          : 4;
        uint32_t DELAY_GO    : 3;
        uint32_t DELAY_ADC   : 4;
    };

} MDR_ADC_ADC1_CFG_TypeDef;


 MDR_ADC->ADC2_CFG |= MDR_ADC_ADC2_CFG_ADON_ENABLE;

MDR_ADC->ADC2_CFG_Bit.ADON = ADON_ENABLEL;
// ADC2_CFG register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_ADC_ADC2_CFG_ADON_DISABLE_VAL                                              0
#define MDR_ADC_ADC2_CFG_ADON_ENABLE_VAL                                               1
#define MDR_ADC_ADC2_CFG_GO_NO_ACTION_VAL                                              0
#define MDR_ADC_ADC2_CFG_GO_START_VAL                                                  1
#define MDR_ADC_ADC2_CFG_CLKS_PCLKD_VAL                                                0
#define MDR_ADC_ADC2_CFG_CLKS_ADC_CLK_VAL                                              1
#define MDR_ADC_ADC2_CFG_SAMPLE_SINGLE_VAL                                             0
#define MDR_ADC_ADC2_CFG_SAMPLE_SEQUENTIAL_VAL                                         1
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_0_VAL                                             0
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_1_VAL                                             1
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_2_VAL                                             2
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_3_VAL                                             3
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_4_VAL                                             4
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_5_VAL                                             5
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_6_VAL                                             6
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_7_VAL                                             7
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_8_VAL                                             8
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_9_VAL                                             9
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_10_VAL                                            10
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_11_VAL                                            11
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_12_VAL                                            12
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_13_VAL                                            13
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_14_VAL                                            14
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_15_VAL                                            15
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_16_VAL                                            16
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_17_VAL                                            17
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_18_VAL                                            18
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_19_VAL                                            19
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_20_VAL                                            20
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_21_VAL                                            21
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_22_VAL                                            22
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_23_VAL                                            23
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_24_VAL                                            24
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_25_VAL                                            25
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_26_VAL                                            26
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_27_VAL                                            27
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_28_VAL                                            28
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_29_VAL                                            29
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_30_VAL                                            30
#define MDR_ADC_ADC2_CFG_CHS_CHANNEL_31_VAL                                            31
#define MDR_ADC_ADC2_CFG_CHS_VAL( x )                                                  ( x                                                                                      )
#define MDR_ADC_ADC2_CFG_CHCH_SINGLE_CHANNEL_VAL                                       0
#define MDR_ADC_ADC2_CFG_CHCH_CHANNEL_SWITCHING_VAL                                    1
#define MDR_ADC_ADC2_CFG_RNGC_DISABLE_VAL                                              0
#define MDR_ADC_ADC2_CFG_RNGC_ENABLE_VAL                                               1
#define MDR_ADC_ADC2_CFG_M_REF_INTERNAL_VAL                                            0
#define MDR_ADC_ADC2_CFG_M_REF_EXTERNAL_VAL                                            1
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_VAL                                               0
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_2_VAL                                         1
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_4_VAL                                         2
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_8_VAL                                         3
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_16_VAL                                        4
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_32_VAL                                        5
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_64_VAL                                        6
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_128_VAL                                       7
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_256_VAL                                       8
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_512_VAL                                       9
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_1024_VAL                                      10
#define MDR_ADC_ADC2_CFG_DIVCLK_PCLK_DIV_2048_VAL                                      11
#define MDR_ADC_ADC2_CFG_DIVCLK_VAL( x )                                               ( x                                                                                      )
#define MDR_ADC_ADC2_CFG_ADC1_OP_INTERNAL_VAL                                          0
#define MDR_ADC_ADC2_CFG_ADC1_OP_TEMPERATURE_SENSOR_VAL                                1
#define MDR_ADC_ADC2_CFG_ADC2_OP_INTERNAL_VAL                                          0
#define MDR_ADC_ADC2_CFG_ADC2_OP_TEMPERATURE_SENSOR_VAL                                1
#define MDR_ADC_ADC2_CFG_DELAY_GO_1_PCLKD_VAL                                          0
#define MDR_ADC_ADC2_CFG_DELAY_GO_2_PCLKD_VAL                                                1
#define MDR_ADC_ADC2_CFG_DELAY_GO_3_PCLKD_VAL                                                2
#define MDR_ADC_ADC2_CFG_DELAY_GO_4_PCLKD_VAL                                                3
#define MDR_ADC_ADC2_CFG_DELAY_GO_5_PCLKD_VAL                                                4
#define MDR_ADC_ADC2_CFG_DELAY_GO_6_PCLKD_VAL                                                5
#define MDR_ADC_ADC2_CFG_DELAY_GO_7_PCLKD_VAL                                                6
#define MDR_ADC_ADC2_CFG_DELAY_GO_8_PCLKD_VAL                                                7
#define MDR_ADC_ADC2_CFG_DELAY_GO_VAL( x )                                             ( x                                                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t ADON     : 1;
        uint32_t GO       : 1;
        uint32_t CLKS     : 1;
        uint32_t SAMPLE   : 1;
        uint32_t CHS      : 5;
        uint32_t CHCH     : 1;
        uint32_t RNGC     : 1;
        uint32_t M_REF    : 1;
        uint32_t DIVCLK   : 4;
        uint32_t          : 1;
        uint32_t ADC1_OP  : 1;
        uint32_t ADC2_OP  : 1;
        uint32_t          : 6;
        uint32_t DELAY_GO : 3;
        uint32_t          : 4;
    };

} MDR_ADC_ADC2_CFG_TypeDef;
// ADCx_H_LEVEL register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_ADC_ADC_H_LEVEL_REG_H_LEVEL_ZERO_VAL                                       0
#define MDR_ADC_ADC_H_LEVEL_REG_H_LEVEL_VAL( x )                                      ( x                                                                                       )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t REG_H_LEVEL : 12;
        uint32_t             : 20;
    };

} MDR_ADC_ADC_H_LEVEL_TypeDef;
// ADCx_L_LEVEL register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_ADC_ADC_L_LEVEL_REG_L_LEVEL_ZERO_VAL                                       0
#define MDR_ADC_ADC_L_LEVEL_REG_L_LEVEL_VAL( x )                                      ( x                                                                                       )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t REG_L_LEVEL : 12;
        uint32_t             : 20;
    };

} MDR_ADC_ADC_L_LEVEL_TypeDef;
// ADCx_RESULT register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_ADC_ADC_RESULT_RESULT_ZERO_VAL                                             0
#define MDR_ADC_ADC_RESULT_RESULT_VAL( x )                                            ( x                                                                                       )
#define MDR_ADC_ADC_RESULT_CHANNEL_0_VAL                                               0
#define MDR_ADC_ADC_RESULT_CHANNEL_VAL( x )                                           ( x                                                                                       )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t RESULT  : 12;
        uint32_t         : 4;
        uint32_t CHANNEL : 5;
        uint32_t         : 11;
    };

} MDR_ADC_ADC_RESULT_TypeDef;
// ADCx_STATUS register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_ADC_ADC_STATUS_OVERWRITE_NOT_SET_VAL                                       0
#define MDR_ADC_ADC_STATUS_OVERWRITE_SET_VAL                                           1
#define MDR_ADC_ADC_STATUS_AWOIFEN_IN_RANGE_VAL                                        0
#define MDR_ADC_ADC_STATUS_AWOIFEN_OUT_OF_RANGE_VAL                                    1
#define MDR_ADC_ADC_STATUS_EOCIF_NO_RESULT_VAL                                         0
#define MDR_ADC_ADC_STATUS_EOCIF_RESULT_READY_VAL                                      1
#define MDR_ADC_ADC_STATUS_AWOIF_IE_DISABLE_VAL                                        0
#define MDR_ADC_ADC_STATUS_AWOIF_IE_ENABLE_VAL                                         1
#define MDR_ADC_ADC_STATUS_EOCIF_IE_DISABLE_VAL                                        0
#define MDR_ADC_ADC_STATUS_EOCIF_IE_ENABLE_VAL                                         1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t OVERWRITE : 1;
        uint32_t AWOIFEN   : 1;
        uint32_t EOCIF     : 1;
        uint32_t AWOIF_IE  : 1;
        uint32_t EOCIF_IE  : 1;
        uint32_t           : 27;
    };

} MDR_ADC_ADC_STATUS_TypeDef;
// ADCx_CHSEL register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_ADC_ADC_CHSEL_CHANNEL_0_NOT_SELECTED_VAL                                   0
#define MDR_ADC_ADC_CHSEL_CHANNEL_0_SELECTED_VAL                                       1

#define MDR_ADC_ADC_CHSEL_CHANNEL_1_NOT_SELECTED_VAL                                   0
#define MDR_ADC_ADC_CHSEL_CHANNEL_1_SELECTED_VAL                                       1

#define MDR_ADC_ADC_CHSEL_CHANNEL_2_NOT_SELECTED_VAL                                   0
#define MDR_ADC_ADC_CHSEL_CHANNEL_2_SELECTED_VAL                                       1

#define MDR_ADC_ADC_CHSEL_CHANNEL_3_NOT_SELECTED_VAL                                   0
#define MDR_ADC_ADC_CHSEL_CHANNEL_3_SELECTED_VAL                                       1

#define MDR_ADC_ADC_CHSEL_CHANNEL_4_NOT_SELECTED_VAL                                   0
#define MDR_ADC_ADC_CHSEL_CHANNEL_4_SELECTED_VAL                                       1

#define MDR_ADC_ADC_CHSEL_CHANNEL_5_NOT_SELECTED_VAL                                   0
#define MDR_ADC_ADC_CHSEL_CHANNEL_5_SELECTED_VAL                                       1

#define MDR_ADC_ADC_CHSEL_CHANNEL_6_NOT_SELECTED_VAL                                   0
#define MDR_ADC_ADC_CHSEL_CHANNEL_6_SELECTED_VAL                                       1

#define MDR_ADC_ADC_CHSEL_CHANNEL_7_NOT_SELECTED_VAL                                   0
#define MDR_ADC_ADC_CHSEL_CHANNEL_7_SELECTED_VAL                                       1

#define MDR_ADC_ADC_CHSEL_CHANNEL_8_NOT_SELECTED_VAL                                   0
#define MDR_ADC_ADC_CHSEL_CHANNEL_8_SELECTED_VAL                                       1

#define MDR_ADC_ADC_CHSEL_CHANNEL_9_NOT_SELECTED_VAL                                   0
#define MDR_ADC_ADC_CHSEL_CHANNEL_9_SELECTED_VAL                                       1

#define MDR_ADC_ADC_CHSEL_CHANNEL_10_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_10_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_11_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_11_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_12_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_12_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_13_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_13_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_14_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_14_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_15_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_15_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_16_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_16_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_17_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_17_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_18_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_18_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_19_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_19_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_20_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_20_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_21_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_21_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_22_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_22_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_23_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_23_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_24_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_24_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_25_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_25_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_26_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_26_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_27_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_27_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_28_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_28_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_29_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_29_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_30_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_30_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_31_NOT_SELECTED_VAL                                  0
#define MDR_ADC_ADC_CHSEL_CHANNEL_31_SELECTED_VAL                                      1

#define MDR_ADC_ADC_CHSEL_CHANNEL_NOT_SELECTED_VAL                                     0
#define MDR_ADC_ADC_CHSEL_CHANNEL_SELECTED_VAL                                         1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CHANNEL_0  : 1;
        uint32_t CHANNEL_1  : 1;
        uint32_t CHANNEL_2  : 1;
        uint32_t CHANNEL_3  : 1;
        uint32_t CHANNEL_4  : 1;
        uint32_t CHANNEL_5  : 1;
        uint32_t CHANNEL_6  : 1;
        uint32_t CHANNEL_7  : 1;
        uint32_t CHANNEL_8  : 1;
        uint32_t CHANNEL_9  : 1;
        uint32_t CHANNEL_10 : 1;
        uint32_t CHANNEL_11 : 1;
        uint32_t CHANNEL_12 : 1;
        uint32_t CHANNEL_13 : 1;
        uint32_t CHANNEL_14 : 1;
        uint32_t CHANNEL_15 : 1;
        uint32_t CHANNEL_16 : 1;
        uint32_t CHANNEL_17 : 1;
        uint32_t CHANNEL_18 : 1;
        uint32_t CHANNEL_19 : 1;
        uint32_t CHANNEL_20 : 1;
        uint32_t CHANNEL_21 : 1;
        uint32_t CHANNEL_22 : 1;
        uint32_t CHANNEL_23 : 1;
        uint32_t CHANNEL_24 : 1;
        uint32_t CHANNEL_25 : 1;
        uint32_t CHANNEL_26 : 1;
        uint32_t CHANNEL_27 : 1;
        uint32_t CHANNEL_28 : 1;
        uint32_t CHANNEL_29 : 1;
        uint32_t CHANNEL_30 : 1;
        uint32_t CHANNEL_31 : 1;
    };

} MDR_ADC_ADC_CHSEL_TypeDef;
// ADC structure Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef struct
{
    __IO MDR_ADC_ADC1_CFG_TypeDef    ADC1_CFG;
    __IO MDR_ADC_ADC2_CFG_TypeDef    ADC2_CFG;
    __IO MDR_ADC_ADC_H_LEVEL_TypeDef ADC1_H_LEVEL;
    __IO MDR_ADC_ADC_H_LEVEL_TypeDef ADC2_H_LEVEL;
    __IO MDR_ADC_ADC_L_LEVEL_TypeDef ADC1_L_LEVEL;
    __IO MDR_ADC_ADC_L_LEVEL_TypeDef ADC2_L_LEVEL;
    __I  MDR_ADC_ADC_RESULT_TypeDef  ADC1_RESULT;
    __I  MDR_ADC_ADC_RESULT_TypeDef  ADC2_RESULT;
    __IO MDR_ADC_ADC_STATUS_TypeDef  ADC1_STATUS;
    __IO MDR_ADC_ADC_STATUS_TypeDef  ADC2_STATUS;
    __IO MDR_ADC_ADC_CHSEL_TypeDef   ADC1_CHSEL;
    __IO MDR_ADC_ADC_CHSEL_TypeDef   ADC2_CHSEL;

} MDR_ADC_TypeDefUnion;

// ADC addresses
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_ADC_UNION_BASE                                                           ( 0x40088000                                                )
#define MDR_ADC_ADC1_CFG_ADDRESS                                                      ( MDR_ADC_UNION_BASE + 0x00                                 )
#define MDR_ADC_ADC2_CFG_ADDRESS                                                      ( MDR_ADC_UNION_BASE + 0x04                                 )
#define MDR_ADC_ADC1_H_LEVEL_ADDRESS                                                  ( MDR_ADC_UNION_BASE + 0x08                                 )
#define MDR_ADC_ADC2_H_LEVEL_ADDRESS                                                  ( MDR_ADC_UNION_BASE + 0x0C                                 )
#define MDR_ADC_ADC1_L_LEVEL_ADDRESS                                                  ( MDR_ADC_UNION_BASE + 0x10                                 )
#define MDR_ADC_ADC2_L_LEVEL_ADDRESS                                                  ( MDR_ADC_UNION_BASE + 0x14                                 )
#define MDR_ADC_ADC1_RESULT_ADDRESS                                                   ( MDR_ADC_UNION_BASE + 0x18                                 )
#define MDR_ADC_ADC2_RESULT_ADDRESS                                                   ( MDR_ADC_UNION_BASE + 0x1C                                 )
#define MDR_ADC_ADC1_STATUS_ADDRESS                                                   ( MDR_ADC_UNION_BASE + 0x20                                 )
#define MDR_ADC_ADC2_STATUS_ADDRESS                                                   ( MDR_ADC_UNION_BASE + 0x24                                 )
#define MDR_ADC_ADC1_CHSEL_ADDRESS                                                    ( MDR_ADC_UNION_BASE + 0x28                                 )
#define MDR_ADC_ADC2_CHSEL_ADDRESS                                                    ( MDR_ADC_UNION_BASE + 0x2C                                 )

#define MDR_ADC_UNION                                                                ( ( MDR_ADC_TypeDefUnion * ) MDR_ADC_UNION_BASE             )

// ADC Union functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void MDR_ADC_Union_ADC1_Enable( void );
void MDR_ADC_Union_ADC1_Disable( void );
void MDR_ADC_Union_ADC2_Enable( void );
void MDR_ADC_Union_ADC2_Disable( void );

void MDR_ADC_Union_SetChannel( uint32_t channel );

void MDR_ADC_Union_ADC1_StartConversion( void );
bool MDR_ADC_Union_ADC1_IsConversionComplete( void );
uint16_t MDR_ADC_Union_ADC1_GetResult( void );

void MDR_ADC_Union_ADC1_SetSampleMode( uint32_t mode );
void MDR_ADC_Union_ADC1_SetChannelSwitching( uint32_t switching );
void MDR_ADC_Union_ADC1_SetClockDivider( uint32_t divider );
void MDR_ADC_Union_ADC1_SetReference( uint32_t reference );
void MDR_ADC_Union_ADC1_SetChannel( uint32_t channel );
void MDR_ADC_Union_ADC1_SetClockSource( uint32_t clock_source );

// ADC Milandr functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void MDR_ADC1_Enable( void );
void MDR_ADC1_Disable( void );
void MDR_ADC2_Enable( void );
void MDR_ADC2_Disable( void );

void MDR_ADC_SetChannel( uint32_t channel );

void MDR_ADC1_StartConversion( void );
bool MDR_ADC1_IsConversionComplete( void );
uint16_t MDR_ADC1_GetResult( void );

void MDR_ADC1_SetSampleMode( uint32_t mode );
void MDR_ADC1_SetChannelSwitching( uint32_t switching );
void MDR_ADC1_SetClockDivider( uint32_t divider );
void MDR_ADC1_SetReference( uint32_t reference );
void MDR_ADC1_SetChannel( uint32_t channel );
void MDR_ADC1_SetClockSource( uint32_t clock_source );

#endif