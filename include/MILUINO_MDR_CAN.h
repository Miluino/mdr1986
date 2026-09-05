#ifndef __MILUINO_MDR_CAN_H
#define __MILUINO_MDR_CAN_H

#include "MDR32F9Q2I.h"
#include <stdint.h>
// CONTROL register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_CONTROL_CAN_EN_POS                                                        0
#define MDR_CAN_CONTROL_ROM_POS                                                           1
#define MDR_CAN_CONTROL_STM_POS                                                           2
#define MDR_CAN_CONTROL_SAP_POS                                                           3
#define MDR_CAN_CONTROL_ROP_POS                                                           4

#define MDR_CAN_CONTROL_CAN_EN_MSK                                                         ( 0x01                     << MDR_CAN_CONTROL_CAN_EN_POS                                                                   )
#define MDR_CAN_CONTROL_ROM_MSK                                                            ( 0x01                     << MDR_CAN_CONTROL_ROM_POS                                                                      )
#define MDR_CAN_CONTROL_STM_MSK                                                            ( 0x01                     << MDR_CAN_CONTROL_STM_POS                                                                      )
#define MDR_CAN_CONTROL_SAP_MSK                                                            ( 0x01                     << MDR_CAN_CONTROL_SAP_POS                                                                      )
#define MDR_CAN_CONTROL_ROP_MSK                                                            ( 0x01                     << MDR_CAN_CONTROL_ROP_POS                                                                      )

#define MDR_CAN_CONTROL_CAN_EN_DISABLE                                                    ~( 0x01                     << MDR_CAN_CONTROL_CAN_EN_POS                                                                   )
#define MDR_CAN_CONTROL_CAN_EN_ENABLE                                                      ( 0x01                     << MDR_CAN_CONTROL_CAN_EN_POS                                                                   )

#define MDR_CAN_CONTROL_ROM_NORMAL                                                        ~( 0x01                     << MDR_CAN_CONTROL_ROM_POS                                                                      )
#define MDR_CAN_CONTROL_ROM_RECEIVE_ONLY                                                   ( 0x01                     << MDR_CAN_CONTROL_ROM_POS                                                                      )

#define MDR_CAN_CONTROL_STM_NORMAL                                                        ~( 0x01                     << MDR_CAN_CONTROL_STM_POS                                                                      )
#define MDR_CAN_CONTROL_STM_SELF_TEST                                                      ( 0x01                     << MDR_CAN_CONTROL_STM_POS                                                                      )

#define MDR_CAN_CONTROL_SAP_ACK_OTHER_ONLY                                                ~( 0x01                     << MDR_CAN_CONTROL_SAP_POS                                                                      )
#define MDR_CAN_CONTROL_SAP_ACK_OWN                                                        ( 0x01                     << MDR_CAN_CONTROL_SAP_POS                                                                      )

#define MDR_CAN_CONTROL_ROP_RECEIVE_OTHER_ONLY                                            ~( 0x01                     << MDR_CAN_CONTROL_ROP_POS                                                                      )
#define MDR_CAN_CONTROL_ROP_RECEIVE_OWN                                                    ( 0x01                     << MDR_CAN_CONTROL_ROP_POS                                                                      )

#define CAN_CONTROL_BIT_POS( x )                                                           ( x                                                                                                                        )
#define CAN_CONTROL_BIT_MSK( x )                                                           ( (uint32_t)0x01           << CAN_CONTROL_BIT_POS( x )                                                                     )

#define CAN_CONTROL_BIT_CLEAR( x )                                                        ~( (uint32_t)0x01           << CAN_CONTROL_BIT_POS( x )                                                                     )
#define CAN_CONTROL_BIT_SET( x )                                                           ( (uint32_t)0x01           << CAN_CONTROL_BIT_POS( x )                                                                     )
// STATUS register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_STATUS_RX_READY_POS                                                       0
#define MDR_CAN_STATUS_TX_READY_POS                                                       1
#define MDR_CAN_STATUS_ERROR_OVER_POS                                                     2
#define MDR_CAN_STATUS_BIT_ERR_POS                                                        3
#define MDR_CAN_STATUS_BIT_STUFF_ERR_POS                                                  4
#define MDR_CAN_STATUS_CRC_ERR_POS                                                        5
#define MDR_CAN_STATUS_FRAME_ERR_POS                                                      6
#define MDR_CAN_STATUS_ACK_ERR_POS                                                        7
#define MDR_CAN_STATUS_ID_LOWER_POS                                                       8
#define MDR_CAN_STATUS_ERR_STATUS_POS                                                     9
#define MDR_CAN_STATUS_RX_ERR_CNT8_POS                                                    11
#define MDR_CAN_STATUS_TX_ERR_CNT8_POS                                                    12
#define MDR_CAN_STATUS_RX_ERR_CNT_POS                                                     16
#define MDR_CAN_STATUS_TX_ERR_CNT_POS                                                     24

#define MDR_CAN_STATUS_RX_READY_MSK                                                        ( 0x01                     << MDR_CAN_STATUS_RX_READY_POS                                                                  )
#define MDR_CAN_STATUS_TX_READY_MSK                                                        ( 0x01                     << MDR_CAN_STATUS_TX_READY_POS                                                                  )
#define MDR_CAN_STATUS_ERROR_OVER_MSK                                                      ( 0x01                     << MDR_CAN_STATUS_ERROR_OVER_POS                                                                )
#define MDR_CAN_STATUS_BIT_ERR_MSK                                                         ( 0x01                     << MDR_CAN_STATUS_BIT_ERR_POS                                                                   )
#define MDR_CAN_STATUS_BIT_STUFF_ERR_MSK                                                   ( 0x01                     << MDR_CAN_STATUS_BIT_STUFF_ERR_POS                                                             )
#define MDR_CAN_STATUS_CRC_ERR_MSK                                                         ( 0x01                     << MDR_CAN_STATUS_CRC_ERR_POS                                                                   )
#define MDR_CAN_STATUS_FRAME_ERR_MSK                                                       ( 0x01                     << MDR_CAN_STATUS_FRAME_ERR_POS                                                                 )
#define MDR_CAN_STATUS_ACK_ERR_MSK                                                         ( 0x01                     << MDR_CAN_STATUS_ACK_ERR_POS                                                                   )
#define MDR_CAN_STATUS_ID_LOWER_MSK                                                        ( 0x01                     << MDR_CAN_STATUS_ID_LOWER_POS                                                                  )
#define MDR_CAN_STATUS_ERR_STATUS_MSK                                                      ( 0x03                     << MDR_CAN_STATUS_ERR_STATUS_POS                                                                )
#define MDR_CAN_STATUS_RX_ERR_CNT8_MSK                                                     ( 0x01                     << MDR_CAN_STATUS_RX_ERR_CNT8_POS                                                               )
#define MDR_CAN_STATUS_TX_ERR_CNT8_MSK                                                     ( 0x01                     << MDR_CAN_STATUS_TX_ERR_CNT8_POS                                                               )
#define MDR_CAN_STATUS_RX_ERR_CNT_MSK                                                      ( 0xFF                     << MDR_CAN_STATUS_RX_ERR_CNT_POS                                                                )
#define MDR_CAN_STATUS_TX_ERR_CNT_MSK                                                      ( (uint32_t)0xFF           << MDR_CAN_STATUS_TX_ERR_CNT_POS                                                                )

#define MDR_CAN_STATUS_RX_READY_EMPTY                                                     ~( 0x01                     << MDR_CAN_STATUS_RX_READY_POS                                                                  )
#define MDR_CAN_STATUS_RX_READY_READY                                                      ( 0x01                     << MDR_CAN_STATUS_RX_READY_POS                                                                  )

#define MDR_CAN_STATUS_TX_READY_EMPTY                                                     ~( 0x01                     << MDR_CAN_STATUS_TX_READY_POS                                                                  )
#define MDR_CAN_STATUS_TX_READY_READY                                                      ( 0x01                     << MDR_CAN_STATUS_TX_READY_POS                                                                  )

#define MDR_CAN_STATUS_ERROR_OVER_CLEAR                                                   ~( 0x01                     << MDR_CAN_STATUS_ERROR_OVER_POS                                                                )
#define MDR_CAN_STATUS_ERROR_OVER_SET                                                      ( 0x01                     << MDR_CAN_STATUS_ERROR_OVER_POS                                                                )

#define MDR_CAN_STATUS_BIT_ERR_CLEAR                                                      ~( 0x01                     << MDR_CAN_STATUS_BIT_ERR_POS                                                                   )
#define MDR_CAN_STATUS_BIT_ERR_SET                                                         ( 0x01                     << MDR_CAN_STATUS_BIT_ERR_POS                                                                   )

#define MDR_CAN_STATUS_BIT_STUFF_ERR_CLEAR                                                ~( 0x01                     << MDR_CAN_STATUS_BIT_STUFF_ERR_POS                                                             )
#define MDR_CAN_STATUS_BIT_STUFF_ERR_SET                                                   ( 0x01                     << MDR_CAN_STATUS_BIT_STUFF_ERR_POS                                                             )

#define MDR_CAN_STATUS_CRC_ERR_CLEAR                                                      ~( 0x01                     << MDR_CAN_STATUS_CRC_ERR_POS                                                                   )
#define MDR_CAN_STATUS_CRC_ERR_SET                                                         ( 0x01                     << MDR_CAN_STATUS_CRC_ERR_POS                                                                   )

