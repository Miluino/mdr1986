#ifndef __MILUINO_MDR_SSP_H
#define __MILUINO_MDR_SSP_H

#include "MDR32F9Q2I.h"
#include <stdint.h>
// CR0 register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_CR0_DSS_POS                                                            0
#define MDR_SSP_CR0_FRF_POS                                                            4
#define MDR_SSP_CR0_SPO_POS                                                            6
#define MDR_SSP_CR0_SPH_POS                                                            7
#define MDR_SSP_CR0_SCR_POS                                                            8

#define MDR_SSP_CR0_DSS_MSK                                                            ( 0x0F          << MDR_SSP_CR0_DSS_POS                                                   )
#define MDR_SSP_CR0_FRF_MSK                                                            ( 0x03          << MDR_SSP_CR0_FRF_POS                                                   )
#define MDR_SSP_CR0_SPO_MSK                                                            ( 0x01          << MDR_SSP_CR0_SPO_POS                                                   )
#define MDR_SSP_CR0_SPH_MSK                                                            ( 0x01          << MDR_SSP_CR0_SPH_POS                                                   )
#define MDR_SSP_CR0_SCR_MSK                                                            ( 0xFF          << MDR_SSP_CR0_SCR_POS                                                   )

#define MDR_SSP_CR0_DSS_ZERO                                                          ~( 0x0F          << MDR_SSP_CR0_DSS_POS                                                   )
#define MDR_SSP_CR0_DSS_4_BITS                                                         ( 0x03          << MDR_SSP_CR0_DSS_POS                                                   )
#define MDR_SSP_CR0_DSS_5_BITS                                                         ( 0x04          << MDR_SSP_CR0_DSS_POS                                                   )
#define MDR_SSP_CR0_DSS_6_BITS                                                         ( 0x05          << MDR_SSP_CR0_DSS_POS                                                   )
#define MDR_SSP_CR0_DSS_7_BITS                                                         ( 0x06          << MDR_SSP_CR0_DSS_POS                                                   )
#define MDR_SSP_CR0_DSS_8_BITS                                                         ( 0x07          << MDR_SSP_CR0_DSS_POS                                                   )
#define MDR_SSP_CR0_DSS_9_BITS                                                         ( 0x08          << MDR_SSP_CR0_DSS_POS                                                   )
#define MDR_SSP_CR0_DSS_10_BITS                                                        ( 0x09          << MDR_SSP_CR0_DSS_POS                                                   )
#define MDR_SSP_CR0_DSS_11_BITS                                                        ( 0x0A          << MDR_SSP_CR0_DSS_POS                                                   )
#define MDR_SSP_CR0_DSS_12_BITS                                                        ( 0x0B          << MDR_SSP_CR0_DSS_POS                                                   )
#define MDR_SSP_CR0_DSS_13_BITS                                                        ( 0x0C          << MDR_SSP_CR0_DSS_POS                                                   )
#define MDR_SSP_CR0_DSS_14_BITS                                                        ( 0x0D          << MDR_SSP_CR0_DSS_POS                                                   )
#define MDR_SSP_CR0_DSS_15_BITS                                                        ( 0x0E          << MDR_SSP_CR0_DSS_POS                                                   )
#define MDR_SSP_CR0_DSS_16_BITS                                                        ( 0x0F          << MDR_SSP_CR0_DSS_POS                                                   )
#define MDR_SSP_CR0_DSS_VALUE( x )                                                     ( ( x )         << MDR_SSP_CR0_DSS_POS                                                   )

#define MDR_SSP_CR0_FRF_MOTOROLA_SPI                                                  ~( 0x03          << MDR_SSP_CR0_FRF_POS                                                   )
#define MDR_SSP_CR0_FRF_TEXAS_INSTRUMENTS                                              ( 0x01          << MDR_SSP_CR0_FRF_POS                                                   )
#define MDR_SSP_CR0_FRF_MICROWIRE                                                      ( 0x02          << MDR_SSP_CR0_FRF_POS                                                   )
#define MDR_SSP_CR0_FRF_RESERVED                                                       ( 0x03          << MDR_SSP_CR0_FRF_POS                                                   )

#define MDR_SSP_CR0_SPO_LOW                                                           ~( 0x01          << MDR_SSP_CR0_SPO_POS                                                   )
#define MDR_SSP_CR0_SPO_HIGH                                                           ( 0x01          << MDR_SSP_CR0_SPO_POS                                                   )

#define MDR_SSP_CR0_SPH_FIRST_EDGE                                                    ~( 0x01          << MDR_SSP_CR0_SPH_POS                                                   )
#define MDR_SSP_CR0_SPH_SECOND_EDGE                                                    ( 0x01          << MDR_SSP_CR0_SPH_POS                                                   )

#define MDR_SSP_CR0_SCR_ZERO                                                          ~( 0xFF          << MDR_SSP_CR0_SCR_POS                                                   )
#define MDR_SSP_CR0_SCR_VALUE( x )                                                     ( ( x )         << MDR_SSP_CR0_SCR_POS                                                   )

#define SSP_CR0_DSS_POS                                                                0
#define SSP_CR0_FRF_POS                                                                4
#define SSP_CR0_SPO_POS                                                                6
#define SSP_CR0_SPH_POS                                                                7
#define SSP_CR0_SCR_POS                                                                8

#define SSP_CR0_DSS_MSK                                                                ( 0x0F          << SSP_CR0_DSS_POS                                                       )
#define SSP_CR0_FRF_MSK                                                                ( 0x03          << SSP_CR0_FRF_POS                                                       )
#define SSP_CR0_SPO_MSK                                                                ( 0x01          << SSP_CR0_SPO_POS                                                       )
#define SSP_CR0_SPH_MSK                                                                ( 0x01          << SSP_CR0_SPH_POS                                                       )
#define SSP_CR0_SCR_MSK                                                                ( 0xFF          << SSP_CR0_SCR_POS                                                       )

