#ifndef __MILUINO_MDR_TIMER_H
#define __MILUINO_MDR_TIMER_H

#include "MDR32F9Q2I.h"
#include <stdint.h>
// CNT register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_CNT_CNT_POS                                                         0

#define MDR_TIMER_CNT_CNT_MSK                                                         ( 0xFFFF << MDR_TIMER_CNT_CNT_POS                                                        )

#define MDR_TIMER_CNT_CNT_ZERO                                                        ~( 0xFFFF << MDR_TIMER_CNT_CNT_POS                                                       )
#define MDR_TIMER_CNT_CNT_VALUE( x )                                                  ( ( x ) << MDR_TIMER_CNT_CNT_POS                                                         )
// PSG register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_PSG_PSG_POS                                                         0

#define MDR_TIMER_PSG_PSG_MSK                                                         ( 0xFFFF << MDR_TIMER_PSG_PSG_POS                                                        )

#define MDR_TIMER_PSG_PSG_ZERO                                                        ~( 0xFFFF << MDR_TIMER_PSG_PSG_POS                                                       )
#define MDR_TIMER_PSG_PSG_VALUE( x )                                                  ( ( x ) << MDR_TIMER_PSG_PSG_POS                                                         )
// ARR register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_ARR_ARR_POS                                                         0

#define MDR_TIMER_ARR_ARR_MSK                                                         ( 0xFFFF << MDR_TIMER_ARR_ARR_POS                                                        )

#define MDR_TIMER_ARR_ARR_ZERO                                                        ~( 0xFFFF << MDR_TIMER_ARR_ARR_POS                                                       )
#define MDR_TIMER_ARR_ARR_VALUE( x )                                                  ( ( x ) << MDR_TIMER_ARR_ARR_POS                                                         )
// CNTRL register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_CNTRL_EVENT_SEL_POS                                                 8
#define MDR_TIMER_CNTRL_CNT_MODE_POS                                                  6
#define MDR_TIMER_CNTRL_FDTS_POS                                                      4
#define MDR_TIMER_CNTRL_DIR_POS                                                       3
#define MDR_TIMER_CNTRL_WR_CMPL_POS                                                   2
#define MDR_TIMER_CNTRL_ARRB_EN_POS                                                   1
#define MDR_TIMER_CNTRL_CNT_EN_POS                                                    0

#define MDR_TIMER_CNTRL_EVENT_SEL_MSK                                                 ( 0x0F << MDR_TIMER_CNTRL_EVENT_SEL_POS                                                  )
#define MDR_TIMER_CNTRL_CNT_MODE_MSK                                                  ( 0x03 << MDR_TIMER_CNTRL_CNT_MODE_POS                                                   )
#define MDR_TIMER_CNTRL_FDTS_MSK                                                      ( 0x03 << MDR_TIMER_CNTRL_FDTS_POS                                                       )
#define MDR_TIMER_CNTRL_DIR_MSK                                                       ( 0x01 << MDR_TIMER_CNTRL_DIR_POS                                                        )
#define MDR_TIMER_CNTRL_WR_CMPL_MSK                                                   ( 0x01 << MDR_TIMER_CNTRL_WR_CMPL_POS                                                    )
#define MDR_TIMER_CNTRL_ARRB_EN_MSK                                                   ( 0x01 << MDR_TIMER_CNTRL_ARRB_EN_POS                                                    )
#define MDR_TIMER_CNTRL_CNT_EN_MSK                                                    ( 0x01 << MDR_TIMER_CNTRL_CNT_EN_POS                                                     )

#define MDR_TIMER_CNTRL_EVENT_SEL_INTERNAL_TIM_CLK                                    ~( 0x0F << MDR_TIMER_CNTRL_EVENT_SEL_POS                                                 )
#define MDR_TIMER_CNTRL_EVENT_SEL_CNT_EQUALS_ARR_TIMER1                               ( 0x01 << MDR_TIMER_CNTRL_EVENT_SEL_POS                                                  )
#define MDR_TIMER_CNTRL_EVENT_SEL_CNT_EQUALS_ARR_TIMER2                               ( 0x02 << MDR_TIMER_CNTRL_EVENT_SEL_POS                                                  )
#define MDR_TIMER_CNTRL_EVENT_SEL_CNT_EQUALS_ARR_TIMER3                               ( 0x03 << MDR_TIMER_CNTRL_EVENT_SEL_POS                                                  )
#define MDR_TIMER_CNTRL_EVENT_SEL_CHANNEL1_RISING_EDGE                                ( 0x04 << MDR_TIMER_CNTRL_EVENT_SEL_POS                                                  )
#define MDR_TIMER_CNTRL_EVENT_SEL_CHANNEL2_RISING_EDGE                                ( 0x05 << MDR_TIMER_CNTRL_EVENT_SEL_POS                                                  )
#define MDR_TIMER_CNTRL_EVENT_SEL_CHANNEL3_RISING_EDGE                                ( 0x06 << MDR_TIMER_CNTRL_EVENT_SEL_POS                                                  )
#define MDR_TIMER_CNTRL_EVENT_SEL_CHANNEL4_RISING_EDGE                                ( 0x07 << MDR_TIMER_CNTRL_EVENT_SEL_POS                                                  )
#define MDR_TIMER_CNTRL_EVENT_SEL_ETR_RISING_EDGE                                     ( 0x08 << MDR_TIMER_CNTRL_EVENT_SEL_POS                                                  )
#define MDR_TIMER_CNTRL_EVENT_SEL_ETR_FALLING_EDGE                                    ( 0x09 << MDR_TIMER_CNTRL_EVENT_SEL_POS                                                  )

#define MDR_TIMER_CNTRL_CNT_MODE_UP                                                   ~( 0x03 << MDR_TIMER_CNTRL_CNT_MODE_POS                                                  )
#define MDR_TIMER_CNTRL_CNT_MODE_UP_DOWN                                              ( 0x01 << MDR_TIMER_CNTRL_CNT_MODE_POS                                                   )
#define MDR_TIMER_CNTRL_CNT_MODE_DOWN                                                 ( 0x02 << MDR_TIMER_CNTRL_CNT_MODE_POS                                                   )

#define MDR_TIMER_CNTRL_FDTS_TIM_CLK                                                  ~( 0x03 << MDR_TIMER_CNTRL_FDTS_POS                                                      )
#define MDR_TIMER_CNTRL_FDTS_TIM_CLK_DIV_2                                            ( 0x01 << MDR_TIMER_CNTRL_FDTS_POS                                                       )
#define MDR_TIMER_CNTRL_FDTS_TIM_CLK_DIV_3                                            ( 0x02 << MDR_TIMER_CNTRL_FDTS_POS                                                       )
#define MDR_TIMER_CNTRL_FDTS_TIM_CLK_DIV_4                                            ( 0x03 << MDR_TIMER_CNTRL_FDTS_POS                                                       )

#define MDR_TIMER_CNTRL_DIR_UP                                                        ~( 0x01 << MDR_TIMER_CNTRL_DIR_POS                                                       )
#define MDR_TIMER_CNTRL_DIR_DOWN                                                      ( 0x01 << MDR_TIMER_CNTRL_DIR_POS                                                        )

#define MDR_TIMER_CNTRL_WR_CMPL_READY                                                 ~( 0x01 << MDR_TIMER_CNTRL_WR_CMPL_POS                                                   )
#define MDR_TIMER_CNTRL_WR_CMPL_BUSY                                                  ( 0x01 << MDR_TIMER_CNTRL_WR_CMPL_POS                                                    )

#define MDR_TIMER_CNTRL_ARRB_EN_IMMEDIATE_UPDATE                                      ~( 0x01 << MDR_TIMER_CNTRL_ARRB_EN_POS                                                   )
#define MDR_TIMER_CNTRL_ARRB_EN_UPDATE_WHEN_CNT_EQUALS_ARR                            ( 0x01 << MDR_TIMER_CNTRL_ARRB_EN_POS                                                    )

#define MDR_TIMER_CNTRL_CNT_EN_DISABLE                                                ~( 0x01 << MDR_TIMER_CNTRL_CNT_EN_POS                                                    )
#define MDR_TIMER_CNTRL_CNT_EN_ENABLE                                                 ( 0x01 << MDR_TIMER_CNTRL_CNT_EN_POS                                                     )
// CCRy register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_CCR_CCR_POS                                                         0

#define MDR_TIMER_CCR_CCR_MSK                                                         ( 0xFFFF << MDR_TIMER_CCR_CCR_POS                                                        )

#define MDR_TIMER_CCR_CCR_ZERO                                                        ~( 0xFFFF << MDR_TIMER_CCR_CCR_POS                                                       )
#define MDR_TIMER_CCR_CCR_VALUE( x )                                                  ( ( x ) << MDR_TIMER_CCR_CCR_POS                                                         )
// CHy_CNTRL register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_CH_CNTRL_WR_CMPL1_POS                                               16
#define MDR_TIMER_CH_CNTRL_CAP_NPWM_POS                                               15
#define MDR_TIMER_CH_CNTRL_WR_CMPL_POS                                                14
#define MDR_TIMER_CH_CNTRL_ETREN_POS                                                  13
#define MDR_TIMER_CH_CNTRL_BRKEN_POS                                                  12
#define MDR_TIMER_CH_CNTRL_OCCM_POS                                                   9
#define MDR_TIMER_CH_CNTRL_OCCE_POS                                                   8
#define MDR_TIMER_CH_CNTRL_CHPSC_POS                                                  6
#define MDR_TIMER_CH_CNTRL_CHSEL_POS                                                  4
#define MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                 0

#define MDR_TIMER_CH_CNTRL_WR_CMPL1_MSK                                               ( 0x01 << MDR_TIMER_CH_CNTRL_WR_CMPL1_POS                                                )
#define MDR_TIMER_CH_CNTRL_CAP_NPWM_MSK                                               ( 0x01 << MDR_TIMER_CH_CNTRL_CAP_NPWM_POS                                                )
#define MDR_TIMER_CH_CNTRL_WR_CMPL_MSK                                                ( 0x01 << MDR_TIMER_CH_CNTRL_WR_CMPL_POS                                                 )
#define MDR_TIMER_CH_CNTRL_ETREN_MSK                                                  ( 0x01 << MDR_TIMER_CH_CNTRL_ETREN_POS                                                   )
#define MDR_TIMER_CH_CNTRL_BRKEN_MSK                                                  ( 0x01 << MDR_TIMER_CH_CNTRL_BRKEN_POS                                                   )
#define MDR_TIMER_CH_CNTRL_OCCM_MSK                                                   ( 0x07 << MDR_TIMER_CH_CNTRL_OCCM_POS                                                    )
#define MDR_TIMER_CH_CNTRL_OCCE_MSK                                                   ( 0x01 << MDR_TIMER_CH_CNTRL_OCCE_POS                                                    )
#define MDR_TIMER_CH_CNTRL_CHPSC_MSK                                                  ( 0x03 << MDR_TIMER_CH_CNTRL_CHPSC_POS                                                   )
#define MDR_TIMER_CH_CNTRL_CHSEL_MSK                                                  ( 0x03 << MDR_TIMER_CH_CNTRL_CHSEL_POS                                                   )
#define MDR_TIMER_CH_CNTRL_CHFLTR_MSK                                                 ( 0x0F << MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                  )

#define MDR_TIMER_CH_CNTRL_WR_CMPL1_READY                                             ~( 0x01 << MDR_TIMER_CH_CNTRL_WR_CMPL1_POS                                               )
#define MDR_TIMER_CH_CNTRL_WR_CMPL1_BUSY                                              ( 0x01 << MDR_TIMER_CH_CNTRL_WR_CMPL1_POS                                                )

#define MDR_TIMER_CH_CNTRL_CAP_NPWM_PWM                                               ~( 0x01 << MDR_TIMER_CH_CNTRL_CAP_NPWM_POS                                               )
#define MDR_TIMER_CH_CNTRL_CAP_NPWM_CAPTURE                                           ( 0x01 << MDR_TIMER_CH_CNTRL_CAP_NPWM_POS                                                )