#define MDR_CAN_STATUS_FRAME_ERR_CLEAR                                                    ~( 0x01                     << MDR_CAN_STATUS_FRAME_ERR_POS                                                                 )
#define MDR_CAN_STATUS_FRAME_ERR_SET                                                       ( 0x01                     << MDR_CAN_STATUS_FRAME_ERR_POS                                                                 )

#define MDR_CAN_STATUS_ACK_ERR_CLEAR                                                      ~( 0x01                     << MDR_CAN_STATUS_ACK_ERR_POS                                                                   )
#define MDR_CAN_STATUS_ACK_ERR_SET                                                         ( 0x01                     << MDR_CAN_STATUS_ACK_ERR_POS                                                                   )

#define MDR_CAN_STATUS_ID_LOWER_NOT_LOST                                                  ~( 0x01                     << MDR_CAN_STATUS_ID_LOWER_POS                                                                  )
#define MDR_CAN_STATUS_ID_LOWER_LOST                                                       ( 0x01                     << MDR_CAN_STATUS_ID_LOWER_POS                                                                  )

#define MDR_CAN_STATUS_ERR_STATUS_ACTIVE                                                  ~( 0x03                     << MDR_CAN_STATUS_ERR_STATUS_POS                                                                )
#define MDR_CAN_STATUS_ERR_STATUS_PASSIVE                                                  ( 0x01                     << MDR_CAN_STATUS_ERR_STATUS_POS                                                                )
#define MDR_CAN_STATUS_ERR_STATUS_BUS_OFF_10                                               ( 0x02                     << MDR_CAN_STATUS_ERR_STATUS_POS                                                                )
#define MDR_CAN_STATUS_ERR_STATUS_BUS_OFF_11                                               ( 0x03                     << MDR_CAN_STATUS_ERR_STATUS_POS                                                                )
#define MDR_CAN_STATUS_ERR_STATUS_VALUE( x )                                               ( ( x )                    << MDR_CAN_STATUS_ERR_STATUS_POS                                                                )

#define MDR_CAN_STATUS_RX_ERR_CNT8_BELOW_256                                              ~( 0x01                     << MDR_CAN_STATUS_RX_ERR_CNT8_POS                                                               )
#define MDR_CAN_STATUS_RX_ERR_CNT8_ABOVE_255                                               ( 0x01                     << MDR_CAN_STATUS_RX_ERR_CNT8_POS                                                               )

#define MDR_CAN_STATUS_TX_ERR_CNT8_BELOW_256                                              ~( 0x01                     << MDR_CAN_STATUS_TX_ERR_CNT8_POS                                                               )
#define MDR_CAN_STATUS_TX_ERR_CNT8_ABOVE_255                                               ( 0x01                     << MDR_CAN_STATUS_TX_ERR_CNT8_POS                                                               )

#define MDR_CAN_STATUS_RX_ERR_CNT_ZERO                                                    ~( 0xFF                     << MDR_CAN_STATUS_RX_ERR_CNT_POS                                                                )
#define MDR_CAN_STATUS_RX_ERR_CNT_VALUE( x )                                               ( ( x )                    << MDR_CAN_STATUS_RX_ERR_CNT_POS                                                                )

#define MDR_CAN_STATUS_TX_ERR_CNT_ZERO                                                    ~( (uint32_t)0xFF           << MDR_CAN_STATUS_TX_ERR_CNT_POS                                                                )
#define MDR_CAN_STATUS_TX_ERR_CNT_VALUE( x )                                               ( ( x )                    << MDR_CAN_STATUS_TX_ERR_CNT_POS                                                                )

#define CAN_STATUS_BIT_POS( x )                                                            ( x                                                                                                                        )
#define CAN_STATUS_BIT_MSK( x )                                                            ( (uint32_t)0x01           << CAN_STATUS_BIT_POS( x )                                                                      )

#define CAN_STATUS_BIT_CLEAR( x )                                                         ~( (uint32_t)0x01           << CAN_STATUS_BIT_POS( x )                                                                      )
#define CAN_STATUS_BIT_SET( x )                                                            ( (uint32_t)0x01           << CAN_STATUS_BIT_POS( x )                                                                      )
// BITTMNG register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_BITTMNG_BRP_POS                                                           0
#define MDR_CAN_BITTMNG_PSEG_POS                                                          16
#define MDR_CAN_BITTMNG_SEG1_POS                                                          19
#define MDR_CAN_BITTMNG_SEG2_POS                                                          22
#define MDR_CAN_BITTMNG_SJW_POS                                                           25
#define MDR_CAN_BITTMNG_SB_POS                                                            27

#define MDR_CAN_BITTMNG_BRP_MSK                                                            ( 0xFFFF                   << MDR_CAN_BITTMNG_BRP_POS                                                                      )
#define MDR_CAN_BITTMNG_PSEG_MSK                                                           ( 0x07                     << MDR_CAN_BITTMNG_PSEG_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG1_MSK                                                           ( 0x07                     << MDR_CAN_BITTMNG_SEG1_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG2_MSK                                                           ( 0x07                     << MDR_CAN_BITTMNG_SEG2_POS                                                                     )
#define MDR_CAN_BITTMNG_SJW_MSK                                                            ( 0x03                     << MDR_CAN_BITTMNG_SJW_POS                                                                      )
#define MDR_CAN_BITTMNG_SB_MSK                                                             ( 0x01                     << MDR_CAN_BITTMNG_SB_POS                                                                       )

#define MDR_CAN_BITTMNG_BRP_ZERO                                                          ~( 0xFFFF                   << MDR_CAN_BITTMNG_BRP_POS                                                                      )
#define MDR_CAN_BITTMNG_BRP_VALUE( x )                                                     ( ( x )                    << MDR_CAN_BITTMNG_BRP_POS                                                                      )

#define MDR_CAN_BITTMNG_PSEG_1_TQ                                                         ~( 0x07                     << MDR_CAN_BITTMNG_PSEG_POS                                                                     )
#define MDR_CAN_BITTMNG_PSEG_2_TQ                                                          ( 0x01                     << MDR_CAN_BITTMNG_PSEG_POS                                                                     )
#define MDR_CAN_BITTMNG_PSEG_3_TQ                                                          ( 0x02                     << MDR_CAN_BITTMNG_PSEG_POS                                                                     )
#define MDR_CAN_BITTMNG_PSEG_4_TQ                                                          ( 0x03                     << MDR_CAN_BITTMNG_PSEG_POS                                                                     )
#define MDR_CAN_BITTMNG_PSEG_5_TQ                                                          ( 0x04                     << MDR_CAN_BITTMNG_PSEG_POS                                                                     )
#define MDR_CAN_BITTMNG_PSEG_6_TQ                                                          ( 0x05                     << MDR_CAN_BITTMNG_PSEG_POS                                                                     )
#define MDR_CAN_BITTMNG_PSEG_7_TQ                                                          ( 0x06                     << MDR_CAN_BITTMNG_PSEG_POS                                                                     )
#define MDR_CAN_BITTMNG_PSEG_8_TQ                                                          ( 0x07                     << MDR_CAN_BITTMNG_PSEG_POS                                                                     )
#define MDR_CAN_BITTMNG_PSEG_VALUE( x )                                                    ( ( x )                    << MDR_CAN_BITTMNG_PSEG_POS                                                                     )

#define MDR_CAN_BITTMNG_SEG1_1_TQ                                                         ~( 0x07                     << MDR_CAN_BITTMNG_SEG1_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG1_2_TQ                                                          ( 0x01                     << MDR_CAN_BITTMNG_SEG1_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG1_3_TQ                                                          ( 0x02                     << MDR_CAN_BITTMNG_SEG1_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG1_4_TQ                                                          ( 0x03                     << MDR_CAN_BITTMNG_SEG1_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG1_5_TQ                                                          ( 0x04                     << MDR_CAN_BITTMNG_SEG1_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG1_6_TQ                                                          ( 0x05                     << MDR_CAN_BITTMNG_SEG1_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG1_7_TQ                                                          ( 0x06                     << MDR_CAN_BITTMNG_SEG1_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG1_8_TQ                                                          ( 0x07                     << MDR_CAN_BITTMNG_SEG1_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG1_VALUE( x )                                                    ( ( x )                    << MDR_CAN_BITTMNG_SEG1_POS                                                                     )

#define MDR_CAN_BITTMNG_SEG2_1_TQ                                                         ~( 0x07                     << MDR_CAN_BITTMNG_SEG2_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG2_2_TQ                                                          ( 0x01                     << MDR_CAN_BITTMNG_SEG2_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG2_3_TQ                                                          ( 0x02                     << MDR_CAN_BITTMNG_SEG2_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG2_4_TQ                                                          ( 0x03                     << MDR_CAN_BITTMNG_SEG2_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG2_5_TQ                                                          ( 0x04                     << MDR_CAN_BITTMNG_SEG2_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG2_6_TQ                                                          ( 0x05                     << MDR_CAN_BITTMNG_SEG2_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG2_7_TQ                                                          ( 0x06                     << MDR_CAN_BITTMNG_SEG2_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG2_8_TQ                                                          ( 0x07                     << MDR_CAN_BITTMNG_SEG2_POS                                                                     )
#define MDR_CAN_BITTMNG_SEG2_VALUE( x )                                                    ( ( x )                    << MDR_CAN_BITTMNG_SEG2_POS                                                                     )