#define SSP_CR0_DSS_ZERO                                                              ~( 0x0F          << SSP_CR0_DSS_POS                                                       )
#define SSP_CR0_DSS_4_BITS                                                             ( 0x03          << SSP_CR0_DSS_POS                                                       )
#define SSP_CR0_DSS_5_BITS                                                             ( 0x04          << SSP_CR0_DSS_POS                                                       )
#define SSP_CR0_DSS_6_BITS                                                             ( 0x05          << SSP_CR0_DSS_POS                                                       )
#define SSP_CR0_DSS_7_BITS                                                             ( 0x06          << SSP_CR0_DSS_POS                                                       )
#define SSP_CR0_DSS_8_BITS                                                             ( 0x07          << SSP_CR0_DSS_POS                                                       )
#define SSP_CR0_DSS_9_BITS                                                             ( 0x08          << SSP_CR0_DSS_POS                                                       )
#define SSP_CR0_DSS_10_BITS                                                            ( 0x09          << SSP_CR0_DSS_POS                                                       )
#define SSP_CR0_DSS_11_BITS                                                            ( 0x0A          << SSP_CR0_DSS_POS                                                       )
#define SSP_CR0_DSS_12_BITS                                                            ( 0x0B          << SSP_CR0_DSS_POS                                                       )
#define SSP_CR0_DSS_13_BITS                                                            ( 0x0C          << SSP_CR0_DSS_POS                                                       )
#define SSP_CR0_DSS_14_BITS                                                            ( 0x0D          << SSP_CR0_DSS_POS                                                       )
#define SSP_CR0_DSS_15_BITS                                                            ( 0x0E          << SSP_CR0_DSS_POS                                                       )
#define SSP_CR0_DSS_16_BITS                                                            ( 0x0F          << SSP_CR0_DSS_POS                                                       )
#define SSP_CR0_DSS_VALUE( x )                                                         ( ( x )         << SSP_CR0_DSS_POS                                                       )

#define SSP_CR0_FRF_MOTOROLA_SPI                                                      ~( 0x03          << SSP_CR0_FRF_POS                                                       )
#define SSP_CR0_FRF_TEXAS_INSTRUMENTS                                                  ( 0x01          << SSP_CR0_FRF_POS                                                       )
#define SSP_CR0_FRF_MICROWIRE                                                          ( 0x02          << SSP_CR0_FRF_POS                                                       )
#define SSP_CR0_FRF_RESERVED                                                           ( 0x03          << SSP_CR0_FRF_POS                                                       )

#define SSP_CR0_SPO_LOW                                                               ~( 0x01          << SSP_CR0_SPO_POS                                                       )
#define SSP_CR0_SPO_HIGH                                                               ( 0x01          << SSP_CR0_SPO_POS                                                       )

#define SSP_CR0_SPH_FIRST_EDGE                                                        ~( 0x01          << SSP_CR0_SPH_POS                                                       )
#define SSP_CR0_SPH_SECOND_EDGE                                                        ( 0x01          << SSP_CR0_SPH_POS                                                       )

#define SSP_CR0_SCR_ZERO                                                              ~( 0xFF          << SSP_CR0_SCR_POS                                                       )
#define SSP_CR0_SCR_VALUE( x )                                                         ( ( x )         << SSP_CR0_SCR_POS                                                       )
// CR1 register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_CR1_LBM_POS                                                            0
#define MDR_SSP_CR1_SSE_POS                                                            1
#define MDR_SSP_CR1_MS_POS                                                             2
#define MDR_SSP_CR1_SOD_POS                                                            3

#define MDR_SSP_CR1_LBM_MSK                                                            ( 0x01          << MDR_SSP_CR1_LBM_POS                                                   )
#define MDR_SSP_CR1_SSE_MSK                                                            ( 0x01          << MDR_SSP_CR1_SSE_POS                                                   )
#define MDR_SSP_CR1_MS_MSK                                                             ( 0x01          << MDR_SSP_CR1_MS_POS                                                    )
#define MDR_SSP_CR1_SOD_MSK                                                            ( 0x01          << MDR_SSP_CR1_SOD_POS                                                   )

#define MDR_SSP_CR1_LBM_NORMAL                                                        ~( 0x01          << MDR_SSP_CR1_LBM_POS                                                   )
#define MDR_SSP_CR1_LBM_LOOPBACK                                                       ( 0x01          << MDR_SSP_CR1_LBM_POS                                                   )

#define MDR_SSP_CR1_SSE_DISABLE                                                       ~( 0x01          << MDR_SSP_CR1_SSE_POS                                                   )
#define MDR_SSP_CR1_SSE_ENABLE                                                         ( 0x01          << MDR_SSP_CR1_SSE_POS                                                   )

#define MDR_SSP_CR1_MS_MASTER                                                         ~( 0x01          << MDR_SSP_CR1_MS_POS                                                    )
#define MDR_SSP_CR1_MS_SLAVE                                                           ( 0x01          << MDR_SSP_CR1_MS_POS                                                    )

#define MDR_SSP_CR1_SOD_OUTPUT_ENABLE                                                 ~( 0x01          << MDR_SSP_CR1_SOD_POS                                                   )
#define MDR_SSP_CR1_SOD_OUTPUT_DISABLE                                                 ( 0x01          << MDR_SSP_CR1_SOD_POS                                                   )

#define SSP_CR1_BIT_POS( x )                                                           ( x                                                                                      )
#define SSP_CR1_BIT_MSK( x )                                                           ( 0x01          << SSP_CR1_BIT_POS( x )                                                  )

#define SSP_CR1_BIT_DISABLE( x )                                                      ~( 0x01          << SSP_CR1_BIT_POS( x )                                                  )
#define SSP_CR1_BIT_ENABLE( x )                                                        ( 0x01          << SSP_CR1_BIT_POS( x )                                                  )
// DR register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_DR_DATA_POS                                                            0

#define MDR_SSP_DR_DATA_MSK                                                            ( 0xFFFF        << MDR_SSP_DR_DATA_POS                                                   )

