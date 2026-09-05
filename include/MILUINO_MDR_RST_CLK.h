#ifndef __MILUINO_MDR_RST_CLK_H
#define __MILUINO_MDR_RST_CLK_H

#include "MDR32F9Q2I.h"

// CLOCK_STATUS register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_POS                    0
#define MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_POS                    1
#define MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_POS                        2

#define MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_MSK                  ( 0x01 << MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_POS        )
#define MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_MSK                  ( 0x01 << MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_POS        )
#define MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_MSK                      ( 0x01 << MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_POS            )

#define MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_NOT_READY           ~( 0x01 << MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_POS        )
#define MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_READY                ( 0x01 << MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_POS        )

#define MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_NOT_READY           ~( 0x01 << MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_POS        )
#define MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_READY                ( 0x01 << MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_POS        )

#define MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_NOT_READY               ~( 0x01 << MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_POS            )
#define MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_READY                    ( 0x01 << MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_POS            )
// PLL_CONTROL register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_POS                      0
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_POS                     1
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_POS                      2
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_POS                     3
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_POS                     4
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_POS                     8

#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_MSK                    ( 0x01 << MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_POS          )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_MSK                   ( 0x01 << MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_MSK                    ( 0x01 << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_POS          )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_MSK                   ( 0x01 << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_MSK                   ( 0x0F << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_MSK                   ( 0x0F << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_POS         )

#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_ENABLE                 ( 0x01 << MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_POS          )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_DISABLE               ~( 0x01 << MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_POS          )

#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_ENABLE                ( 0x01 << MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_DISABLE              ~( 0x01 << MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_POS         )

#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_ENABLE                 ( 0x01 << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_POS          )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_DISABLE               ~( 0x01 << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_POS          )

#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_ENABLE                ( 0x01 << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_DISABLE              ~( 0x01 << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_POS         )

#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_1                    ~( 0x0F << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_4                     ( 0x03 << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_5                     ( 0x04 << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_6                     ( 0x05 << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_7                     ( 0x06 << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_8                     ( 0x07 << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_9                     ( 0x08 << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_10                    ( 0x09 << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_11                    ( 0x0A << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_12                    ( 0x0B << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_13                    ( 0x0C << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_14                    ( 0x0D << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_15                    ( 0x0E << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_16                    ( 0x0F << MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_POS         )

#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_1                    ~( 0x0F << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_4                     ( 0x03 << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_5                     ( 0x04 << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_6                     ( 0x05 << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_7                     ( 0x06 << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_8                     ( 0x07 << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_9                     ( 0x08 << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_10                    ( 0x09 << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_11                    ( 0x0A << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_12                    ( 0x0B << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_13                    ( 0x0C << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_14                    ( 0x0D << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_15                    ( 0x0E << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_POS         )
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_16                    ( 0x0F << MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_POS         )
// HS_CONTROL register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_HS_CONTROL_HSE_ON_POS                            0
#define MDR_RST_CLK_HS_CONTROL_HSE_BYP_POS                           1

#define MDR_RST_CLK_HS_CONTROL_HSE_ON_MSK                          ( 0x01 << MDR_RST_CLK_HS_CONTROL_HSE_ON_POS              )
#define MDR_RST_CLK_HS_CONTROL_HSE_BYP_MSK                         ( 0x01 << MDR_RST_CLK_HS_CONTROL_HSE_BYP_POS             )

#define MDR_RST_CLK_HS_CONTROL_HSE_ON_ENABLE                       ( 0x01 << MDR_RST_CLK_HS_CONTROL_HSE_ON_POS              )
#define MDR_RST_CLK_HS_CONTROL_HSE_ON_DISABLE                     ~( 0x01 << MDR_RST_CLK_HS_CONTROL_HSE_ON_POS              )

#define MDR_RST_CLK_HS_CONTROL_HSE_BYP_OSCILLATOR                 ~( 0x01 << MDR_RST_CLK_HS_CONTROL_HSE_BYP_POS             )
#define MDR_RST_CLK_HS_CONTROL_HSE_BYP_GENERATOR                   ( 0x01 << MDR_RST_CLK_HS_CONTROL_HSE_BYP_POS             )
// CPU_CLOCK register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_CPU_CLOCK_CPU_C1_SEL_POS                         0
#define MDR_RST_CLK_CPU_CLOCK_CPU_C2_SEL_POS                         2
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_SEL_POS                         4
#define MDR_RST_CLK_CPU_CLOCK_HCLK_SEL_POS                           8

#define MDR_RST_CLK_CPU_CLOCK_CPU_C1_SEL_MSK                       ( 0x03 << MDR_RST_CLK_CPU_CLOCK_CPU_C1_SEL_POS           )
#define MDR_RST_CLK_CPU_CLOCK_CPU_C2_SEL_MSK                       ( 0x01 << MDR_RST_CLK_CPU_CLOCK_CPU_C2_SEL_POS           )
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_SEL_MSK                       ( 0x0F << MDR_RST_CLK_CPU_CLOCK_CPU_C3_SEL_POS           )
#define MDR_RST_CLK_CPU_CLOCK_HCLK_SEL_MSK                         ( 0x03 << MDR_RST_CLK_CPU_CLOCK_HCLK_SEL_POS             )

#define MDR_RST_CLK_CPU_CLOCK_CPU_C1_HSI                          ~( 0x03 << MDR_RST_CLK_CPU_CLOCK_CPU_C1_SEL_POS           )
#define MDR_RST_CLK_CPU_CLOCK_CPU_C1_HSI_DIV_2                     ( 0x01 << MDR_RST_CLK_CPU_CLOCK_CPU_C1_SEL_POS           )
#define MDR_RST_CLK_CPU_CLOCK_CPU_C1_HSE                           ( 0x02 << MDR_RST_CLK_CPU_CLOCK_CPU_C1_SEL_POS           )
#define MDR_RST_CLK_CPU_CLOCK_CPU_C1_HSE_DIV_2                     ( 0x03 << MDR_RST_CLK_CPU_CLOCK_CPU_C1_SEL_POS           )

#define MDR_RST_CLK_CPU_CLOCK_CPU_C2_CPU_C1                       ~( 0x01 << MDR_RST_CLK_CPU_CLOCK_CPU_C2_SEL_POS           )
#define MDR_RST_CLK_CPU_CLOCK_CPU_C2_PLL_CPU                       ( 0x01 << MDR_RST_CLK_CPU_CLOCK_CPU_C2_SEL_POS           )

#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_1                        ~( 0x0F << MDR_RST_CLK_CPU_CLOCK_CPU_C3_SEL_POS           )
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_2                         ( 0x08 << MDR_RST_CLK_CPU_CLOCK_CPU_C3_SEL_POS           )
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_4                         ( 0x09 << MDR_RST_CLK_CPU_CLOCK_CPU_C3_SEL_POS           )
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_8                         ( 0x0A << MDR_RST_CLK_CPU_CLOCK_CPU_C3_SEL_POS           )
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_16                        ( 0x0B << MDR_RST_CLK_CPU_CLOCK_CPU_C3_SEL_POS           )
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_32                        ( 0x0C << MDR_RST_CLK_CPU_CLOCK_CPU_C3_SEL_POS           )
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_64                        ( 0x0D << MDR_RST_CLK_CPU_CLOCK_CPU_C3_SEL_POS           )
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_128                       ( 0x0E << MDR_RST_CLK_CPU_CLOCK_CPU_C3_SEL_POS           )
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_256                       ( 0x0F << MDR_RST_CLK_CPU_CLOCK_CPU_C3_SEL_POS           )

#define MDR_RST_CLK_CPU_CLOCK_HCLK_HSI                            ~( 0x03 << MDR_RST_CLK_CPU_CLOCK_HCLK_SEL_POS             )
#define MDR_RST_CLK_CPU_CLOCK_HCLK_CPU_C3                          ( 0x01 << MDR_RST_CLK_CPU_CLOCK_HCLK_SEL_POS             )
#define MDR_RST_CLK_CPU_CLOCK_HCLK_LSE                             ( 0x02 << MDR_RST_CLK_CPU_CLOCK_HCLK_SEL_POS             )
#define MDR_RST_CLK_CPU_CLOCK_HCLK_LSI                             ( 0x03 << MDR_RST_CLK_CPU_CLOCK_HCLK_SEL_POS             )
// USB_CLOCK register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_USB_CLOCK_USB_C1_SEL_POS                         0
#define MDR_RST_CLK_USB_CLOCK_USB_C2_SEL_POS                         2
#define MDR_RST_CLK_USB_CLOCK_USB_C3_SEL_POS                         4
#define MDR_RST_CLK_USB_CLOCK_USB_CLK_EN_POS                         8

#define MDR_RST_CLK_USB_CLOCK_USB_C1_SEL_MSK                       ( 0x03 << MDR_RST_CLK_USB_CLOCK_USB_C1_SEL_POS           )
#define MDR_RST_CLK_USB_CLOCK_USB_C2_SEL_MSK                       ( 0x01 << MDR_RST_CLK_USB_CLOCK_USB_C2_SEL_POS           )
#define MDR_RST_CLK_USB_CLOCK_USB_C3_SEL_MSK                       ( 0x01 << MDR_RST_CLK_USB_CLOCK_USB_C3_SEL_POS           )
#define MDR_RST_CLK_USB_CLOCK_USB_CLK_EN_MSK                       ( 0x01 << MDR_RST_CLK_USB_CLOCK_USB_CLK_EN_POS           )

#define MDR_RST_CLK_USB_CLOCK_USB_C1_HSI                          ~( 0x03 << MDR_RST_CLK_USB_CLOCK_USB_C1_SEL_POS           )
#define MDR_RST_CLK_USB_CLOCK_USB_C1_HSI_DIV_2                     ( 0x01 << MDR_RST_CLK_USB_CLOCK_USB_C1_SEL_POS           )
#define MDR_RST_CLK_USB_CLOCK_USB_C1_HSE                           ( 0x02 << MDR_RST_CLK_USB_CLOCK_USB_C1_SEL_POS           )
#define MDR_RST_CLK_USB_CLOCK_USB_C1_HSE_DIV_2                     ( 0x03 << MDR_RST_CLK_USB_CLOCK_USB_C1_SEL_POS           )

#define MDR_RST_CLK_USB_CLOCK_USB_C2_USB_C1                       ~( 0x01 << MDR_RST_CLK_USB_CLOCK_USB_C2_SEL_POS           )
#define MDR_RST_CLK_USB_CLOCK_USB_C2_PLL_USB                       ( 0x01 << MDR_RST_CLK_USB_CLOCK_USB_C2_SEL_POS           )

#define MDR_RST_CLK_USB_CLOCK_USB_C3_DIV_1                        ~( 0x01 << MDR_RST_CLK_USB_CLOCK_USB_C3_SEL_POS           )
#define MDR_RST_CLK_USB_CLOCK_USB_C3_DIV_2                         ( 0x01 << MDR_RST_CLK_USB_CLOCK_USB_C3_SEL_POS           )