#define MDR_CAN_BITTMNG_SJW_1_TQ                                                          ~( 0x03                     << MDR_CAN_BITTMNG_SJW_POS                                                                      )
#define MDR_CAN_BITTMNG_SJW_2_TQ                                                           ( 0x01                     << MDR_CAN_BITTMNG_SJW_POS                                                                      )
#define MDR_CAN_BITTMNG_SJW_3_TQ                                                           ( 0x02                     << MDR_CAN_BITTMNG_SJW_POS                                                                      )
#define MDR_CAN_BITTMNG_SJW_4_TQ                                                           ( 0x03                     << MDR_CAN_BITTMNG_SJW_POS                                                                      )
#define MDR_CAN_BITTMNG_SJW_VALUE( x )                                                     ( ( x )                    << MDR_CAN_BITTMNG_SJW_POS                                                                      )

#define MDR_CAN_BITTMNG_SB_SINGLE                                                         ~( 0x01                     << MDR_CAN_BITTMNG_SB_POS                                                                       )
#define MDR_CAN_BITTMNG_SB_TRIPLE                                                          ( 0x01                     << MDR_CAN_BITTMNG_SB_POS                                                                       )
// INT_EN register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_INT_EN_GLB_INT_EN_POS                                                     0
#define MDR_CAN_INT_EN_RX_INT_EN_POS                                                      1
#define MDR_CAN_INT_EN_TX_INT_EN_POS                                                      2
#define MDR_CAN_INT_EN_ERR_INT_EN_POS                                                     3
#define MDR_CAN_INT_EN_ERR_OVER_INT_EN_POS                                                4

#define MDR_CAN_INT_EN_GLB_INT_EN_MSK                                                      ( 0x01                     << MDR_CAN_INT_EN_GLB_INT_EN_POS                                                                )
#define MDR_CAN_INT_EN_RX_INT_EN_MSK                                                       ( 0x01                     << MDR_CAN_INT_EN_RX_INT_EN_POS                                                                 )
#define MDR_CAN_INT_EN_TX_INT_EN_MSK                                                       ( 0x01                     << MDR_CAN_INT_EN_TX_INT_EN_POS                                                                 )
#define MDR_CAN_INT_EN_ERR_INT_EN_MSK                                                      ( 0x01                     << MDR_CAN_INT_EN_ERR_INT_EN_POS                                                                )
#define MDR_CAN_INT_EN_ERR_OVER_INT_EN_MSK                                                 ( 0x01                     << MDR_CAN_INT_EN_ERR_OVER_INT_EN_POS                                                           )

#define MDR_CAN_INT_EN_GLB_INT_EN_DISABLE                                                 ~( 0x01                     << MDR_CAN_INT_EN_GLB_INT_EN_POS                                                                )
#define MDR_CAN_INT_EN_GLB_INT_EN_ENABLE                                                   ( 0x01                     << MDR_CAN_INT_EN_GLB_INT_EN_POS                                                                )

#define MDR_CAN_INT_EN_RX_INT_EN_DISABLE                                                  ~( 0x01                     << MDR_CAN_INT_EN_RX_INT_EN_POS                                                                 )
#define MDR_CAN_INT_EN_RX_INT_EN_ENABLE                                                    ( 0x01                     << MDR_CAN_INT_EN_RX_INT_EN_POS                                                                 )

#define MDR_CAN_INT_EN_TX_INT_EN_DISABLE                                                  ~( 0x01                     << MDR_CAN_INT_EN_TX_INT_EN_POS                                                                 )
#define MDR_CAN_INT_EN_TX_INT_EN_ENABLE                                                    ( 0x01                     << MDR_CAN_INT_EN_TX_INT_EN_POS                                                                 )

#define MDR_CAN_INT_EN_ERR_INT_EN_DISABLE                                                 ~( 0x01                     << MDR_CAN_INT_EN_ERR_INT_EN_POS                                                                )
#define MDR_CAN_INT_EN_ERR_INT_EN_ENABLE                                                   ( 0x01                     << MDR_CAN_INT_EN_ERR_INT_EN_POS                                                                )

#define MDR_CAN_INT_EN_ERR_OVER_INT_EN_DISABLE                                            ~( 0x01                     << MDR_CAN_INT_EN_ERR_OVER_INT_EN_POS                                                           )
#define MDR_CAN_INT_EN_ERR_OVER_INT_EN_ENABLE                                              ( 0x01                     << MDR_CAN_INT_EN_ERR_OVER_INT_EN_POS                                                           )

#define CAN_INT_EN_BIT_POS( x )                                                            ( x                                                                                                                        )
#define CAN_INT_EN_BIT_MSK( x )                                                            ( (uint32_t)0x01           << CAN_INT_EN_BIT_POS( x )                                                                      )

#define CAN_INT_EN_BIT_CLEAR( x )                                                         ~( (uint32_t)0x01           << CAN_INT_EN_BIT_POS( x )                                                                      )
#define CAN_INT_EN_BIT_SET( x )                                                            ( (uint32_t)0x01           << CAN_INT_EN_BIT_POS( x )                                                                      )
// OVER register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_OVER_ERROR_MAX_POS                                                        0

#define MDR_CAN_OVER_ERROR_MAX_MSK                                                         ( 0xFF                     << MDR_CAN_OVER_ERROR_MAX_POS                                                                   )

#define MDR_CAN_OVER_ERROR_MAX_ZERO                                                       ~( 0xFF                     << MDR_CAN_OVER_ERROR_MAX_POS                                                                   )
#define MDR_CAN_OVER_ERROR_MAX_VALUE( x )                                                  ( ( x )                    << MDR_CAN_OVER_ERROR_MAX_POS                                                                   )
// BUF_CON register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_BUF_CON_EN_POS                                                            0
#define MDR_CAN_BUF_CON_RX_TXN_POS                                                        1
#define MDR_CAN_BUF_CON_OVER_EN_POS                                                       2
#define MDR_CAN_BUF_CON_RTR_EN_POS                                                        3
#define MDR_CAN_BUF_CON_PRIOR_0_POS                                                       4
#define MDR_CAN_BUF_CON_TX_REQ_POS                                                        5
#define MDR_CAN_BUF_CON_RX_FULL_POS                                                       6
#define MDR_CAN_BUF_CON_OVER_WR_POS                                                       7

#define MDR_CAN_BUF_CON_EN_MSK                                                             ( 0x01                     << MDR_CAN_BUF_CON_EN_POS                                                                       )
#define MDR_CAN_BUF_CON_RX_TXN_MSK                                                         ( 0x01                     << MDR_CAN_BUF_CON_RX_TXN_POS                                                                   )
#define MDR_CAN_BUF_CON_OVER_EN_MSK                                                        ( 0x01                     << MDR_CAN_BUF_CON_OVER_EN_POS                                                                  )
#define MDR_CAN_BUF_CON_RTR_EN_MSK                                                         ( 0x01                     << MDR_CAN_BUF_CON_RTR_EN_POS                                                                   )
#define MDR_CAN_BUF_CON_PRIOR_0_MSK                                                        ( 0x01                     << MDR_CAN_BUF_CON_PRIOR_0_POS                                                                  )
#define MDR_CAN_BUF_CON_TX_REQ_MSK                                                         ( 0x01                     << MDR_CAN_BUF_CON_TX_REQ_POS                                                                   )
#define MDR_CAN_BUF_CON_RX_FULL_MSK                                                        ( 0x01                     << MDR_CAN_BUF_CON_RX_FULL_POS                                                                  )
#define MDR_CAN_BUF_CON_OVER_WR_MSK                                                        ( 0x01                     << MDR_CAN_BUF_CON_OVER_WR_POS                                                                  )

#define MDR_CAN_BUF_CON_EN_DISABLE                                                        ~( 0x01                     << MDR_CAN_BUF_CON_EN_POS                                                                       )
#define MDR_CAN_BUF_CON_EN_ENABLE                                                          ( 0x01                     << MDR_CAN_BUF_CON_EN_POS                                                                       )

#define MDR_CAN_BUF_CON_RX_TXN_TRANSMIT                                                   ~( 0x01                     << MDR_CAN_BUF_CON_RX_TXN_POS                                                                   )
#define MDR_CAN_BUF_CON_RX_TXN_RECEIVE                                                     ( 0x01                     << MDR_CAN_BUF_CON_RX_TXN_POS                                                                   )

#define MDR_CAN_BUF_CON_OVER_EN_DISABLE                                                   ~( 0x01                     << MDR_CAN_BUF_CON_OVER_EN_POS                                                                  )
#define MDR_CAN_BUF_CON_OVER_EN_ENABLE                                                     ( 0x01                     << MDR_CAN_BUF_CON_OVER_EN_POS                                                                  )

#define MDR_CAN_BUF_CON_RTR_EN_DISABLE                                                    ~( 0x01                     << MDR_CAN_BUF_CON_RTR_EN_POS                                                                   )
#define MDR_CAN_BUF_CON_RTR_EN_ENABLE                                                      ( 0x01                     << MDR_CAN_BUF_CON_RTR_EN_POS                                                                   )

#define MDR_CAN_BUF_CON_PRIOR_0_PRIORITY                                                  ~( 0x01                     << MDR_CAN_BUF_CON_PRIOR_0_POS                                                                  )
#define MDR_CAN_BUF_CON_PRIOR_0_NO_PRIORITY                                                ( 0x01                     << MDR_CAN_BUF_CON_PRIOR_0_POS                                                                  )

#define MDR_CAN_BUF_CON_TX_REQ_NO_REQUEST                                                 ~( 0x01                     << MDR_CAN_BUF_CON_TX_REQ_POS                                                                   )
#define MDR_CAN_BUF_CON_TX_REQ_REQUEST                                                     ( 0x01                     << MDR_CAN_BUF_CON_TX_REQ_POS                                                                   )