#define MDR_SSP_DR_DATA_ZERO                                                          ~( 0xFFFF        << MDR_SSP_DR_DATA_POS                                                   )
#define MDR_SSP_DR_DATA_VALUE( x )                                                     ( ( x )         << MDR_SSP_DR_DATA_POS                                                   )

#define SSP_DR_DATA_POS                                                                0
#define SSP_DR_DATA_MSK                                                                ( 0xFFFF        << SSP_DR_DATA_POS                                                       )

#define SSP_DR_DATA_ZERO                                                              ~( 0xFFFF        << SSP_DR_DATA_POS                                                       )
#define SSP_DR_DATA_VALUE( x )                                                         ( ( x )         << SSP_DR_DATA_POS                                                       )
// SR register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_SR_TFE_POS                                                             0
#define MDR_SSP_SR_TNF_POS                                                             1
#define MDR_SSP_SR_RNE_POS                                                             2
#define MDR_SSP_SR_RFF_POS                                                             3
#define MDR_SSP_SR_BSY_POS                                                             4

#define MDR_SSP_SR_TFE_MSK                                                             ( 0x01          << MDR_SSP_SR_TFE_POS                                                    )
#define MDR_SSP_SR_TNF_MSK                                                             ( 0x01          << MDR_SSP_SR_TNF_POS                                                    )
#define MDR_SSP_SR_RNE_MSK                                                             ( 0x01          << MDR_SSP_SR_RNE_POS                                                    )
#define MDR_SSP_SR_RFF_MSK                                                             ( 0x01          << MDR_SSP_SR_RFF_POS                                                    )
#define MDR_SSP_SR_BSY_MSK                                                             ( 0x01          << MDR_SSP_SR_BSY_POS                                                    )

#define MDR_SSP_SR_TFE_NOT_EMPTY                                                      ~( 0x01          << MDR_SSP_SR_TFE_POS                                                    )
#define MDR_SSP_SR_TFE_EMPTY                                                           ( 0x01          << MDR_SSP_SR_TFE_POS                                                    )

#define MDR_SSP_SR_TNF_FULL                                                           ~( 0x01          << MDR_SSP_SR_TNF_POS                                                    )
#define MDR_SSP_SR_TNF_NOT_FULL                                                        ( 0x01          << MDR_SSP_SR_TNF_POS                                                    )

#define MDR_SSP_SR_RNE_EMPTY                                                          ~( 0x01          << MDR_SSP_SR_RNE_POS                                                    )
#define MDR_SSP_SR_RNE_NOT_EMPTY                                                       ( 0x01          << MDR_SSP_SR_RNE_POS                                                    )

#define MDR_SSP_SR_RFF_NOT_FULL                                                       ~( 0x01          << MDR_SSP_SR_RFF_POS                                                    )
#define MDR_SSP_SR_RFF_FULL                                                            ( 0x01          << MDR_SSP_SR_RFF_POS                                                    )

#define MDR_SSP_SR_BSY_INACTIVE                                                       ~( 0x01          << MDR_SSP_SR_BSY_POS                                                    )
#define MDR_SSP_SR_BSY_ACTIVE                                                          ( 0x01          << MDR_SSP_SR_BSY_POS                                                    )

#define SSP_SR_FLAG_POS( x )                                                           ( x                                                                                      )
#define SSP_SR_FLAG_MSK( x )                                                           ( 0x01          << SSP_SR_FLAG_POS( x )                                                  )

#define SSP_SR_FLAG_CLEAR( x )                                                        ~( 0x01          << SSP_SR_FLAG_POS( x )                                                  )
#define SSP_SR_FLAG_SET( x )                                                           ( 0x01          << SSP_SR_FLAG_POS( x )                                                  )
// CPSR register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_CPSR_CPSDVSR_POS                                                       0

#define MDR_SSP_CPSR_CPSDVSR_MSK                                                       ( 0xFF          << MDR_SSP_CPSR_CPSDVSR_POS                                              )

#define MDR_SSP_CPSR_CPSDVSR_ZERO                                                     ~( 0xFF          << MDR_SSP_CPSR_CPSDVSR_POS                                              )
#define MDR_SSP_CPSR_CPSDVSR_VALUE( x )                                                ( ( x )         << MDR_SSP_CPSR_CPSDVSR_POS                                              )

#define SSP_CPSR_CPSDVSR_POS                                                           0
#define SSP_CPSR_CPSDVSR_MSK                                                           ( 0xFF          << SSP_CPSR_CPSDVSR_POS                                                  )

#define SSP_CPSR_CPSDVSR_ZERO                                                         ~( 0xFF          << SSP_CPSR_CPSDVSR_POS                                                  )
#define SSP_CPSR_CPSDVSR_VALUE( x )                                                    ( ( x )         << SSP_CPSR_CPSDVSR_POS                                                  )
// IMSC register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_IMSC_RORIM_POS                                                         0
#define MDR_SSP_IMSC_RTIM_POS                                                          1
#define MDR_SSP_IMSC_RXIM_POS                                                          2
#define MDR_SSP_IMSC_TXIM_POS                                                          3

#define MDR_SSP_IMSC_RORIM_MSK                                                         ( 0x01          << MDR_SSP_IMSC_RORIM_POS                                                )
#define MDR_SSP_IMSC_RTIM_MSK                                                          ( 0x01          << MDR_SSP_IMSC_RTIM_POS                                                 )
#define MDR_SSP_IMSC_RXIM_MSK                                                          ( 0x01          << MDR_SSP_IMSC_RXIM_POS                                                 )
#define MDR_SSP_IMSC_TXIM_MSK                                                          ( 0x01          << MDR_SSP_IMSC_TXIM_POS                                                 )

#define MDR_SSP_IMSC_RORIM_MASKED                                                     ~( 0x01          << MDR_SSP_IMSC_RORIM_POS                                                )
#define MDR_SSP_IMSC_RORIM_NOT_MASKED                                                  ( 0x01          << MDR_SSP_IMSC_RORIM_POS                                                )