#define MDR_RST_CLK_USB_CLOCK_USB_CLK_DISABLE                    ~( 0x01 << MDR_RST_CLK_USB_CLOCK_USB_CLK_EN_POS            )
#define MDR_RST_CLK_USB_CLOCK_USB_CLK_ENABLE                      ( 0x01 << MDR_RST_CLK_USB_CLOCK_USB_CLK_EN_POS            )
// ADC_MCO_CLOCK register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_SEL_POS                     0
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_SEL_POS                     4
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_SEL_POS                     8
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_CLK_EN_POS                    13

#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_SEL_MSK                   ( 0x03 << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_SEL_POS       )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_SEL_MSK                   ( 0x03 << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_SEL_POS       )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_SEL_MSK                   ( 0x0F << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_SEL_POS       )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_CLK_EN_MSK                   ( 0x01 << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_CLK_EN_POS       )

#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_CPU_C1                   ~( 0x03 << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_SEL_POS       )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_USB_C1                    ( 0x01 << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_SEL_POS       )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_CPU_C2                    ( 0x02 << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_SEL_POS       )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_USB_C2                    ( 0x03 << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_SEL_POS       )

#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_LSE                      ~( 0x03 << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_SEL_POS       )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_LSI                       ( 0x01 << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_SEL_POS       )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_ADC_C1                    ( 0x02 << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_SEL_POS       )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_HSI_C1                    ( 0x03 << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_SEL_POS       )

#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_1                    ~( 0x0F << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_SEL_POS       )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_2                     ( 0x08 << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_SEL_POS       )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_4                     ( 0x09 << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_SEL_POS       )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_8                     ( 0x0A << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_SEL_POS       )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_16                    ( 0x0B << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_SEL_POS       )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_32                    ( 0x0C << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_SEL_POS       )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_64                    ( 0x0D << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_SEL_POS       )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_128                   ( 0x0E << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_SEL_POS       )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_256                   ( 0x0F << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_SEL_POS       )

#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_CLK_DISABLE                ~( 0x01 << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_CLK_EN_POS        )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_CLK_ENABLE                  ( 0x01 << MDR_RST_CLK_ADC_MCO_CLOCK_ADC_CLK_EN_POS        )
// RTC_CLOCK register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_SEL_POS                         0
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_SEL_POS                         4
#define MDR_RST_CLK_RTC_CLOCK_HSE_RTC_EN_POS                         8
#define MDR_RST_CLK_RTC_CLOCK_HSI_RTC_EN_POS                         9

#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_SEL_MSK                       ( 0x0F << MDR_RST_CLK_RTC_CLOCK_HSE_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_SEL_MSK                       ( 0x0F << MDR_RST_CLK_RTC_CLOCK_HSI_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSE_RTC_EN_MSK                       ( 0x01 << MDR_RST_CLK_RTC_CLOCK_HSE_RTC_EN_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSI_RTC_EN_MSK                       ( 0x01 << MDR_RST_CLK_RTC_CLOCK_HSI_RTC_EN_POS           )

#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_1                        ~( 0x0F << MDR_RST_CLK_RTC_CLOCK_HSE_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_2                         ( 0x08 << MDR_RST_CLK_RTC_CLOCK_HSE_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_4                         ( 0x09 << MDR_RST_CLK_RTC_CLOCK_HSE_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_8                         ( 0x0A << MDR_RST_CLK_RTC_CLOCK_HSE_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_16                        ( 0x0B << MDR_RST_CLK_RTC_CLOCK_HSE_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_32                        ( 0x0C << MDR_RST_CLK_RTC_CLOCK_HSE_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_64                        ( 0x0D << MDR_RST_CLK_RTC_CLOCK_HSE_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_128                       ( 0x0E << MDR_RST_CLK_RTC_CLOCK_HSE_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_256                       ( 0x0F << MDR_RST_CLK_RTC_CLOCK_HSE_C1_SEL_POS           )

#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_1                        ~( 0x0F << MDR_RST_CLK_RTC_CLOCK_HSI_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_2                         ( 0x08 << MDR_RST_CLK_RTC_CLOCK_HSI_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_4                         ( 0x09 << MDR_RST_CLK_RTC_CLOCK_HSI_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_8                         ( 0x0A << MDR_RST_CLK_RTC_CLOCK_HSI_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_16                        ( 0x0B << MDR_RST_CLK_RTC_CLOCK_HSI_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_32                        ( 0x0C << MDR_RST_CLK_RTC_CLOCK_HSI_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_64                        ( 0x0D << MDR_RST_CLK_RTC_CLOCK_HSI_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_128                       ( 0x0E << MDR_RST_CLK_RTC_CLOCK_HSI_C1_SEL_POS           )
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_256                       ( 0x0F << MDR_RST_CLK_RTC_CLOCK_HSI_C1_SEL_POS           )

#define MDR_RST_CLK_RTC_CLOCK_HSE_RTC_DISABLE                    ~( 0x01 << MDR_RST_CLK_RTC_CLOCK_HSE_RTC_EN_POS            )
#define MDR_RST_CLK_RTC_CLOCK_HSE_RTC_ENABLE                      ( 0x01 << MDR_RST_CLK_RTC_CLOCK_HSE_RTC_EN_POS            )

#define MDR_RST_CLK_RTC_CLOCK_HSI_RTC_DISABLE                    ~( 0x01 << MDR_RST_CLK_RTC_CLOCK_HSI_RTC_EN_POS            )
#define MDR_RST_CLK_RTC_CLOCK_HSI_RTC_ENABLE                      ( 0x01 << MDR_RST_CLK_RTC_CLOCK_HSI_RTC_EN_POS            )
// PER_CLOCK register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_PER_CLOCK_CAN1_POS                               0
#define MDR_RST_CLK_PER_CLOCK_CAN2_POS                               1
#define MDR_RST_CLK_PER_CLOCK_USB_POS                                2
#define MDR_RST_CLK_PER_CLOCK_EEPROM_CNTRL_POS                       3
#define MDR_RST_CLK_PER_CLOCK_RST_CLK_POS                            4
#define MDR_RST_CLK_PER_CLOCK_DMA_POS                                5
#define MDR_RST_CLK_PER_CLOCK_UART1_POS                              6
#define MDR_RST_CLK_PER_CLOCK_UART2_POS                              7
#define MDR_RST_CLK_PER_CLOCK_SSP1_POS                               8
#define MDR_RST_CLK_PER_CLOCK_I2C1_POS                              10
#define MDR_RST_CLK_PER_CLOCK_POWER_POS                             11
#define MDR_RST_CLK_PER_CLOCK_WWDG_POS                              12
#define MDR_RST_CLK_PER_CLOCK_IWDG_POS                              13
#define MDR_RST_CLK_PER_CLOCK_TIMER1_POS                            14
#define MDR_RST_CLK_PER_CLOCK_TIMER2_POS                            15
#define MDR_RST_CLK_PER_CLOCK_TIMER3_POS                            16
#define MDR_RST_CLK_PER_CLOCK_ADC_POS                               17
#define MDR_RST_CLK_PER_CLOCK_DAC_POS                               18
#define MDR_RST_CLK_PER_CLOCK_COMP_POS                              19
#define MDR_RST_CLK_PER_CLOCK_SSP2_POS                              20
#define MDR_RST_CLK_PER_CLOCK_PORTA_POS                             21
#define MDR_RST_CLK_PER_CLOCK_PORTB_POS                             22
#define MDR_RST_CLK_PER_CLOCK_PORTC_POS                             23
#define MDR_RST_CLK_PER_CLOCK_PORTD_POS                             24
#define MDR_RST_CLK_PER_CLOCK_PORTE_POS                             25
#define MDR_RST_CLK_PER_CLOCK_BKP_POS                               27
#define MDR_RST_CLK_PER_CLOCK_PORTF_POS                             29
#define MDR_RST_CLK_PER_CLOCK_EXT_BUS_CNTRL_POS                     30

#define MDR_RST_CLK_PER_CLOCK_CAN1_MSK                             ( 0x01 << MDR_RST_CLK_PER_CLOCK_CAN1_POS                 )
#define MDR_RST_CLK_PER_CLOCK_CAN2_MSK                             ( 0x01 << MDR_RST_CLK_PER_CLOCK_CAN2_POS                 )
#define MDR_RST_CLK_PER_CLOCK_USB_MSK                              ( 0x01 << MDR_RST_CLK_PER_CLOCK_USB_POS                  )
#define MDR_RST_CLK_PER_CLOCK_EEPROM_CNTRL_MSK                     ( 0x01 << MDR_RST_CLK_PER_CLOCK_EEPROM_CNTRL_POS         )
#define MDR_RST_CLK_PER_CLOCK_RST_CLK_MSK                          ( 0x01 << MDR_RST_CLK_PER_CLOCK_RST_CLK_POS              )
#define MDR_RST_CLK_PER_CLOCK_DMA_MSK                              ( 0x01 << MDR_RST_CLK_PER_CLOCK_DMA_POS                  )
#define MDR_RST_CLK_PER_CLOCK_UART1_MSK                            ( 0x01 << MDR_RST_CLK_PER_CLOCK_UART1_POS                )
#define MDR_RST_CLK_PER_CLOCK_UART2_MSK                            ( 0x01 << MDR_RST_CLK_PER_CLOCK_UART2_POS                )
#define MDR_RST_CLK_PER_CLOCK_SSP1_MSK                             ( 0x01 << MDR_RST_CLK_PER_CLOCK_SSP1_POS                 )
#define MDR_RST_CLK_PER_CLOCK_I2C1_MSK                             ( 0x01 << MDR_RST_CLK_PER_CLOCK_I2C1_POS                 )
#define MDR_RST_CLK_PER_CLOCK_POWER_MSK                            ( 0x01 << MDR_RST_CLK_PER_CLOCK_POWER_POS                )
#define MDR_RST_CLK_PER_CLOCK_WWDG_MSK                             ( 0x01 << MDR_RST_CLK_PER_CLOCK_WWDG_POS                 )
#define MDR_RST_CLK_PER_CLOCK_IWDG_MSK                             ( 0x01 << MDR_RST_CLK_PER_CLOCK_IWDG_POS                 )
#define MDR_RST_CLK_PER_CLOCK_TIMER1_MSK                           ( 0x01 << MDR_RST_CLK_PER_CLOCK_TIMER1_POS               )
#define MDR_RST_CLK_PER_CLOCK_TIMER2_MSK                           ( 0x01 << MDR_RST_CLK_PER_CLOCK_TIMER2_POS               )
#define MDR_RST_CLK_PER_CLOCK_TIMER3_MSK                           ( 0x01 << MDR_RST_CLK_PER_CLOCK_TIMER3_POS               )
#define MDR_RST_CLK_PER_CLOCK_ADC_MSK                              ( 0x01 << MDR_RST_CLK_PER_CLOCK_ADC_POS                  )
#define MDR_RST_CLK_PER_CLOCK_DAC_MSK                              ( 0x01 << MDR_RST_CLK_PER_CLOCK_DAC_POS                  )
#define MDR_RST_CLK_PER_CLOCK_COMP_MSK                             ( 0x01 << MDR_RST_CLK_PER_CLOCK_COMP_POS                 )
#define MDR_RST_CLK_PER_CLOCK_SSP2_MSK                             ( 0x01 << MDR_RST_CLK_PER_CLOCK_SSP2_POS                 )
#define MDR_RST_CLK_PER_CLOCK_PORTA_MSK                            ( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTA_POS                )
#define MDR_RST_CLK_PER_CLOCK_PORTB_MSK                            ( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTB_POS                )
#define MDR_RST_CLK_PER_CLOCK_PORTC_MSK                            ( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTC_POS                )
#define MDR_RST_CLK_PER_CLOCK_PORTD_MSK                            ( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTD_POS                )
#define MDR_RST_CLK_PER_CLOCK_PORTE_MSK                            ( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTE_POS                )
#define MDR_RST_CLK_PER_CLOCK_BKP_MSK                              ( 0x01 << MDR_RST_CLK_PER_CLOCK_BKP_POS                  )
#define MDR_RST_CLK_PER_CLOCK_PORTF_MSK                            ( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTF_POS                )
#define MDR_RST_CLK_PER_CLOCK_EXT_BUS_CNTRL_MSK                    ( 0x01 << MDR_RST_CLK_PER_CLOCK_EXT_BUS_CNTRL_POS        )