#define MDR_TIMER_CH_CNTRL_WR_CMPL_READY                                              ~( 0x01 << MDR_TIMER_CH_CNTRL_WR_CMPL_POS                                                )
#define MDR_TIMER_CH_CNTRL_WR_CMPL_BUSY                                               ( 0x01 << MDR_TIMER_CH_CNTRL_WR_CMPL_POS                                                 )

#define MDR_TIMER_CH_CNTRL_ETREN_DISABLE                                              ~( 0x01 << MDR_TIMER_CH_CNTRL_ETREN_POS                                                  )
#define MDR_TIMER_CH_CNTRL_ETREN_ENABLE                                               ( 0x01 << MDR_TIMER_CH_CNTRL_ETREN_POS                                                   )

#define MDR_TIMER_CH_CNTRL_BRKEN_DISABLE                                              ~( 0x01 << MDR_TIMER_CH_CNTRL_BRKEN_POS                                                  )
#define MDR_TIMER_CH_CNTRL_BRKEN_ENABLE                                               ( 0x01 << MDR_TIMER_CH_CNTRL_BRKEN_POS                                                   )

#define MDR_TIMER_CH_CNTRL_OCCM_ALWAYS_ZERO                                           ~( 0x07 << MDR_TIMER_CH_CNTRL_OCCM_POS                                                   )
#define MDR_TIMER_CH_CNTRL_OCCM_ONE_WHEN_CNT_EQUALS_CCR                               ( 0x01 << MDR_TIMER_CH_CNTRL_OCCM_POS                                                    )
#define MDR_TIMER_CH_CNTRL_OCCM_ZERO_WHEN_CNT_EQUALS_CCR                              ( 0x02 << MDR_TIMER_CH_CNTRL_OCCM_POS                                                    )
#define MDR_TIMER_CH_CNTRL_OCCM_TOGGLE_WHEN_CNT_EQUALS_CCR                            ( 0x03 << MDR_TIMER_CH_CNTRL_OCCM_POS                                                    )
#define MDR_TIMER_CH_CNTRL_OCCM_ALWAYS_ZERO_2                                         ( 0x04 << MDR_TIMER_CH_CNTRL_OCCM_POS                                                    )
#define MDR_TIMER_CH_CNTRL_OCCM_ALWAYS_ONE                                            ( 0x05 << MDR_TIMER_CH_CNTRL_OCCM_POS                                                    )
#define MDR_TIMER_CH_CNTRL_OCCM_PWM_MODE_1                                            ( 0x06 << MDR_TIMER_CH_CNTRL_OCCM_POS                                                    )
#define MDR_TIMER_CH_CNTRL_OCCM_PWM_MODE_2                                            ( 0x07 << MDR_TIMER_CH_CNTRL_OCCM_POS                                                    )

#define MDR_TIMER_CH_CNTRL_OCCE_DISABLE                                               ~( 0x01 << MDR_TIMER_CH_CNTRL_OCCE_POS                                                   )
#define MDR_TIMER_CH_CNTRL_OCCE_ENABLE                                                ( 0x01 << MDR_TIMER_CH_CNTRL_OCCE_POS                                                    )

#define MDR_TIMER_CH_CNTRL_CHPSC_DIV_1                                                ~( 0x03 << MDR_TIMER_CH_CNTRL_CHPSC_POS                                                  )
#define MDR_TIMER_CH_CNTRL_CHPSC_DIV_2                                                ( 0x01 << MDR_TIMER_CH_CNTRL_CHPSC_POS                                                   )
#define MDR_TIMER_CH_CNTRL_CHPSC_DIV_4                                                ( 0x02 << MDR_TIMER_CH_CNTRL_CHPSC_POS                                                   )
#define MDR_TIMER_CH_CNTRL_CHPSC_DIV_8                                                ( 0x03 << MDR_TIMER_CH_CNTRL_CHPSC_POS                                                   )

#define MDR_TIMER_CH_CNTRL_CHSEL_OWN_RISING_EDGE                                      ~( 0x03 << MDR_TIMER_CH_CNTRL_CHSEL_POS                                                  )
#define MDR_TIMER_CH_CNTRL_CHSEL_OWN_FALLING_EDGE                                     ( 0x01 << MDR_TIMER_CH_CNTRL_CHSEL_POS                                                   )
#define MDR_TIMER_CH_CNTRL_CHSEL_OTHER_CHANNEL_FALLING_EDGE                           ( 0x02 << MDR_TIMER_CH_CNTRL_CHSEL_POS                                                   )
#define MDR_TIMER_CH_CNTRL_CHSEL_OTHER_CHANNEL_RISING_EDGE                            ( 0x03 << MDR_TIMER_CH_CNTRL_CHSEL_POS                                                   )

#define MDR_TIMER_CH_CNTRL_CHFLTR_NO_FILTER                                           ~( 0x0F << MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                 )
#define MDR_TIMER_CH_CNTRL_CHFLTR_TIM_CLK_N_2                                         ( 0x01 << MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                  )
#define MDR_TIMER_CH_CNTRL_CHFLTR_TIM_CLK_N_4                                         ( 0x02 << MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                  )
#define MDR_TIMER_CH_CNTRL_CHFLTR_TIM_CLK_N_8                                         ( 0x03 << MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                  )
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_2_N_6                                      ( 0x04 << MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                  )
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_2_N_8                                      ( 0x05 << MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                  )
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_4_N_6                                      ( 0x06 << MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                  )
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_4_N_8                                      ( 0x07 << MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                  )
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_8_N_6                                      ( 0x08 << MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                  )
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_8_N_8                                      ( 0x09 << MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                  )
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_16_N_5                                     ( 0x0A << MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                  )
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_16_N_6                                     ( 0x0B << MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                  )
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_16_N_8                                     ( 0x0C << MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                  )
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_32_N_5                                     ( 0x0D << MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                  )
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_32_N_6                                     ( 0x0E << MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                  )
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_32_N_8                                     ( 0x0F << MDR_TIMER_CH_CNTRL_CHFLTR_POS                                                  )
// CHy_CNTRL1 register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_CH_CNTRL1_NINV_POS                                                  12
#define MDR_TIMER_CH_CNTRL1_NSELO_POS                                                 10
#define MDR_TIMER_CH_CNTRL1_NSELOE_POS                                                8
#define MDR_TIMER_CH_CNTRL1_INV_POS                                                   4
#define MDR_TIMER_CH_CNTRL1_SELO_POS                                                  2
#define MDR_TIMER_CH_CNTRL1_SELOE_POS                                                 0

#define MDR_TIMER_CH_CNTRL1_NINV_MSK                                                  ( 0x01 << MDR_TIMER_CH_CNTRL1_NINV_POS                                                   )
#define MDR_TIMER_CH_CNTRL1_NSELO_MSK                                                 ( 0x03 << MDR_TIMER_CH_CNTRL1_NSELO_POS                                                  )
#define MDR_TIMER_CH_CNTRL1_NSELOE_MSK                                                ( 0x03 << MDR_TIMER_CH_CNTRL1_NSELOE_POS                                                 )
#define MDR_TIMER_CH_CNTRL1_INV_MSK                                                   ( 0x01 << MDR_TIMER_CH_CNTRL1_INV_POS                                                    )
#define MDR_TIMER_CH_CNTRL1_SELO_MSK                                                  ( 0x03 << MDR_TIMER_CH_CNTRL1_SELO_POS                                                   )
#define MDR_TIMER_CH_CNTRL1_SELOE_MSK                                                 ( 0x03 << MDR_TIMER_CH_CNTRL1_SELOE_POS                                                  )

#define MDR_TIMER_CH_CNTRL1_NINV_NOT_INVERTED                                         ~( 0x01 << MDR_TIMER_CH_CNTRL1_NINV_POS                                                  )
#define MDR_TIMER_CH_CNTRL1_NINV_INVERTED                                             ( 0x01 << MDR_TIMER_CH_CNTRL1_NINV_POS                                                   )

#define MDR_TIMER_CH_CNTRL1_NSELO_ZERO                                                ~( 0x03 << MDR_TIMER_CH_CNTRL1_NSELO_POS                                                 )
#define MDR_TIMER_CH_CNTRL1_NSELO_ONE                                                 ( 0x01 << MDR_TIMER_CH_CNTRL1_NSELO_POS                                                  )
#define MDR_TIMER_CH_CNTRL1_NSELO_REF                                                 ( 0x02 << MDR_TIMER_CH_CNTRL1_NSELO_POS                                                  )
#define MDR_TIMER_CH_CNTRL1_NSELO_DTG                                                 ( 0x03 << MDR_TIMER_CH_CNTRL1_NSELO_POS                                                  )

#define MDR_TIMER_CH_CNTRL1_NSELOE_ZERO                                               ~( 0x03 << MDR_TIMER_CH_CNTRL1_NSELOE_POS                                                )
#define MDR_TIMER_CH_CNTRL1_NSELOE_ONE                                                ( 0x01 << MDR_TIMER_CH_CNTRL1_NSELOE_POS                                                 )
#define MDR_TIMER_CH_CNTRL1_NSELOE_REF                                                ( 0x02 << MDR_TIMER_CH_CNTRL1_NSELOE_POS                                                 )
#define MDR_TIMER_CH_CNTRL1_NSELOE_DTG                                                ( 0x03 << MDR_TIMER_CH_CNTRL1_NSELOE_POS                                                 )

#define MDR_TIMER_CH_CNTRL1_INV_NOT_INVERTED                                          ~( 0x01 << MDR_TIMER_CH_CNTRL1_INV_POS                                                   )
#define MDR_TIMER_CH_CNTRL1_INV_INVERTED                                              ( 0x01 << MDR_TIMER_CH_CNTRL1_INV_POS                                                    )

#define MDR_TIMER_CH_CNTRL1_SELO_ZERO                                                 ~( 0x03 << MDR_TIMER_CH_CNTRL1_SELO_POS                                                  )
#define MDR_TIMER_CH_CNTRL1_SELO_ONE                                                  ( 0x01 << MDR_TIMER_CH_CNTRL1_SELO_POS                                                   )
#define MDR_TIMER_CH_CNTRL1_SELO_REF                                                  ( 0x02 << MDR_TIMER_CH_CNTRL1_SELO_POS                                                   )
#define MDR_TIMER_CH_CNTRL1_SELO_DTG                                                  ( 0x03 << MDR_TIMER_CH_CNTRL1_SELO_POS                                                   )

#define MDR_TIMER_CH_CNTRL1_SELOE_ZERO                                                ~( 0x03 << MDR_TIMER_CH_CNTRL1_SELOE_POS                                                 )
#define MDR_TIMER_CH_CNTRL1_SELOE_ONE                                                 ( 0x01 << MDR_TIMER_CH_CNTRL1_SELOE_POS                                                  )
#define MDR_TIMER_CH_CNTRL1_SELOE_REF                                                 ( 0x02 << MDR_TIMER_CH_CNTRL1_SELOE_POS                                                  )
#define MDR_TIMER_CH_CNTRL1_SELOE_DTG                                                 ( 0x03 << MDR_TIMER_CH_CNTRL1_SELOE_POS                                                  )
// CHy_DTG register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_CH_DTG_DTG_POS                                                      8
#define MDR_TIMER_CH_DTG_EDTS_POS                                                     4
#define MDR_TIMER_CH_DTG_DTGX_POS                                                     0

#define MDR_TIMER_CH_DTG_DTG_MSK                                                      ( 0xFF << MDR_TIMER_CH_DTG_DTG_POS                                                       )
#define MDR_TIMER_CH_DTG_EDTS_MSK                                                     ( 0x01 << MDR_TIMER_CH_DTG_EDTS_POS                                                      )
#define MDR_TIMER_CH_DTG_DTGX_MSK                                                     ( 0x0F << MDR_TIMER_CH_DTG_DTGX_POS                                                      )

#define MDR_TIMER_CH_DTG_DTG_ZERO                                                     ~( 0xFF << MDR_TIMER_CH_DTG_DTG_POS                                                      )
#define MDR_TIMER_CH_DTG_DTG_VALUE( x )                                               ( ( x ) << MDR_TIMER_CH_DTG_DTG_POS                                                      )