#define MDR_SSP_IMSC_RTIM_MASKED                                                      ~( 0x01          << MDR_SSP_IMSC_RTIM_POS                                                 )
#define MDR_SSP_IMSC_RTIM_NOT_MASKED                                                   ( 0x01          << MDR_SSP_IMSC_RTIM_POS                                                 )

#define MDR_SSP_IMSC_RXIM_MASKED                                                      ~( 0x01          << MDR_SSP_IMSC_RXIM_POS                                                 )
#define MDR_SSP_IMSC_RXIM_NOT_MASKED                                                   ( 0x01          << MDR_SSP_IMSC_RXIM_POS                                                 )

#define MDR_SSP_IMSC_TXIM_MASKED                                                      ~( 0x01          << MDR_SSP_IMSC_TXIM_POS                                                 )
#define MDR_SSP_IMSC_TXIM_NOT_MASKED                                                   ( 0x01          << MDR_SSP_IMSC_TXIM_POS                                                 )

#define SSP_IMSC_INTERRUPT_POS( x )                                                    ( x                                                                                      )
#define SSP_IMSC_INTERRUPT_MSK( x )                                                    ( 0x01          << SSP_IMSC_INTERRUPT_POS( x )                                           )

#define SSP_IMSC_INTERRUPT_MASKED( x )                                                ~( 0x01          << SSP_IMSC_INTERRUPT_POS( x )                                           )
#define SSP_IMSC_INTERRUPT_NOT_MASKED( x )                                             ( 0x01          << SSP_IMSC_INTERRUPT_POS( x )                                           )
// RIS register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_RIS_RORRIS_POS                                                         0
#define MDR_SSP_RIS_RTRIS_POS                                                          1
#define MDR_SSP_RIS_RXRIS_POS                                                          2
#define MDR_SSP_RIS_TXRIS_POS                                                          3

#define MDR_SSP_RIS_RORRIS_MSK                                                         ( 0x01          << MDR_SSP_RIS_RORRIS_POS                                                )
#define MDR_SSP_RIS_RTRIS_MSK                                                          ( 0x01          << MDR_SSP_RIS_RTRIS_POS                                                 )
#define MDR_SSP_RIS_RXRIS_MSK                                                          ( 0x01          << MDR_SSP_RIS_RXRIS_POS                                                 )
#define MDR_SSP_RIS_TXRIS_MSK                                                          ( 0x01          << MDR_SSP_RIS_TXRIS_POS                                                 )

#define MDR_SSP_RIS_RORRIS_NOT_SET                                                    ~( 0x01          << MDR_SSP_RIS_RORRIS_POS                                                )
#define MDR_SSP_RIS_RORRIS_SET                                                         ( 0x01          << MDR_SSP_RIS_RORRIS_POS                                                )

#define MDR_SSP_RIS_RTRIS_NOT_SET                                                     ~( 0x01          << MDR_SSP_RIS_RTRIS_POS                                                 )
#define MDR_SSP_RIS_RTRIS_SET                                                          ( 0x01          << MDR_SSP_RIS_RTRIS_POS                                                 )

#define MDR_SSP_RIS_RXRIS_NOT_SET                                                     ~( 0x01          << MDR_SSP_RIS_RXRIS_POS                                                 )
#define MDR_SSP_RIS_RXRIS_SET                                                          ( 0x01          << MDR_SSP_RIS_RXRIS_POS                                                 )

#define MDR_SSP_RIS_TXRIS_NOT_SET                                                     ~( 0x01          << MDR_SSP_RIS_TXRIS_POS                                                 )
#define MDR_SSP_RIS_TXRIS_SET                                                          ( 0x01          << MDR_SSP_RIS_TXRIS_POS                                                 )

#define SSP_RIS_INTERRUPT_POS( x )                                                     ( x                                                                                      )
#define SSP_RIS_INTERRUPT_MSK( x )                                                     ( 0x01          << SSP_RIS_INTERRUPT_POS( x )                                            )

#define SSP_RIS_INTERRUPT_NOT_SET( x )                                                ~( 0x01          << SSP_RIS_INTERRUPT_POS( x )                                            )
#define SSP_RIS_INTERRUPT_SET( x )                                                     ( 0x01          << SSP_RIS_INTERRUPT_POS( x )                                            )
// MIS register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_MIS_RORMIS_POS                                                         0
#define MDR_SSP_MIS_RTMIS_POS                                                          1
#define MDR_SSP_MIS_RXMIS_POS                                                          2
#define MDR_SSP_MIS_TXMIS_POS                                                          3

#define MDR_SSP_MIS_RORMIS_MSK                                                         ( 0x01          << MDR_SSP_MIS_RORMIS_POS                                                )
#define MDR_SSP_MIS_RTMIS_MSK                                                          ( 0x01          << MDR_SSP_MIS_RTMIS_POS                                                 )
#define MDR_SSP_MIS_RXMIS_MSK                                                          ( 0x01          << MDR_SSP_MIS_RXMIS_POS                                                 )
#define MDR_SSP_MIS_TXMIS_MSK                                                          ( 0x01          << MDR_SSP_MIS_TXMIS_POS                                                 )

#define MDR_SSP_MIS_RORMIS_NOT_SET                                                    ~( 0x01          << MDR_SSP_MIS_RORMIS_POS                                                )
#define MDR_SSP_MIS_RORMIS_SET                                                         ( 0x01          << MDR_SSP_MIS_RORMIS_POS                                                )

#define MDR_SSP_MIS_RTMIS_NOT_SET                                                     ~( 0x01          << MDR_SSP_MIS_RTMIS_POS                                                 )
#define MDR_SSP_MIS_RTMIS_SET                                                          ( 0x01          << MDR_SSP_MIS_RTMIS_POS                                                 )