#define MDR_RST_CLK_PER_CLOCK_CAN1_ENABLE                          ( 0x01 << MDR_RST_CLK_PER_CLOCK_CAN1_POS                 )
#define MDR_RST_CLK_PER_CLOCK_CAN2_ENABLE                          ( 0x01 << MDR_RST_CLK_PER_CLOCK_CAN2_POS                 )
#define MDR_RST_CLK_PER_CLOCK_USB_ENABLE                           ( 0x01 << MDR_RST_CLK_PER_CLOCK_USB_POS                  )
#define MDR_RST_CLK_PER_CLOCK_EEPROM_CNTRL_ENABLE                  ( 0x01 << MDR_RST_CLK_PER_CLOCK_EEPROM_CNTRL_POS         )
#define MDR_RST_CLK_PER_CLOCK_RST_CLK_ENABLE                       ( 0x01 << MDR_RST_CLK_PER_CLOCK_RST_CLK_POS              )
#define MDR_RST_CLK_PER_CLOCK_DMA_ENABLE                           ( 0x01 << MDR_RST_CLK_PER_CLOCK_DMA_POS                  )
#define MDR_RST_CLK_PER_CLOCK_UART1_ENABLE                         ( 0x01 << MDR_RST_CLK_PER_CLOCK_UART1_POS                )
#define MDR_RST_CLK_PER_CLOCK_UART2_ENABLE                         ( 0x01 << MDR_RST_CLK_PER_CLOCK_UART2_POS                )
#define MDR_RST_CLK_PER_CLOCK_SSP1_ENABLE                          ( 0x01 << MDR_RST_CLK_PER_CLOCK_SSP1_POS                 )
#define MDR_RST_CLK_PER_CLOCK_I2C1_ENABLE                          ( 0x01 << MDR_RST_CLK_PER_CLOCK_I2C1_POS                 )
#define MDR_RST_CLK_PER_CLOCK_POWER_ENABLE                         ( 0x01 << MDR_RST_CLK_PER_CLOCK_POWER_POS                )
#define MDR_RST_CLK_PER_CLOCK_WWDG_ENABLE                          ( 0x01 << MDR_RST_CLK_PER_CLOCK_WWDG_POS                 )
#define MDR_RST_CLK_PER_CLOCK_IWDG_ENABLE                          ( 0x01 << MDR_RST_CLK_PER_CLOCK_IWDG_POS                 )
#define MDR_RST_CLK_PER_CLOCK_TIMER1_ENABLE                        ( 0x01 << MDR_RST_CLK_PER_CLOCK_TIMER1_POS               )
#define MDR_RST_CLK_PER_CLOCK_TIMER2_ENABLE                        ( 0x01 << MDR_RST_CLK_PER_CLOCK_TIMER2_POS               )
#define MDR_RST_CLK_PER_CLOCK_TIMER3_ENABLE                        ( 0x01 << MDR_RST_CLK_PER_CLOCK_TIMER3_POS               )
#define MDR_RST_CLK_PER_CLOCK_ADC_ENABLE                           ( 0x01 << MDR_RST_CLK_PER_CLOCK_ADC_POS                  )
#define MDR_RST_CLK_PER_CLOCK_DAC_ENABLE                           ( 0x01 << MDR_RST_CLK_PER_CLOCK_DAC_POS                  )
#define MDR_RST_CLK_PER_CLOCK_COMP_ENABLE                          ( 0x01 << MDR_RST_CLK_PER_CLOCK_COMP_POS                 )
#define MDR_RST_CLK_PER_CLOCK_SSP2_ENABLE                          ( 0x01 << MDR_RST_CLK_PER_CLOCK_SSP2_POS                 )
#define MDR_RST_CLK_PER_CLOCK_PORTA_ENABLE                         ( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTA_POS                )
#define MDR_RST_CLK_PER_CLOCK_PORTB_ENABLE                         ( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTB_POS                )
#define MDR_RST_CLK_PER_CLOCK_PORTC_ENABLE                         ( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTC_POS                )
#define MDR_RST_CLK_PER_CLOCK_PORTD_ENABLE                         ( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTD_POS                )
#define MDR_RST_CLK_PER_CLOCK_PORTE_ENABLE                         ( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTE_POS                )
#define MDR_RST_CLK_PER_CLOCK_BKP_ENABLE                           ( 0x01 << MDR_RST_CLK_PER_CLOCK_BKP_POS                  )
#define MDR_RST_CLK_PER_CLOCK_PORTF_ENABLE                         ( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTF_POS                )
#define MDR_RST_CLK_PER_CLOCK_EXT_BUS_CNTRL_ENABLE                 ( 0x01 << MDR_RST_CLK_PER_CLOCK_EXT_BUS_CNTRL_POS        )

#define MDR_RST_CLK_PER_CLOCK_CAN1_DISABLE                        ~( 0x01 << MDR_RST_CLK_PER_CLOCK_CAN1_POS                 )
#define MDR_RST_CLK_PER_CLOCK_CAN2_DISABLE                        ~( 0x01 << MDR_RST_CLK_PER_CLOCK_CAN2_POS                 )
#define MDR_RST_CLK_PER_CLOCK_USB_DISABLE                         ~( 0x01 << MDR_RST_CLK_PER_CLOCK_USB_POS                  )
#define MDR_RST_CLK_PER_CLOCK_EEPROM_CNTRL_DISABLE                ~( 0x01 << MDR_RST_CLK_PER_CLOCK_EEPROM_CNTRL_POS         )
#define MDR_RST_CLK_PER_CLOCK_RST_CLK_DISABLE                     ~( 0x01 << MDR_RST_CLK_PER_CLOCK_RST_CLK_POS              )
#define MDR_RST_CLK_PER_CLOCK_DMA_DISABLE                         ~( 0x01 << MDR_RST_CLK_PER_CLOCK_DMA_POS                  )
#define MDR_RST_CLK_PER_CLOCK_UART1_DISABLE                       ~( 0x01 << MDR_RST_CLK_PER_CLOCK_UART1_POS                )
#define MDR_RST_CLK_PER_CLOCK_UART2_DISABLE                       ~( 0x01 << MDR_RST_CLK_PER_CLOCK_UART2_POS                )
#define MDR_RST_CLK_PER_CLOCK_SSP1_DISABLE                        ~( 0x01 << MDR_RST_CLK_PER_CLOCK_SSP1_POS                 )
#define MDR_RST_CLK_PER_CLOCK_I2C1_DISABLE                        ~( 0x01 << MDR_RST_CLK_PER_CLOCK_I2C1_POS                 )
#define MDR_RST_CLK_PER_CLOCK_POWER_DISABLE                       ~( 0x01 << MDR_RST_CLK_PER_CLOCK_POWER_POS                )
#define MDR_RST_CLK_PER_CLOCK_WWDG_DISABLE                        ~( 0x01 << MDR_RST_CLK_PER_CLOCK_WWDG_POS                 )
#define MDR_RST_CLK_PER_CLOCK_IWDG_DISABLE                        ~( 0x01 << MDR_RST_CLK_PER_CLOCK_IWDG_POS                 )
#define MDR_RST_CLK_PER_CLOCK_TIMER1_DISABLE                      ~( 0x01 << MDR_RST_CLK_PER_CLOCK_TIMER1_POS               )
#define MDR_RST_CLK_PER_CLOCK_TIMER2_DISABLE                      ~( 0x01 << MDR_RST_CLK_PER_CLOCK_TIMER2_POS               )
#define MDR_RST_CLK_PER_CLOCK_TIMER3_DISABLE                      ~( 0x01 << MDR_RST_CLK_PER_CLOCK_TIMER3_POS               )
#define MDR_RST_CLK_PER_CLOCK_ADC_DISABLE                         ~( 0x01 << MDR_RST_CLK_PER_CLOCK_ADC_POS                  )
#define MDR_RST_CLK_PER_CLOCK_DAC_DISABLE                         ~( 0x01 << MDR_RST_CLK_PER_CLOCK_DAC_POS                  )
#define MDR_RST_CLK_PER_CLOCK_COMP_DISABLE                        ~( 0x01 << MDR_RST_CLK_PER_CLOCK_COMP_POS                 )
#define MDR_RST_CLK_PER_CLOCK_SSP2_DISABLE                        ~( 0x01 << MDR_RST_CLK_PER_CLOCK_SSP2_POS                 )
#define MDR_RST_CLK_PER_CLOCK_PORTA_DISABLE                       ~( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTA_POS                )
#define MDR_RST_CLK_PER_CLOCK_PORTB_DISABLE                       ~( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTB_POS                )
#define MDR_RST_CLK_PER_CLOCK_PORTC_DISABLE                       ~( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTC_POS                )
#define MDR_RST_CLK_PER_CLOCK_PORTD_DISABLE                       ~( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTD_POS                )
#define MDR_RST_CLK_PER_CLOCK_PORTE_DISABLE                       ~( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTE_POS                )
#define MDR_RST_CLK_PER_CLOCK_BKP_DISABLE                         ~( 0x01 << MDR_RST_CLK_PER_CLOCK_BKP_POS                  )
#define MDR_RST_CLK_PER_CLOCK_PORTF_DISABLE                       ~( 0x01 << MDR_RST_CLK_PER_CLOCK_PORTF_POS                )
#define MDR_RST_CLK_PER_CLOCK_EXT_BUS_CNTRL_DISABLE               ~( 0x01 << MDR_RST_CLK_PER_CLOCK_EXT_BUS_CNTRL_POS        )
// CAN_CLOCK register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_CAN_CLOCK_CAN1_BRG_POS                           0
#define MDR_RST_CLK_CAN_CLOCK_CAN2_BRG_POS                           8
#define MDR_RST_CLK_CAN_CLOCK_CAN1_CLK_EN_POS                       24
#define MDR_RST_CLK_CAN_CLOCK_CAN2_CLK_EN_POS                       25

#define MDR_RST_CLK_CAN_CLOCK_CAN1_BRG_MSK                         ( 0xFF << MDR_RST_CLK_CAN_CLOCK_CAN1_BRG_POS             )
#define MDR_RST_CLK_CAN_CLOCK_CAN2_BRG_MSK                         ( 0xFF << MDR_RST_CLK_CAN_CLOCK_CAN2_BRG_POS             )
#define MDR_RST_CLK_CAN_CLOCK_CAN1_CLK_EN_MSK                      ( 0x01 << MDR_RST_CLK_CAN_CLOCK_CAN1_CLK_EN_POS          )
#define MDR_RST_CLK_CAN_CLOCK_CAN2_CLK_EN_MSK                      ( 0x01 << MDR_RST_CLK_CAN_CLOCK_CAN2_CLK_EN_POS          )