#define MDR_TIMER_CH_DTG_EDTS_TIM_CLK                                                 ~( 0x01 << MDR_TIMER_CH_DTG_EDTS_POS                                                     )
#define MDR_TIMER_CH_DTG_EDTS_FDTS                                                    ( 0x01 << MDR_TIMER_CH_DTG_EDTS_POS                                                      )

#define MDR_TIMER_CH_DTG_DTGX_ZERO                                                    ~( 0x0F << MDR_TIMER_CH_DTG_DTGX_POS                                                     )
#define MDR_TIMER_CH_DTG_DTGX_VALUE( x )                                              ( ( x ) << MDR_TIMER_CH_DTG_DTGX_POS                                                     )
// BRKETR_CNTRL register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                         4
#define MDR_TIMER_BRKETR_CNTRL_ETR_PSC_POS                                            2
#define MDR_TIMER_BRKETR_CNTRL_ETR_INV_POS                                            1
#define MDR_TIMER_BRKETR_CNTRL_BRK_INV_POS                                            0

#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_MSK                                         ( 0x0F << MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                          )
#define MDR_TIMER_BRKETR_CNTRL_ETR_PSC_MSK                                            ( 0x03 << MDR_TIMER_BRKETR_CNTRL_ETR_PSC_POS                                             )
#define MDR_TIMER_BRKETR_CNTRL_ETR_INV_MSK                                            ( 0x01 << MDR_TIMER_BRKETR_CNTRL_ETR_INV_POS                                             )
#define MDR_TIMER_BRKETR_CNTRL_BRK_INV_MSK                                            ( 0x01 << MDR_TIMER_BRKETR_CNTRL_BRK_INV_POS                                             )

#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_NO_FILTER                                   ~( 0x0F << MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                         )
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_TIM_CLK_N_2                                 ( 0x01 << MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                          )
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_TIM_CLK_N_4                                 ( 0x02 << MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                          )
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_TIM_CLK_N_8                                 ( 0x03 << MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                          )
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_2_N_6                              ( 0x04 << MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                          )
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_2_N_8                              ( 0x05 << MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                          )
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_4_N_6                              ( 0x06 << MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                          )
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_4_N_8                              ( 0x07 << MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                          )
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_8_N_6                              ( 0x08 << MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                          )
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_8_N_8                              ( 0x09 << MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                          )
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_16_N_5                             ( 0x0A << MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                          )
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_16_N_6                             ( 0x0B << MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                          )
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_16_N_8                             ( 0x0C << MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                          )
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_32_N_5                             ( 0x0D << MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                          )
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_32_N_6                             ( 0x0E << MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                          )
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_32_N_8                             ( 0x0F << MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_POS                                          )

#define MDR_TIMER_BRKETR_CNTRL_ETR_PSC_DIV_1                                          ~( 0x03 << MDR_TIMER_BRKETR_CNTRL_ETR_PSC_POS                                            )
#define MDR_TIMER_BRKETR_CNTRL_ETR_PSC_DIV_2                                          ( 0x01 << MDR_TIMER_BRKETR_CNTRL_ETR_PSC_POS                                             )
#define MDR_TIMER_BRKETR_CNTRL_ETR_PSC_DIV_4                                          ( 0x02 << MDR_TIMER_BRKETR_CNTRL_ETR_PSC_POS                                             )
#define MDR_TIMER_BRKETR_CNTRL_ETR_PSC_DIV_8                                          ( 0x03 << MDR_TIMER_BRKETR_CNTRL_ETR_PSC_POS                                             )

#define MDR_TIMER_BRKETR_CNTRL_ETR_INV_NOT_INVERTED                                   ~( 0x01 << MDR_TIMER_BRKETR_CNTRL_ETR_INV_POS                                            )
#define MDR_TIMER_BRKETR_CNTRL_ETR_INV_INVERTED                                       ( 0x01 << MDR_TIMER_BRKETR_CNTRL_ETR_INV_POS                                             )

#define MDR_TIMER_BRKETR_CNTRL_BRK_INV_NOT_INVERTED                                   ~( 0x01 << MDR_TIMER_BRKETR_CNTRL_BRK_INV_POS                                            )
#define MDR_TIMER_BRKETR_CNTRL_BRK_INV_INVERTED                                       ( 0x01 << MDR_TIMER_BRKETR_CNTRL_BRK_INV_POS                                             )
// STATUS register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_STATUS_CCR_CAP1_EVENT_POS                                           13
#define MDR_TIMER_STATUS_CCR_REF_EVENT_POS                                            9
#define MDR_TIMER_STATUS_CCR_CAP_EVENT_POS                                            5
#define MDR_TIMER_STATUS_BRK_EVENT_POS                                                4
#define MDR_TIMER_STATUS_ETR_FE_EVENT_POS                                             3
#define MDR_TIMER_STATUS_ETR_RE_EVENT_POS                                             2
#define MDR_TIMER_STATUS_CNT_ARR_EVENT_POS                                            1
#define MDR_TIMER_STATUS_CNT_ZERO_EVENT_POS                                           0

#define MDR_TIMER_STATUS_CCR_CAP1_EVENT_MSK                                           ( 0x0F << MDR_TIMER_STATUS_CCR_CAP1_EVENT_POS                                            )
#define MDR_TIMER_STATUS_CCR_REF_EVENT_MSK                                            ( 0x0F << MDR_TIMER_STATUS_CCR_REF_EVENT_POS                                             )
#define MDR_TIMER_STATUS_CCR_CAP_EVENT_MSK                                            ( 0x0F << MDR_TIMER_STATUS_CCR_CAP_EVENT_POS                                             )
#define MDR_TIMER_STATUS_BRK_EVENT_MSK                                                ( 0x01 << MDR_TIMER_STATUS_BRK_EVENT_POS                                                 )
#define MDR_TIMER_STATUS_ETR_FE_EVENT_MSK                                             ( 0x01 << MDR_TIMER_STATUS_ETR_FE_EVENT_POS                                              )
#define MDR_TIMER_STATUS_ETR_RE_EVENT_MSK                                             ( 0x01 << MDR_TIMER_STATUS_ETR_RE_EVENT_POS                                              )
#define MDR_TIMER_STATUS_CNT_ARR_EVENT_MSK                                            ( 0x01 << MDR_TIMER_STATUS_CNT_ARR_EVENT_POS                                             )
#define MDR_TIMER_STATUS_CNT_ZERO_EVENT_MSK                                           ( 0x01 << MDR_TIMER_STATUS_CNT_ZERO_EVENT_POS                                            )

#define MDR_TIMER_STATUS_CCR_CAP1_EVENT_NO_EVENT                                      ~( 0x0F << MDR_TIMER_STATUS_CCR_CAP1_EVENT_POS                                           )

#define MDR_TIMER_STATUS_CCR_REF_EVENT_NO_EVENT                                       ~( 0x0F << MDR_TIMER_STATUS_CCR_REF_EVENT_POS                                            )

#define MDR_TIMER_STATUS_CCR_CAP_EVENT_NO_EVENT                                       ~( 0x0F << MDR_TIMER_STATUS_CCR_CAP_EVENT_POS                                            )

#define MDR_TIMER_STATUS_BRK_EVENT_NO_EVENT                                           ~( 0x01 << MDR_TIMER_STATUS_BRK_EVENT_POS                                                )
#define MDR_TIMER_STATUS_BRK_EVENT_EVENT                                              ( 0x01 << MDR_TIMER_STATUS_BRK_EVENT_POS                                                 )

#define MDR_TIMER_STATUS_ETR_FE_EVENT_NO_EVENT                                        ~( 0x01 << MDR_TIMER_STATUS_ETR_FE_EVENT_POS                                             )
#define MDR_TIMER_STATUS_ETR_FE_EVENT_EVENT                                           ( 0x01 << MDR_TIMER_STATUS_ETR_FE_EVENT_POS                                              )

#define MDR_TIMER_STATUS_ETR_RE_EVENT_NO_EVENT                                        ~( 0x01 << MDR_TIMER_STATUS_ETR_RE_EVENT_POS                                             )
#define MDR_TIMER_STATUS_ETR_RE_EVENT_EVENT                                           ( 0x01 << MDR_TIMER_STATUS_ETR_RE_EVENT_POS                                              )

#define MDR_TIMER_STATUS_CNT_ARR_EVENT_NO_EVENT                                       ~( 0x01 << MDR_TIMER_STATUS_CNT_ARR_EVENT_POS                                            )
#define MDR_TIMER_STATUS_CNT_ARR_EVENT_EVENT                                          ( 0x01 << MDR_TIMER_STATUS_CNT_ARR_EVENT_POS                                             )

#define MDR_TIMER_STATUS_CNT_ZERO_EVENT_NO_EVENT                                      ~( 0x01 << MDR_TIMER_STATUS_CNT_ZERO_EVENT_POS                                           )
#define MDR_TIMER_STATUS_CNT_ZERO_EVENT_EVENT                                         ( 0x01 << MDR_TIMER_STATUS_CNT_ZERO_EVENT_POS                                            )

#define MDR_TIMER_STATUS_CCR_CAP1_EVENT_CHANNEL_POS( x )                              ( MDR_TIMER_STATUS_CCR_CAP1_EVENT_POS + ( ( x ) - 1 )                                    )
#define MDR_TIMER_STATUS_CCR_CAP1_EVENT_CHANNEL_MSK( x )                              ( 0x01 << MDR_TIMER_STATUS_CCR_CAP1_EVENT_CHANNEL_POS( x )                               )
#define MDR_TIMER_STATUS_CCR_CAP1_EVENT_CHANNEL_NO_EVENT( x )                         ~( 0x01 << MDR_TIMER_STATUS_CCR_CAP1_EVENT_CHANNEL_POS( x )                              )
#define MDR_TIMER_STATUS_CCR_CAP1_EVENT_CHANNEL_EVENT( x )                            ( 0x01 << MDR_TIMER_STATUS_CCR_CAP1_EVENT_CHANNEL_POS( x )                               )

#define MDR_TIMER_STATUS_CCR_REF_EVENT_CHANNEL_POS( x )                               ( MDR_TIMER_STATUS_CCR_REF_EVENT_POS + ( ( x ) - 1 )                                     )
#define MDR_TIMER_STATUS_CCR_REF_EVENT_CHANNEL_MSK( x )                               ( 0x01 << MDR_TIMER_STATUS_CCR_REF_EVENT_CHANNEL_POS( x )                                )
#define MDR_TIMER_STATUS_CCR_REF_EVENT_CHANNEL_NO_EVENT( x )                          ~( 0x01 << MDR_TIMER_STATUS_CCR_REF_EVENT_CHANNEL_POS( x )                               )
#define MDR_TIMER_STATUS_CCR_REF_EVENT_CHANNEL_EVENT( x )                             ( 0x01 << MDR_TIMER_STATUS_CCR_REF_EVENT_CHANNEL_POS( x )                                )

#define MDR_TIMER_STATUS_CCR_CAP_EVENT_CHANNEL_POS( x )                               ( MDR_TIMER_STATUS_CCR_CAP_EVENT_POS + ( ( x ) - 1 )                                     )
#define MDR_TIMER_STATUS_CCR_CAP_EVENT_CHANNEL_MSK( x )                               ( 0x01 << MDR_TIMER_STATUS_CCR_CAP_EVENT_CHANNEL_POS( x )                                )
#define MDR_TIMER_STATUS_CCR_CAP_EVENT_CHANNEL_NO_EVENT( x )                          ~( 0x01 << MDR_TIMER_STATUS_CCR_CAP_EVENT_CHANNEL_POS( x )                               )
#define MDR_TIMER_STATUS_CCR_CAP_EVENT_CHANNEL_EVENT( x )                             ( 0x01 << MDR_TIMER_STATUS_CCR_CAP_EVENT_CHANNEL_POS( x )                                )
// IE register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_IE_CCR_CAP1_EVENT_IE_POS                                            13
#define MDR_TIMER_IE_CCR_REF_EVENT_IE_POS                                             9
#define MDR_TIMER_IE_CCR_CAP_EVENT_IE_POS                                             5
#define MDR_TIMER_IE_BRK_EVENT_IE_POS                                                 4
#define MDR_TIMER_IE_ETR_FE_EVENT_IE_POS                                              3
#define MDR_TIMER_IE_ETR_RE_EVENT_IE_POS                                              2
#define MDR_TIMER_IE_CNT_ARR_EVENT_IE_POS                                             1
#define MDR_TIMER_IE_CNT_ZERO_EVENT_IE_POS                                            0