#define MDR_SSP_MIS_RXMIS_NOT_SET                                                     ~( 0x01          << MDR_SSP_MIS_RXMIS_POS                                                 )
#define MDR_SSP_MIS_RXMIS_SET                                                          ( 0x01          << MDR_SSP_MIS_RXMIS_POS                                                 )

#define MDR_SSP_MIS_TXMIS_NOT_SET                                                     ~( 0x01          << MDR_SSP_MIS_TXMIS_POS                                                 )
#define MDR_SSP_MIS_TXMIS_SET                                                          ( 0x01          << MDR_SSP_MIS_TXMIS_POS                                                 )

#define SSP_MIS_INTERRUPT_POS( x )                                                     ( x                                                                                      )
#define SSP_MIS_INTERRUPT_MSK( x )                                                     ( 0x01          << SSP_MIS_INTERRUPT_POS( x )                                            )

#define SSP_MIS_INTERRUPT_NOT_SET( x )                                                ~( 0x01          << SSP_MIS_INTERRUPT_POS( x )                                            )
#define SSP_MIS_INTERRUPT_SET( x )                                                     ( 0x01          << SSP_MIS_INTERRUPT_POS( x )                                            )
// ICR register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_ICR_RORIC_POS                                                          0
#define MDR_SSP_ICR_RTIC_POS                                                           1

#define MDR_SSP_ICR_RORIC_MSK                                                          ( 0x01          << MDR_SSP_ICR_RORIC_POS                                                 )
#define MDR_SSP_ICR_RTIC_MSK                                                           ( 0x01          << MDR_SSP_ICR_RTIC_POS                                                  )

#define MDR_SSP_ICR_RORIC_CLEAR                                                        ( 0x01          << MDR_SSP_ICR_RORIC_POS                                                 )
#define MDR_SSP_ICR_RTIC_CLEAR                                                         ( 0x01          << MDR_SSP_ICR_RTIC_POS                                                  )

#define SSP_ICR_INTERRUPT_POS( x )                                                     ( x                                                                                      )
#define SSP_ICR_INTERRUPT_MSK( x )                                                     ( 0x01          << SSP_ICR_INTERRUPT_POS( x )                                            )

#define SSP_ICR_INTERRUPT_CLEAR( x )                                                   ( 0x01          << SSP_ICR_INTERRUPT_POS( x )                                            )
// DMACR register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_DMACR_RXDMAE_POS                                                       0
#define MDR_SSP_DMACR_TXDMAE_POS                                                       1

#define MDR_SSP_DMACR_RXDMAE_MSK                                                       ( 0x01          << MDR_SSP_DMACR_RXDMAE_POS                                              )
#define MDR_SSP_DMACR_TXDMAE_MSK                                                       ( 0x01          << MDR_SSP_DMACR_TXDMAE_POS                                              )

#define MDR_SSP_DMACR_RXDMAE_DISABLE                                                  ~( 0x01          << MDR_SSP_DMACR_RXDMAE_POS                                              )
#define MDR_SSP_DMACR_RXDMAE_ENABLE                                                    ( 0x01          << MDR_SSP_DMACR_RXDMAE_POS                                              )

#define MDR_SSP_DMACR_TXDMAE_DISABLE                                                  ~( 0x01          << MDR_SSP_DMACR_TXDMAE_POS                                              )
#define MDR_SSP_DMACR_TXDMAE_ENABLE                                                    ( 0x01          << MDR_SSP_DMACR_TXDMAE_POS                                              )

#define SSP_DMACR_BIT_POS( x )                                                         ( x                                                                                      )
#define SSP_DMACR_BIT_MSK( x )                                                         ( 0x01          << SSP_DMACR_BIT_POS( x )                                                )

#define SSP_DMACR_BIT_DISABLE( x )                                                    ~( 0x01          << SSP_DMACR_BIT_POS( x )                                                )
#define SSP_DMACR_BIT_ENABLE( x )                                                      ( 0x01          << SSP_DMACR_BIT_POS( x )                                                )
// CR0 register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_CR0_DSS_ZERO_VAL                                                       0
#define MDR_SSP_CR0_DSS_4_BITS_VAL                                                     3
#define MDR_SSP_CR0_DSS_5_BITS_VAL                                                     4
#define MDR_SSP_CR0_DSS_6_BITS_VAL                                                     5
#define MDR_SSP_CR0_DSS_7_BITS_VAL                                                     6
#define MDR_SSP_CR0_DSS_8_BITS_VAL                                                     7
#define MDR_SSP_CR0_DSS_9_BITS_VAL                                                     8
#define MDR_SSP_CR0_DSS_10_BITS_VAL                                                    9
#define MDR_SSP_CR0_DSS_11_BITS_VAL                                                    10
#define MDR_SSP_CR0_DSS_12_BITS_VAL                                                    11
#define MDR_SSP_CR0_DSS_13_BITS_VAL                                                    12
#define MDR_SSP_CR0_DSS_14_BITS_VAL                                                    13
#define MDR_SSP_CR0_DSS_15_BITS_VAL                                                    14
#define MDR_SSP_CR0_DSS_16_BITS_VAL                                                    15
#define MDR_SSP_CR0_DSS_VAL( x )                                                       ( x                                                                                      )

#define MDR_SSP_CR0_FRF_MOTOROLA_SPI_VAL                                               0
#define MDR_SSP_CR0_FRF_TEXAS_INSTRUMENTS_VAL                                         1
#define MDR_SSP_CR0_FRF_MICROWIRE_VAL                                                  2
#define MDR_SSP_CR0_FRF_RESERVED_VAL                                                   3

#define MDR_SSP_CR0_SPO_LOW_VAL                                                        0
#define MDR_SSP_CR0_SPO_HIGH_VAL                                                       1

#define MDR_SSP_CR0_SPH_FIRST_EDGE_VAL                                                 0
#define MDR_SSP_CR0_SPH_SECOND_EDGE_VAL                                                1