#define MDR_RST_CLK_CAN_CLOCK_CAN1_DIV_1                          ~( 0xFF << MDR_RST_CLK_CAN_CLOCK_CAN1_BRG_POS             )
#define MDR_RST_CLK_CAN_CLOCK_CAN1_DIV_2                           ( 0x01 << MDR_RST_CLK_CAN_CLOCK_CAN1_BRG_POS             )
#define MDR_RST_CLK_CAN_CLOCK_CAN1_DIV_4                           ( 0x02 << MDR_RST_CLK_CAN_CLOCK_CAN1_BRG_POS             )
#define MDR_RST_CLK_CAN_CLOCK_CAN1_DIV_8                           ( 0x03 << MDR_RST_CLK_CAN_CLOCK_CAN1_BRG_POS             )
#define MDR_RST_CLK_CAN_CLOCK_CAN1_DIV_16                          ( 0x04 << MDR_RST_CLK_CAN_CLOCK_CAN1_BRG_POS             )
#define MDR_RST_CLK_CAN_CLOCK_CAN1_DIV_32                          ( 0x05 << MDR_RST_CLK_CAN_CLOCK_CAN1_BRG_POS             )
#define MDR_RST_CLK_CAN_CLOCK_CAN1_DIV_64                          ( 0x06 << MDR_RST_CLK_CAN_CLOCK_CAN1_BRG_POS             )
#define MDR_RST_CLK_CAN_CLOCK_CAN1_DIV_128                         ( 0x07 << MDR_RST_CLK_CAN_CLOCK_CAN1_BRG_POS             )

#define MDR_RST_CLK_CAN_CLOCK_CAN2_DIV_1                          ~( 0xFF << MDR_RST_CLK_CAN_CLOCK_CAN2_BRG_POS             )
#define MDR_RST_CLK_CAN_CLOCK_CAN2_DIV_2                           ( 0x01 << MDR_RST_CLK_CAN_CLOCK_CAN2_BRG_POS             )
#define MDR_RST_CLK_CAN_CLOCK_CAN2_DIV_4                           ( 0x02 << MDR_RST_CLK_CAN_CLOCK_CAN2_BRG_POS             )
#define MDR_RST_CLK_CAN_CLOCK_CAN2_DIV_8                           ( 0x03 << MDR_RST_CLK_CAN_CLOCK_CAN2_BRG_POS             )
#define MDR_RST_CLK_CAN_CLOCK_CAN2_DIV_16                          ( 0x04 << MDR_RST_CLK_CAN_CLOCK_CAN2_BRG_POS             )
#define MDR_RST_CLK_CAN_CLOCK_CAN2_DIV_32                          ( 0x05 << MDR_RST_CLK_CAN_CLOCK_CAN2_BRG_POS             )
#define MDR_RST_CLK_CAN_CLOCK_CAN2_DIV_64                          ( 0x06 << MDR_RST_CLK_CAN_CLOCK_CAN2_BRG_POS             )
#define MDR_RST_CLK_CAN_CLOCK_CAN2_DIV_128                         ( 0x07 << MDR_RST_CLK_CAN_CLOCK_CAN2_BRG_POS             )

#define MDR_RST_CLK_CAN_CLOCK_CAN1_CLK_DISABLE                   ~( 0x01 << MDR_RST_CLK_CAN_CLOCK_CAN1_CLK_EN_POS           )
#define MDR_RST_CLK_CAN_CLOCK_CAN1_CLK_ENABLE                     ( 0x01 << MDR_RST_CLK_CAN_CLOCK_CAN1_CLK_EN_POS           )

#define MDR_RST_CLK_CAN_CLOCK_CAN2_CLK_DISABLE                   ~( 0x01 << MDR_RST_CLK_CAN_CLOCK_CAN2_CLK_EN_POS           )
#define MDR_RST_CLK_CAN_CLOCK_CAN2_CLK_ENABLE                     ( 0x01 << MDR_RST_CLK_CAN_CLOCK_CAN2_CLK_EN_POS           )
// TIM_CLOCK register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_TIM_CLOCK_TIM1_BRG_POS                           0
#define MDR_RST_CLK_TIM_CLOCK_TIM2_BRG_POS                           8
#define MDR_RST_CLK_TIM_CLOCK_TIM3_BRG_POS                          16
#define MDR_RST_CLK_TIM_CLOCK_TIM1_CLK_EN_POS                       24
#define MDR_RST_CLK_TIM_CLOCK_TIM2_CLK_EN_POS                       25
#define MDR_RST_CLK_TIM_CLOCK_TIM3_CLK_EN_POS                       26

#define MDR_RST_CLK_TIM_CLOCK_TIM1_BRG_MSK                         ( 0xFF << MDR_RST_CLK_TIM_CLOCK_TIM1_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM2_BRG_MSK                         ( 0xFF << MDR_RST_CLK_TIM_CLOCK_TIM2_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM3_BRG_MSK                         ( 0xFF << MDR_RST_CLK_TIM_CLOCK_TIM3_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM1_CLK_EN_MSK                      ( 0x01 << MDR_RST_CLK_TIM_CLOCK_TIM1_CLK_EN_POS          )
#define MDR_RST_CLK_TIM_CLOCK_TIM2_CLK_EN_MSK                      ( 0x01 << MDR_RST_CLK_TIM_CLOCK_TIM2_CLK_EN_POS          )
#define MDR_RST_CLK_TIM_CLOCK_TIM3_CLK_EN_MSK                      ( 0x01 << MDR_RST_CLK_TIM_CLOCK_TIM3_CLK_EN_POS          )

#define MDR_RST_CLK_TIM_CLOCK_TIM1_DIV_1                          ~( 0xFF << MDR_RST_CLK_TIM_CLOCK_TIM1_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM1_DIV_2                           ( 0x01 << MDR_RST_CLK_TIM_CLOCK_TIM1_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM1_DIV_4                           ( 0x02 << MDR_RST_CLK_TIM_CLOCK_TIM1_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM1_DIV_8                           ( 0x03 << MDR_RST_CLK_TIM_CLOCK_TIM1_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM1_DIV_16                          ( 0x04 << MDR_RST_CLK_TIM_CLOCK_TIM1_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM1_DIV_32                          ( 0x05 << MDR_RST_CLK_TIM_CLOCK_TIM1_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM1_DIV_64                          ( 0x06 << MDR_RST_CLK_TIM_CLOCK_TIM1_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM1_DIV_128                         ( 0x07 << MDR_RST_CLK_TIM_CLOCK_TIM1_BRG_POS             )

#define MDR_RST_CLK_TIM_CLOCK_TIM2_DIV_1                          ~( 0xFF << MDR_RST_CLK_TIM_CLOCK_TIM2_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM2_DIV_2                           ( 0x01 << MDR_RST_CLK_TIM_CLOCK_TIM2_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM2_DIV_4                           ( 0x02 << MDR_RST_CLK_TIM_CLOCK_TIM2_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM2_DIV_8                           ( 0x03 << MDR_RST_CLK_TIM_CLOCK_TIM2_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM2_DIV_16                          ( 0x04 << MDR_RST_CLK_TIM_CLOCK_TIM2_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM2_DIV_32                          ( 0x05 << MDR_RST_CLK_TIM_CLOCK_TIM2_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM2_DIV_64                          ( 0x06 << MDR_RST_CLK_TIM_CLOCK_TIM2_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM2_DIV_128                         ( 0x07 << MDR_RST_CLK_TIM_CLOCK_TIM2_BRG_POS             )

#define MDR_RST_CLK_TIM_CLOCK_TIM3_DIV_1                          ~( 0xFF << MDR_RST_CLK_TIM_CLOCK_TIM3_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM3_DIV_2                           ( 0x01 << MDR_RST_CLK_TIM_CLOCK_TIM3_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM3_DIV_4                           ( 0x02 << MDR_RST_CLK_TIM_CLOCK_TIM3_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM3_DIV_8                           ( 0x03 << MDR_RST_CLK_TIM_CLOCK_TIM3_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM3_DIV_16                          ( 0x04 << MDR_RST_CLK_TIM_CLOCK_TIM3_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM3_DIV_32                          ( 0x05 << MDR_RST_CLK_TIM_CLOCK_TIM3_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM3_DIV_64                          ( 0x06 << MDR_RST_CLK_TIM_CLOCK_TIM3_BRG_POS             )
#define MDR_RST_CLK_TIM_CLOCK_TIM3_DIV_128                         ( 0x07 << MDR_RST_CLK_TIM_CLOCK_TIM3_BRG_POS             )

#define MDR_RST_CLK_TIM_CLOCK_TIM1_CLK_DISABLE                   ~( 0x01 << MDR_RST_CLK_TIM_CLOCK_TIM1_CLK_EN_POS           )
#define MDR_RST_CLK_TIM_CLOCK_TIM1_CLK_ENABLE                     ( 0x01 << MDR_RST_CLK_TIM_CLOCK_TIM1_CLK_EN_POS           )

#define MDR_RST_CLK_TIM_CLOCK_TIM2_CLK_DISABLE                   ~( 0x01 << MDR_RST_CLK_TIM_CLOCK_TIM2_CLK_EN_POS           )
#define MDR_RST_CLK_TIM_CLOCK_TIM2_CLK_ENABLE                     ( 0x01 << MDR_RST_CLK_TIM_CLOCK_TIM2_CLK_EN_POS           )

#define MDR_RST_CLK_TIM_CLOCK_TIM3_CLK_DISABLE                   ~( 0x01 << MDR_RST_CLK_TIM_CLOCK_TIM3_CLK_EN_POS           )
#define MDR_RST_CLK_TIM_CLOCK_TIM3_CLK_ENABLE                     ( 0x01 << MDR_RST_CLK_TIM_CLOCK_TIM3_CLK_EN_POS           )
// UART_CLOCK register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_UART_CLOCK_UART1_BRG_POS                         0
#define MDR_RST_CLK_UART_CLOCK_UART2_BRG_POS                         8
#define MDR_RST_CLK_UART_CLOCK_UART1_CLK_EN_POS                     24
#define MDR_RST_CLK_UART_CLOCK_UART2_CLK_EN_POS                     25

#define MDR_RST_CLK_UART_CLOCK_UART1_BRG_MSK                       ( 0xFF << MDR_RST_CLK_UART_CLOCK_UART1_BRG_POS           )
#define MDR_RST_CLK_UART_CLOCK_UART2_BRG_MSK                       ( 0xFF << MDR_RST_CLK_UART_CLOCK_UART2_BRG_POS           )
#define MDR_RST_CLK_UART_CLOCK_UART1_CLK_EN_MSK                    ( 0x01 << MDR_RST_CLK_UART_CLOCK_UART1_CLK_EN_POS        )
#define MDR_RST_CLK_UART_CLOCK_UART2_CLK_EN_MSK                    ( 0x01 << MDR_RST_CLK_UART_CLOCK_UART2_CLK_EN_POS        )