#define MDR_TIMER_IE_CCR_CAP1_EVENT_IE_MSK                                            ( 0x0F << MDR_TIMER_IE_CCR_CAP1_EVENT_IE_POS                                             )
#define MDR_TIMER_IE_CCR_REF_EVENT_IE_MSK                                             ( 0x0F << MDR_TIMER_IE_CCR_REF_EVENT_IE_POS                                              )
#define MDR_TIMER_IE_CCR_CAP_EVENT_IE_MSK                                             ( 0x0F << MDR_TIMER_IE_CCR_CAP_EVENT_IE_POS                                              )
#define MDR_TIMER_IE_BRK_EVENT_IE_MSK                                                 ( 0x01 << MDR_TIMER_IE_BRK_EVENT_IE_POS                                                  )
#define MDR_TIMER_IE_ETR_FE_EVENT_IE_MSK                                              ( 0x01 << MDR_TIMER_IE_ETR_FE_EVENT_IE_POS                                               )
#define MDR_TIMER_IE_ETR_RE_EVENT_IE_MSK                                              ( 0x01 << MDR_TIMER_IE_ETR_RE_EVENT_IE_POS                                               )
#define MDR_TIMER_IE_CNT_ARR_EVENT_IE_MSK                                             ( 0x01 << MDR_TIMER_IE_CNT_ARR_EVENT_IE_POS                                              )
#define MDR_TIMER_IE_CNT_ZERO_EVENT_IE_MSK                                            ( 0x01 << MDR_TIMER_IE_CNT_ZERO_EVENT_IE_POS                                             )

#define MDR_TIMER_IE_CCR_CAP1_EVENT_IE_DISABLE                                        ~( 0x0F << MDR_TIMER_IE_CCR_CAP1_EVENT_IE_POS                                            )

#define MDR_TIMER_IE_CCR_REF_EVENT_IE_DISABLE                                         ~( 0x0F << MDR_TIMER_IE_CCR_REF_EVENT_IE_POS                                             )

#define MDR_TIMER_IE_CCR_CAP_EVENT_IE_DISABLE                                         ~( 0x0F << MDR_TIMER_IE_CCR_CAP_EVENT_IE_POS                                             )

#define MDR_TIMER_IE_BRK_EVENT_IE_DISABLE                                             ~( 0x01 << MDR_TIMER_IE_BRK_EVENT_IE_POS                                                 )
#define MDR_TIMER_IE_BRK_EVENT_IE_ENABLE                                              ( 0x01 << MDR_TIMER_IE_BRK_EVENT_IE_POS                                                  )

#define MDR_TIMER_IE_ETR_FE_EVENT_IE_DISABLE                                          ~( 0x01 << MDR_TIMER_IE_ETR_FE_EVENT_IE_POS                                              )
#define MDR_TIMER_IE_ETR_FE_EVENT_IE_ENABLE                                           ( 0x01 << MDR_TIMER_IE_ETR_FE_EVENT_IE_POS                                               )

#define MDR_TIMER_IE_ETR_RE_EVENT_IE_DISABLE                                          ~( 0x01 << MDR_TIMER_IE_ETR_RE_EVENT_IE_POS                                              )
#define MDR_TIMER_IE_ETR_RE_EVENT_IE_ENABLE                                           ( 0x01 << MDR_TIMER_IE_ETR_RE_EVENT_IE_POS                                               )

#define MDR_TIMER_IE_CNT_ARR_EVENT_IE_DISABLE                                         ~( 0x01 << MDR_TIMER_IE_CNT_ARR_EVENT_IE_POS                                             )
#define MDR_TIMER_IE_CNT_ARR_EVENT_IE_ENABLE                                          ( 0x01 << MDR_TIMER_IE_CNT_ARR_EVENT_IE_POS                                              )

#define MDR_TIMER_IE_CNT_ZERO_EVENT_IE_DISABLE                                        ~( 0x01 << MDR_TIMER_IE_CNT_ZERO_EVENT_IE_POS                                            )
#define MDR_TIMER_IE_CNT_ZERO_EVENT_IE_ENABLE                                         ( 0x01 << MDR_TIMER_IE_CNT_ZERO_EVENT_IE_POS                                             )

#define MDR_TIMER_IE_CCR_CAP1_EVENT_IE_CHANNEL_POS( x )                               ( MDR_TIMER_IE_CCR_CAP1_EVENT_IE_POS + ( ( x ) - 1 )                                     )
#define MDR_TIMER_IE_CCR_CAP1_EVENT_IE_CHANNEL_MSK( x )                               ( 0x01 << MDR_TIMER_IE_CCR_CAP1_EVENT_IE_CHANNEL_POS( x )                                )
#define MDR_TIMER_IE_CCR_CAP1_EVENT_IE_CHANNEL_DISABLE( x )                           ~( 0x01 << MDR_TIMER_IE_CCR_CAP1_EVENT_IE_CHANNEL_POS( x )                               )
#define MDR_TIMER_IE_CCR_CAP1_EVENT_IE_CHANNEL_ENABLE( x )                            ( 0x01 << MDR_TIMER_IE_CCR_CAP1_EVENT_IE_CHANNEL_POS( x )                                )

#define MDR_TIMER_IE_CCR_REF_EVENT_IE_CHANNEL_POS( x )                                ( MDR_TIMER_IE_CCR_REF_EVENT_IE_POS + ( ( x ) - 1 )                                      )
#define MDR_TIMER_IE_CCR_REF_EVENT_IE_CHANNEL_MSK( x )                                ( 0x01 << MDR_TIMER_IE_CCR_REF_EVENT_IE_CHANNEL_POS( x )                                 )
#define MDR_TIMER_IE_CCR_REF_EVENT_IE_CHANNEL_DISABLE( x )                            ~( 0x01 << MDR_TIMER_IE_CCR_REF_EVENT_IE_CHANNEL_POS( x )                                )
#define MDR_TIMER_IE_CCR_REF_EVENT_IE_CHANNEL_ENABLE( x )                             ( 0x01 << MDR_TIMER_IE_CCR_REF_EVENT_IE_CHANNEL_POS( x )                                 )

#define MDR_TIMER_IE_CCR_CAP_EVENT_IE_CHANNEL_POS( x )                                ( MDR_TIMER_IE_CCR_CAP_EVENT_IE_POS + ( ( x ) - 1 )                                      )
#define MDR_TIMER_IE_CCR_CAP_EVENT_IE_CHANNEL_MSK( x )                                ( 0x01 << MDR_TIMER_IE_CCR_CAP_EVENT_IE_CHANNEL_POS( x )                                 )
#define MDR_TIMER_IE_CCR_CAP_EVENT_IE_CHANNEL_DISABLE( x )                            ~( 0x01 << MDR_TIMER_IE_CCR_CAP_EVENT_IE_CHANNEL_POS( x )                                )
#define MDR_TIMER_IE_CCR_CAP_EVENT_IE_CHANNEL_ENABLE( x )                             ( 0x01 << MDR_TIMER_IE_CCR_CAP_EVENT_IE_CHANNEL_POS( x )                                 )
// DMA_RE register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_DMA_RE_CCR_CAP1_EVENT_RE_POS                                        13
#define MDR_TIMER_DMA_RE_CCR_REF_EVENT_RE_POS                                         9
#define MDR_TIMER_DMA_RE_CCR_CAP_EVENT_RE_POS                                         5
#define MDR_TIMER_DMA_RE_BRK_EVENT_RE_POS                                             4
#define MDR_TIMER_DMA_RE_ETR_FE_EVENT_RE_POS                                          3
#define MDR_TIMER_DMA_RE_ETR_RE_EVENT_RE_POS                                          2
#define MDR_TIMER_DMA_RE_CNT_ARR_EVENT_RE_POS                                         1
#define MDR_TIMER_DMA_RE_CNT_ZERO_EVENT_RE_POS                                        0

#define MDR_TIMER_DMA_RE_CCR_CAP1_EVENT_RE_MSK                                        ( 0x0F << MDR_TIMER_DMA_RE_CCR_CAP1_EVENT_RE_POS                                         )
#define MDR_TIMER_DMA_RE_CCR_REF_EVENT_RE_MSK                                         ( 0x0F << MDR_TIMER_DMA_RE_CCR_REF_EVENT_RE_POS                                          )
#define MDR_TIMER_DMA_RE_CCR_CAP_EVENT_RE_MSK                                         ( 0x0F << MDR_TIMER_DMA_RE_CCR_CAP_EVENT_RE_POS                                          )
#define MDR_TIMER_DMA_RE_BRK_EVENT_RE_MSK                                             ( 0x01 << MDR_TIMER_DMA_RE_BRK_EVENT_RE_POS                                              )
#define MDR_TIMER_DMA_RE_ETR_FE_EVENT_RE_MSK                                          ( 0x01 << MDR_TIMER_DMA_RE_ETR_FE_EVENT_RE_POS                                           )
#define MDR_TIMER_DMA_RE_ETR_RE_EVENT_RE_MSK                                          ( 0x01 << MDR_TIMER_DMA_RE_ETR_RE_EVENT_RE_POS                                           )
#define MDR_TIMER_DMA_RE_CNT_ARR_EVENT_RE_MSK                                         ( 0x01 << MDR_TIMER_DMA_RE_CNT_ARR_EVENT_RE_POS                                          )
#define MDR_TIMER_DMA_RE_CNT_ZERO_EVENT_RE_MSK                                        ( 0x01 << MDR_TIMER_DMA_RE_CNT_ZERO_EVENT_RE_POS                                         )

#define MDR_TIMER_DMA_RE_CCR_CAP1_EVENT_RE_DISABLE                                    ~( 0x0F << MDR_TIMER_DMA_RE_CCR_CAP1_EVENT_RE_POS                                        )

#define MDR_TIMER_DMA_RE_CCR_REF_EVENT_RE_DISABLE                                     ~( 0x0F << MDR_TIMER_DMA_RE_CCR_REF_EVENT_RE_POS                                         )

#define MDR_TIMER_DMA_RE_CCR_CAP_EVENT_RE_DISABLE                                     ~( 0x0F << MDR_TIMER_DMA_RE_CCR_CAP_EVENT_RE_POS                                         )

#define MDR_TIMER_DMA_RE_BRK_EVENT_RE_DISABLE                                         ~( 0x01 << MDR_TIMER_DMA_RE_BRK_EVENT_RE_POS                                             )
#define MDR_TIMER_DMA_RE_BRK_EVENT_RE_ENABLE                                          ( 0x01 << MDR_TIMER_DMA_RE_BRK_EVENT_RE_POS                                              )

#define MDR_TIMER_DMA_RE_ETR_FE_EVENT_RE_DISABLE                                      ~( 0x01 << MDR_TIMER_DMA_RE_ETR_FE_EVENT_RE_POS                                          )
#define MDR_TIMER_DMA_RE_ETR_FE_EVENT_RE_ENABLE                                       ( 0x01 << MDR_TIMER_DMA_RE_ETR_FE_EVENT_RE_POS                                           )

#define MDR_TIMER_DMA_RE_ETR_RE_EVENT_RE_DISABLE                                      ~( 0x01 << MDR_TIMER_DMA_RE_ETR_RE_EVENT_RE_POS                                          )
#define MDR_TIMER_DMA_RE_ETR_RE_EVENT_RE_ENABLE                                       ( 0x01 << MDR_TIMER_DMA_RE_ETR_RE_EVENT_RE_POS                                           )

#define MDR_TIMER_DMA_RE_CNT_ARR_EVENT_RE_DISABLE                                     ~( 0x01 << MDR_TIMER_DMA_RE_CNT_ARR_EVENT_RE_POS                                         )
#define MDR_TIMER_DMA_RE_CNT_ARR_EVENT_RE_ENABLE                                      ( 0x01 << MDR_TIMER_DMA_RE_CNT_ARR_EVENT_RE_POS                                          )