#define MDR_CAN_BUF_CON_RX_FULL_EMPTY                                                     ~( 0x01                     << MDR_CAN_BUF_CON_RX_FULL_POS                                                                  )
#define MDR_CAN_BUF_CON_RX_FULL_FULL                                                       ( 0x01                     << MDR_CAN_BUF_CON_RX_FULL_POS                                                                  )

#define MDR_CAN_BUF_CON_OVER_WR_NO_OVERWRITE                                              ~( 0x01                     << MDR_CAN_BUF_CON_OVER_WR_POS                                                                  )
#define MDR_CAN_BUF_CON_OVER_WR_OVERWRITE                                                  ( 0x01                     << MDR_CAN_BUF_CON_OVER_WR_POS                                                                  )

#define CAN_BUF_CON_BIT_POS( x )                                                           ( x                                                                                                                        )
#define CAN_BUF_CON_BIT_MSK( x )                                                           ( (uint32_t)0x01           << CAN_BUF_CON_BIT_POS( x )                                                                     )

#define CAN_BUF_CON_BIT_CLEAR( x )                                                        ~( (uint32_t)0x01           << CAN_BUF_CON_BIT_POS( x )                                                                     )
#define CAN_BUF_CON_BIT_SET( x )                                                           ( (uint32_t)0x01           << CAN_BUF_CON_BIT_POS( x )                                                                     )
// INT_RX / RX / INT_TX / TX registers
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_INT_RX_CHANNELS_POS                                                       0

#define MDR_CAN_INT_RX_CHANNELS_MSK                                                        ( (uint32_t)0xFFFFFFFF     << MDR_CAN_INT_RX_CHANNELS_POS                                                                  )

#define MDR_CAN_INT_RX_CHANNELS_NONE                                                      ~( (uint32_t)0xFFFFFFFF     << MDR_CAN_INT_RX_CHANNELS_POS                                                                  )
#define MDR_CAN_INT_RX_CHANNELS_VALUE( x )                                                 ( ( x )                    << MDR_CAN_INT_RX_CHANNELS_POS                                                                  )

#define CAN_INT_RX_BIT_POS( x )                                                            ( x                                                                                                                        )
#define CAN_INT_RX_BIT_MSK( x )                                                            ( (uint32_t)0x01           << CAN_INT_RX_BIT_POS( x )                                                                      )

#define CAN_INT_RX_BIT_CLEAR( x )                                                         ~( (uint32_t)0x01           << CAN_INT_RX_BIT_POS( x )                                                                      )
#define CAN_INT_RX_BIT_SET( x )                                                            ( (uint32_t)0x01           << CAN_INT_RX_BIT_POS( x )                                                                      )
// ID register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_ID_EID_POS                                                                0
#define MDR_CAN_ID_SID_POS                                                                18

#define MDR_CAN_ID_EID_MSK                                                                 ( 0x3FFFF                  << MDR_CAN_ID_EID_POS                                                                           )
#define MDR_CAN_ID_SID_MSK                                                                 ( 0x7FF                    << MDR_CAN_ID_SID_POS                                                                           )

#define MDR_CAN_ID_EID_ZERO                                                               ~( 0x3FFFF                  << MDR_CAN_ID_EID_POS                                                                           )
#define MDR_CAN_ID_EID_VALUE( x )                                                          ( ( x )                    << MDR_CAN_ID_EID_POS                                                                           )

#define MDR_CAN_ID_SID_ZERO                                                               ~( 0x7FF                    << MDR_CAN_ID_SID_POS                                                                           )
#define MDR_CAN_ID_SID_VALUE( x )                                                          ( ( x )                    << MDR_CAN_ID_SID_POS                                                                           )
// DLC register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_DLC_DLC_POS                                                               0
#define MDR_CAN_DLC_RTR_POS                                                               8
#define MDR_CAN_DLC_R1_POS                                                                9
#define MDR_CAN_DLC_R0_POS                                                                10
#define MDR_CAN_DLC_SRR_POS                                                               11
#define MDR_CAN_DLC_IDE_POS                                                               12

#define MDR_CAN_DLC_DLC_MSK                                                                ( 0x0F                     << MDR_CAN_DLC_DLC_POS                                                                          )
#define MDR_CAN_DLC_RTR_MSK                                                                ( 0x01                     << MDR_CAN_DLC_RTR_POS                                                                          )
#define MDR_CAN_DLC_R1_MSK                                                                 ( 0x01                     << MDR_CAN_DLC_R1_POS                                                                           )
#define MDR_CAN_DLC_R0_MSK                                                                 ( 0x01                     << MDR_CAN_DLC_R0_POS                                                                           )
#define MDR_CAN_DLC_SRR_MSK                                                                ( 0x01                     << MDR_CAN_DLC_SRR_POS                                                                          )
#define MDR_CAN_DLC_IDE_MSK                                                                ( 0x01                     << MDR_CAN_DLC_IDE_POS                                                                          )

#define MDR_CAN_DLC_DLC_NO_DATA                                                           ~( 0x0F                     << MDR_CAN_DLC_DLC_POS                                                                          )
#define MDR_CAN_DLC_DLC_1_BYTE                                                             ( 0x01                     << MDR_CAN_DLC_DLC_POS                                                                          )
#define MDR_CAN_DLC_DLC_2_BYTES                                                            ( 0x02                     << MDR_CAN_DLC_DLC_POS                                                                          )
#define MDR_CAN_DLC_DLC_3_BYTES                                                            ( 0x03                     << MDR_CAN_DLC_DLC_POS                                                                          )
#define MDR_CAN_DLC_DLC_4_BYTES                                                            ( 0x04                     << MDR_CAN_DLC_DLC_POS                                                                          )
#define MDR_CAN_DLC_DLC_5_BYTES                                                            ( 0x05                     << MDR_CAN_DLC_DLC_POS                                                                          )
#define MDR_CAN_DLC_DLC_6_BYTES                                                            ( 0x06                     << MDR_CAN_DLC_DLC_POS                                                                          )
#define MDR_CAN_DLC_DLC_7_BYTES                                                            ( 0x07                     << MDR_CAN_DLC_DLC_POS                                                                          )
#define MDR_CAN_DLC_DLC_8_BYTES                                                            ( 0x08                     << MDR_CAN_DLC_DLC_POS                                                                          )
#define MDR_CAN_DLC_DLC_VALUE( x )                                                         ( ( x )                    << MDR_CAN_DLC_DLC_POS                                                                          )

#define MDR_CAN_DLC_RTR_NO_REQUEST                                                        ~( 0x01                     << MDR_CAN_DLC_RTR_POS                                                                          )
#define MDR_CAN_DLC_RTR_REQUEST                                                            ( 0x01                     << MDR_CAN_DLC_RTR_POS                                                                          )

#define MDR_CAN_DLC_R1_ZERO                                                               ~( 0x01                     << MDR_CAN_DLC_R1_POS                                                                           )

#define MDR_CAN_DLC_R0_ZERO                                                               ~( 0x01                     << MDR_CAN_DLC_R0_POS                                                                           )

#define MDR_CAN_DLC_SRR_ZERO                                                              ~( 0x01                     << MDR_CAN_DLC_SRR_POS                                                                          )
#define MDR_CAN_DLC_SRR_ONE                                                                ( 0x01                     << MDR_CAN_DLC_SRR_POS                                                                          )

#define MDR_CAN_DLC_IDE_STANDARD                                                          ~( 0x01                     << MDR_CAN_DLC_IDE_POS                                                                          )
#define MDR_CAN_DLC_IDE_EXTENDED                                                           ( 0x01                     << MDR_CAN_DLC_IDE_POS                                                                          )
// DATAL register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_DATAL_DB0_POS                                                             0
#define MDR_CAN_DATAL_DB1_POS                                                             8
#define MDR_CAN_DATAL_DB2_POS                                                             16
#define MDR_CAN_DATAL_DB3_POS                                                             24

#define MDR_CAN_DATAL_DB0_MSK                                                              ( 0xFF                     << MDR_CAN_DATAL_DB0_POS                                                                        )
#define MDR_CAN_DATAL_DB1_MSK                                                              ( 0xFF                     << MDR_CAN_DATAL_DB1_POS                                                                        )
#define MDR_CAN_DATAL_DB2_MSK                                                              ( 0xFF                     << MDR_CAN_DATAL_DB2_POS                                                                        )
#define MDR_CAN_DATAL_DB3_MSK                                                              ( (uint32_t)0xFF           << MDR_CAN_DATAL_DB3_POS                                                                        )

#define MDR_CAN_DATAL_DB0_ZERO                                                            ~( 0xFF                     << MDR_CAN_DATAL_DB0_POS                                                                        )
#define MDR_CAN_DATAL_DB0_VALUE( x )                                                       ( ( x )                    << MDR_CAN_DATAL_DB0_POS                                                                        )

#define MDR_CAN_DATAL_DB1_ZERO                                                            ~( 0xFF                     << MDR_CAN_DATAL_DB1_POS                                                                        )
#define MDR_CAN_DATAL_DB1_VALUE( x )                                                       ( ( x )                    << MDR_CAN_DATAL_DB1_POS                                                                        )

#define MDR_CAN_DATAL_DB2_ZERO                                                            ~( 0xFF                     << MDR_CAN_DATAL_DB2_POS                                                                        )
#define MDR_CAN_DATAL_DB2_VALUE( x )                                                       ( ( x )                    << MDR_CAN_DATAL_DB2_POS                                                                        )