#define MDR_RST_CLK_UART_CLOCK_UART1_DIV_1                        ~( 0xFF << MDR_RST_CLK_UART_CLOCK_UART1_BRG_POS           )
#define MDR_RST_CLK_UART_CLOCK_UART1_DIV_2                         ( 0x01 << MDR_RST_CLK_UART_CLOCK_UART1_BRG_POS           )
#define MDR_RST_CLK_UART_CLOCK_UART1_DIV_4                         ( 0x02 << MDR_RST_CLK_UART_CLOCK_UART1_BRG_POS           )
#define MDR_RST_CLK_UART_CLOCK_UART1_DIV_8                         ( 0x03 << MDR_RST_CLK_UART_CLOCK_UART1_BRG_POS           )
#define MDR_RST_CLK_UART_CLOCK_UART1_DIV_16                        ( 0x04 << MDR_RST_CLK_UART_CLOCK_UART1_BRG_POS           )
#define MDR_RST_CLK_UART_CLOCK_UART1_DIV_32                        ( 0x05 << MDR_RST_CLK_UART_CLOCK_UART1_BRG_POS           )
#define MDR_RST_CLK_UART_CLOCK_UART1_DIV_64                        ( 0x06 << MDR_RST_CLK_UART_CLOCK_UART1_BRG_POS           )
#define MDR_RST_CLK_UART_CLOCK_UART1_DIV_128                       ( 0x07 << MDR_RST_CLK_UART_CLOCK_UART1_BRG_POS           )

#define MDR_RST_CLK_UART_CLOCK_UART2_DIV_1                        ~( 0xFF << MDR_RST_CLK_UART_CLOCK_UART2_BRG_POS           )
#define MDR_RST_CLK_UART_CLOCK_UART2_DIV_2                         ( 0x01 << MDR_RST_CLK_UART_CLOCK_UART2_BRG_POS           )
#define MDR_RST_CLK_UART_CLOCK_UART2_DIV_4                         ( 0x02 << MDR_RST_CLK_UART_CLOCK_UART2_BRG_POS           )
#define MDR_RST_CLK_UART_CLOCK_UART2_DIV_8                         ( 0x03 << MDR_RST_CLK_UART_CLOCK_UART2_BRG_POS           )
#define MDR_RST_CLK_UART_CLOCK_UART2_DIV_16                        ( 0x04 << MDR_RST_CLK_UART_CLOCK_UART2_BRG_POS           )
#define MDR_RST_CLK_UART_CLOCK_UART2_DIV_32                        ( 0x05 << MDR_RST_CLK_UART_CLOCK_UART2_BRG_POS           )
#define MDR_RST_CLK_UART_CLOCK_UART2_DIV_64                        ( 0x06 << MDR_RST_CLK_UART_CLOCK_UART2_BRG_POS           )
#define MDR_RST_CLK_UART_CLOCK_UART2_DIV_128                       ( 0x07 << MDR_RST_CLK_UART_CLOCK_UART2_BRG_POS           )

#define MDR_RST_CLK_UART_CLOCK_UART1_CLK_DISABLE                 ~( 0x01 << MDR_RST_CLK_UART_CLOCK_UART1_CLK_EN_POS         )
#define MDR_RST_CLK_UART_CLOCK_UART1_CLK_ENABLE                   ( 0x01 << MDR_RST_CLK_UART_CLOCK_UART1_CLK_EN_POS         )

#define MDR_RST_CLK_UART_CLOCK_UART2_CLK_DISABLE                 ~( 0x01 << MDR_RST_CLK_UART_CLOCK_UART2_CLK_EN_POS         )
#define MDR_RST_CLK_UART_CLOCK_UART2_CLK_ENABLE                   ( 0x01 << MDR_RST_CLK_UART_CLOCK_UART2_CLK_EN_POS         )
// SSP_CLOCK register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_SSP_CLOCK_SSP1_BRG_POS                           0
#define MDR_RST_CLK_SSP_CLOCK_SSP2_BRG_POS                           8
#define MDR_RST_CLK_SSP_CLOCK_SSP1_CLK_EN_POS                       24
#define MDR_RST_CLK_SSP_CLOCK_SSP2_CLK_EN_POS                       25

#define MDR_RST_CLK_SSP_CLOCK_SSP1_BRG_MSK                         ( 0xFF << MDR_RST_CLK_SSP_CLOCK_SSP1_BRG_POS             )
#define MDR_RST_CLK_SSP_CLOCK_SSP2_BRG_MSK                         ( 0xFF << MDR_RST_CLK_SSP_CLOCK_SSP2_BRG_POS             )
#define MDR_RST_CLK_SSP_CLOCK_SSP1_CLK_EN_MSK                      ( 0x01 << MDR_RST_CLK_SSP_CLOCK_SSP1_CLK_EN_POS          )
#define MDR_RST_CLK_SSP_CLOCK_SSP2_CLK_EN_MSK                      ( 0x01 << MDR_RST_CLK_SSP_CLOCK_SSP2_CLK_EN_POS          )

#define MDR_RST_CLK_SSP_CLOCK_SSP1_DIV_1                          ~( 0xFF << MDR_RST_CLK_SSP_CLOCK_SSP1_BRG_POS             )
#define MDR_RST_CLK_SSP_CLOCK_SSP1_DIV_2                           ( 0x01 << MDR_RST_CLK_SSP_CLOCK_SSP1_BRG_POS             )
#define MDR_RST_CLK_SSP_CLOCK_SSP1_DIV_4                           ( 0x02 << MDR_RST_CLK_SSP_CLOCK_SSP1_BRG_POS             )
#define MDR_RST_CLK_SSP_CLOCK_SSP1_DIV_8                           ( 0x03 << MDR_RST_CLK_SSP_CLOCK_SSP1_BRG_POS             )
#define MDR_RST_CLK_SSP_CLOCK_SSP1_DIV_16                          ( 0x04 << MDR_RST_CLK_SSP_CLOCK_SSP1_BRG_POS             )
#define MDR_RST_CLK_SSP_CLOCK_SSP1_DIV_32                          ( 0x05 << MDR_RST_CLK_SSP_CLOCK_SSP1_BRG_POS             )
#define MDR_RST_CLK_SSP_CLOCK_SSP1_DIV_64                          ( 0x06 << MDR_RST_CLK_SSP_CLOCK_SSP1_BRG_POS             )
#define MDR_RST_CLK_SSP_CLOCK_SSP1_DIV_128                         ( 0x07 << MDR_RST_CLK_SSP_CLOCK_SSP1_BRG_POS             )

#define MDR_RST_CLK_SSP_CLOCK_SSP2_DIV_1                          ~( 0xFF << MDR_RST_CLK_SSP_CLOCK_SSP2_BRG_POS             )
#define MDR_RST_CLK_SSP_CLOCK_SSP2_DIV_2                           ( 0x01 << MDR_RST_CLK_SSP_CLOCK_SSP2_BRG_POS             )
#define MDR_RST_CLK_SSP_CLOCK_SSP2_DIV_4                           ( 0x02 << MDR_RST_CLK_SSP_CLOCK_SSP2_BRG_POS             )
#define MDR_RST_CLK_SSP_CLOCK_SSP2_DIV_8                           ( 0x03 << MDR_RST_CLK_SSP_CLOCK_SSP2_BRG_POS             )
#define MDR_RST_CLK_SSP_CLOCK_SSP2_DIV_16                          ( 0x04 << MDR_RST_CLK_SSP_CLOCK_SSP2_BRG_POS             )
#define MDR_RST_CLK_SSP_CLOCK_SSP2_DIV_32                          ( 0x05 << MDR_RST_CLK_SSP_CLOCK_SSP2_BRG_POS             )
#define MDR_RST_CLK_SSP_CLOCK_SSP2_DIV_64                          ( 0x06 << MDR_RST_CLK_SSP_CLOCK_SSP2_BRG_POS             )
#define MDR_RST_CLK_SSP_CLOCK_SSP2_DIV_128                         ( 0x07 << MDR_RST_CLK_SSP_CLOCK_SSP2_BRG_POS             )

#define MDR_RST_CLK_SSP_CLOCK_SSP1_CLK_DISABLE                   ~( 0x01 << MDR_RST_CLK_SSP_CLOCK_SSP1_CLK_EN_POS           )
#define MDR_RST_CLK_SSP_CLOCK_SSP1_CLK_ENABLE                     ( 0x01 << MDR_RST_CLK_SSP_CLOCK_SSP1_CLK_EN_POS           )

#define MDR_RST_CLK_SSP_CLOCK_SSP2_CLK_DISABLE                   ~( 0x01 << MDR_RST_CLK_SSP_CLOCK_SSP2_CLK_EN_POS           )
#define MDR_RST_CLK_SSP_CLOCK_SSP2_CLK_ENABLE                     ( 0x01 << MDR_RST_CLK_SSP_CLOCK_SSP2_CLK_EN_POS           )
// CLOCK_STATUS register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_OFF_VAL                 0
#define MDR_RST_CLK_CLOCK_STATUS_PLL_USB_RDY_ON_VAL                  1

#define MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_OFF_VAL                 0
#define MDR_RST_CLK_CLOCK_STATUS_PLL_CPU_RDY_ON_VAL                  1

#define MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_OFF_VAL                     0
#define MDR_RST_CLK_CLOCK_STATUS_HSE_RDY_ON_VAL                      1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t PLL_USB_RDY : 1;
        uint32_t PLL_CPU_RDY : 1;
        uint32_t HSE_RDY     : 1;
        uint32_t             : 29;
    };

} MDR_RST_CLK_CLOCK_STATUS_TypeDef;
// PLL_CONTROL register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_DISABLE_VAL               0
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_ON_ENABLE_VAL                1

#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_DISABLE_VAL              0
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_RLD_ENABLE_VAL               1

#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_DISABLE_VAL               0
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_ENABLE_VAL                1

#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_DISABLE_VAL              0
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_RLD_ENABLE_VAL               1

#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_1_VAL                     0
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_4_VAL                     3
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_5_VAL                     4
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_6_VAL                     5
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_7_VAL                     6
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_8_VAL                     7
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_9_VAL                     8
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_10_VAL                    9
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_11_VAL                   10
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_12_VAL                   11
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_13_VAL                   12
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_14_VAL                   13
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_15_VAL                   14
#define MDR_RST_CLK_PLL_CONTROL_PLL_USB_MUL_16_VAL                   15

#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_1_VAL                     0
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_4_VAL                     3
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_5_VAL                     4
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_6_VAL                     5
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_7_VAL                     6
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_8_VAL                     7
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_9_VAL                     8
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_10_VAL                    9
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_11_VAL                   10
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_12_VAL                   11
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_13_VAL                   12
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_14_VAL                   13
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_15_VAL                   14
#define MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_16_VAL                   15

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t PLL_USB_ON  : 1;
        uint32_t PLL_USB_RLD : 1;
        uint32_t PLL_CPU_ON  : 1;
        uint32_t PLL_CPU_RLD : 1;
        uint32_t PLL_USB_MUL : 4;
        uint32_t PLL_CPU_MUL : 4;
        uint32_t             : 20;
    };

} MDR_RST_CLK_PLL_CONTROL_TypeDef;
// HS_CONTROL register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_HS_CONTROL_HSE_ON_DISABLE_VAL                   0
#define MDR_RST_CLK_HS_CONTROL_HSE_ON_ENABLE_VAL                    1