#define MDR_TIMER_DMA_RE_CNT_ZERO_EVENT_RE_DISABLE                                    ~( 0x01 << MDR_TIMER_DMA_RE_CNT_ZERO_EVENT_RE_POS                                        )
#define MDR_TIMER_DMA_RE_CNT_ZERO_EVENT_RE_ENABLE                                     ( 0x01 << MDR_TIMER_DMA_RE_CNT_ZERO_EVENT_RE_POS                                         )

#define MDR_TIMER_DMA_RE_CCR_CAP1_EVENT_RE_CHANNEL_POS( x )                           ( MDR_TIMER_DMA_RE_CCR_CAP1_EVENT_RE_POS + ( ( x ) - 1 )                                 )
#define MDR_TIMER_DMA_RE_CCR_CAP1_EVENT_RE_CHANNEL_MSK( x )                           ( 0x01 << MDR_TIMER_DMA_RE_CCR_CAP1_EVENT_RE_CHANNEL_POS( x )                            )
#define MDR_TIMER_DMA_RE_CCR_CAP1_EVENT_RE_CHANNEL_DISABLE( x )                       ~( 0x01 << MDR_TIMER_DMA_RE_CCR_CAP1_EVENT_RE_CHANNEL_POS( x )                           )
#define MDR_TIMER_DMA_RE_CCR_CAP1_EVENT_RE_CHANNEL_ENABLE( x )                        ( 0x01 << MDR_TIMER_DMA_RE_CCR_CAP1_EVENT_RE_CHANNEL_POS( x )                            )

#define MDR_TIMER_DMA_RE_CCR_REF_EVENT_RE_CHANNEL_POS( x )                            ( MDR_TIMER_DMA_RE_CCR_REF_EVENT_RE_POS + ( ( x ) - 1 )                                  )
#define MDR_TIMER_DMA_RE_CCR_REF_EVENT_RE_CHANNEL_MSK( x )                            ( 0x01 << MDR_TIMER_DMA_RE_CCR_REF_EVENT_RE_CHANNEL_POS( x )                             )
#define MDR_TIMER_DMA_RE_CCR_REF_EVENT_RE_CHANNEL_DISABLE( x )                        ~( 0x01 << MDR_TIMER_DMA_RE_CCR_REF_EVENT_RE_CHANNEL_POS( x )                            )
#define MDR_TIMER_DMA_RE_CCR_REF_EVENT_RE_CHANNEL_ENABLE( x )                         ( 0x01 << MDR_TIMER_DMA_RE_CCR_REF_EVENT_RE_CHANNEL_POS( x )                             )

#define MDR_TIMER_DMA_RE_CCR_CAP_EVENT_RE_CHANNEL_POS( x )                            ( MDR_TIMER_DMA_RE_CCR_CAP_EVENT_RE_POS + ( ( x ) - 1 )                                  )
#define MDR_TIMER_DMA_RE_CCR_CAP_EVENT_RE_CHANNEL_MSK( x )                            ( 0x01 << MDR_TIMER_DMA_RE_CCR_CAP_EVENT_RE_CHANNEL_POS( x )                             )
#define MDR_TIMER_DMA_RE_CCR_CAP_EVENT_RE_CHANNEL_DISABLE( x )                        ~( 0x01 << MDR_TIMER_DMA_RE_CCR_CAP_EVENT_RE_CHANNEL_POS( x )                            )
#define MDR_TIMER_DMA_RE_CCR_CAP_EVENT_RE_CHANNEL_ENABLE( x )                         ( 0x01 << MDR_TIMER_DMA_RE_CCR_CAP_EVENT_RE_CHANNEL_POS( x )                             )
// CHy_CNTRL2 register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_CH_CNTRL2_EV_DELAY_POS                                              4
#define MDR_TIMER_CH_CNTRL2_CCRRLD_POS                                                3
#define MDR_TIMER_CH_CNTRL2_CCR1_EN_POS                                               2
#define MDR_TIMER_CH_CNTRL2_CHSEL_POS                                                 0

#define MDR_TIMER_CH_CNTRL2_EV_DELAY_MSK                                              ( 0x01 << MDR_TIMER_CH_CNTRL2_EV_DELAY_POS                                               )
#define MDR_TIMER_CH_CNTRL2_CCRRLD_MSK                                                ( 0x01 << MDR_TIMER_CH_CNTRL2_CCRRLD_POS                                                 )
#define MDR_TIMER_CH_CNTRL2_CCR1_EN_MSK                                               ( 0x01 << MDR_TIMER_CH_CNTRL2_CCR1_EN_POS                                                )
#define MDR_TIMER_CH_CNTRL2_CHSEL_MSK                                                 ( 0x03 << MDR_TIMER_CH_CNTRL2_CHSEL_POS                                                  )

#define MDR_TIMER_CH_CNTRL2_EV_DELAY_ASYNCHRONOUS                                     ~( 0x01 << MDR_TIMER_CH_CNTRL2_EV_DELAY_POS                                              )
#define MDR_TIMER_CH_CNTRL2_EV_DELAY_SYNCHRONOUS                                      ( 0x01 << MDR_TIMER_CH_CNTRL2_EV_DELAY_POS                                               )

#define MDR_TIMER_CH_CNTRL2_CCRRLD_IMMEDIATE                                          ~( 0x01 << MDR_TIMER_CH_CNTRL2_CCRRLD_POS                                                )
#define MDR_TIMER_CH_CNTRL2_CCRRLD_WHEN_CNT_EQUALS_ZERO                               ( 0x01 << MDR_TIMER_CH_CNTRL2_CCRRLD_POS                                                 )

#define MDR_TIMER_CH_CNTRL2_CCR1_EN_DISABLE                                           ~( 0x01 << MDR_TIMER_CH_CNTRL2_CCR1_EN_POS                                               )
#define MDR_TIMER_CH_CNTRL2_CCR1_EN_ENABLE                                            ( 0x01 << MDR_TIMER_CH_CNTRL2_CCR1_EN_POS                                                )

#define MDR_TIMER_CH_CNTRL2_CHSEL_OWN_RISING_EDGE                                     ~( 0x03 << MDR_TIMER_CH_CNTRL2_CHSEL_POS                                                 )
#define MDR_TIMER_CH_CNTRL2_CHSEL_OWN_FALLING_EDGE                                    ( 0x01 << MDR_TIMER_CH_CNTRL2_CHSEL_POS                                                  )
#define MDR_TIMER_CH_CNTRL2_CHSEL_OTHER_CHANNEL_FALLING_EDGE                          ( 0x02 << MDR_TIMER_CH_CNTRL2_CHSEL_POS                                                  )
#define MDR_TIMER_CH_CNTRL2_CHSEL_OTHER_CHANNEL_RISING_EDGE                           ( 0x03 << MDR_TIMER_CH_CNTRL2_CHSEL_POS                                                  )
// CNT register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_CNT_CNT_ZERO_VAL                                                    0
#define MDR_TIMER_CNT_CNT_VAL( x )                                                    ( x                                                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CNT                   : 16;
        uint32_t                       : 16;
    };

} MDR_TIMER_CNT_TypeDef;
// PSG register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_PSG_PSG_ZERO_VAL                                                    0
#define MDR_TIMER_PSG_PSG_VAL( x )                                                    ( x                                                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t PSG                   : 16;
        uint32_t                       : 16;
    };

} MDR_TIMER_PSG_TypeDef;
// ARR register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_ARR_ARR_ZERO_VAL                                                    0
#define MDR_TIMER_ARR_ARR_VAL( x )                                                    ( x                                                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t ARR                   : 16;
        uint32_t                       : 16;
    };

} MDR_TIMER_ARR_TypeDef;
// CNTRL register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_CNTRL_EVENT_SEL_INTERNAL_TIM_CLK_VAL                                0
#define MDR_TIMER_CNTRL_EVENT_SEL_CNT_EQUALS_ARR_TIMER1_VAL                           1
#define MDR_TIMER_CNTRL_EVENT_SEL_CNT_EQUALS_ARR_TIMER2_VAL                           2
#define MDR_TIMER_CNTRL_EVENT_SEL_CNT_EQUALS_ARR_TIMER3_VAL                           3
#define MDR_TIMER_CNTRL_EVENT_SEL_CHANNEL1_RISING_EDGE_VAL                            4
#define MDR_TIMER_CNTRL_EVENT_SEL_CHANNEL2_RISING_EDGE_VAL                            5
#define MDR_TIMER_CNTRL_EVENT_SEL_CHANNEL3_RISING_EDGE_VAL                            6
#define MDR_TIMER_CNTRL_EVENT_SEL_CHANNEL4_RISING_EDGE_VAL                            7
#define MDR_TIMER_CNTRL_EVENT_SEL_ETR_RISING_EDGE_VAL                                 8
#define MDR_TIMER_CNTRL_EVENT_SEL_ETR_FALLING_EDGE_VAL                                9

#define MDR_TIMER_CNTRL_CNT_MODE_UP_VAL                                               0
#define MDR_TIMER_CNTRL_CNT_MODE_UP_DOWN_VAL                                          1
#define MDR_TIMER_CNTRL_CNT_MODE_DOWN_VAL                                             2

#define MDR_TIMER_CNTRL_FDTS_TIM_CLK_VAL                                              0
#define MDR_TIMER_CNTRL_FDTS_TIM_CLK_DIV_2_VAL                                        1
#define MDR_TIMER_CNTRL_FDTS_TIM_CLK_DIV_3_VAL                                        2
#define MDR_TIMER_CNTRL_FDTS_TIM_CLK_DIV_4_VAL                                        3

#define MDR_TIMER_CNTRL_DIR_UP_VAL                                                    0
#define MDR_TIMER_CNTRL_DIR_DOWN_VAL                                                  1

#define MDR_TIMER_CNTRL_WR_CMPL_READY_VAL                                             0
#define MDR_TIMER_CNTRL_WR_CMPL_BUSY_VAL                                              1

#define MDR_TIMER_CNTRL_ARRB_EN_IMMEDIATE_UPDATE_VAL                                  0
#define MDR_TIMER_CNTRL_ARRB_EN_UPDATE_WHEN_CNT_EQUALS_ARR_VAL                        1

#define MDR_TIMER_CNTRL_CNT_EN_DISABLE_VAL                                            0
#define MDR_TIMER_CNTRL_CNT_EN_ENABLE_VAL                                             1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CNT_EN                : 1;
        uint32_t ARRB_EN               : 1;
        uint32_t WR_CMPL               : 1;
        uint32_t DIR                   : 1;
        uint32_t FDTS                  : 2;
        uint32_t CNT_MODE              : 2;
        uint32_t EVENT_SEL             : 4;
        uint32_t                       : 20;
    };

} MDR_TIMER_CNTRL_TypeDef;
// CCRy register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_CCR_CCR_ZERO_VAL                                                    0
#define MDR_TIMER_CCR_CCR_VAL( x )                                                    ( x                                                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CCR                   : 16;
        uint32_t                       : 16;
    };

} MDR_TIMER_CCR_TypeDef;
// CHy_CNTRL register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_CH_CNTRL_WR_CMPL1_READY_VAL                                         0
#define MDR_TIMER_CH_CNTRL_WR_CMPL1_BUSY_VAL                                          1

#define MDR_TIMER_CH_CNTRL_CAP_NPWM_PWM_VAL                                           0
#define MDR_TIMER_CH_CNTRL_CAP_NPWM_CAPTURE_VAL                                       1

#define MDR_TIMER_CH_CNTRL_WR_CMPL_READY_VAL                                          0
#define MDR_TIMER_CH_CNTRL_WR_CMPL_BUSY_VAL                                           1

#define MDR_TIMER_CH_CNTRL_ETREN_DISABLE_VAL                                          0
#define MDR_TIMER_CH_CNTRL_ETREN_ENABLE_VAL                                           1

#define MDR_TIMER_CH_CNTRL_BRKEN_DISABLE_VAL                                          0
#define MDR_TIMER_CH_CNTRL_BRKEN_ENABLE_VAL                                           1