#define MDR_CAN_DATAL_DB3_ZERO                                                            ~( (uint32_t)0xFF           << MDR_CAN_DATAL_DB3_POS                                                                        )
#define MDR_CAN_DATAL_DB3_VALUE( x )                                                       ( ( x )                    << MDR_CAN_DATAL_DB3_POS                                                                        )
// DATAH register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_DATAH_DB4_POS                                                             0
#define MDR_CAN_DATAH_DB5_POS                                                             8
#define MDR_CAN_DATAH_DB6_POS                                                             16
#define MDR_CAN_DATAH_DB7_POS                                                             24

#define MDR_CAN_DATAH_DB4_MSK                                                              ( 0xFF                     << MDR_CAN_DATAH_DB4_POS                                                                        )
#define MDR_CAN_DATAH_DB5_MSK                                                              ( 0xFF                     << MDR_CAN_DATAH_DB5_POS                                                                        )
#define MDR_CAN_DATAH_DB6_MSK                                                              ( 0xFF                     << MDR_CAN_DATAH_DB6_POS                                                                        )
#define MDR_CAN_DATAH_DB7_MSK                                                              ( (uint32_t)0xFF           << MDR_CAN_DATAH_DB7_POS                                                                        )

#define MDR_CAN_DATAH_DB4_ZERO                                                            ~( 0xFF                     << MDR_CAN_DATAH_DB4_POS                                                                        )
#define MDR_CAN_DATAH_DB4_VALUE( x )                                                       ( ( x )                    << MDR_CAN_DATAH_DB4_POS                                                                        )

#define MDR_CAN_DATAH_DB5_ZERO                                                            ~( 0xFF                     << MDR_CAN_DATAH_DB5_POS                                                                        )
#define MDR_CAN_DATAH_DB5_VALUE( x )                                                       ( ( x )                    << MDR_CAN_DATAH_DB5_POS                                                                        )

#define MDR_CAN_DATAH_DB6_ZERO                                                            ~( 0xFF                     << MDR_CAN_DATAH_DB6_POS                                                                        )
#define MDR_CAN_DATAH_DB6_VALUE( x )                                                       ( ( x )                    << MDR_CAN_DATAH_DB6_POS                                                                        )

#define MDR_CAN_DATAH_DB7_ZERO                                                            ~( (uint32_t)0xFF           << MDR_CAN_DATAH_DB7_POS                                                                        )
#define MDR_CAN_DATAH_DB7_VALUE( x )                                                       ( ( x )                    << MDR_CAN_DATAH_DB7_POS                                                                        )
// CAN buffer channel masks
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define CAN_CHANNEL_0_POS                                                                 0
#define CAN_CHANNEL_0_MSK                                                                  ( 0x01                     << CAN_CHANNEL_0_POS                                                                            )
#define CAN_CHANNEL_1_POS                                                                 1
#define CAN_CHANNEL_1_MSK                                                                  ( 0x01                     << CAN_CHANNEL_1_POS                                                                            )
#define CAN_CHANNEL_2_POS                                                                 2
#define CAN_CHANNEL_2_MSK                                                                  ( 0x01                     << CAN_CHANNEL_2_POS                                                                            )
#define CAN_CHANNEL_3_POS                                                                 3
#define CAN_CHANNEL_3_MSK                                                                  ( 0x01                     << CAN_CHANNEL_3_POS                                                                            )
#define CAN_CHANNEL_4_POS                                                                 4
#define CAN_CHANNEL_4_MSK                                                                  ( 0x01                     << CAN_CHANNEL_4_POS                                                                            )
#define CAN_CHANNEL_5_POS                                                                 5
#define CAN_CHANNEL_5_MSK                                                                  ( 0x01                     << CAN_CHANNEL_5_POS                                                                            )
#define CAN_CHANNEL_6_POS                                                                 6
#define CAN_CHANNEL_6_MSK                                                                  ( 0x01                     << CAN_CHANNEL_6_POS                                                                            )
#define CAN_CHANNEL_7_POS                                                                 7
#define CAN_CHANNEL_7_MSK                                                                  ( 0x01                     << CAN_CHANNEL_7_POS                                                                            )
#define CAN_CHANNEL_8_POS                                                                 8
#define CAN_CHANNEL_8_MSK                                                                  ( 0x01                     << CAN_CHANNEL_8_POS                                                                            )
#define CAN_CHANNEL_9_POS                                                                 9
#define CAN_CHANNEL_9_MSK                                                                  ( 0x01                     << CAN_CHANNEL_9_POS                                                                            )
#define CAN_CHANNEL_10_POS                                                                10
#define CAN_CHANNEL_10_MSK                                                                 ( 0x01                     << CAN_CHANNEL_10_POS                                                                           )
#define CAN_CHANNEL_11_POS                                                                11
#define CAN_CHANNEL_11_MSK                                                                 ( 0x01                     << CAN_CHANNEL_11_POS                                                                           )
#define CAN_CHANNEL_12_POS                                                                12
#define CAN_CHANNEL_12_MSK                                                                 ( 0x01                     << CAN_CHANNEL_12_POS                                                                           )
#define CAN_CHANNEL_13_POS                                                                13
#define CAN_CHANNEL_13_MSK                                                                 ( 0x01                     << CAN_CHANNEL_13_POS                                                                           )
#define CAN_CHANNEL_14_POS                                                                14
#define CAN_CHANNEL_14_MSK                                                                 ( 0x01                     << CAN_CHANNEL_14_POS                                                                           )
#define CAN_CHANNEL_15_POS                                                                15
#define CAN_CHANNEL_15_MSK                                                                 ( 0x01                     << CAN_CHANNEL_15_POS                                                                           )
#define CAN_CHANNEL_16_POS                                                                16
#define CAN_CHANNEL_16_MSK                                                                 ( 0x01                     << CAN_CHANNEL_16_POS                                                                           )
#define CAN_CHANNEL_17_POS                                                                17
#define CAN_CHANNEL_17_MSK                                                                 ( 0x01                     << CAN_CHANNEL_17_POS                                                                           )
#define CAN_CHANNEL_18_POS                                                                18
#define CAN_CHANNEL_18_MSK                                                                 ( 0x01                     << CAN_CHANNEL_18_POS                                                                           )
#define CAN_CHANNEL_19_POS                                                                19
#define CAN_CHANNEL_19_MSK                                                                 ( 0x01                     << CAN_CHANNEL_19_POS                                                                           )
#define CAN_CHANNEL_20_POS                                                                20
#define CAN_CHANNEL_20_MSK                                                                 ( 0x01                     << CAN_CHANNEL_20_POS                                                                           )
#define CAN_CHANNEL_21_POS                                                                21
#define CAN_CHANNEL_21_MSK                                                                 ( 0x01                     << CAN_CHANNEL_21_POS                                                                           )
#define CAN_CHANNEL_22_POS                                                                22
#define CAN_CHANNEL_22_MSK                                                                 ( 0x01                     << CAN_CHANNEL_22_POS                                                                           )
#define CAN_CHANNEL_23_POS                                                                23
#define CAN_CHANNEL_23_MSK                                                                 ( 0x01                     << CAN_CHANNEL_23_POS                                                                           )
#define CAN_CHANNEL_24_POS                                                                24
#define CAN_CHANNEL_24_MSK                                                                 ( 0x01                     << CAN_CHANNEL_24_POS                                                                           )
#define CAN_CHANNEL_25_POS                                                                25
#define CAN_CHANNEL_25_MSK                                                                 ( 0x01                     << CAN_CHANNEL_25_POS                                                                           )
#define CAN_CHANNEL_26_POS                                                                26
#define CAN_CHANNEL_26_MSK                                                                 ( 0x01                     << CAN_CHANNEL_26_POS                                                                           )
#define CAN_CHANNEL_27_POS                                                                27
#define CAN_CHANNEL_27_MSK                                                                 ( 0x01                     << CAN_CHANNEL_27_POS                                                                           )
#define CAN_CHANNEL_28_POS                                                                28
#define CAN_CHANNEL_28_MSK                                                                 ( 0x01                     << CAN_CHANNEL_28_POS                                                                           )
#define CAN_CHANNEL_29_POS                                                                29
#define CAN_CHANNEL_29_MSK                                                                 ( 0x01                     << CAN_CHANNEL_29_POS                                                                           )
#define CAN_CHANNEL_30_POS                                                                30
#define CAN_CHANNEL_30_MSK                                                                 ( 0x01                     << CAN_CHANNEL_30_POS                                                                           )
#define CAN_CHANNEL_31_POS                                                                31
#define CAN_CHANNEL_31_MSK                                                                 ( (uint32_t)0x01           << CAN_CHANNEL_31_POS                                                                           )
#define CAN_CHANNEL_POS( x )                                                               ( x                                                                                                                        )
#define CAN_CHANNEL_MSK( x )                                                               ( (uint32_t)0x01           << CAN_CHANNEL_POS( x )                                                                         )
// CONTROL register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_CONTROL_CAN_EN_DISABLE_VAL                                                0
#define MDR_CAN_CONTROL_CAN_EN_ENABLE_VAL                                                 1

#define MDR_CAN_CONTROL_ROM_NORMAL_VAL                                                    0
#define MDR_CAN_CONTROL_ROM_RECEIVE_ONLY_VAL                                              1

#define MDR_CAN_CONTROL_STM_NORMAL_VAL                                                    0
#define MDR_CAN_CONTROL_STM_SELF_TEST_VAL                                                 1