#define MDR_RST_CLK_HS_CONTROL_HSE_BYP_OSCILLATOR_VAL               0
#define MDR_RST_CLK_HS_CONTROL_HSE_BYP_GENERATOR_VAL                1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t HSE_ON  : 1;
        uint32_t HSE_BYP : 1;
        uint32_t         : 30;
    };

} MDR_RST_CLK_HS_CONTROL_TypeDef;
// CPU_CLOCK register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_CPU_CLOCK_CPU_C1_HSI_VAL                         0
#define MDR_RST_CLK_CPU_CLOCK_CPU_C1_HSI_DIV_2_VAL                   1
#define MDR_RST_CLK_CPU_CLOCK_CPU_C1_HSE_VAL                         2
#define MDR_RST_CLK_CPU_CLOCK_CPU_C1_HSE_DIV_2_VAL                   3

#define MDR_RST_CLK_CPU_CLOCK_CPU_C2_CPU_C1_VAL                      0
#define MDR_RST_CLK_CPU_CLOCK_CPU_C2_PLL_CPU_VAL                     1

#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_1_VAL                       0
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_2_VAL                       8
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_4_VAL                       9
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_8_VAL                      10
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_16_VAL                     11
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_32_VAL                     12
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_64_VAL                     13
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_128_VAL                    14
#define MDR_RST_CLK_CPU_CLOCK_CPU_C3_DIV_256_VAL                    15

#define MDR_RST_CLK_CPU_CLOCK_HCLK_HSI_VAL                           0
#define MDR_RST_CLK_CPU_CLOCK_HCLK_CPU_C3_VAL                        1
#define MDR_RST_CLK_CPU_CLOCK_HCLK_LSE_VAL                           2
#define MDR_RST_CLK_CPU_CLOCK_HCLK_LSI_VAL                           3

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CPU_C1_SEL : 2;
        uint32_t CPU_C2_SEL : 1;
        uint32_t            : 1;
        uint32_t CPU_C3_SEL : 4;
        uint32_t HCLK_SEL   : 2;
        uint32_t            : 22;
    };

} MDR_RST_CLK_CPU_CLOCK_TypeDef;
// USB_CLOCK register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_USB_CLOCK_USB_C1_HSI_VAL                         0
#define MDR_RST_CLK_USB_CLOCK_USB_C1_HSI_DIV_2_VAL                   1
#define MDR_RST_CLK_USB_CLOCK_USB_C1_HSE_VAL                         2
#define MDR_RST_CLK_USB_CLOCK_USB_C1_HSE_DIV_2_VAL                   3

#define MDR_RST_CLK_USB_CLOCK_USB_C2_USB_C1_VAL                      0
#define MDR_RST_CLK_USB_CLOCK_USB_C2_PLL_USB_VAL                     1

#define MDR_RST_CLK_USB_CLOCK_USB_C3_DIV_1_VAL                       0
#define MDR_RST_CLK_USB_CLOCK_USB_C3_DIV_2_VAL                       1

#define MDR_RST_CLK_USB_CLOCK_USB_CLK_DISABLE_VAL                    0
#define MDR_RST_CLK_USB_CLOCK_USB_CLK_ENABLE_VAL                     1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t USB_C1_SEL : 2;
        uint32_t USB_C2_SEL : 1;
        uint32_t            : 1;
        uint32_t USB_C3_SEL : 1;
        uint32_t            : 3;
        uint32_t USB_CLK_EN : 1;
        uint32_t            : 23;
    };

} MDR_RST_CLK_USB_CLOCK_TypeDef;
// ADC_MCO_CLOCK register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_CPU_C1_VAL                 0
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_USB_C1_VAL                 1
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_CPU_C2_VAL                 2
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_USB_C2_VAL                 3

#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_LSE_VAL                    0
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_LSI_VAL                    1
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_ADC_C1_VAL                 2
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_HSI_C1_VAL                 3

#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_1_VAL                  0
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_2_VAL                  8
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_4_VAL                  9
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_8_VAL                 10
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_16_VAL                11
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_32_VAL                12
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_64_VAL                13
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_128_VAL               14
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_DIV_256_VAL               15

#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_CLK_DISABLE_VAL               0
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADC_CLK_ENABLE_VAL                1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t ADC_C1_SEL : 2;
        uint32_t            : 2;
        uint32_t ADC_C2_SEL : 2;
        uint32_t            : 2;
        uint32_t ADC_C3_SEL : 4;
        uint32_t            : 1;
        uint32_t ADC_CLK_EN : 1;
        uint32_t            : 18;
    };

} MDR_RST_CLK_ADC_MCO_CLOCK_TypeDef;
// RTC_CLOCK register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_1_VAL                      0
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_2_VAL                      8
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_4_VAL                      9
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_8_VAL                     10
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_16_VAL                    11
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_32_VAL                    12
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_64_VAL                    13
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_128_VAL                   14
#define MDR_RST_CLK_RTC_CLOCK_HSE_C1_DIV_256_VAL                   15

#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_1_VAL                      0
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_2_VAL                      8
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_4_VAL                      9
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_8_VAL                     10
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_16_VAL                    11
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_32_VAL                    12
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_64_VAL                    13
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_128_VAL                   14
#define MDR_RST_CLK_RTC_CLOCK_HSI_C1_DIV_256_VAL                   15

#define MDR_RST_CLK_RTC_CLOCK_HSE_RTC_DISABLE_VAL                   0
#define MDR_RST_CLK_RTC_CLOCK_HSE_RTC_ENABLE_VAL                    1

#define MDR_RST_CLK_RTC_CLOCK_HSI_RTC_DISABLE_VAL                   0
#define MDR_RST_CLK_RTC_CLOCK_HSI_RTC_ENABLE_VAL                    1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t HSE_C1_SEL : 4;
        uint32_t HSI_C1_SEL : 4;
        uint32_t HSE_RTC_EN : 1;
        uint32_t HSI_RTC_EN : 1;
        uint32_t            : 22;
    };

} MDR_RST_CLK_RTC_CLOCK_TypeDef;
// PER_CLOCK register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_PER_CLOCK_CAN1_DISABLE_VAL                       0
#define MDR_RST_CLK_PER_CLOCK_CAN1_ENABLE_VAL                        1
#define MDR_RST_CLK_PER_CLOCK_CAN2_DISABLE_VAL                       0
#define MDR_RST_CLK_PER_CLOCK_CAN2_ENABLE_VAL                        1
#define MDR_RST_CLK_PER_CLOCK_USB_DISABLE_VAL                        0
#define MDR_RST_CLK_PER_CLOCK_USB_ENABLE_VAL                         1
#define MDR_RST_CLK_PER_CLOCK_EEPROM_CNTRL_DISABLE_VAL               0
#define MDR_RST_CLK_PER_CLOCK_EEPROM_CNTRL_ENABLE_VAL                1
#define MDR_RST_CLK_PER_CLOCK_RST_CLK_DISABLE_VAL                    0
#define MDR_RST_CLK_PER_CLOCK_RST_CLK_ENABLE_VAL                     1
#define MDR_RST_CLK_PER_CLOCK_DMA_DISABLE_VAL                        0
#define MDR_RST_CLK_PER_CLOCK_DMA_ENABLE_VAL                         1
#define MDR_RST_CLK_PER_CLOCK_UART1_DISABLE_VAL                      0
#define MDR_RST_CLK_PER_CLOCK_UART1_ENABLE_VAL                       1
#define MDR_RST_CLK_PER_CLOCK_UART2_DISABLE_VAL                      0
#define MDR_RST_CLK_PER_CLOCK_UART2_ENABLE_VAL                       1
#define MDR_RST_CLK_PER_CLOCK_SSP1_DISABLE_VAL                       0
#define MDR_RST_CLK_PER_CLOCK_SSP1_ENABLE_VAL                        1
#define MDR_RST_CLK_PER_CLOCK_I2C1_DISABLE_VAL                       0
#define MDR_RST_CLK_PER_CLOCK_I2C1_ENABLE_VAL                        1
#define MDR_RST_CLK_PER_CLOCK_POWER_DISABLE_VAL                      0
#define MDR_RST_CLK_PER_CLOCK_POWER_ENABLE_VAL                       1
#define MDR_RST_CLK_PER_CLOCK_WWDG_DISABLE_VAL                       0
#define MDR_RST_CLK_PER_CLOCK_WWDG_ENABLE_VAL                        1
#define MDR_RST_CLK_PER_CLOCK_IWDG_DISABLE_VAL                       0
#define MDR_RST_CLK_PER_CLOCK_IWDG_ENABLE_VAL                        1
#define MDR_RST_CLK_PER_CLOCK_TIMER1_DISABLE_VAL                     0
#define MDR_RST_CLK_PER_CLOCK_TIMER1_ENABLE_VAL                      1
#define MDR_RST_CLK_PER_CLOCK_TIMER2_DISABLE_VAL                     0
#define MDR_RST_CLK_PER_CLOCK_TIMER2_ENABLE_VAL                      1
#define MDR_RST_CLK_PER_CLOCK_TIMER3_DISABLE_VAL                     0
#define MDR_RST_CLK_PER_CLOCK_TIMER3_ENABLE_VAL                      1
#define MDR_RST_CLK_PER_CLOCK_ADC_DISABLE_VAL                        0
#define MDR_RST_CLK_PER_CLOCK_ADC_ENABLE_VAL                         1
#define MDR_RST_CLK_PER_CLOCK_DAC_DISABLE_VAL                        0
#define MDR_RST_CLK_PER_CLOCK_DAC_ENABLE_VAL                         1
#define MDR_RST_CLK_PER_CLOCK_COMP_DISABLE_VAL                       0
#define MDR_RST_CLK_PER_CLOCK_COMP_ENABLE_VAL                        1
#define MDR_RST_CLK_PER_CLOCK_SSP2_DISABLE_VAL                       0
#define MDR_RST_CLK_PER_CLOCK_SSP2_ENABLE_VAL                        1
#define MDR_RST_CLK_PER_CLOCK_PORTA_DISABLE_VAL                      0
#define MDR_RST_CLK_PER_CLOCK_PORTA_ENABLE_VAL                       1
#define MDR_RST_CLK_PER_CLOCK_PORTB_DISABLE_VAL                      0
#define MDR_RST_CLK_PER_CLOCK_PORTB_ENABLE_VAL                       1
#define MDR_RST_CLK_PER_CLOCK_PORTC_DISABLE_VAL                      0
#define MDR_RST_CLK_PER_CLOCK_PORTC_ENABLE_VAL                       1
#define MDR_RST_CLK_PER_CLOCK_PORTD_DISABLE_VAL                      0
#define MDR_RST_CLK_PER_CLOCK_PORTD_ENABLE_VAL                       1
#define MDR_RST_CLK_PER_CLOCK_PORTE_DISABLE_VAL                      0
#define MDR_RST_CLK_PER_CLOCK_PORTE_ENABLE_VAL                       1
#define MDR_RST_CLK_PER_CLOCK_BKP_DISABLE_VAL                        0
#define MDR_RST_CLK_PER_CLOCK_BKP_ENABLE_VAL                         1
#define MDR_RST_CLK_PER_CLOCK_PORTF_DISABLE_VAL                      0
#define MDR_RST_CLK_PER_CLOCK_PORTF_ENABLE_VAL                       1
#define MDR_RST_CLK_PER_CLOCK_EXT_BUS_CNTRL_DISABLE_VAL              0
#define MDR_RST_CLK_PER_CLOCK_EXT_BUS_CNTRL_ENABLE_VAL               1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CAN1          : 1;
        uint32_t CAN2          : 1;
        uint32_t USB           : 1;
        uint32_t EEPROM_CNTRL  : 1;
        uint32_t RST_CLK       : 1;
        uint32_t DMA           : 1;
        uint32_t UART1         : 1;
        uint32_t UART2         : 1;
        uint32_t SSP1          : 1;
        uint32_t               : 1;
        uint32_t I2C1          : 1;
        uint32_t POWER         : 1;
        uint32_t WWDG          : 1;
        uint32_t IWDG          : 1;
        uint32_t TIMER1        : 1;
        uint32_t TIMER2        : 1;
        uint32_t TIMER3        : 1;
        uint32_t ADC           : 1;
        uint32_t DAC           : 1;
        uint32_t COMP          : 1;
        uint32_t SSP2          : 1;
        uint32_t PORTA         : 1;
        uint32_t PORTB         : 1;
        uint32_t PORTC         : 1;
        uint32_t PORTD         : 1;
        uint32_t PORTE         : 1;
        uint32_t               : 1;
        uint32_t BKP           : 1;
        uint32_t               : 1;
        uint32_t PORTF         : 1;
        uint32_t EXT_BUS_CNTRL : 1;
        uint32_t               : 1;
    };

} MDR_RST_CLK_PER_CLOCK_TypeDef;
// CAN_CLOCK register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_CAN_CLOCK_CAN1_DIV_1_VAL                         0
#define MDR_RST_CLK_CAN_CLOCK_CAN1_DIV_2_VAL                         1
#define MDR_RST_CLK_CAN_CLOCK_CAN1_DIV_4_VAL                         2
#define MDR_RST_CLK_CAN_CLOCK_CAN1_DIV_8_VAL                         3
#define MDR_RST_CLK_CAN_CLOCK_CAN1_DIV_16_VAL                        4
#define MDR_RST_CLK_CAN_CLOCK_CAN1_DIV_32_VAL                        5
#define MDR_RST_CLK_CAN_CLOCK_CAN1_DIV_64_VAL                        6
#define MDR_RST_CLK_CAN_CLOCK_CAN1_DIV_128_VAL                       7