#define MDR_SSP_CR0_SCR_ZERO_VAL                                                       0
#define MDR_SSP_CR0_SCR_VAL( x )                                                       ( x                                                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t DSS : 4;
        uint32_t FRF : 2;
        uint32_t SPO : 1;
        uint32_t SPH : 1;
        uint32_t SCR : 8;
        uint32_t     : 16;
    };

} MDR_SSP_CR0_TypeDef;
// CR1 register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_CR1_LBM_NORMAL_VAL                                                     0
#define MDR_SSP_CR1_LBM_LOOPBACK_VAL                                                   1

#define MDR_SSP_CR1_SSE_DISABLE_VAL                                                    0
#define MDR_SSP_CR1_SSE_ENABLE_VAL                                                     1

#define MDR_SSP_CR1_MS_MASTER_VAL                                                      0
#define MDR_SSP_CR1_MS_SLAVE_VAL                                                       1

#define MDR_SSP_CR1_SOD_OUTPUT_ENABLE_VAL                                              0
#define MDR_SSP_CR1_SOD_OUTPUT_DISABLE_VAL                                             1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t LBM : 1;
        uint32_t SSE : 1;
        uint32_t MS  : 1;
        uint32_t SOD : 1;
        uint32_t     : 28;
    };

} MDR_SSP_CR1_TypeDef;
// DR register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_DR_DATA_ZERO_VAL                                                       0
#define MDR_SSP_DR_DATA_VAL( x )                                                       ( x                                                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t DATA : 16;
        uint32_t      : 16;
    };

} MDR_SSP_DR_TypeDef;
// SR register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_SR_TFE_NOT_EMPTY_VAL                                                   0
#define MDR_SSP_SR_TFE_EMPTY_VAL                                                       1

#define MDR_SSP_SR_TNF_FULL_VAL                                                        0
#define MDR_SSP_SR_TNF_NOT_FULL_VAL                                                    1

#define MDR_SSP_SR_RNE_EMPTY_VAL                                                       0
#define MDR_SSP_SR_RNE_NOT_EMPTY_VAL                                                   1

#define MDR_SSP_SR_RFF_NOT_FULL_VAL                                                    0
#define MDR_SSP_SR_RFF_FULL_VAL                                                        1

#define MDR_SSP_SR_BSY_INACTIVE_VAL                                                    0
#define MDR_SSP_SR_BSY_ACTIVE_VAL                                                      1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t TFE : 1;
        uint32_t TNF : 1;
        uint32_t RNE : 1;
        uint32_t RFF : 1;
        uint32_t BSY : 1;
        uint32_t     : 27;
    };

} MDR_SSP_SR_TypeDef;
// CPSR register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_CPSR_CPSDVSR_ZERO_VAL                                                  0
#define MDR_SSP_CPSR_CPSDVSR_VAL( x )                                                  ( x                                                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CPSDVSR : 8;
        uint32_t         : 24;
    };

} MDR_SSP_CPSR_TypeDef;
// IMSC register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_IMSC_RORIM_MASKED_VAL                                                  0
#define MDR_SSP_IMSC_RORIM_NOT_MASKED_VAL                                              1

#define MDR_SSP_IMSC_RTIM_MASKED_VAL                                                   0
#define MDR_SSP_IMSC_RTIM_NOT_MASKED_VAL                                               1

#define MDR_SSP_IMSC_RXIM_MASKED_VAL                                                   0
#define MDR_SSP_IMSC_RXIM_NOT_MASKED_VAL                                               1

#define MDR_SSP_IMSC_TXIM_MASKED_VAL                                                   0
#define MDR_SSP_IMSC_TXIM_NOT_MASKED_VAL                                               1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t RORIM : 1;
        uint32_t RTIM  : 1;
        uint32_t RXIM  : 1;
        uint32_t TXIM  : 1;
        uint32_t       : 28;
    };

} MDR_SSP_IMSC_TypeDef;
// RIS register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_RIS_RORRIS_NOT_SET_VAL                                                 0
#define MDR_SSP_RIS_RORRIS_SET_VAL                                                     1

#define MDR_SSP_RIS_RTRIS_NOT_SET_VAL                                                  0
#define MDR_SSP_RIS_RTRIS_SET_VAL                                                      1

#define MDR_SSP_RIS_RXRIS_NOT_SET_VAL                                                  0
#define MDR_SSP_RIS_RXRIS_SET_VAL                                                      1

#define MDR_SSP_RIS_TXRIS_NOT_SET_VAL                                                  0
#define MDR_SSP_RIS_TXRIS_SET_VAL                                                      1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t RORRIS : 1;
        uint32_t RTRIS  : 1;
        uint32_t RXRIS  : 1;
        uint32_t TXRIS  : 1;
        uint32_t        : 28;
    };

} MDR_SSP_RIS_TypeDef;
// MIS register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_MIS_RORMIS_NOT_SET_VAL                                                 0
#define MDR_SSP_MIS_RORMIS_SET_VAL                                                     1

#define MDR_SSP_MIS_RTMIS_NOT_SET_VAL                                                  0
#define MDR_SSP_MIS_RTMIS_SET_VAL                                                      1

#define MDR_SSP_MIS_RXMIS_NOT_SET_VAL                                                  0
#define MDR_SSP_MIS_RXMIS_SET_VAL                                                      1

#define MDR_SSP_MIS_TXMIS_NOT_SET_VAL                                                  0
#define MDR_SSP_MIS_TXMIS_SET_VAL                                                      1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t RORMIS : 1;
        uint32_t RTMIS  : 1;
        uint32_t RXMIS  : 1;
        uint32_t TXMIS  : 1;
        uint32_t        : 28;
    };

} MDR_SSP_MIS_TypeDef;
// ICR register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_ICR_RORIC_CLEAR_VAL                                                    1
#define MDR_SSP_ICR_RTIC_CLEAR_VAL                                                     1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t RORIC : 1;
        uint32_t RTIC  : 1;
        uint32_t       : 30;
    };

} MDR_SSP_ICR_TypeDef;
// DMACR register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP_DMACR_RXDMAE_DISABLE_VAL                                               0
#define MDR_SSP_DMACR_RXDMAE_ENABLE_VAL                                                1