#define MDR_TIMER_CH_CNTRL_OCCM_ALWAYS_ZERO_VAL                                       0
#define MDR_TIMER_CH_CNTRL_OCCM_ONE_WHEN_CNT_EQUALS_CCR_VAL                           1
#define MDR_TIMER_CH_CNTRL_OCCM_ZERO_WHEN_CNT_EQUALS_CCR_VAL                          2
#define MDR_TIMER_CH_CNTRL_OCCM_TOGGLE_WHEN_CNT_EQUALS_CCR_VAL                        3
#define MDR_TIMER_CH_CNTRL_OCCM_ALWAYS_ZERO_2_VAL                                     4
#define MDR_TIMER_CH_CNTRL_OCCM_ALWAYS_ONE_VAL                                        5
#define MDR_TIMER_CH_CNTRL_OCCM_PWM_MODE_1_VAL                                        6
#define MDR_TIMER_CH_CNTRL_OCCM_PWM_MODE_2_VAL                                        7

#define MDR_TIMER_CH_CNTRL_OCCE_DISABLE_VAL                                           0
#define MDR_TIMER_CH_CNTRL_OCCE_ENABLE_VAL                                            1

#define MDR_TIMER_CH_CNTRL_CHPSC_DIV_1_VAL                                            0
#define MDR_TIMER_CH_CNTRL_CHPSC_DIV_2_VAL                                            1
#define MDR_TIMER_CH_CNTRL_CHPSC_DIV_4_VAL                                            2
#define MDR_TIMER_CH_CNTRL_CHPSC_DIV_8_VAL                                            3

#define MDR_TIMER_CH_CNTRL_CHSEL_OWN_RISING_EDGE_VAL                                  0
#define MDR_TIMER_CH_CNTRL_CHSEL_OWN_FALLING_EDGE_VAL                                 1
#define MDR_TIMER_CH_CNTRL_CHSEL_OTHER_CHANNEL_FALLING_EDGE_VAL                       2
#define MDR_TIMER_CH_CNTRL_CHSEL_OTHER_CHANNEL_RISING_EDGE_VAL                        3

#define MDR_TIMER_CH_CNTRL_CHFLTR_NO_FILTER_VAL                                       0
#define MDR_TIMER_CH_CNTRL_CHFLTR_TIM_CLK_N_2_VAL                                     1
#define MDR_TIMER_CH_CNTRL_CHFLTR_TIM_CLK_N_4_VAL                                     2
#define MDR_TIMER_CH_CNTRL_CHFLTR_TIM_CLK_N_8_VAL                                     3
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_2_N_6_VAL                                  4
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_2_N_8_VAL                                  5
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_4_N_6_VAL                                  6
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_4_N_8_VAL                                  7
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_8_N_6_VAL                                  8
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_8_N_8_VAL                                  9
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_16_N_5_VAL                                 10
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_16_N_6_VAL                                 11
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_16_N_8_VAL                                 12
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_32_N_5_VAL                                 13
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_32_N_6_VAL                                 14
#define MDR_TIMER_CH_CNTRL_CHFLTR_FDTS_DIV_32_N_8_VAL                                 15

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CHFLTR                : 4;
        uint32_t CHSEL                 : 2;
        uint32_t CHPSC                 : 2;
        uint32_t OCCE                  : 1;
        uint32_t OCCM                  : 3;
        uint32_t BRKEN                 : 1;
        uint32_t ETREN                 : 1;
        uint32_t WR_CMPL               : 1;
        uint32_t CAP_NPWM              : 1;
        uint32_t WR_CMPL1              : 1;
        uint32_t                       : 15;
    };

} MDR_TIMER_CH_CNTRL_TypeDef;
// CHy_CNTRL1 register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_CH_CNTRL1_NINV_NOT_INVERTED_VAL                                     0
#define MDR_TIMER_CH_CNTRL1_NINV_INVERTED_VAL                                         1

#define MDR_TIMER_CH_CNTRL1_NSELO_ZERO_VAL                                            0
#define MDR_TIMER_CH_CNTRL1_NSELO_ONE_VAL                                             1
#define MDR_TIMER_CH_CNTRL1_NSELO_REF_VAL                                             2
#define MDR_TIMER_CH_CNTRL1_NSELO_DTG_VAL                                             3

#define MDR_TIMER_CH_CNTRL1_NSELOE_ZERO_VAL                                           0
#define MDR_TIMER_CH_CNTRL1_NSELOE_ONE_VAL                                            1
#define MDR_TIMER_CH_CNTRL1_NSELOE_REF_VAL                                            2
#define MDR_TIMER_CH_CNTRL1_NSELOE_DTG_VAL                                            3

#define MDR_TIMER_CH_CNTRL1_INV_NOT_INVERTED_VAL                                      0
#define MDR_TIMER_CH_CNTRL1_INV_INVERTED_VAL                                          1

#define MDR_TIMER_CH_CNTRL1_SELO_ZERO_VAL                                             0
#define MDR_TIMER_CH_CNTRL1_SELO_ONE_VAL                                              1
#define MDR_TIMER_CH_CNTRL1_SELO_REF_VAL                                              2
#define MDR_TIMER_CH_CNTRL1_SELO_DTG_VAL                                              3

#define MDR_TIMER_CH_CNTRL1_SELOE_ZERO_VAL                                            0
#define MDR_TIMER_CH_CNTRL1_SELOE_ONE_VAL                                             1
#define MDR_TIMER_CH_CNTRL1_SELOE_REF_VAL                                             2
#define MDR_TIMER_CH_CNTRL1_SELOE_DTG_VAL                                             3

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t SELOE                 : 2;
        uint32_t SELO                  : 2;
        uint32_t INV                   : 1;
        uint32_t                       : 3;
        uint32_t NSELOE                : 2;
        uint32_t NSELO                 : 2;
        uint32_t NINV                  : 1;
        uint32_t                       : 19;
    };

} MDR_TIMER_CH_CNTRL1_TypeDef;
// CHy_DTG register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_CH_DTG_DTG_ZERO_VAL                                                 0
#define MDR_TIMER_CH_DTG_DTG_VAL( x )                                                 ( x                                                                                      )

#define MDR_TIMER_CH_DTG_EDTS_TIM_CLK_VAL                                             0
#define MDR_TIMER_CH_DTG_EDTS_FDTS_VAL                                                1

#define MDR_TIMER_CH_DTG_DTGX_ZERO_VAL                                                0
#define MDR_TIMER_CH_DTG_DTGX_VAL( x )                                                ( x                                                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t DTGX                  : 4;
        uint32_t EDTS                  : 1;
        uint32_t                       : 3;
        uint32_t DTG                   : 8;
        uint32_t                       : 16;
    };

} MDR_TIMER_CH_DTG_TypeDef;
// BRKETR_CNTRL register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_NO_FILTER_VAL                               0
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_TIM_CLK_N_2_VAL                             1
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_TIM_CLK_N_4_VAL                             2
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_TIM_CLK_N_8_VAL                             3
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_2_N_6_VAL                          4
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_2_N_8_VAL                          5
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_4_N_6_VAL                          6
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_4_N_8_VAL                          7
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_8_N_6_VAL                          8
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_8_N_8_VAL                          9
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_16_N_5_VAL                         10
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_16_N_6_VAL                         11
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_16_N_8_VAL                         12
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_32_N_5_VAL                         13
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_32_N_6_VAL                         14
#define MDR_TIMER_BRKETR_CNTRL_ETR_FILTER_FDTS_DIV_32_N_8_VAL                         15

#define MDR_TIMER_BRKETR_CNTRL_ETR_PSC_DIV_1_VAL                                      0
#define MDR_TIMER_BRKETR_CNTRL_ETR_PSC_DIV_2_VAL                                      1
#define MDR_TIMER_BRKETR_CNTRL_ETR_PSC_DIV_4_VAL                                      2
#define MDR_TIMER_BRKETR_CNTRL_ETR_PSC_DIV_8_VAL                                      3

#define MDR_TIMER_BRKETR_CNTRL_ETR_INV_NOT_INVERTED_VAL                               0
#define MDR_TIMER_BRKETR_CNTRL_ETR_INV_INVERTED_VAL                                   1

#define MDR_TIMER_BRKETR_CNTRL_BRK_INV_NOT_INVERTED_VAL                               0
#define MDR_TIMER_BRKETR_CNTRL_BRK_INV_INVERTED_VAL                                   1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t BRK_INV               : 1;
        uint32_t ETR_INV               : 1;
        uint32_t ETR_PSC               : 2;
        uint32_t ETR_FILTER            : 4;
        uint32_t                       : 24;
    };

} MDR_TIMER_BRKETR_CNTRL_TypeDef;
// STATUS register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_STATUS_CCR_CAP1_EVENT_NO_EVENT_VAL                                  0

#define MDR_TIMER_STATUS_CCR_REF_EVENT_NO_EVENT_VAL                                   0

#define MDR_TIMER_STATUS_CCR_CAP_EVENT_NO_EVENT_VAL                                   0

#define MDR_TIMER_STATUS_BRK_EVENT_NO_EVENT_VAL                                       0
#define MDR_TIMER_STATUS_BRK_EVENT_EVENT_VAL                                          1

#define MDR_TIMER_STATUS_ETR_FE_EVENT_NO_EVENT_VAL                                    0
#define MDR_TIMER_STATUS_ETR_FE_EVENT_EVENT_VAL                                       1

#define MDR_TIMER_STATUS_ETR_RE_EVENT_NO_EVENT_VAL                                    0
#define MDR_TIMER_STATUS_ETR_RE_EVENT_EVENT_VAL                                       1

#define MDR_TIMER_STATUS_CNT_ARR_EVENT_NO_EVENT_VAL                                   0
#define MDR_TIMER_STATUS_CNT_ARR_EVENT_EVENT_VAL                                      1

#define MDR_TIMER_STATUS_CNT_ZERO_EVENT_NO_EVENT_VAL                                  0
#define MDR_TIMER_STATUS_CNT_ZERO_EVENT_EVENT_VAL                                     1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CNT_ZERO_EVENT        : 1;
        uint32_t CNT_ARR_EVENT         : 1;
        uint32_t ETR_RE_EVENT          : 1;
        uint32_t ETR_FE_EVENT          : 1;
        uint32_t BRK_EVENT             : 1;
        uint32_t CCR_CAP_EVENT         : 4;
        uint32_t CCR_REF_EVENT         : 4;
        uint32_t CCR_CAP1_EVENT        : 4;
        uint32_t                       : 15;
    };

} MDR_TIMER_STATUS_TypeDef;
// IE register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_IE_CCR_CAP1_EVENT_IE_DISABLE_VAL                                    0

#define MDR_TIMER_IE_CCR_REF_EVENT_IE_DISABLE_VAL                                     0

#define MDR_TIMER_IE_CCR_CAP_EVENT_IE_DISABLE_VAL                                     0

#define MDR_TIMER_IE_BRK_EVENT_IE_DISABLE_VAL                                         0
#define MDR_TIMER_IE_BRK_EVENT_IE_ENABLE_VAL                                          1

#define MDR_TIMER_IE_ETR_FE_EVENT_IE_DISABLE_VAL                                      0
#define MDR_TIMER_IE_ETR_FE_EVENT_IE_ENABLE_VAL                                       1

#define MDR_TIMER_IE_ETR_RE_EVENT_IE_DISABLE_VAL                                      0
#define MDR_TIMER_IE_ETR_RE_EVENT_IE_ENABLE_VAL                                       1

#define MDR_TIMER_IE_CNT_ARR_EVENT_IE_DISABLE_VAL                                     0
#define MDR_TIMER_IE_CNT_ARR_EVENT_IE_ENABLE_VAL                                      1

#define MDR_TIMER_IE_CNT_ZERO_EVENT_IE_DISABLE_VAL                                    0
#define MDR_TIMER_IE_CNT_ZERO_EVENT_IE_ENABLE_VAL                                     1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CNT_ZERO_EVENT_IE     : 1;
        uint32_t CNT_ARR_EVENT_IE      : 1;
        uint32_t ETR_RE_EVENT_IE       : 1;
        uint32_t ETR_FE_EVENT_IE       : 1;
        uint32_t BRK_EVENT_IE          : 1;
        uint32_t CCR_CAP_EVENT_IE      : 4;
        uint32_t CCR_REF_EVENT_IE      : 4;
        uint32_t CCR_CAP1_EVENT_IE     : 4;
        uint32_t                       : 15;
    };

} MDR_TIMER_IE_TypeDef;
// DMA_RE register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_DMA_RE_CCR_CAP1_EVENT_RE_DISABLE_VAL                                0