#define MDR_RST_CLK_CAN_CLOCK_CAN2_DIV_1_VAL                         0
#define MDR_RST_CLK_CAN_CLOCK_CAN2_DIV_2_VAL                         1
#define MDR_RST_CLK_CAN_CLOCK_CAN2_DIV_4_VAL                         2
#define MDR_RST_CLK_CAN_CLOCK_CAN2_DIV_8_VAL                         3
#define MDR_RST_CLK_CAN_CLOCK_CAN2_DIV_16_VAL                        4
#define MDR_RST_CLK_CAN_CLOCK_CAN2_DIV_32_VAL                        5
#define MDR_RST_CLK_CAN_CLOCK_CAN2_DIV_64_VAL                        6
#define MDR_RST_CLK_CAN_CLOCK_CAN2_DIV_128_VAL                       7

#define MDR_RST_CLK_CAN_CLOCK_CAN1_CLK_DISABLE_VAL                   0
#define MDR_RST_CLK_CAN_CLOCK_CAN1_CLK_ENABLE_VAL                    1
#define MDR_RST_CLK_CAN_CLOCK_CAN2_CLK_DISABLE_VAL                   0
#define MDR_RST_CLK_CAN_CLOCK_CAN2_CLK_ENABLE_VAL                    1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CAN1_BRG    : 8;
        uint32_t CAN2_BRG    : 8;
        uint32_t             : 8;
        uint32_t CAN1_CLK_EN : 1;
        uint32_t CAN2_CLK_EN : 1;
        uint32_t             : 6;
    };

} MDR_RST_CLK_CAN_CLOCK_TypeDef;
// TIM_CLOCK register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_TIM_CLOCK_TIM1_DIV_1_VAL                         0
#define MDR_RST_CLK_TIM_CLOCK_TIM1_DIV_2_VAL                         1
#define MDR_RST_CLK_TIM_CLOCK_TIM1_DIV_4_VAL                         2
#define MDR_RST_CLK_TIM_CLOCK_TIM1_DIV_8_VAL                         3
#define MDR_RST_CLK_TIM_CLOCK_TIM1_DIV_16_VAL                        4
#define MDR_RST_CLK_TIM_CLOCK_TIM1_DIV_32_VAL                        5
#define MDR_RST_CLK_TIM_CLOCK_TIM1_DIV_64_VAL                        6
#define MDR_RST_CLK_TIM_CLOCK_TIM1_DIV_128_VAL                       7

#define MDR_RST_CLK_TIM_CLOCK_TIM2_DIV_1_VAL                         0
#define MDR_RST_CLK_TIM_CLOCK_TIM2_DIV_2_VAL                         1
#define MDR_RST_CLK_TIM_CLOCK_TIM2_DIV_4_VAL                         2
#define MDR_RST_CLK_TIM_CLOCK_TIM2_DIV_8_VAL                         3
#define MDR_RST_CLK_TIM_CLOCK_TIM2_DIV_16_VAL                        4
#define MDR_RST_CLK_TIM_CLOCK_TIM2_DIV_32_VAL                        5
#define MDR_RST_CLK_TIM_CLOCK_TIM2_DIV_64_VAL                        6
#define MDR_RST_CLK_TIM_CLOCK_TIM2_DIV_128_VAL                       7

#define MDR_RST_CLK_TIM_CLOCK_TIM3_DIV_1_VAL                         0
#define MDR_RST_CLK_TIM_CLOCK_TIM3_DIV_2_VAL                         1
#define MDR_RST_CLK_TIM_CLOCK_TIM3_DIV_4_VAL                         2
#define MDR_RST_CLK_TIM_CLOCK_TIM3_DIV_8_VAL                         3
#define MDR_RST_CLK_TIM_CLOCK_TIM3_DIV_16_VAL                        4
#define MDR_RST_CLK_TIM_CLOCK_TIM3_DIV_32_VAL                        5
#define MDR_RST_CLK_TIM_CLOCK_TIM3_DIV_64_VAL                        6
#define MDR_RST_CLK_TIM_CLOCK_TIM3_DIV_128_VAL                       7

#define MDR_RST_CLK_TIM_CLOCK_TIM1_CLK_DISABLE_VAL                   0
#define MDR_RST_CLK_TIM_CLOCK_TIM1_CLK_ENABLE_VAL                    1
#define MDR_RST_CLK_TIM_CLOCK_TIM2_CLK_DISABLE_VAL                   0
#define MDR_RST_CLK_TIM_CLOCK_TIM2_CLK_ENABLE_VAL                    1
#define MDR_RST_CLK_TIM_CLOCK_TIM3_CLK_DISABLE_VAL                   0
#define MDR_RST_CLK_TIM_CLOCK_TIM3_CLK_ENABLE_VAL                    1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t TIM1_BRG    : 8;
        uint32_t TIM2_BRG    : 8;
        uint32_t TIM3_BRG    : 8;
        uint32_t TIM1_CLK_EN : 1;
        uint32_t TIM2_CLK_EN : 1;
        uint32_t TIM3_CLK_EN : 1;
        uint32_t             : 5;
    };

} MDR_RST_CLK_TIM_CLOCK_TypeDef;
// UART_CLOCK register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_UART_CLOCK_UART1_DIV_1_VAL                       0
#define MDR_RST_CLK_UART_CLOCK_UART1_DIV_2_VAL                       1
#define MDR_RST_CLK_UART_CLOCK_UART1_DIV_4_VAL                       2
#define MDR_RST_CLK_UART_CLOCK_UART1_DIV_8_VAL                       3
#define MDR_RST_CLK_UART_CLOCK_UART1_DIV_16_VAL                      4
#define MDR_RST_CLK_UART_CLOCK_UART1_DIV_32_VAL                      5
#define MDR_RST_CLK_UART_CLOCK_UART1_DIV_64_VAL                      6
#define MDR_RST_CLK_UART_CLOCK_UART1_DIV_128_VAL                     7

#define MDR_RST_CLK_UART_CLOCK_UART2_DIV_1_VAL                       0
#define MDR_RST_CLK_UART_CLOCK_UART2_DIV_2_VAL                       1
#define MDR_RST_CLK_UART_CLOCK_UART2_DIV_4_VAL                       2
#define MDR_RST_CLK_UART_CLOCK_UART2_DIV_8_VAL                       3
#define MDR_RST_CLK_UART_CLOCK_UART2_DIV_16_VAL                      4
#define MDR_RST_CLK_UART_CLOCK_UART2_DIV_32_VAL                      5
#define MDR_RST_CLK_UART_CLOCK_UART2_DIV_64_VAL                      6
#define MDR_RST_CLK_UART_CLOCK_UART2_DIV_128_VAL                     7

#define MDR_RST_CLK_UART_CLOCK_UART1_CLK_DISABLE_VAL                 0
#define MDR_RST_CLK_UART_CLOCK_UART1_CLK_ENABLE_VAL                  1
#define MDR_RST_CLK_UART_CLOCK_UART2_CLK_DISABLE_VAL                 0
#define MDR_RST_CLK_UART_CLOCK_UART2_CLK_ENABLE_VAL                  1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t UART1_BRG    : 8;
        uint32_t UART2_BRG    : 8;
        uint32_t              : 8;
        uint32_t UART1_CLK_EN : 1;
        uint32_t UART2_CLK_EN : 1;
        uint32_t              : 6;
    };

} MDR_RST_CLK_UART_CLOCK_TypeDef;
// SSP_CLOCK register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_SSP_CLOCK_SSP1_DIV_1_VAL                         0
#define MDR_RST_CLK_SSP_CLOCK_SSP1_DIV_2_VAL                         1
#define MDR_RST_CLK_SSP_CLOCK_SSP1_DIV_4_VAL                         2
#define MDR_RST_CLK_SSP_CLOCK_SSP1_DIV_8_VAL                         3
#define MDR_RST_CLK_SSP_CLOCK_SSP1_DIV_16_VAL                        4
#define MDR_RST_CLK_SSP_CLOCK_SSP1_DIV_32_VAL                        5
#define MDR_RST_CLK_SSP_CLOCK_SSP1_DIV_64_VAL                        6
#define MDR_RST_CLK_SSP_CLOCK_SSP1_DIV_128_VAL                       7

#define MDR_RST_CLK_SSP_CLOCK_SSP2_DIV_1_VAL                         0
#define MDR_RST_CLK_SSP_CLOCK_SSP2_DIV_2_VAL                         1
#define MDR_RST_CLK_SSP_CLOCK_SSP2_DIV_4_VAL                         2
#define MDR_RST_CLK_SSP_CLOCK_SSP2_DIV_8_VAL                         3
#define MDR_RST_CLK_SSP_CLOCK_SSP2_DIV_16_VAL                        4
#define MDR_RST_CLK_SSP_CLOCK_SSP2_DIV_32_VAL                        5
#define MDR_RST_CLK_SSP_CLOCK_SSP2_DIV_64_VAL                        6
#define MDR_RST_CLK_SSP_CLOCK_SSP2_DIV_128_VAL                       7