#define MDR_CAN_CONTROL_SAP_ACK_OTHER_ONLY_VAL                                            0
#define MDR_CAN_CONTROL_SAP_ACK_OWN_VAL                                                   1

#define MDR_CAN_CONTROL_ROP_RECEIVE_OTHER_ONLY_VAL                                        0
#define MDR_CAN_CONTROL_ROP_RECEIVE_OWN_VAL                                               1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CAN_EN               : 1;
        uint32_t ROM                  : 1;
        uint32_t STM                  : 1;
        uint32_t SAP                  : 1;
        uint32_t ROP                  : 1;
        uint32_t                      : 27;
    };

} MDR_CAN_CONTROL_TypeDef;
// STATUS register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_STATUS_RX_READY_EMPTY_VAL                                                 0
#define MDR_CAN_STATUS_RX_READY_READY_VAL                                                 1

#define MDR_CAN_STATUS_TX_READY_EMPTY_VAL                                                 0
#define MDR_CAN_STATUS_TX_READY_READY_VAL                                                 1

#define MDR_CAN_STATUS_ERROR_OVER_CLEAR_VAL                                               0
#define MDR_CAN_STATUS_ERROR_OVER_SET_VAL                                                 1

#define MDR_CAN_STATUS_BIT_ERR_CLEAR_VAL                                                  0
#define MDR_CAN_STATUS_BIT_ERR_SET_VAL                                                    1

#define MDR_CAN_STATUS_BIT_STUFF_ERR_CLEAR_VAL                                            0
#define MDR_CAN_STATUS_BIT_STUFF_ERR_SET_VAL                                              1

#define MDR_CAN_STATUS_CRC_ERR_CLEAR_VAL                                                  0
#define MDR_CAN_STATUS_CRC_ERR_SET_VAL                                                    1

#define MDR_CAN_STATUS_FRAME_ERR_CLEAR_VAL                                                0
#define MDR_CAN_STATUS_FRAME_ERR_SET_VAL                                                  1

#define MDR_CAN_STATUS_ACK_ERR_CLEAR_VAL                                                  0
#define MDR_CAN_STATUS_ACK_ERR_SET_VAL                                                    1

#define MDR_CAN_STATUS_ID_LOWER_NOT_LOST_VAL                                              0
#define MDR_CAN_STATUS_ID_LOWER_LOST_VAL                                                  1

#define MDR_CAN_STATUS_ERR_STATUS_ACTIVE_VAL                                              0
#define MDR_CAN_STATUS_ERR_STATUS_PASSIVE_VAL                                             1
#define MDR_CAN_STATUS_ERR_STATUS_BUS_OFF_10_VAL                                          2
#define MDR_CAN_STATUS_ERR_STATUS_BUS_OFF_11_VAL                                          3

#define MDR_CAN_STATUS_RX_ERR_CNT8_BELOW_256_VAL                                          0
#define MDR_CAN_STATUS_RX_ERR_CNT8_ABOVE_255_VAL                                          1

#define MDR_CAN_STATUS_TX_ERR_CNT8_BELOW_256_VAL                                          0
#define MDR_CAN_STATUS_TX_ERR_CNT8_ABOVE_255_VAL                                          1

#define MDR_CAN_STATUS_RX_ERR_CNT_ZERO_VAL                                                0

#define MDR_CAN_STATUS_TX_ERR_CNT_ZERO_VAL                                                0

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t RX_READY             : 1;
        uint32_t TX_READY             : 1;
        uint32_t ERROR_OVER           : 1;
        uint32_t BIT_ERR              : 1;
        uint32_t BIT_STUFF_ERR        : 1;
        uint32_t CRC_ERR              : 1;
        uint32_t FRAME_ERR            : 1;
        uint32_t ACK_ERR              : 1;
        uint32_t ID_LOWER             : 1;
        uint32_t ERR_STATUS           : 2;
        uint32_t RX_ERR_CNT8          : 1;
        uint32_t TX_ERR_CNT8          : 1;
        uint32_t                      : 3;
        uint32_t RX_ERR_CNT           : 8;
        uint32_t TX_ERR_CNT           : 8;
    };

} MDR_CAN_STATUS_TypeDef;
// BITTMNG register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_BITTMNG_BRP_ZERO_VAL                                                      0

#define MDR_CAN_BITTMNG_PSEG_1_TQ_VAL                                                     0
#define MDR_CAN_BITTMNG_PSEG_2_TQ_VAL                                                     1
#define MDR_CAN_BITTMNG_PSEG_3_TQ_VAL                                                     2
#define MDR_CAN_BITTMNG_PSEG_4_TQ_VAL                                                     3
#define MDR_CAN_BITTMNG_PSEG_5_TQ_VAL                                                     4
#define MDR_CAN_BITTMNG_PSEG_6_TQ_VAL                                                     5
#define MDR_CAN_BITTMNG_PSEG_7_TQ_VAL                                                     6
#define MDR_CAN_BITTMNG_PSEG_8_TQ_VAL                                                     7

#define MDR_CAN_BITTMNG_SEG1_1_TQ_VAL                                                     0
#define MDR_CAN_BITTMNG_SEG1_2_TQ_VAL                                                     1
#define MDR_CAN_BITTMNG_SEG1_3_TQ_VAL                                                     2
#define MDR_CAN_BITTMNG_SEG1_4_TQ_VAL                                                     3
#define MDR_CAN_BITTMNG_SEG1_5_TQ_VAL                                                     4
#define MDR_CAN_BITTMNG_SEG1_6_TQ_VAL                                                     5
#define MDR_CAN_BITTMNG_SEG1_7_TQ_VAL                                                     6
#define MDR_CAN_BITTMNG_SEG1_8_TQ_VAL                                                     7

#define MDR_CAN_BITTMNG_SEG2_1_TQ_VAL                                                     0
#define MDR_CAN_BITTMNG_SEG2_2_TQ_VAL                                                     1
#define MDR_CAN_BITTMNG_SEG2_3_TQ_VAL                                                     2
#define MDR_CAN_BITTMNG_SEG2_4_TQ_VAL                                                     3
#define MDR_CAN_BITTMNG_SEG2_5_TQ_VAL                                                     4
#define MDR_CAN_BITTMNG_SEG2_6_TQ_VAL                                                     5
#define MDR_CAN_BITTMNG_SEG2_7_TQ_VAL                                                     6
#define MDR_CAN_BITTMNG_SEG2_8_TQ_VAL                                                     7

#define MDR_CAN_BITTMNG_SJW_1_TQ_VAL                                                      0
#define MDR_CAN_BITTMNG_SJW_2_TQ_VAL                                                      1
#define MDR_CAN_BITTMNG_SJW_3_TQ_VAL                                                      2
#define MDR_CAN_BITTMNG_SJW_4_TQ_VAL                                                      3

#define MDR_CAN_BITTMNG_SB_SINGLE_VAL                                                     0
#define MDR_CAN_BITTMNG_SB_TRIPLE_VAL                                                     1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t BRP                  : 16;
        uint32_t PSEG                 : 3;
        uint32_t SEG1                 : 3;
        uint32_t SEG2                 : 3;
        uint32_t SJW                  : 2;
        uint32_t SB                   : 1;
        uint32_t                      : 4;
    };

} MDR_CAN_BITTMNG_TypeDef;
// INT_EN register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_INT_EN_GLB_INT_EN_DISABLE_VAL                                             0
#define MDR_CAN_INT_EN_GLB_INT_EN_ENABLE_VAL                                              1

#define MDR_CAN_INT_EN_RX_INT_EN_DISABLE_VAL                                              0
#define MDR_CAN_INT_EN_RX_INT_EN_ENABLE_VAL                                               1

#define MDR_CAN_INT_EN_TX_INT_EN_DISABLE_VAL                                              0
#define MDR_CAN_INT_EN_TX_INT_EN_ENABLE_VAL                                               1

#define MDR_CAN_INT_EN_ERR_INT_EN_DISABLE_VAL                                             0
#define MDR_CAN_INT_EN_ERR_INT_EN_ENABLE_VAL                                              1

#define MDR_CAN_INT_EN_ERR_OVER_INT_EN_DISABLE_VAL                                        0
#define MDR_CAN_INT_EN_ERR_OVER_INT_EN_ENABLE_VAL                                         1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t GLB_INT_EN           : 1;
        uint32_t RX_INT_EN            : 1;
        uint32_t TX_INT_EN            : 1;
        uint32_t ERR_INT_EN           : 1;
        uint32_t ERR_OVER_INT_EN      : 1;
        uint32_t                      : 27;
    };

} MDR_CAN_INT_EN_TypeDef;
// OVER register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_OVER_ERROR_MAX_ZERO_VAL                                                   0
#define MDR_CAN_OVER_ERROR_MAX_VAL( x )                                                   ( x                                                                                                                        )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t ERROR_MAX            : 8;
        uint32_t                      : 24;
    };

} MDR_CAN_OVER_TypeDef;
// BUF_CON register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_BUF_CON_EN_DISABLE_VAL                                                    0
#define MDR_CAN_BUF_CON_EN_ENABLE_VAL                                                     1

#define MDR_CAN_BUF_CON_RX_TXN_TRANSMIT_VAL                                               0
#define MDR_CAN_BUF_CON_RX_TXN_RECEIVE_VAL                                                1

#define MDR_CAN_BUF_CON_OVER_EN_DISABLE_VAL                                               0
#define MDR_CAN_BUF_CON_OVER_EN_ENABLE_VAL                                                1