#define MDR_SSP_DMACR_TXDMAE_DISABLE_VAL                                               0
#define MDR_SSP_DMACR_TXDMAE_ENABLE_VAL                                                1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t RXDMAE : 1;
        uint32_t TXDMAE : 1;
        uint32_t        : 30;
    };

} MDR_SSP_DMACR_TypeDef;
// SSP structure Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef struct
{
    __IO MDR_SSP_CR0_TypeDef   CR0;
    __IO MDR_SSP_CR1_TypeDef   CR1;
    __IO MDR_SSP_DR_TypeDef    DR;
    __I  MDR_SSP_SR_TypeDef    SR;
    __IO MDR_SSP_CPSR_TypeDef  CPSR;
    __IO MDR_SSP_IMSC_TypeDef  IMSC;
    __I  MDR_SSP_RIS_TypeDef   RIS;
    __I  MDR_SSP_MIS_TypeDef   MIS;
    __O  MDR_SSP_ICR_TypeDef   ICR;
    __IO MDR_SSP_DMACR_TypeDef DMACR;

} MDR_SSP_TypeDefUnion;

// SSP addresses
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SSP1_UNION_BASE                                                          ( 0x40040000                                                )
#define MDR_SSP2_UNION_BASE                                                          ( 0x400A0000                                                )

#define MDR_SSP_CR0_OFFSET                                                           ( 0x000                                                     )
#define MDR_SSP_CR1_OFFSET                                                           ( 0x004                                                     )
#define MDR_SSP_DR_OFFSET                                                            ( 0x008                                                     )
#define MDR_SSP_SR_OFFSET                                                            ( 0x00C                                                     )
#define MDR_SSP_CPSR_OFFSET                                                          ( 0x010                                                     )
#define MDR_SSP_IMSC_OFFSET                                                          ( 0x014                                                     )
#define MDR_SSP_RIS_OFFSET                                                           ( 0x018                                                     )
#define MDR_SSP_MIS_OFFSET                                                           ( 0x01C                                                     )
#define MDR_SSP_ICR_OFFSET                                                           ( 0x020                                                     )
#define MDR_SSP_DMACR_OFFSET                                                         ( 0x024                                                     )

#define MDR_SSP1_CR0_ADDRESS                                                         ( MDR_SSP1_UNION_BASE + MDR_SSP_CR0_OFFSET                 )
#define MDR_SSP1_CR1_ADDRESS                                                         ( MDR_SSP1_UNION_BASE + MDR_SSP_CR1_OFFSET                 )
#define MDR_SSP1_DR_ADDRESS                                                          ( MDR_SSP1_UNION_BASE + MDR_SSP_DR_OFFSET                  )
#define MDR_SSP1_SR_ADDRESS                                                          ( MDR_SSP1_UNION_BASE + MDR_SSP_SR_OFFSET                  )
#define MDR_SSP1_CPSR_ADDRESS                                                        ( MDR_SSP1_UNION_BASE + MDR_SSP_CPSR_OFFSET                )
#define MDR_SSP1_IMSC_ADDRESS                                                        ( MDR_SSP1_UNION_BASE + MDR_SSP_IMSC_OFFSET                )
#define MDR_SSP1_RIS_ADDRESS                                                         ( MDR_SSP1_UNION_BASE + MDR_SSP_RIS_OFFSET                 )
#define MDR_SSP1_MIS_ADDRESS                                                         ( MDR_SSP1_UNION_BASE + MDR_SSP_MIS_OFFSET                 )
#define MDR_SSP1_ICR_ADDRESS                                                         ( MDR_SSP1_UNION_BASE + MDR_SSP_ICR_OFFSET                 )
#define MDR_SSP1_DMACR_ADDRESS                                                       ( MDR_SSP1_UNION_BASE + MDR_SSP_DMACR_OFFSET               )

#define MDR_SSP2_CR0_ADDRESS                                                         ( MDR_SSP2_UNION_BASE + MDR_SSP_CR0_OFFSET                 )
#define MDR_SSP2_CR1_ADDRESS                                                         ( MDR_SSP2_UNION_BASE + MDR_SSP_CR1_OFFSET                 )
#define MDR_SSP2_DR_ADDRESS                                                          ( MDR_SSP2_UNION_BASE + MDR_SSP_DR_OFFSET                  )
#define MDR_SSP2_SR_ADDRESS                                                          ( MDR_SSP2_UNION_BASE + MDR_SSP_SR_OFFSET                  )
#define MDR_SSP2_CPSR_ADDRESS                                                        ( MDR_SSP2_UNION_BASE + MDR_SSP_CPSR_OFFSET                )
#define MDR_SSP2_IMSC_ADDRESS                                                        ( MDR_SSP2_UNION_BASE + MDR_SSP_IMSC_OFFSET                )
#define MDR_SSP2_RIS_ADDRESS                                                         ( MDR_SSP2_UNION_BASE + MDR_SSP_RIS_OFFSET                 )
#define MDR_SSP2_MIS_ADDRESS                                                         ( MDR_SSP2_UNION_BASE + MDR_SSP_MIS_OFFSET                 )
#define MDR_SSP2_ICR_ADDRESS                                                         ( MDR_SSP2_UNION_BASE + MDR_SSP_ICR_OFFSET                 )
#define MDR_SSP2_DMACR_ADDRESS                                                       ( MDR_SSP2_UNION_BASE + MDR_SSP_DMACR_OFFSET               )

#define MDR_SSP1_UNION                                                               ( ( MDR_SSP_TypeDefUnion * ) MDR_SSP1_UNION_BASE             )
#define MDR_SSP2_UNION                                                               ( ( MDR_SSP_TypeDefUnion * ) MDR_SSP2_UNION_BASE             )