#define MDR_TIMER_DMA_RE_CCR_REF_EVENT_RE_DISABLE_VAL                                 0

#define MDR_TIMER_DMA_RE_CCR_CAP_EVENT_RE_DISABLE_VAL                                 0

#define MDR_TIMER_DMA_RE_BRK_EVENT_RE_DISABLE_VAL                                     0
#define MDR_TIMER_DMA_RE_BRK_EVENT_RE_ENABLE_VAL                                      1

#define MDR_TIMER_DMA_RE_ETR_FE_EVENT_RE_DISABLE_VAL                                  0
#define MDR_TIMER_DMA_RE_ETR_FE_EVENT_RE_ENABLE_VAL                                   1

#define MDR_TIMER_DMA_RE_ETR_RE_EVENT_RE_DISABLE_VAL                                  0
#define MDR_TIMER_DMA_RE_ETR_RE_EVENT_RE_ENABLE_VAL                                   1

#define MDR_TIMER_DMA_RE_CNT_ARR_EVENT_RE_DISABLE_VAL                                 0
#define MDR_TIMER_DMA_RE_CNT_ARR_EVENT_RE_ENABLE_VAL                                  1

#define MDR_TIMER_DMA_RE_CNT_ZERO_EVENT_RE_DISABLE_VAL                                0
#define MDR_TIMER_DMA_RE_CNT_ZERO_EVENT_RE_ENABLE_VAL                                 1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CNT_ZERO_EVENT_RE     : 1;
        uint32_t CNT_ARR_EVENT_RE      : 1;
        uint32_t ETR_RE_EVENT_RE       : 1;
        uint32_t ETR_FE_EVENT_RE       : 1;
        uint32_t BRK_EVENT_RE          : 1;
        uint32_t CCR_CAP_EVENT_RE      : 4;
        uint32_t CCR_REF_EVENT_RE      : 4;
        uint32_t CCR_CAP1_EVENT_RE     : 4;
        uint32_t                       : 15;
    };

} MDR_TIMER_DMA_RE_TypeDef;
// CHy_CNTRL2 register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER_CH_CNTRL2_EV_DELAY_ASYNCHRONOUS_VAL                                 0
#define MDR_TIMER_CH_CNTRL2_EV_DELAY_SYNCHRONOUS_VAL                                  1

#define MDR_TIMER_CH_CNTRL2_CCRRLD_IMMEDIATE_VAL                                      0
#define MDR_TIMER_CH_CNTRL2_CCRRLD_WHEN_CNT_EQUALS_ZERO_VAL                           1

#define MDR_TIMER_CH_CNTRL2_CCR1_EN_DISABLE_VAL                                       0
#define MDR_TIMER_CH_CNTRL2_CCR1_EN_ENABLE_VAL                                        1

#define MDR_TIMER_CH_CNTRL2_CHSEL_OWN_RISING_EDGE_VAL                                 0
#define MDR_TIMER_CH_CNTRL2_CHSEL_OWN_FALLING_EDGE_VAL                                1
#define MDR_TIMER_CH_CNTRL2_CHSEL_OTHER_CHANNEL_FALLING_EDGE_VAL                      2
#define MDR_TIMER_CH_CNTRL2_CHSEL_OTHER_CHANNEL_RISING_EDGE_VAL                       3

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CHSEL                 : 2;
        uint32_t CCR1_EN               : 1;
        uint32_t CCRRLD                : 1;
        uint32_t EV_DELAY              : 1;
        uint32_t                       : 27;
    };

} MDR_TIMER_CH_CNTRL2_TypeDef;
// TIMER structure Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef struct
{
    __IO MDR_TIMER_CNT_TypeDef          CNT;
    __IO MDR_TIMER_PSG_TypeDef          PSG;
    __IO MDR_TIMER_ARR_TypeDef          ARR;
    __IO MDR_TIMER_CNTRL_TypeDef        CNTRL;
    __IO MDR_TIMER_CCR_TypeDef          CCR1;
    __IO MDR_TIMER_CCR_TypeDef          CCR2;
    __IO MDR_TIMER_CCR_TypeDef          CCR3;
    __IO MDR_TIMER_CCR_TypeDef          CCR4;
    __IO MDR_TIMER_CH_CNTRL_TypeDef     CH1_CNTRL;
    __IO MDR_TIMER_CH_CNTRL_TypeDef     CH2_CNTRL;
    __IO MDR_TIMER_CH_CNTRL_TypeDef     CH3_CNTRL;
    __IO MDR_TIMER_CH_CNTRL_TypeDef     CH4_CNTRL;
    __IO MDR_TIMER_CH_CNTRL1_TypeDef    CH1_CNTRL1;
    __IO MDR_TIMER_CH_CNTRL1_TypeDef    CH2_CNTRL1;
    __IO MDR_TIMER_CH_CNTRL1_TypeDef    CH3_CNTRL1;
    __IO MDR_TIMER_CH_CNTRL1_TypeDef    CH4_CNTRL1;
    __IO MDR_TIMER_CH_DTG_TypeDef       CH1_DTG;
    __IO MDR_TIMER_CH_DTG_TypeDef       CH2_DTG;
    __IO MDR_TIMER_CH_DTG_TypeDef       CH3_DTG;
    __IO MDR_TIMER_CH_DTG_TypeDef       CH4_DTG;
    __IO MDR_TIMER_BRKETR_CNTRL_TypeDef BRKETR_CNTRL;
    __IO MDR_TIMER_STATUS_TypeDef       STATUS;
    __IO MDR_TIMER_IE_TypeDef           IE;
    __IO MDR_TIMER_DMA_RE_TypeDef       DMA_RE;
    __IO MDR_TIMER_CH_CNTRL2_TypeDef    CH1_CNTRL2;
    __IO MDR_TIMER_CH_CNTRL2_TypeDef    CH2_CNTRL2;
    __IO MDR_TIMER_CH_CNTRL2_TypeDef    CH3_CNTRL2;
    __IO MDR_TIMER_CH_CNTRL2_TypeDef    CH4_CNTRL2;
    __IO MDR_TIMER_CCR_TypeDef          CCR11;
    __IO MDR_TIMER_CCR_TypeDef          CCR21;
    __IO MDR_TIMER_CCR_TypeDef          CCR31;
    __IO MDR_TIMER_CCR_TypeDef          CCR41;

} MDR_TIMER_TypeDefUnion;
// TIMER addresses
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_TIMER1_UNION_BASE                                                         ( MDR_TIMER1_BASE                                                                         )
#define MDR_TIMER2_UNION_BASE                                                         ( MDR_TIMER2_BASE                                                                         )
#define MDR_TIMER3_UNION_BASE                                                         ( MDR_TIMER3_BASE                                                                         )

#define MDR_TIMER1_CNT_ADDRESS                                                        ( MDR_TIMER1_UNION_BASE + 0x00                                                          )
#define MDR_TIMER1_PSG_ADDRESS                                                        ( MDR_TIMER1_UNION_BASE + 0x04                                                          )
#define MDR_TIMER1_ARR_ADDRESS                                                        ( MDR_TIMER1_UNION_BASE + 0x08                                                          )
#define MDR_TIMER1_CNTRL_ADDRESS                                                      ( MDR_TIMER1_UNION_BASE + 0x0C                                                          )
#define MDR_TIMER1_CCR1_ADDRESS                                                       ( MDR_TIMER1_UNION_BASE + 0x10                                                          )
#define MDR_TIMER1_CCR2_ADDRESS                                                       ( MDR_TIMER1_UNION_BASE + 0x14                                                          )
#define MDR_TIMER1_CCR3_ADDRESS                                                       ( MDR_TIMER1_UNION_BASE + 0x18                                                          )
#define MDR_TIMER1_CCR4_ADDRESS                                                       ( MDR_TIMER1_UNION_BASE + 0x1C                                                          )
#define MDR_TIMER1_CH1_CNTRL_ADDRESS                                                  ( MDR_TIMER1_UNION_BASE + 0x20                                                          )
#define MDR_TIMER1_CH2_CNTRL_ADDRESS                                                  ( MDR_TIMER1_UNION_BASE + 0x24                                                          )
#define MDR_TIMER1_CH3_CNTRL_ADDRESS                                                  ( MDR_TIMER1_UNION_BASE + 0x28                                                          )
#define MDR_TIMER1_CH4_CNTRL_ADDRESS                                                  ( MDR_TIMER1_UNION_BASE + 0x2C                                                          )
#define MDR_TIMER1_CH1_CNTRL1_ADDRESS                                                 ( MDR_TIMER1_UNION_BASE + 0x30                                                          )
#define MDR_TIMER1_CH2_CNTRL1_ADDRESS                                                 ( MDR_TIMER1_UNION_BASE + 0x34                                                          )
#define MDR_TIMER1_CH3_CNTRL1_ADDRESS                                                 ( MDR_TIMER1_UNION_BASE + 0x38                                                          )
#define MDR_TIMER1_CH4_CNTRL1_ADDRESS                                                 ( MDR_TIMER1_UNION_BASE + 0x3C                                                          )
#define MDR_TIMER1_CH1_DTG_ADDRESS                                                    ( MDR_TIMER1_UNION_BASE + 0x40                                                          )
#define MDR_TIMER1_CH2_DTG_ADDRESS                                                    ( MDR_TIMER1_UNION_BASE + 0x44                                                          )
#define MDR_TIMER1_CH3_DTG_ADDRESS                                                    ( MDR_TIMER1_UNION_BASE + 0x48                                                          )
#define MDR_TIMER1_CH4_DTG_ADDRESS                                                    ( MDR_TIMER1_UNION_BASE + 0x4C                                                          )
#define MDR_TIMER1_BRKETR_CNTRL_ADDRESS                                               ( MDR_TIMER1_UNION_BASE + 0x50                                                          )
#define MDR_TIMER1_STATUS_ADDRESS                                                     ( MDR_TIMER1_UNION_BASE + 0x54                                                          )
#define MDR_TIMER1_IE_ADDRESS                                                         ( MDR_TIMER1_UNION_BASE + 0x58                                                          )
#define MDR_TIMER1_DMA_RE_ADDRESS                                                     ( MDR_TIMER1_UNION_BASE + 0x5C                                                          )
#define MDR_TIMER1_CH1_CNTRL2_ADDRESS                                                 ( MDR_TIMER1_UNION_BASE + 0x60                                                          )
#define MDR_TIMER1_CH2_CNTRL2_ADDRESS                                                 ( MDR_TIMER1_UNION_BASE + 0x64                                                          )
#define MDR_TIMER1_CH3_CNTRL2_ADDRESS                                                 ( MDR_TIMER1_UNION_BASE + 0x68                                                          )
#define MDR_TIMER1_CH4_CNTRL2_ADDRESS                                                 ( MDR_TIMER1_UNION_BASE + 0x6C                                                          )
#define MDR_TIMER1_CCR11_ADDRESS                                                      ( MDR_TIMER1_UNION_BASE + 0x70                                                          )
#define MDR_TIMER1_CCR21_ADDRESS                                                      ( MDR_TIMER1_UNION_BASE + 0x74                                                          )
#define MDR_TIMER1_CCR31_ADDRESS                                                      ( MDR_TIMER1_UNION_BASE + 0x78                                                          )
#define MDR_TIMER1_CCR41_ADDRESS                                                      ( MDR_TIMER1_UNION_BASE + 0x7C                                                          )