#define MDR_RST_CLK_SSP_CLOCK_SSP1_CLK_DISABLE_VAL                   0
#define MDR_RST_CLK_SSP_CLOCK_SSP1_CLK_ENABLE_VAL                    1
#define MDR_RST_CLK_SSP_CLOCK_SSP2_CLK_DISABLE_VAL                   0
#define MDR_RST_CLK_SSP_CLOCK_SSP2_CLK_ENABLE_VAL                    1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t SSP1_BRG    : 8;
        uint32_t SSP2_BRG    : 8;
        uint32_t             : 8;
        uint32_t SSP1_CLK_EN : 1;
        uint32_t SSP2_CLK_EN : 1;
        uint32_t             : 6;
    };

} MDR_RST_CLK_SSP_CLOCK_TypeDef;
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// RST_CLK structure Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef struct
{
    __I  MDR_RST_CLK_CLOCK_STATUS_TypeDef CLOCK_STATUS;
    __IO MDR_RST_CLK_PLL_CONTROL_TypeDef  PLL_CONTROL;
    __IO MDR_RST_CLK_HS_CONTROL_TypeDef   HS_CONTROL;
    __IO MDR_RST_CLK_CPU_CLOCK_TypeDef    CPU_CLOCK;
    __IO MDR_RST_CLK_USB_CLOCK_TypeDef    USB_CLOCK;
    __IO MDR_RST_CLK_ADC_MCO_CLOCK_TypeDef ADC_MCO_CLOCK;
    __IO MDR_RST_CLK_RTC_CLOCK_TypeDef    RTC_CLOCK;
    __IO MDR_RST_CLK_PER_CLOCK_TypeDef    PER_CLOCK;
    __IO MDR_RST_CLK_CAN_CLOCK_TypeDef    CAN_CLOCK;
    __IO MDR_RST_CLK_TIM_CLOCK_TypeDef    TIM_CLOCK;
    __IO MDR_RST_CLK_UART_CLOCK_TypeDef   UART_CLOCK;
    __IO MDR_RST_CLK_SSP_CLOCK_TypeDef    SSP_CLOCK;
} MDR_RST_CLK_TypeDefUnion;

// RST_CLK addresses
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_RST_CLK_UNION_BASE                                  ( 0x40020000                                                )
#define MDR_RST_CLK_CLOCK_STATUS_ADDRESS                        ( MDR_RST_CLK_UNION_BASE + 0x00                             )
#define MDR_RST_CLK_PLL_CONTROL_ADDRESS                         ( MDR_RST_CLK_UNION_BASE + 0x04                             )
#define MDR_RST_CLK_HS_CONTROL_ADDRESS                          ( MDR_RST_CLK_UNION_BASE + 0x08                             )
#define MDR_RST_CLK_CPU_CLOCK_ADDRESS                           ( MDR_RST_CLK_UNION_BASE + 0x0C                             )
#define MDR_RST_CLK_USB_CLOCK_ADDRESS                           ( MDR_RST_CLK_UNION_BASE + 0x10                             )
#define MDR_RST_CLK_ADC_MCO_CLOCK_ADDRESS                       ( MDR_RST_CLK_UNION_BASE + 0x14                             )
#define MDR_RST_CLK_RTC_CLOCK_ADDRESS                           ( MDR_RST_CLK_UNION_BASE + 0x18                             )
#define MDR_RST_CLK_PER_CLOCK_ADDRESS                           ( MDR_RST_CLK_UNION_BASE + 0x1C                             )
#define MDR_RST_CLK_CAN_CLOCK_ADDRESS                           ( MDR_RST_CLK_UNION_BASE + 0x20                             )
#define MDR_RST_CLK_TIM_CLOCK_ADDRESS                           ( MDR_RST_CLK_UNION_BASE + 0x24                             )
#define MDR_RST_CLK_UART_CLOCK_ADDRESS                          ( MDR_RST_CLK_UNION_BASE + 0x28                             )
#define MDR_RST_CLK_SSP_CLOCK_ADDRESS                           ( MDR_RST_CLK_UNION_BASE + 0x2C                             )

#define MDR_RST_CLK_UNION                                       ( ( MDR_RST_CLK_TypeDefUnion * ) MDR_RST_CLK_UNION_BASE     )


// RST_CLK Union functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void MDR_RST_CLK_Union_PeripheralEnable( uint32_t peripheral_mask );
void MDR_RST_CLK_Union_PeripheralDisable( uint32_t peripheral_mask );

void MDR_RST_CLK_Union_HSI_Enable( void );
void MDR_RST_CLK_Union_HSI_Disable( void );
void MDR_RST_CLK_Union_LSI_Enable( void );
void MDR_RST_CLK_Union_LSI_Disable( void );

void MDR_RST_CLK_Union_HSE_SetMode( uint32_t hse_mode );
void MDR_RST_CLK_Union_HSE_Enable( void );
void MDR_RST_CLK_Union_HSE_Disable( void );

void MDR_RST_CLK_Union_CPU_PLL_Enable( void );
void MDR_RST_CLK_Union_CPU_PLL_Disable( void );
void MDR_RST_CLK_Union_CPU_PLL_Configure( uint32_t cpu_c1_source, uint32_t pll_cpu_mul );
void MDR_RST_CLK_Union_CPU_C2_Select( uint32_t cpu_c2_source );
void MDR_RST_CLK_Union_CPU_C3_Div( uint32_t cpu_c3_div );
void MDR_RST_CLK_Union_CPU_HCLK_Select( uint32_t cpu_hclk_source );

void MDR_RST_CLK_Union_UART1_SetDivider( uint32_t uart1_div );
void MDR_RST_CLK_Union_UART2_SetDivider( uint32_t uart2_div );
void MDR_RST_CLK_Union_UART1_ClockEnable( void );
void MDR_RST_CLK_Union_UART2_ClockEnable( void );

void MDR_RST_CLK_Union_TIMER1_SetDivider( uint32_t timer1_div );
void MDR_RST_CLK_Union_TIMER1_ClockEnable( void );
void MDR_RST_CLK_Union_TIMER1_ClockDisable( void );
void MDR_RST_CLK_Union_TIMER2_SetDivider( uint32_t timer2_div );
void MDR_RST_CLK_Union_TIMER2_ClockEnable( void );
void MDR_RST_CLK_Union_TIMER2_ClockDisable( void );
void MDR_RST_CLK_Union_TIMER3_SetDivider( uint32_t timer3_div );
void MDR_RST_CLK_Union_TIMER3_ClockEnable( void );
void MDR_RST_CLK_Union_TIMER3_ClockDisable( void );

void MDR_RST_CLK_Union_CAN1_SetDivider( uint32_t can1_div );
void MDR_RST_CLK_Union_CAN1_ClockEnable( void );
void MDR_RST_CLK_Union_CAN1_ClockDisable( void );
void MDR_RST_CLK_Union_CAN2_SetDivider( uint32_t can2_div );
void MDR_RST_CLK_Union_CAN2_ClockEnable( void );
void MDR_RST_CLK_Union_CAN2_ClockDisable( void );

void MDR_RST_CLK_Union_SSP1_SetDivider( uint32_t ssp1_div );
void MDR_RST_CLK_Union_SSP1_ClockEnable( void );
void MDR_RST_CLK_Union_SSP1_ClockDisable( void );
void MDR_RST_CLK_Union_SSP2_SetDivider( uint32_t ssp2_div );
void MDR_RST_CLK_Union_SSP2_ClockEnable( void );
void MDR_RST_CLK_Union_SSP2_ClockDisable( void );

void MDR_RST_CLK_Union_ADC_C1_Select( uint32_t adc_c1_source );
void MDR_RST_CLK_Union_ADC_C2_Select( uint32_t adc_c2_source );
void MDR_RST_CLK_Union_ADC_SetDivider( uint32_t adc_div );
void MDR_RST_CLK_Union_ADC_ClockEnable( void );
void MDR_RST_CLK_Union_ADC_ClockDisable( void );

// RST_CLK Milandr functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_RST_CLK_PeripheralEnable( uint32_t peripheral_mask );
void MDR_RST_CLK_PeripheralDisable( uint32_t peripheral_mask );


// HSI and LSI functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_RST_CLK_HSI_Enable( void );
void MDR_RST_CLK_HSI_Disable( void );

void MDR_RST_CLK_LSI_Enable( void );
void MDR_RST_CLK_LSI_Disable( void );


// HSE, CPU PLL and HCLK functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_RST_CLK_HSE_SetMode( uint32_t hse_mode );
void MDR_RST_CLK_HSE_Enable( void );
void MDR_RST_CLK_HSE_Disable( void );

void MDR_RST_CLK_CPU_PLL_Enable( void );
void MDR_RST_CLK_CPU_PLL_Disable( void );
void MDR_RST_CLK_CPU_PLL_Configure( uint32_t cpu_c1_source, uint32_t pll_cpu_mul );

void MDR_RST_CLK_CPU_C2_Select( uint32_t cpu_c2_source );
void MDR_RST_CLK_CPU_C3_Div( uint32_t cpu_c3_div );
void MDR_RST_CLK_CPU_HCLK_Select( uint32_t cpu_hclk_source );


// UART functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_RST_CLK_UART1_SetDivider( uint32_t uart1_div );
void MDR_RST_CLK_UART2_SetDivider( uint32_t uart2_div );

void MDR_RST_CLK_UART1_ClockEnable( void );
void MDR_RST_CLK_UART2_ClockEnable( void );


// TIMER functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_RST_CLK_TIMER1_SetDivider( uint32_t timer1_div );
void MDR_RST_CLK_TIMER1_ClockEnable( void );
void MDR_RST_CLK_TIMER1_ClockDisable( void );

void MDR_RST_CLK_TIMER2_SetDivider( uint32_t timer2_div );
void MDR_RST_CLK_TIMER2_ClockEnable( void );
void MDR_RST_CLK_TIMER2_ClockDisable( void );

void MDR_RST_CLK_TIMER3_SetDivider( uint32_t timer3_div );
void MDR_RST_CLK_TIMER3_ClockEnable( void );
void MDR_RST_CLK_TIMER3_ClockDisable( void );


// CAN functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_RST_CLK_CAN1_SetDivider( uint32_t can1_div );
void MDR_RST_CLK_CAN1_ClockEnable( void );
void MDR_RST_CLK_CAN1_ClockDisable( void );

void MDR_RST_CLK_CAN2_SetDivider( uint32_t can2_div );
void MDR_RST_CLK_CAN2_ClockEnable( void );
void MDR_RST_CLK_CAN2_ClockDisable( void );


// SSP and SPI functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_RST_CLK_SSP1_SetDivider( uint32_t ssp1_div );
void MDR_RST_CLK_SSP1_ClockEnable( void );
void MDR_RST_CLK_SSP1_ClockDisable( void );

void MDR_RST_CLK_SSP2_SetDivider( uint32_t ssp2_div );
void MDR_RST_CLK_SSP2_ClockEnable( void );
void MDR_RST_CLK_SSP2_ClockDisable( void );


// ADC functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_RST_CLK_ADC_C1_Select( uint32_t adc_c1_source );
void MDR_RST_CLK_ADC_C2_Select( uint32_t adc_c2_source );
void MDR_RST_CLK_ADC_SetDivider( uint32_t adc_div );

void MDR_RST_CLK_ADC_ClockEnable( void );
void MDR_RST_CLK_ADC_ClockDisable( void );

#endif