// SSP Union functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void MDR_SSP_Union_Enable( MDR_SSP_TypeDefUnion *ssp );
void MDR_SSP_Union_Disable( MDR_SSP_TypeDefUnion *ssp );

void MDR_SSP_Union_SetMode( MDR_SSP_TypeDefUnion *ssp, uint32_t mode );
void MDR_SSP_Union_LoopbackEnable( MDR_SSP_TypeDefUnion *ssp );
void MDR_SSP_Union_LoopbackDisable( MDR_SSP_TypeDefUnion *ssp );
void MDR_SSP_Union_SlaveOutputEnable( MDR_SSP_TypeDefUnion *ssp );
void MDR_SSP_Union_SlaveOutputDisable( MDR_SSP_TypeDefUnion *ssp );

void MDR_SSP_Union_SetDataSize( MDR_SSP_TypeDefUnion *ssp, uint32_t data_size );
void MDR_SSP_Union_SetFrameFormat( MDR_SSP_TypeDefUnion *ssp, uint32_t frame_format );
void MDR_SSP_Union_SetClockPolarity( MDR_SSP_TypeDefUnion *ssp, uint32_t polarity );
void MDR_SSP_Union_SetClockPhase( MDR_SSP_TypeDefUnion *ssp, uint32_t phase );
void MDR_SSP_Union_SetSerialClockRate( MDR_SSP_TypeDefUnion *ssp, uint32_t serial_clock_rate );
void MDR_SSP_Union_SetClockPrescaler( MDR_SSP_TypeDefUnion *ssp, uint32_t prescaler );

void MDR_SSP_Union_WriteData( MDR_SSP_TypeDefUnion *ssp, uint16_t data );
uint16_t MDR_SSP_Union_ReadData( MDR_SSP_TypeDefUnion *ssp );
uint8_t MDR_SSP_Union_IsTxReady( MDR_SSP_TypeDefUnion *ssp );
uint8_t MDR_SSP_Union_IsRxReady( MDR_SSP_TypeDefUnion *ssp );
uint8_t MDR_SSP_Union_IsBusy( MDR_SSP_TypeDefUnion *ssp );

void MDR_SSP_Union_InterruptEnable( MDR_SSP_TypeDefUnion *ssp, uint32_t interrupt_mask );
void MDR_SSP_Union_InterruptDisable( MDR_SSP_TypeDefUnion *ssp, uint32_t interrupt_mask );
uint32_t MDR_SSP_Union_GetRawInterruptStatus( MDR_SSP_TypeDefUnion *ssp );
uint32_t MDR_SSP_Union_GetMaskedInterruptStatus( MDR_SSP_TypeDefUnion *ssp );
void MDR_SSP_Union_ClearInterrupts( MDR_SSP_TypeDefUnion *ssp, uint32_t interrupt_mask );

void MDR_SSP_Union_RxDMAEnable( MDR_SSP_TypeDefUnion *ssp );
void MDR_SSP_Union_RxDMADisable( MDR_SSP_TypeDefUnion *ssp );
void MDR_SSP_Union_TxDMAEnable( MDR_SSP_TypeDefUnion *ssp );
void MDR_SSP_Union_TxDMADisable( MDR_SSP_TypeDefUnion *ssp );

// SSP Milandr functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void MDR_SSP_Enable( MDR_SSP_TypeDef *ssp );
void MDR_SSP_Disable( MDR_SSP_TypeDef *ssp );

void MDR_SSP_SetMode( MDR_SSP_TypeDef *ssp, uint32_t mode );
void MDR_SSP_LoopbackEnable( MDR_SSP_TypeDef *ssp );
void MDR_SSP_LoopbackDisable( MDR_SSP_TypeDef *ssp );
void MDR_SSP_SlaveOutputEnable( MDR_SSP_TypeDef *ssp );
void MDR_SSP_SlaveOutputDisable( MDR_SSP_TypeDef *ssp );

void MDR_SSP_SetDataSize( MDR_SSP_TypeDef *ssp, uint32_t data_size );
void MDR_SSP_SetFrameFormat( MDR_SSP_TypeDef *ssp, uint32_t frame_format );
void MDR_SSP_SetClockPolarity( MDR_SSP_TypeDef *ssp, uint32_t polarity );
void MDR_SSP_SetClockPhase( MDR_SSP_TypeDef *ssp, uint32_t phase );
void MDR_SSP_SetSerialClockRate( MDR_SSP_TypeDef *ssp, uint32_t serial_clock_rate );
void MDR_SSP_SetClockPrescaler( MDR_SSP_TypeDef *ssp, uint32_t prescaler );

void MDR_SSP_WriteData( MDR_SSP_TypeDef *ssp, uint16_t data );
uint16_t MDR_SSP_ReadData( MDR_SSP_TypeDef *ssp );
uint8_t MDR_SSP_IsTxReady( MDR_SSP_TypeDef *ssp );
uint8_t MDR_SSP_IsRxReady( MDR_SSP_TypeDef *ssp );
uint8_t MDR_SSP_IsBusy( MDR_SSP_TypeDef *ssp );

void MDR_SSP_InterruptEnable( MDR_SSP_TypeDef *ssp, uint32_t interrupt_mask );
void MDR_SSP_InterruptDisable( MDR_SSP_TypeDef *ssp, uint32_t interrupt_mask );
uint32_t MDR_SSP_GetRawInterruptStatus( MDR_SSP_TypeDef *ssp );
uint32_t MDR_SSP_GetMaskedInterruptStatus( MDR_SSP_TypeDef *ssp );
void MDR_SSP_ClearInterrupts( MDR_SSP_TypeDef *ssp, uint32_t interrupt_mask );

void MDR_SSP_RxDMAEnable( MDR_SSP_TypeDef *ssp );
void MDR_SSP_RxDMADisable( MDR_SSP_TypeDef *ssp );
void MDR_SSP_TxDMAEnable( MDR_SSP_TypeDef *ssp );
void MDR_SSP_TxDMADisable( MDR_SSP_TypeDef *ssp );

#endif