#define MDR_CAN_BUF_CON_RTR_EN_DISABLE_VAL                                                0
#define MDR_CAN_BUF_CON_RTR_EN_ENABLE_VAL                                                 1

#define MDR_CAN_BUF_CON_PRIOR_0_PRIORITY_VAL                                              0
#define MDR_CAN_BUF_CON_PRIOR_0_NO_PRIORITY_VAL                                           1

#define MDR_CAN_BUF_CON_TX_REQ_NO_REQUEST_VAL                                             0
#define MDR_CAN_BUF_CON_TX_REQ_REQUEST_VAL                                                1

#define MDR_CAN_BUF_CON_RX_FULL_EMPTY_VAL                                                 0
#define MDR_CAN_BUF_CON_RX_FULL_FULL_VAL                                                  1

#define MDR_CAN_BUF_CON_OVER_WR_NO_OVERWRITE_VAL                                          0
#define MDR_CAN_BUF_CON_OVER_WR_OVERWRITE_VAL                                             1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t EN                   : 1;
        uint32_t RX_TXN               : 1;
        uint32_t OVER_EN              : 1;
        uint32_t RTR_EN               : 1;
        uint32_t PRIOR_0              : 1;
        uint32_t TX_REQ               : 1;
        uint32_t RX_FULL              : 1;
        uint32_t OVER_WR              : 1;
        uint32_t                      : 24;
    };

} MDR_CAN_BUF_CON_TypeDef;
// INT_RX / RX / INT_TX / TX registers Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_INT_RX_CHANNELS_NONE_VAL                                                  0

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CHANNELS             : 32;
    };

} MDR_CAN_CHANNELS_TypeDef;
// ID register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_ID_EID_ZERO_VAL                                                           0

#define MDR_CAN_ID_SID_ZERO_VAL                                                           0

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t EID                  : 18;
        uint32_t SID                  : 11;
        uint32_t                      : 3;
    };

} MDR_CAN_ID_TypeDef;
// DLC register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_DLC_DLC_NO_DATA_VAL                                                       0
#define MDR_CAN_DLC_DLC_1_BYTE_VAL                                                        1
#define MDR_CAN_DLC_DLC_2_BYTES_VAL                                                       2
#define MDR_CAN_DLC_DLC_3_BYTES_VAL                                                       3
#define MDR_CAN_DLC_DLC_4_BYTES_VAL                                                       4
#define MDR_CAN_DLC_DLC_5_BYTES_VAL                                                       5
#define MDR_CAN_DLC_DLC_6_BYTES_VAL                                                       6
#define MDR_CAN_DLC_DLC_7_BYTES_VAL                                                       7
#define MDR_CAN_DLC_DLC_8_BYTES_VAL                                                       8

#define MDR_CAN_DLC_RTR_NO_REQUEST_VAL                                                    0
#define MDR_CAN_DLC_RTR_REQUEST_VAL                                                       1

#define MDR_CAN_DLC_R1_ZERO_VAL                                                           0

#define MDR_CAN_DLC_R0_ZERO_VAL                                                           0

#define MDR_CAN_DLC_SRR_ZERO_VAL                                                          0
#define MDR_CAN_DLC_SRR_ONE_VAL                                                           1

#define MDR_CAN_DLC_IDE_STANDARD_VAL                                                      0
#define MDR_CAN_DLC_IDE_EXTENDED_VAL                                                      1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t DLC                  : 4;
        uint32_t                      : 4;
        uint32_t RTR                  : 1;
        uint32_t R1                   : 1;
        uint32_t R0                   : 1;
        uint32_t SRR                  : 1;
        uint32_t IDE                  : 1;
        uint32_t                      : 19;
    };

} MDR_CAN_DLC_TypeDef;
// DATAL register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_DATAL_DB0_ZERO_VAL                                                        0

#define MDR_CAN_DATAL_DB1_ZERO_VAL                                                        0

#define MDR_CAN_DATAL_DB2_ZERO_VAL                                                        0

#define MDR_CAN_DATAL_DB3_ZERO_VAL                                                        0

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t DB0                  : 8;
        uint32_t DB1                  : 8;
        uint32_t DB2                  : 8;
        uint32_t DB3                  : 8;
    };

} MDR_CAN_DATAL_TypeDef;
// DATAH register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN_DATAH_DB4_ZERO_VAL                                                        0

#define MDR_CAN_DATAH_DB5_ZERO_VAL                                                        0

#define MDR_CAN_DATAH_DB6_ZERO_VAL                                                        0

#define MDR_CAN_DATAH_DB7_ZERO_VAL                                                        0

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t DB4                  : 8;
        uint32_t DB5                  : 8;
        uint32_t DB6                  : 8;
        uint32_t DB7                  : 8;
    };

} MDR_CAN_DATAH_TypeDef;
// CAN buffer structures Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef struct
{
    __IO MDR_CAN_ID_TypeDef    ID;
    __IO MDR_CAN_DLC_TypeDef   DLC;
    __IO MDR_CAN_DATAL_TypeDef DATAL;
    __IO MDR_CAN_DATAH_TypeDef DATAH;

} MDR_CAN_BUF_TypeDefUnion;

typedef struct
{
    __IO MDR_CAN_ID_TypeDef MASK;
    __IO MDR_CAN_ID_TypeDef FILTER;

} MDR_CAN_BUF_FILTER_TypeDefUnion;

// CAN structure Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef struct
{
    __IO MDR_CAN_CONTROL_TypeDef          CONTROL;
    __IO MDR_CAN_STATUS_TypeDef           STATUS;
    __IO MDR_CAN_BITTMNG_TypeDef          BITTMNG;
    uint32_t                              RESERVED_0;
    __IO MDR_CAN_INT_EN_TypeDef           INT_EN;
    uint32_t                              RESERVED_1[2];
    __IO MDR_CAN_OVER_TypeDef             OVER;
    __IO MDR_CAN_ID_TypeDef               RXID;
    __IO MDR_CAN_DLC_TypeDef              RXDLC;
    __IO MDR_CAN_DATAL_TypeDef            RXDATAL;
    __IO MDR_CAN_DATAH_TypeDef            RXDATAH;
    __IO MDR_CAN_ID_TypeDef               TXID;
    __IO MDR_CAN_DLC_TypeDef              TXDLC;
    __IO MDR_CAN_DATAL_TypeDef            TXDATAL;
    __IO MDR_CAN_DATAH_TypeDef            TXDATAH;
    __IO MDR_CAN_BUF_CON_TypeDef          BUF_CON[32];
    __IO MDR_CAN_CHANNELS_TypeDef         INT_RX;
    __I  MDR_CAN_CHANNELS_TypeDef         RX;
    __IO MDR_CAN_CHANNELS_TypeDef         INT_TX;
    __I  MDR_CAN_CHANNELS_TypeDef         TX;
    uint32_t                              RESERVED_2[76];
    __IO MDR_CAN_BUF_TypeDefUnion         CAN_BUF[32];
    uint32_t                              RESERVED_3[64];
    __IO MDR_CAN_BUF_FILTER_TypeDefUnion  CAN_BUF_FILTER[32];

} MDR_CAN_TypeDefUnion;

// CAN addresses
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_CAN1_UNION_BASE                                                           ( 0x40000000                                                )
#define MDR_CAN2_UNION_BASE                                                           ( 0x40008000                                                )

#define MDR_CAN_CONTROL_OFFSET                                                        ( 0x000                                                     )
#define MDR_CAN_STATUS_OFFSET                                                         ( 0x004                                                     )
#define MDR_CAN_BITTMNG_OFFSET                                                        ( 0x008                                                     )
#define MDR_CAN_INT_EN_OFFSET                                                         ( 0x010                                                     )
#define MDR_CAN_OVER_OFFSET                                                           ( 0x01C                                                     )
#define MDR_CAN_RXID_OFFSET                                                           ( 0x020                                                     )
#define MDR_CAN_RXDLC_OFFSET                                                          ( 0x024                                                     )
#define MDR_CAN_RXDATAL_OFFSET                                                        ( 0x028                                                     )
#define MDR_CAN_RXDATAH_OFFSET                                                        ( 0x02C                                                     )
#define MDR_CAN_TXID_OFFSET                                                           ( 0x030                                                     )
#define MDR_CAN_TXDLC_OFFSET                                                          ( 0x034                                                     )
#define MDR_CAN_TXDATAL_OFFSET                                                        ( 0x038                                                     )
#define MDR_CAN_TXDATAH_OFFSET                                                        ( 0x03C                                                     )
#define MDR_CAN_BUF_CON_OFFSET( x )                                                   ( 0x040 + ( 0x04 * ( x ) )                                 )
#define MDR_CAN_INT_RX_OFFSET                                                         ( 0x0C0                                                     )
#define MDR_CAN_RX_OFFSET                                                             ( 0x0C4                                                     )
#define MDR_CAN_INT_TX_OFFSET                                                         ( 0x0C8                                                     )
#define MDR_CAN_TX_OFFSET                                                             ( 0x0CC                                                     )
#define MDR_CAN_BUF_ID_OFFSET( x )                                                    ( 0x200 + ( 0x10 * ( x ) )                                 )
#define MDR_CAN_BUF_DLC_OFFSET( x )                                                   ( 0x204 + ( 0x10 * ( x ) )                                 )
#define MDR_CAN_BUF_DATAL_OFFSET( x )                                                 ( 0x208 + ( 0x10 * ( x ) )                                 )
#define MDR_CAN_BUF_DATAH_OFFSET( x )                                                 ( 0x20C + ( 0x10 * ( x ) )                                 )
#define MDR_CAN_BUF_FILTER_MASK_OFFSET( x )                                           ( 0x500 + ( 0x08 * ( x ) )                                 )
#define MDR_CAN_BUF_FILTER_FILTER_OFFSET( x )                                         ( 0x504 + ( 0x08 * ( x ) )                                 )