#define MDR_TIMER2_CNT_ADDRESS                                                        ( MDR_TIMER2_UNION_BASE + 0x00                                                          )
#define MDR_TIMER2_PSG_ADDRESS                                                        ( MDR_TIMER2_UNION_BASE + 0x04                                                          )
#define MDR_TIMER2_ARR_ADDRESS                                                        ( MDR_TIMER2_UNION_BASE + 0x08                                                          )
#define MDR_TIMER2_CNTRL_ADDRESS                                                      ( MDR_TIMER2_UNION_BASE + 0x0C                                                          )
#define MDR_TIMER2_CCR1_ADDRESS                                                       ( MDR_TIMER2_UNION_BASE + 0x10                                                          )
#define MDR_TIMER2_CCR2_ADDRESS                                                       ( MDR_TIMER2_UNION_BASE + 0x14                                                          )
#define MDR_TIMER2_CCR3_ADDRESS                                                       ( MDR_TIMER2_UNION_BASE + 0x18                                                          )
#define MDR_TIMER2_CCR4_ADDRESS                                                       ( MDR_TIMER2_UNION_BASE + 0x1C                                                          )
#define MDR_TIMER2_CH1_CNTRL_ADDRESS                                                  ( MDR_TIMER2_UNION_BASE + 0x20                                                          )
#define MDR_TIMER2_CH2_CNTRL_ADDRESS                                                  ( MDR_TIMER2_UNION_BASE + 0x24                                                          )
#define MDR_TIMER2_CH3_CNTRL_ADDRESS                                                  ( MDR_TIMER2_UNION_BASE + 0x28                                                          )
#define MDR_TIMER2_CH4_CNTRL_ADDRESS                                                  ( MDR_TIMER2_UNION_BASE + 0x2C                                                          )
#define MDR_TIMER2_CH1_CNTRL1_ADDRESS                                                 ( MDR_TIMER2_UNION_BASE + 0x30                                                          )
#define MDR_TIMER2_CH2_CNTRL1_ADDRESS                                                 ( MDR_TIMER2_UNION_BASE + 0x34                                                          )
#define MDR_TIMER2_CH3_CNTRL1_ADDRESS                                                 ( MDR_TIMER2_UNION_BASE + 0x38                                                          )
#define MDR_TIMER2_CH4_CNTRL1_ADDRESS                                                 ( MDR_TIMER2_UNION_BASE + 0x3C                                                          )
#define MDR_TIMER2_CH1_DTG_ADDRESS                                                    ( MDR_TIMER2_UNION_BASE + 0x40                                                          )
#define MDR_TIMER2_CH2_DTG_ADDRESS                                                    ( MDR_TIMER2_UNION_BASE + 0x44                                                          )
#define MDR_TIMER2_CH3_DTG_ADDRESS                                                    ( MDR_TIMER2_UNION_BASE + 0x48                                                          )
#define MDR_TIMER2_CH4_DTG_ADDRESS                                                    ( MDR_TIMER2_UNION_BASE + 0x4C                                                          )
#define MDR_TIMER2_BRKETR_CNTRL_ADDRESS                                               ( MDR_TIMER2_UNION_BASE + 0x50                                                          )
#define MDR_TIMER2_STATUS_ADDRESS                                                     ( MDR_TIMER2_UNION_BASE + 0x54                                                          )
#define MDR_TIMER2_IE_ADDRESS                                                         ( MDR_TIMER2_UNION_BASE + 0x58                                                          )
#define MDR_TIMER2_DMA_RE_ADDRESS                                                     ( MDR_TIMER2_UNION_BASE + 0x5C                                                          )
#define MDR_TIMER2_CH1_CNTRL2_ADDRESS                                                 ( MDR_TIMER2_UNION_BASE + 0x60                                                          )
#define MDR_TIMER2_CH2_CNTRL2_ADDRESS                                                 ( MDR_TIMER2_UNION_BASE + 0x64                                                          )
#define MDR_TIMER2_CH3_CNTRL2_ADDRESS                                                 ( MDR_TIMER2_UNION_BASE + 0x68                                                          )
#define MDR_TIMER2_CH4_CNTRL2_ADDRESS                                                 ( MDR_TIMER2_UNION_BASE + 0x6C                                                          )
#define MDR_TIMER2_CCR11_ADDRESS                                                      ( MDR_TIMER2_UNION_BASE + 0x70                                                          )
#define MDR_TIMER2_CCR21_ADDRESS                                                      ( MDR_TIMER2_UNION_BASE + 0x74                                                          )
#define MDR_TIMER2_CCR31_ADDRESS                                                      ( MDR_TIMER2_UNION_BASE + 0x78                                                          )
#define MDR_TIMER2_CCR41_ADDRESS                                                      ( MDR_TIMER2_UNION_BASE + 0x7C                                                          )

#define MDR_TIMER3_CNT_ADDRESS                                                        ( MDR_TIMER3_UNION_BASE + 0x00                                                          )
#define MDR_TIMER3_PSG_ADDRESS                                                        ( MDR_TIMER3_UNION_BASE + 0x04                                                          )
#define MDR_TIMER3_ARR_ADDRESS                                                        ( MDR_TIMER3_UNION_BASE + 0x08                                                          )
#define MDR_TIMER3_CNTRL_ADDRESS                                                      ( MDR_TIMER3_UNION_BASE + 0x0C                                                          )
#define MDR_TIMER3_CCR1_ADDRESS                                                       ( MDR_TIMER3_UNION_BASE + 0x10                                                          )
#define MDR_TIMER3_CCR2_ADDRESS                                                       ( MDR_TIMER3_UNION_BASE + 0x14                                                          )
#define MDR_TIMER3_CCR3_ADDRESS                                                       ( MDR_TIMER3_UNION_BASE + 0x18                                                          )
#define MDR_TIMER3_CCR4_ADDRESS                                                       ( MDR_TIMER3_UNION_BASE + 0x1C                                                          )
#define MDR_TIMER3_CH1_CNTRL_ADDRESS                                                  ( MDR_TIMER3_UNION_BASE + 0x20                                                          )
#define MDR_TIMER3_CH2_CNTRL_ADDRESS                                                  ( MDR_TIMER3_UNION_BASE + 0x24                                                          )
#define MDR_TIMER3_CH3_CNTRL_ADDRESS                                                  ( MDR_TIMER3_UNION_BASE + 0x28                                                          )
#define MDR_TIMER3_CH4_CNTRL_ADDRESS                                                  ( MDR_TIMER3_UNION_BASE + 0x2C                                                          )
#define MDR_TIMER3_CH1_CNTRL1_ADDRESS                                                 ( MDR_TIMER3_UNION_BASE + 0x30                                                          )
#define MDR_TIMER3_CH2_CNTRL1_ADDRESS                                                 ( MDR_TIMER3_UNION_BASE + 0x34                                                          )
#define MDR_TIMER3_CH3_CNTRL1_ADDRESS                                                 ( MDR_TIMER3_UNION_BASE + 0x38                                                          )
#define MDR_TIMER3_CH4_CNTRL1_ADDRESS                                                 ( MDR_TIMER3_UNION_BASE + 0x3C                                                          )
#define MDR_TIMER3_CH1_DTG_ADDRESS                                                    ( MDR_TIMER3_UNION_BASE + 0x40                                                          )
#define MDR_TIMER3_CH2_DTG_ADDRESS                                                    ( MDR_TIMER3_UNION_BASE + 0x44                                                          )
#define MDR_TIMER3_CH3_DTG_ADDRESS                                                    ( MDR_TIMER3_UNION_BASE + 0x48                                                          )
#define MDR_TIMER3_CH4_DTG_ADDRESS                                                    ( MDR_TIMER3_UNION_BASE + 0x4C                                                          )
#define MDR_TIMER3_BRKETR_CNTRL_ADDRESS                                               ( MDR_TIMER3_UNION_BASE + 0x50                                                          )
#define MDR_TIMER3_STATUS_ADDRESS                                                     ( MDR_TIMER3_UNION_BASE + 0x54                                                          )
#define MDR_TIMER3_IE_ADDRESS                                                         ( MDR_TIMER3_UNION_BASE + 0x58                                                          )
#define MDR_TIMER3_DMA_RE_ADDRESS                                                     ( MDR_TIMER3_UNION_BASE + 0x5C                                                          )
#define MDR_TIMER3_CH1_CNTRL2_ADDRESS                                                 ( MDR_TIMER3_UNION_BASE + 0x60                                                          )
#define MDR_TIMER3_CH2_CNTRL2_ADDRESS                                                 ( MDR_TIMER3_UNION_BASE + 0x64                                                          )
#define MDR_TIMER3_CH3_CNTRL2_ADDRESS                                                 ( MDR_TIMER3_UNION_BASE + 0x68                                                          )
#define MDR_TIMER3_CH4_CNTRL2_ADDRESS                                                 ( MDR_TIMER3_UNION_BASE + 0x6C                                                          )
#define MDR_TIMER3_CCR11_ADDRESS                                                      ( MDR_TIMER3_UNION_BASE + 0x70                                                          )
#define MDR_TIMER3_CCR21_ADDRESS                                                      ( MDR_TIMER3_UNION_BASE + 0x74                                                          )
#define MDR_TIMER3_CCR31_ADDRESS                                                      ( MDR_TIMER3_UNION_BASE + 0x78                                                          )
#define MDR_TIMER3_CCR41_ADDRESS                                                      ( MDR_TIMER3_UNION_BASE + 0x7C                                                          )

#define MDR_TIMER1_UNION                                                             ( ( MDR_TIMER_TypeDefUnion * ) MDR_TIMER1_UNION_BASE                                    )
#define MDR_TIMER2_UNION                                                             ( ( MDR_TIMER_TypeDefUnion * ) MDR_TIMER2_UNION_BASE                                    )
#define MDR_TIMER3_UNION                                                             ( ( MDR_TIMER_TypeDefUnion * ) MDR_TIMER3_UNION_BASE                                    )

// TIMER Union functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void MDR_TIMER_Union_Enable( MDR_TIMER_TypeDefUnion *timer );
void MDR_TIMER_Union_Disable( MDR_TIMER_TypeDefUnion *timer );
void MDR_TIMER_Union_SetPrescaler( MDR_TIMER_TypeDefUnion *timer, uint16_t prescaler );
void MDR_TIMER_Union_SetAutoReload( MDR_TIMER_TypeDefUnion *timer, uint16_t reload );
void MDR_TIMER_Union_SetCounter( MDR_TIMER_TypeDefUnion *timer, uint16_t value );
uint16_t MDR_TIMER_Union_GetCounter( MDR_TIMER_TypeDefUnion *timer );
void MDR_TIMER_Union_SetDirectionUp( MDR_TIMER_TypeDefUnion *timer );
void MDR_TIMER_Union_SetDirectionDown( MDR_TIMER_TypeDefUnion *timer );
uint32_t MDR_TIMER_Union_GetStatus( MDR_TIMER_TypeDefUnion *timer );
void MDR_TIMER_Union_ClearStatus( MDR_TIMER_TypeDefUnion *timer, uint32_t status_mask );
void MDR_TIMER_Union_InterruptEnable( MDR_TIMER_TypeDefUnion *timer, uint32_t interrupt_mask );
void MDR_TIMER_Union_InterruptDisable( MDR_TIMER_TypeDefUnion *timer, uint32_t interrupt_mask );

// TIMER Milandr functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void MDR_TIMER_Enable( MDR_TIMER_TypeDef *timer );
void MDR_TIMER_Disable( MDR_TIMER_TypeDef *timer );
void MDR_TIMER_SetPrescaler( MDR_TIMER_TypeDef *timer, uint16_t prescaler );
void MDR_TIMER_SetAutoReload( MDR_TIMER_TypeDef *timer, uint16_t reload );
void MDR_TIMER_SetCounter( MDR_TIMER_TypeDef *timer, uint16_t value );
uint16_t MDR_TIMER_GetCounter( MDR_TIMER_TypeDef *timer );
void MDR_TIMER_SetDirectionUp( MDR_TIMER_TypeDef *timer );
void MDR_TIMER_SetDirectionDown( MDR_TIMER_TypeDef *timer );
uint32_t MDR_TIMER_GetStatus( MDR_TIMER_TypeDef *timer );
void MDR_TIMER_ClearStatus( MDR_TIMER_TypeDef *timer, uint32_t status_mask );
void MDR_TIMER_InterruptEnable( MDR_TIMER_TypeDef *timer, uint32_t interrupt_mask );
void MDR_TIMER_InterruptDisable( MDR_TIMER_TypeDef *timer, uint32_t interrupt_mask );

#endif