#define MDR_CAN1_UNION                                                               ( ( MDR_CAN_TypeDefUnion * ) MDR_CAN1_UNION_BASE              )
#define MDR_CAN2_UNION                                                               ( ( MDR_CAN_TypeDefUnion * ) MDR_CAN2_UNION_BASE              )

// CAN Union functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void MDR_CAN_Union_Enable( MDR_CAN_TypeDefUnion *can );
void MDR_CAN_Union_Disable( MDR_CAN_TypeDefUnion *can );

void MDR_CAN_Union_NormalMode( MDR_CAN_TypeDefUnion *can );
void MDR_CAN_Union_ReceiveOnlyEnable( MDR_CAN_TypeDefUnion *can );
void MDR_CAN_Union_ReceiveOnlyDisable( MDR_CAN_TypeDefUnion *can );
void MDR_CAN_Union_SelfTestEnable( MDR_CAN_TypeDefUnion *can );
void MDR_CAN_Union_SelfTestDisable( MDR_CAN_TypeDefUnion *can );

void MDR_CAN_Union_AckOwnPacketsEnable( MDR_CAN_TypeDefUnion *can );
void MDR_CAN_Union_AckOwnPacketsDisable( MDR_CAN_TypeDefUnion *can );
void MDR_CAN_Union_ReceiveOwnPacketsEnable( MDR_CAN_TypeDefUnion *can );
void MDR_CAN_Union_ReceiveOwnPacketsDisable( MDR_CAN_TypeDefUnion *can );

void MDR_CAN_Union_SetBitTiming( MDR_CAN_TypeDefUnion *can, uint32_t brp, uint32_t pseg, uint32_t seg1, uint32_t seg2, uint32_t sjw, uint32_t sampling );
void MDR_CAN_Union_SetErrorThreshold( MDR_CAN_TypeDefUnion *can, uint8_t error_threshold );

uint32_t MDR_CAN_Union_GetStatus( MDR_CAN_TypeDefUnion *can );
void MDR_CAN_Union_ClearErrorFlags( MDR_CAN_TypeDefUnion *can, uint32_t error_mask );

void MDR_CAN_Union_InterruptEnable( MDR_CAN_TypeDefUnion *can, uint32_t interrupt_mask );
void MDR_CAN_Union_InterruptDisable( MDR_CAN_TypeDefUnion *can, uint32_t interrupt_mask );
void MDR_CAN_Union_RxBufferInterruptEnable( MDR_CAN_TypeDefUnion *can, uint8_t buffer );
void MDR_CAN_Union_RxBufferInterruptDisable( MDR_CAN_TypeDefUnion *can, uint8_t buffer );
void MDR_CAN_Union_TxBufferInterruptEnable( MDR_CAN_TypeDefUnion *can, uint8_t buffer );
void MDR_CAN_Union_TxBufferInterruptDisable( MDR_CAN_TypeDefUnion *can, uint8_t buffer );

void MDR_CAN_Union_BufferEnable( MDR_CAN_TypeDefUnion *can, uint8_t buffer );
void MDR_CAN_Union_BufferDisable( MDR_CAN_TypeDefUnion *can, uint8_t buffer );
void MDR_CAN_Union_SetBufferMode( MDR_CAN_TypeDefUnion *can, uint8_t buffer, uint32_t mode );
void MDR_CAN_Union_SetBufferPriority( MDR_CAN_TypeDefUnion *can, uint8_t buffer, uint32_t priority );
void MDR_CAN_Union_SetBufferOverwrite( MDR_CAN_TypeDefUnion *can, uint8_t buffer, uint32_t overwrite );

void MDR_CAN_Union_SetStandardID( MDR_CAN_TypeDefUnion *can, uint8_t buffer, uint16_t identifier );
void MDR_CAN_Union_SetExtendedID( MDR_CAN_TypeDefUnion *can, uint8_t buffer, uint32_t identifier );
void MDR_CAN_Union_SetDLC( MDR_CAN_TypeDefUnion *can, uint8_t buffer, uint8_t length, uint32_t format, uint32_t rtr );

void MDR_CAN_Union_WriteBufferData( MDR_CAN_TypeDefUnion *can, uint8_t buffer, const uint8_t *data, uint8_t length );
void MDR_CAN_Union_ReadBufferData( MDR_CAN_TypeDefUnion *can, uint8_t buffer, uint8_t *data, uint8_t length );

void MDR_CAN_Union_RequestTransmission( MDR_CAN_TypeDefUnion *can, uint8_t buffer );
uint8_t MDR_CAN_Union_IsTransmissionPending( MDR_CAN_TypeDefUnion *can, uint8_t buffer );
uint8_t MDR_CAN_Union_IsReceiveFull( MDR_CAN_TypeDefUnion *can, uint8_t buffer );
void MDR_CAN_Union_ClearReceiveFull( MDR_CAN_TypeDefUnion *can, uint8_t buffer );

void MDR_CAN_Union_SetFilter( MDR_CAN_TypeDefUnion *can, uint8_t buffer, uint32_t mask, uint32_t filter );

// CAN Milandr functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void MDR_CAN_Enable( MDR_CAN_TypeDef *can );
void MDR_CAN_Disable( MDR_CAN_TypeDef *can );

void MDR_CAN_NormalMode( MDR_CAN_TypeDef *can );
void MDR_CAN_ReceiveOnlyEnable( MDR_CAN_TypeDef *can );
void MDR_CAN_ReceiveOnlyDisable( MDR_CAN_TypeDef *can );
void MDR_CAN_SelfTestEnable( MDR_CAN_TypeDef *can );
void MDR_CAN_SelfTestDisable( MDR_CAN_TypeDef *can );

void MDR_CAN_AckOwnPacketsEnable( MDR_CAN_TypeDef *can );
void MDR_CAN_AckOwnPacketsDisable( MDR_CAN_TypeDef *can );
void MDR_CAN_ReceiveOwnPacketsEnable( MDR_CAN_TypeDef *can );
void MDR_CAN_ReceiveOwnPacketsDisable( MDR_CAN_TypeDef *can );

void MDR_CAN_SetBitTiming( MDR_CAN_TypeDef *can, uint32_t brp, uint32_t pseg, uint32_t seg1, uint32_t seg2, uint32_t sjw, uint32_t sampling );
void MDR_CAN_SetErrorThreshold( MDR_CAN_TypeDef *can, uint8_t error_threshold );

uint32_t MDR_CAN_GetStatus( MDR_CAN_TypeDef *can );
void MDR_CAN_ClearErrorFlags( MDR_CAN_TypeDef *can, uint32_t error_mask );

void MDR_CAN_InterruptEnable( MDR_CAN_TypeDef *can, uint32_t interrupt_mask );
void MDR_CAN_InterruptDisable( MDR_CAN_TypeDef *can, uint32_t interrupt_mask );
void MDR_CAN_RxBufferInterruptEnable( MDR_CAN_TypeDef *can, uint8_t buffer );
void MDR_CAN_RxBufferInterruptDisable( MDR_CAN_TypeDef *can, uint8_t buffer );
void MDR_CAN_TxBufferInterruptEnable( MDR_CAN_TypeDef *can, uint8_t buffer );
void MDR_CAN_TxBufferInterruptDisable( MDR_CAN_TypeDef *can, uint8_t buffer );

void MDR_CAN_BufferEnable( MDR_CAN_TypeDef *can, uint8_t buffer );
void MDR_CAN_BufferDisable( MDR_CAN_TypeDef *can, uint8_t buffer );
void MDR_CAN_SetBufferMode( MDR_CAN_TypeDef *can, uint8_t buffer, uint32_t mode );
void MDR_CAN_SetBufferPriority( MDR_CAN_TypeDef *can, uint8_t buffer, uint32_t priority );
void MDR_CAN_SetBufferOverwrite( MDR_CAN_TypeDef *can, uint8_t buffer, uint32_t overwrite );

void MDR_CAN_SetStandardID( MDR_CAN_TypeDef *can, uint8_t buffer, uint16_t identifier );
void MDR_CAN_SetExtendedID( MDR_CAN_TypeDef *can, uint8_t buffer, uint32_t identifier );
void MDR_CAN_SetDLC( MDR_CAN_TypeDef *can, uint8_t buffer, uint8_t length, uint32_t format, uint32_t rtr );

void MDR_CAN_WriteBufferData( MDR_CAN_TypeDef *can, uint8_t buffer, const uint8_t *data, uint8_t length );
void MDR_CAN_ReadBufferData( MDR_CAN_TypeDef *can, uint8_t buffer, uint8_t *data, uint8_t length );

void MDR_CAN_RequestTransmission( MDR_CAN_TypeDef *can, uint8_t buffer );
uint8_t MDR_CAN_IsTransmissionPending( MDR_CAN_TypeDef *can, uint8_t buffer );
uint8_t MDR_CAN_IsReceiveFull( MDR_CAN_TypeDef *can, uint8_t buffer );
void MDR_CAN_ClearReceiveFull( MDR_CAN_TypeDef *can, uint8_t buffer );

void MDR_CAN_SetFilter( MDR_CAN_TypeDef *can, uint8_t buffer, uint32_t mask, uint32_t filter );

#endif