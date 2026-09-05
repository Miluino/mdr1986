#ifndef __MILUINO_MDR_UART_H
#define __MILUINO_MDR_UART_H

#include "MDR32F9Q2I.h"
#include <stdint.h>
// DR register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_DR_DATA_POS                                                          0
#define MDR_UART_DR_FE_POS                                                            8
#define MDR_UART_DR_PE_POS                                                            9
#define MDR_UART_DR_BE_POS                                                            10
#define MDR_UART_DR_OE_POS                                                            11

#define MDR_UART_DR_DATA_MSK                                                          ( 0xFF << MDR_UART_DR_DATA_POS                                                           )
#define MDR_UART_DR_FE_MSK                                                            ( 0x01 << MDR_UART_DR_FE_POS                                                             )
#define MDR_UART_DR_PE_MSK                                                            ( 0x01 << MDR_UART_DR_PE_POS                                                             )
#define MDR_UART_DR_BE_MSK                                                            ( 0x01 << MDR_UART_DR_BE_POS                                                             )
#define MDR_UART_DR_OE_MSK                                                            ( 0x01 << MDR_UART_DR_OE_POS                                                             )

#define MDR_UART_DR_DATA_ZERO                                                         ~( 0xFF << MDR_UART_DR_DATA_POS                                                          )
#define MDR_UART_DR_DATA_VALUE( x )                                                   ( ( x ) << MDR_UART_DR_DATA_POS                                                          )

#define MDR_UART_DR_FE_NO_ERROR                                                       ~( 0x01 << MDR_UART_DR_FE_POS                                                            )
#define MDR_UART_DR_FE_ERROR                                                          ( 0x01 << MDR_UART_DR_FE_POS                                                             )

#define MDR_UART_DR_PE_NO_ERROR                                                       ~( 0x01 << MDR_UART_DR_PE_POS                                                            )
#define MDR_UART_DR_PE_ERROR                                                          ( 0x01 << MDR_UART_DR_PE_POS                                                             )

#define MDR_UART_DR_BE_NO_ERROR                                                       ~( 0x01 << MDR_UART_DR_BE_POS                                                            )
#define MDR_UART_DR_BE_ERROR                                                          ( 0x01 << MDR_UART_DR_BE_POS                                                             )

#define MDR_UART_DR_OE_NO_ERROR                                                       ~( 0x01 << MDR_UART_DR_OE_POS                                                            )
#define MDR_UART_DR_OE_ERROR                                                          ( 0x01 << MDR_UART_DR_OE_POS                                                             )

// RSR_ECR register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_RSR_ECR_FE_POS                                                       0
#define MDR_UART_RSR_ECR_PE_POS                                                       1
#define MDR_UART_RSR_ECR_BE_POS                                                       2
#define MDR_UART_RSR_ECR_OE_POS                                                       3

#define MDR_UART_RSR_ECR_FE_MSK                                                       ( 0x01 << MDR_UART_RSR_ECR_FE_POS                                                        )
#define MDR_UART_RSR_ECR_PE_MSK                                                       ( 0x01 << MDR_UART_RSR_ECR_PE_POS                                                        )
#define MDR_UART_RSR_ECR_BE_MSK                                                       ( 0x01 << MDR_UART_RSR_ECR_BE_POS                                                        )
#define MDR_UART_RSR_ECR_OE_MSK                                                       ( 0x01 << MDR_UART_RSR_ECR_OE_POS                                                        )

#define MDR_UART_RSR_ECR_FE_NO_ERROR                                                  ~( 0x01 << MDR_UART_RSR_ECR_FE_POS                                                       )
#define MDR_UART_RSR_ECR_FE_ERROR                                                     ( 0x01 << MDR_UART_RSR_ECR_FE_POS                                                        )

#define MDR_UART_RSR_ECR_PE_NO_ERROR                                                  ~( 0x01 << MDR_UART_RSR_ECR_PE_POS                                                       )
#define MDR_UART_RSR_ECR_PE_ERROR                                                     ( 0x01 << MDR_UART_RSR_ECR_PE_POS                                                        )

#define MDR_UART_RSR_ECR_BE_NO_ERROR                                                  ~( 0x01 << MDR_UART_RSR_ECR_BE_POS                                                       )
#define MDR_UART_RSR_ECR_BE_ERROR                                                     ( 0x01 << MDR_UART_RSR_ECR_BE_POS                                                        )

#define MDR_UART_RSR_ECR_OE_NO_ERROR                                                  ~( 0x01 << MDR_UART_RSR_ECR_OE_POS                                                       )
#define MDR_UART_RSR_ECR_OE_ERROR                                                     ( 0x01 << MDR_UART_RSR_ECR_OE_POS                                                        )

#define MDR_UART_RSR_ECR_CLEAR_ERRORS                                                 ( 0x01 << MDR_UART_RSR_ECR_FE_POS                                                        )
// FR register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_FR_CTS_POS                                                           0
#define MDR_UART_FR_DSR_POS                                                           1
#define MDR_UART_FR_DCD_POS                                                           2
#define MDR_UART_FR_BUSY_POS                                                          3
#define MDR_UART_FR_RXFE_POS                                                          4
#define MDR_UART_FR_TXFF_POS                                                          5
#define MDR_UART_FR_RXFF_POS                                                          6
#define MDR_UART_FR_TXFE_POS                                                          7
#define MDR_UART_FR_RI_POS                                                            8

#define MDR_UART_FR_CTS_MSK                                                           ( 0x01 << MDR_UART_FR_CTS_POS                                                            )
#define MDR_UART_FR_DSR_MSK                                                           ( 0x01 << MDR_UART_FR_DSR_POS                                                            )
#define MDR_UART_FR_DCD_MSK                                                           ( 0x01 << MDR_UART_FR_DCD_POS                                                            )
#define MDR_UART_FR_BUSY_MSK                                                          ( 0x01 << MDR_UART_FR_BUSY_POS                                                           )
#define MDR_UART_FR_RXFE_MSK                                                          ( 0x01 << MDR_UART_FR_RXFE_POS                                                           )
#define MDR_UART_FR_TXFF_MSK                                                          ( 0x01 << MDR_UART_FR_TXFF_POS                                                           )
#define MDR_UART_FR_RXFF_MSK                                                          ( 0x01 << MDR_UART_FR_RXFF_POS                                                           )
#define MDR_UART_FR_TXFE_MSK                                                          ( 0x01 << MDR_UART_FR_TXFE_POS                                                           )
#define MDR_UART_FR_RI_MSK                                                            ( 0x01 << MDR_UART_FR_RI_POS                                                             )

#define MDR_UART_FR_CTS_LOGIC_ZERO                                                    ~( 0x01 << MDR_UART_FR_CTS_POS                                                           )
#define MDR_UART_FR_CTS_LOGIC_ONE                                                     ( 0x01 << MDR_UART_FR_CTS_POS                                                            )

#define MDR_UART_FR_DSR_LOGIC_ZERO                                                    ~( 0x01 << MDR_UART_FR_DSR_POS                                                           )
#define MDR_UART_FR_DSR_LOGIC_ONE                                                     ( 0x01 << MDR_UART_FR_DSR_POS                                                            )

#define MDR_UART_FR_DCD_LOGIC_ZERO                                                    ~( 0x01 << MDR_UART_FR_DCD_POS                                                           )
#define MDR_UART_FR_DCD_LOGIC_ONE                                                     ( 0x01 << MDR_UART_FR_DCD_POS                                                            )

#define MDR_UART_FR_BUSY_IDLE                                                         ~( 0x01 << MDR_UART_FR_BUSY_POS                                                          )
#define MDR_UART_FR_BUSY_BUSY                                                         ( 0x01 << MDR_UART_FR_BUSY_POS                                                           )

#define MDR_UART_FR_RXFE_NOT_EMPTY                                                    ~( 0x01 << MDR_UART_FR_RXFE_POS                                                          )
#define MDR_UART_FR_RXFE_EMPTY                                                        ( 0x01 << MDR_UART_FR_RXFE_POS                                                           )

#define MDR_UART_FR_TXFF_NOT_FULL                                                     ~( 0x01 << MDR_UART_FR_TXFF_POS                                                          )
#define MDR_UART_FR_TXFF_FULL                                                         ( 0x01 << MDR_UART_FR_TXFF_POS                                                           )

#define MDR_UART_FR_RXFF_NOT_FULL                                                     ~( 0x01 << MDR_UART_FR_RXFF_POS                                                          )
#define MDR_UART_FR_RXFF_FULL                                                         ( 0x01 << MDR_UART_FR_RXFF_POS                                                           )

#define MDR_UART_FR_TXFE_NOT_EMPTY                                                    ~( 0x01 << MDR_UART_FR_TXFE_POS                                                          )
#define MDR_UART_FR_TXFE_EMPTY                                                        ( 0x01 << MDR_UART_FR_TXFE_POS                                                           )

#define MDR_UART_FR_RI_LOGIC_ZERO                                                     ~( 0x01 << MDR_UART_FR_RI_POS                                                            )
#define MDR_UART_FR_RI_LOGIC_ONE                                                      ( 0x01 << MDR_UART_FR_RI_POS                                                             )

// ILPR register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_ILPR_ILPDVSR_POS                                                     0

#define MDR_UART_ILPR_ILPDVSR_MSK                                                     ( 0xFF << MDR_UART_ILPR_ILPDVSR_POS                                                      )

#define MDR_UART_ILPR_ILPDVSR_ZERO                                                    ~( 0xFF << MDR_UART_ILPR_ILPDVSR_POS                                                     )
#define MDR_UART_ILPR_ILPDVSR_VALUE( x )                                              ( ( x ) << MDR_UART_ILPR_ILPDVSR_POS                                                     )

// IBRD register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_IBRD_BAUDDIV_INT_POS                                                 0

#define MDR_UART_IBRD_BAUDDIV_INT_MSK                                                 ( 0xFFFF << MDR_UART_IBRD_BAUDDIV_INT_POS                                                )

#define MDR_UART_IBRD_BAUDDIV_INT_ZERO                                                ~( 0xFFFF << MDR_UART_IBRD_BAUDDIV_INT_POS                                               )
#define MDR_UART_IBRD_BAUDDIV_INT_VALUE( x )                                          ( ( x ) << MDR_UART_IBRD_BAUDDIV_INT_POS                                                 )

// FBRD register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_FBRD_BAUDDIV_FRAC_POS                                                0

#define MDR_UART_FBRD_BAUDDIV_FRAC_MSK                                                ( 0x3F << MDR_UART_FBRD_BAUDDIV_FRAC_POS                                                 )

#define MDR_UART_FBRD_BAUDDIV_FRAC_ZERO                                               ~( 0x3F << MDR_UART_FBRD_BAUDDIV_FRAC_POS                                                )
#define MDR_UART_FBRD_BAUDDIV_FRAC_VALUE( x )                                         ( ( x ) << MDR_UART_FBRD_BAUDDIV_FRAC_POS                                                )

// LCR_H register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_LCR_H_BRK_POS                                                        0
#define MDR_UART_LCR_H_PEN_POS                                                        1
#define MDR_UART_LCR_H_EPS_POS                                                        2
#define MDR_UART_LCR_H_STP2_POS                                                       3
#define MDR_UART_LCR_H_FEN_POS                                                        4
#define MDR_UART_LCR_H_WLEN_POS                                                       5
#define MDR_UART_LCR_H_SPS_POS                                                        7

#define MDR_UART_LCR_H_BRK_MSK                                                        ( 0x01 << MDR_UART_LCR_H_BRK_POS                                                         )
#define MDR_UART_LCR_H_PEN_MSK                                                        ( 0x01 << MDR_UART_LCR_H_PEN_POS                                                         )
#define MDR_UART_LCR_H_EPS_MSK                                                        ( 0x01 << MDR_UART_LCR_H_EPS_POS                                                         )
#define MDR_UART_LCR_H_STP2_MSK                                                       ( 0x01 << MDR_UART_LCR_H_STP2_POS                                                        )
#define MDR_UART_LCR_H_FEN_MSK                                                        ( 0x01 << MDR_UART_LCR_H_FEN_POS                                                         )
#define MDR_UART_LCR_H_WLEN_MSK                                                       ( 0x03 << MDR_UART_LCR_H_WLEN_POS                                                        )
#define MDR_UART_LCR_H_SPS_MSK                                                        ( 0x01 << MDR_UART_LCR_H_SPS_POS                                                         )

#define MDR_UART_LCR_H_BRK_NORMAL                                                     ~( 0x01 << MDR_UART_LCR_H_BRK_POS                                                        )
#define MDR_UART_LCR_H_BRK_BREAK                                                      ( 0x01 << MDR_UART_LCR_H_BRK_POS                                                         )

#define MDR_UART_LCR_H_PEN_DISABLE                                                    ~( 0x01 << MDR_UART_LCR_H_PEN_POS                                                        )
#define MDR_UART_LCR_H_PEN_ENABLE                                                     ( 0x01 << MDR_UART_LCR_H_PEN_POS                                                         )

#define MDR_UART_LCR_H_EPS_ODD                                                        ~( 0x01 << MDR_UART_LCR_H_EPS_POS                                                        )
#define MDR_UART_LCR_H_EPS_EVEN                                                       ( 0x01 << MDR_UART_LCR_H_EPS_POS                                                         )

#define MDR_UART_LCR_H_STP2_ONE_STOP_BIT                                              ~( 0x01 << MDR_UART_LCR_H_STP2_POS                                                       )
#define MDR_UART_LCR_H_STP2_TWO_STOP_BITS                                             ( 0x01 << MDR_UART_LCR_H_STP2_POS                                                        )

#define MDR_UART_LCR_H_FEN_DISABLE                                                    ~( 0x01 << MDR_UART_LCR_H_FEN_POS                                                        )
#define MDR_UART_LCR_H_FEN_ENABLE                                                     ( 0x01 << MDR_UART_LCR_H_FEN_POS                                                         )

#define MDR_UART_LCR_H_WLEN_5_BITS                                                    ~( 0x03 << MDR_UART_LCR_H_WLEN_POS                                                       )
#define MDR_UART_LCR_H_WLEN_6_BITS                                                    ( 0x01 << MDR_UART_LCR_H_WLEN_POS                                                        )
#define MDR_UART_LCR_H_WLEN_7_BITS                                                    ( 0x02 << MDR_UART_LCR_H_WLEN_POS                                                        )
#define MDR_UART_LCR_H_WLEN_8_BITS                                                    ( 0x03 << MDR_UART_LCR_H_WLEN_POS                                                        )

#define MDR_UART_LCR_H_SPS_DISABLE                                                    ~( 0x01 << MDR_UART_LCR_H_SPS_POS                                                        )
#define MDR_UART_LCR_H_SPS_ENABLE                                                     ( 0x01 << MDR_UART_LCR_H_SPS_POS                                                         )

// CR register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_CR_UARTEN_POS                                                        0
#define MDR_UART_CR_SIREN_POS                                                         1
#define MDR_UART_CR_SIRLP_POS                                                         2
#define MDR_UART_CR_LBE_POS                                                           7
#define MDR_UART_CR_TXE_POS                                                           8
#define MDR_UART_CR_RXE_POS                                                           9
#define MDR_UART_CR_DTR_POS                                                           10
#define MDR_UART_CR_RTS_POS                                                           11
#define MDR_UART_CR_OUT1_POS                                                          12
#define MDR_UART_CR_OUT2_POS                                                          13
#define MDR_UART_CR_RTSEN_POS                                                         14
#define MDR_UART_CR_CTSEN_POS                                                         15

#define MDR_UART_CR_UARTEN_MSK                                                        ( 0x01 << MDR_UART_CR_UARTEN_POS                                                         )
#define MDR_UART_CR_SIREN_MSK                                                         ( 0x01 << MDR_UART_CR_SIREN_POS                                                          )
#define MDR_UART_CR_SIRLP_MSK                                                         ( 0x01 << MDR_UART_CR_SIRLP_POS                                                          )
#define MDR_UART_CR_LBE_MSK                                                           ( 0x01 << MDR_UART_CR_LBE_POS                                                            )
#define MDR_UART_CR_TXE_MSK                                                           ( 0x01 << MDR_UART_CR_TXE_POS                                                            )
#define MDR_UART_CR_RXE_MSK                                                           ( 0x01 << MDR_UART_CR_RXE_POS                                                            )
#define MDR_UART_CR_DTR_MSK                                                           ( 0x01 << MDR_UART_CR_DTR_POS                                                            )
#define MDR_UART_CR_RTS_MSK                                                           ( 0x01 << MDR_UART_CR_RTS_POS                                                            )
#define MDR_UART_CR_OUT1_MSK                                                          ( 0x01 << MDR_UART_CR_OUT1_POS                                                           )
#define MDR_UART_CR_OUT2_MSK                                                          ( 0x01 << MDR_UART_CR_OUT2_POS                                                           )
#define MDR_UART_CR_RTSEN_MSK                                                         ( 0x01 << MDR_UART_CR_RTSEN_POS                                                          )
#define MDR_UART_CR_CTSEN_MSK                                                         ( 0x01 << MDR_UART_CR_CTSEN_POS                                                          )

#define MDR_UART_CR_UARTEN_DISABLE                                                    ~( 0x01 << MDR_UART_CR_UARTEN_POS                                                        )
#define MDR_UART_CR_UARTEN_ENABLE                                                     ( 0x01 << MDR_UART_CR_UARTEN_POS                                                         )

#define MDR_UART_CR_SIREN_DISABLE                                                     ~( 0x01 << MDR_UART_CR_SIREN_POS                                                         )
#define MDR_UART_CR_SIREN_ENABLE                                                      ( 0x01 << MDR_UART_CR_SIREN_POS                                                          )

#define MDR_UART_CR_SIRLP_PULSE_3_16_BIT                                              ~( 0x01 << MDR_UART_CR_SIRLP_POS                                                         )
#define MDR_UART_CR_SIRLP_PULSE_3_CLOCKS                                              ( 0x01 << MDR_UART_CR_SIRLP_POS                                                          )

#define MDR_UART_CR_LBE_DISABLE                                                       ~( 0x01 << MDR_UART_CR_LBE_POS                                                           )
#define MDR_UART_CR_LBE_ENABLE                                                        ( 0x01 << MDR_UART_CR_LBE_POS                                                            )

#define MDR_UART_CR_TXE_DISABLE                                                       ~( 0x01 << MDR_UART_CR_TXE_POS                                                           )
#define MDR_UART_CR_TXE_ENABLE                                                        ( 0x01 << MDR_UART_CR_TXE_POS                                                            )

#define MDR_UART_CR_RXE_DISABLE                                                       ~( 0x01 << MDR_UART_CR_RXE_POS                                                           )
#define MDR_UART_CR_RXE_ENABLE                                                        ( 0x01 << MDR_UART_CR_RXE_POS                                                            )

#define MDR_UART_CR_DTR_NOT_INVERTED                                                  ~( 0x01 << MDR_UART_CR_DTR_POS                                                           )
#define MDR_UART_CR_DTR_INVERTED                                                      ( 0x01 << MDR_UART_CR_DTR_POS                                                            )

#define MDR_UART_CR_RTS_NOT_INVERTED                                                  ~( 0x01 << MDR_UART_CR_RTS_POS                                                           )
#define MDR_UART_CR_RTS_INVERTED                                                      ( 0x01 << MDR_UART_CR_RTS_POS                                                            )

#define MDR_UART_CR_OUT1_NOT_INVERTED                                                 ~( 0x01 << MDR_UART_CR_OUT1_POS                                                          )
#define MDR_UART_CR_OUT1_INVERTED                                                     ( 0x01 << MDR_UART_CR_OUT1_POS                                                           )

#define MDR_UART_CR_OUT2_NOT_INVERTED                                                 ~( 0x01 << MDR_UART_CR_OUT2_POS                                                          )
#define MDR_UART_CR_OUT2_INVERTED                                                     ( 0x01 << MDR_UART_CR_OUT2_POS                                                           )

#define MDR_UART_CR_RTSEN_DISABLE                                                     ~( 0x01 << MDR_UART_CR_RTSEN_POS                                                         )
#define MDR_UART_CR_RTSEN_ENABLE                                                      ( 0x01 << MDR_UART_CR_RTSEN_POS                                                          )

#define MDR_UART_CR_CTSEN_DISABLE                                                     ~( 0x01 << MDR_UART_CR_CTSEN_POS                                                         )
#define MDR_UART_CR_CTSEN_ENABLE                                                      ( 0x01 << MDR_UART_CR_CTSEN_POS                                                          )

// IFLS register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_IFLS_TXIFLSEL_POS                                                    0
#define MDR_UART_IFLS_RXIFLSEL_POS                                                    3

#define MDR_UART_IFLS_TXIFLSEL_MSK                                                    ( 0x07 << MDR_UART_IFLS_TXIFLSEL_POS                                                     )
#define MDR_UART_IFLS_RXIFLSEL_MSK                                                    ( 0x07 << MDR_UART_IFLS_RXIFLSEL_POS                                                     )

#define MDR_UART_IFLS_TXIFLSEL_1_8                                                    ~( 0x07 << MDR_UART_IFLS_TXIFLSEL_POS                                                    )
#define MDR_UART_IFLS_TXIFLSEL_1_4                                                    ( 0x01 << MDR_UART_IFLS_TXIFLSEL_POS                                                     )
#define MDR_UART_IFLS_TXIFLSEL_1_2                                                    ( 0x02 << MDR_UART_IFLS_TXIFLSEL_POS                                                     )
#define MDR_UART_IFLS_TXIFLSEL_3_4                                                    ( 0x03 << MDR_UART_IFLS_TXIFLSEL_POS                                                     )
#define MDR_UART_IFLS_TXIFLSEL_7_8                                                    ( 0x04 << MDR_UART_IFLS_TXIFLSEL_POS                                                     )

#define MDR_UART_IFLS_RXIFLSEL_1_8                                                    ~( 0x07 << MDR_UART_IFLS_RXIFLSEL_POS                                                    )
#define MDR_UART_IFLS_RXIFLSEL_1_4                                                    ( 0x01 << MDR_UART_IFLS_RXIFLSEL_POS                                                     )
#define MDR_UART_IFLS_RXIFLSEL_1_2                                                    ( 0x02 << MDR_UART_IFLS_RXIFLSEL_POS                                                     )
#define MDR_UART_IFLS_RXIFLSEL_3_4                                                    ( 0x03 << MDR_UART_IFLS_RXIFLSEL_POS                                                     )
#define MDR_UART_IFLS_RXIFLSEL_7_8                                                    ( 0x04 << MDR_UART_IFLS_RXIFLSEL_POS                                                     )

// IMSC register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_IMSC_RIMIM_POS                                                       0
#define MDR_UART_IMSC_CTSMIM_POS                                                      1
#define MDR_UART_IMSC_DCDMIM_POS                                                      2
#define MDR_UART_IMSC_DSRMIM_POS                                                      3
#define MDR_UART_IMSC_RXIM_POS                                                        4
#define MDR_UART_IMSC_TXIM_POS                                                        5
#define MDR_UART_IMSC_RTIM_POS                                                        6
#define MDR_UART_IMSC_FEIM_POS                                                        7
#define MDR_UART_IMSC_PEIM_POS                                                        8
#define MDR_UART_IMSC_BEIM_POS                                                        9
#define MDR_UART_IMSC_OEIM_POS                                                        10

#define MDR_UART_IMSC_RIMIM_MSK                                                       ( 0x01 << MDR_UART_IMSC_RIMIM_POS                                                        )
#define MDR_UART_IMSC_CTSMIM_MSK                                                      ( 0x01 << MDR_UART_IMSC_CTSMIM_POS                                                       )
#define MDR_UART_IMSC_DCDMIM_MSK                                                      ( 0x01 << MDR_UART_IMSC_DCDMIM_POS                                                       )
#define MDR_UART_IMSC_DSRMIM_MSK                                                      ( 0x01 << MDR_UART_IMSC_DSRMIM_POS                                                       )
#define MDR_UART_IMSC_RXIM_MSK                                                        ( 0x01 << MDR_UART_IMSC_RXIM_POS                                                         )
#define MDR_UART_IMSC_TXIM_MSK                                                        ( 0x01 << MDR_UART_IMSC_TXIM_POS                                                         )
#define MDR_UART_IMSC_RTIM_MSK                                                        ( 0x01 << MDR_UART_IMSC_RTIM_POS                                                         )
#define MDR_UART_IMSC_FEIM_MSK                                                        ( 0x01 << MDR_UART_IMSC_FEIM_POS                                                         )
#define MDR_UART_IMSC_PEIM_MSK                                                        ( 0x01 << MDR_UART_IMSC_PEIM_POS                                                         )
#define MDR_UART_IMSC_BEIM_MSK                                                        ( 0x01 << MDR_UART_IMSC_BEIM_POS                                                         )
#define MDR_UART_IMSC_OEIM_MSK                                                        ( 0x01 << MDR_UART_IMSC_OEIM_POS                                                         )

#define MDR_UART_IMSC_RIMIM_DISABLE                                                   ~( 0x01 << MDR_UART_IMSC_RIMIM_POS                                                       )
#define MDR_UART_IMSC_RIMIM_ENABLE                                                    ( 0x01 << MDR_UART_IMSC_RIMIM_POS                                                        )

#define MDR_UART_IMSC_CTSMIM_DISABLE                                                  ~( 0x01 << MDR_UART_IMSC_CTSMIM_POS                                                      )
#define MDR_UART_IMSC_CTSMIM_ENABLE                                                   ( 0x01 << MDR_UART_IMSC_CTSMIM_POS                                                       )

#define MDR_UART_IMSC_DCDMIM_DISABLE                                                  ~( 0x01 << MDR_UART_IMSC_DCDMIM_POS                                                      )
#define MDR_UART_IMSC_DCDMIM_ENABLE                                                   ( 0x01 << MDR_UART_IMSC_DCDMIM_POS                                                       )

#define MDR_UART_IMSC_DSRMIM_DISABLE                                                  ~( 0x01 << MDR_UART_IMSC_DSRMIM_POS                                                      )
#define MDR_UART_IMSC_DSRMIM_ENABLE                                                   ( 0x01 << MDR_UART_IMSC_DSRMIM_POS                                                       )

#define MDR_UART_IMSC_RXIM_DISABLE                                                    ~( 0x01 << MDR_UART_IMSC_RXIM_POS                                                        )
#define MDR_UART_IMSC_RXIM_ENABLE                                                     ( 0x01 << MDR_UART_IMSC_RXIM_POS                                                         )

#define MDR_UART_IMSC_TXIM_DISABLE                                                    ~( 0x01 << MDR_UART_IMSC_TXIM_POS                                                        )
#define MDR_UART_IMSC_TXIM_ENABLE                                                     ( 0x01 << MDR_UART_IMSC_TXIM_POS                                                         )

#define MDR_UART_IMSC_RTIM_DISABLE                                                    ~( 0x01 << MDR_UART_IMSC_RTIM_POS                                                        )
#define MDR_UART_IMSC_RTIM_ENABLE                                                     ( 0x01 << MDR_UART_IMSC_RTIM_POS                                                         )

#define MDR_UART_IMSC_FEIM_DISABLE                                                    ~( 0x01 << MDR_UART_IMSC_FEIM_POS                                                        )
#define MDR_UART_IMSC_FEIM_ENABLE                                                     ( 0x01 << MDR_UART_IMSC_FEIM_POS                                                         )

#define MDR_UART_IMSC_PEIM_DISABLE                                                    ~( 0x01 << MDR_UART_IMSC_PEIM_POS                                                        )
#define MDR_UART_IMSC_PEIM_ENABLE                                                     ( 0x01 << MDR_UART_IMSC_PEIM_POS                                                         )

#define MDR_UART_IMSC_BEIM_DISABLE                                                    ~( 0x01 << MDR_UART_IMSC_BEIM_POS                                                        )
#define MDR_UART_IMSC_BEIM_ENABLE                                                     ( 0x01 << MDR_UART_IMSC_BEIM_POS                                                         )

#define MDR_UART_IMSC_OEIM_DISABLE                                                    ~( 0x01 << MDR_UART_IMSC_OEIM_POS                                                        )
#define MDR_UART_IMSC_OEIM_ENABLE                                                     ( 0x01 << MDR_UART_IMSC_OEIM_POS                                                         )

// RIS register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_RIS_RIRMIS_POS                                                       0
#define MDR_UART_RIS_CTSRMIS_POS                                                      1
#define MDR_UART_RIS_DCDRMIS_POS                                                      2
#define MDR_UART_RIS_DSRRMIS_POS                                                      3
#define MDR_UART_RIS_RXRIS_POS                                                        4
#define MDR_UART_RIS_TXRIS_POS                                                        5
#define MDR_UART_RIS_RTRIS_POS                                                        6
#define MDR_UART_RIS_FERIS_POS                                                        7
#define MDR_UART_RIS_PERIS_POS                                                        8
#define MDR_UART_RIS_BERIS_POS                                                        9
#define MDR_UART_RIS_OERIS_POS                                                        10

#define MDR_UART_RIS_RIRMIS_MSK                                                       ( 0x01 << MDR_UART_RIS_RIRMIS_POS                                                        )
#define MDR_UART_RIS_CTSRMIS_MSK                                                      ( 0x01 << MDR_UART_RIS_CTSRMIS_POS                                                       )
#define MDR_UART_RIS_DCDRMIS_MSK                                                      ( 0x01 << MDR_UART_RIS_DCDRMIS_POS                                                       )
#define MDR_UART_RIS_DSRRMIS_MSK                                                      ( 0x01 << MDR_UART_RIS_DSRRMIS_POS                                                       )
#define MDR_UART_RIS_RXRIS_MSK                                                        ( 0x01 << MDR_UART_RIS_RXRIS_POS                                                         )
#define MDR_UART_RIS_TXRIS_MSK                                                        ( 0x01 << MDR_UART_RIS_TXRIS_POS                                                         )
#define MDR_UART_RIS_RTRIS_MSK                                                        ( 0x01 << MDR_UART_RIS_RTRIS_POS                                                         )
#define MDR_UART_RIS_FERIS_MSK                                                        ( 0x01 << MDR_UART_RIS_FERIS_POS                                                         )
#define MDR_UART_RIS_PERIS_MSK                                                        ( 0x01 << MDR_UART_RIS_PERIS_POS                                                         )
#define MDR_UART_RIS_BERIS_MSK                                                        ( 0x01 << MDR_UART_RIS_BERIS_POS                                                         )
#define MDR_UART_RIS_OERIS_MSK                                                        ( 0x01 << MDR_UART_RIS_OERIS_POS                                                         )

#define MDR_UART_RIS_RIRMIS_NOT_ACTIVE                                                ~( 0x01 << MDR_UART_RIS_RIRMIS_POS                                                       )
#define MDR_UART_RIS_RIRMIS_ACTIVE                                                    ( 0x01 << MDR_UART_RIS_RIRMIS_POS                                                        )

#define MDR_UART_RIS_CTSRMIS_NOT_ACTIVE                                               ~( 0x01 << MDR_UART_RIS_CTSRMIS_POS                                                      )
#define MDR_UART_RIS_CTSRMIS_ACTIVE                                                   ( 0x01 << MDR_UART_RIS_CTSRMIS_POS                                                       )

#define MDR_UART_RIS_DCDRMIS_NOT_ACTIVE                                               ~( 0x01 << MDR_UART_RIS_DCDRMIS_POS                                                      )
#define MDR_UART_RIS_DCDRMIS_ACTIVE                                                   ( 0x01 << MDR_UART_RIS_DCDRMIS_POS                                                       )

#define MDR_UART_RIS_DSRRMIS_NOT_ACTIVE                                               ~( 0x01 << MDR_UART_RIS_DSRRMIS_POS                                                      )
#define MDR_UART_RIS_DSRRMIS_ACTIVE                                                   ( 0x01 << MDR_UART_RIS_DSRRMIS_POS                                                       )

#define MDR_UART_RIS_RXRIS_NOT_ACTIVE                                                 ~( 0x01 << MDR_UART_RIS_RXRIS_POS                                                        )
#define MDR_UART_RIS_RXRIS_ACTIVE                                                     ( 0x01 << MDR_UART_RIS_RXRIS_POS                                                         )

#define MDR_UART_RIS_TXRIS_NOT_ACTIVE                                                 ~( 0x01 << MDR_UART_RIS_TXRIS_POS                                                        )
#define MDR_UART_RIS_TXRIS_ACTIVE                                                     ( 0x01 << MDR_UART_RIS_TXRIS_POS                                                         )

#define MDR_UART_RIS_RTRIS_NOT_ACTIVE                                                 ~( 0x01 << MDR_UART_RIS_RTRIS_POS                                                        )
#define MDR_UART_RIS_RTRIS_ACTIVE                                                     ( 0x01 << MDR_UART_RIS_RTRIS_POS                                                         )

#define MDR_UART_RIS_FERIS_NOT_ACTIVE                                                 ~( 0x01 << MDR_UART_RIS_FERIS_POS                                                        )
#define MDR_UART_RIS_FERIS_ACTIVE                                                     ( 0x01 << MDR_UART_RIS_FERIS_POS                                                         )

#define MDR_UART_RIS_PERIS_NOT_ACTIVE                                                 ~( 0x01 << MDR_UART_RIS_PERIS_POS                                                        )
#define MDR_UART_RIS_PERIS_ACTIVE                                                     ( 0x01 << MDR_UART_RIS_PERIS_POS                                                         )

#define MDR_UART_RIS_BERIS_NOT_ACTIVE                                                 ~( 0x01 << MDR_UART_RIS_BERIS_POS                                                        )
#define MDR_UART_RIS_BERIS_ACTIVE                                                     ( 0x01 << MDR_UART_RIS_BERIS_POS                                                         )

#define MDR_UART_RIS_OERIS_NOT_ACTIVE                                                 ~( 0x01 << MDR_UART_RIS_OERIS_POS                                                        )
#define MDR_UART_RIS_OERIS_ACTIVE                                                     ( 0x01 << MDR_UART_RIS_OERIS_POS                                                         )

// MIS register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_MIS_RIMMIS_POS                                                       0
#define MDR_UART_MIS_CTSMMIS_POS                                                      1
#define MDR_UART_MIS_DCDMMIS_POS                                                      2
#define MDR_UART_MIS_DSRMMIS_POS                                                      3
#define MDR_UART_MIS_RXMIS_POS                                                        4
#define MDR_UART_MIS_TXMIS_POS                                                        5
#define MDR_UART_MIS_RTMIS_POS                                                        6
#define MDR_UART_MIS_FEMIS_POS                                                        7
#define MDR_UART_MIS_PEMIS_POS                                                        8
#define MDR_UART_MIS_BEMIS_POS                                                        9
#define MDR_UART_MIS_OEMIS_POS                                                        10

#define MDR_UART_MIS_RIMMIS_MSK                                                       ( 0x01 << MDR_UART_MIS_RIMMIS_POS                                                        )
#define MDR_UART_MIS_CTSMMIS_MSK                                                      ( 0x01 << MDR_UART_MIS_CTSMMIS_POS                                                       )
#define MDR_UART_MIS_DCDMMIS_MSK                                                      ( 0x01 << MDR_UART_MIS_DCDMMIS_POS                                                       )
#define MDR_UART_MIS_DSRMMIS_MSK                                                      ( 0x01 << MDR_UART_MIS_DSRMMIS_POS                                                       )
#define MDR_UART_MIS_RXMIS_MSK                                                        ( 0x01 << MDR_UART_MIS_RXMIS_POS                                                         )
#define MDR_UART_MIS_TXMIS_MSK                                                        ( 0x01 << MDR_UART_MIS_TXMIS_POS                                                         )
#define MDR_UART_MIS_RTMIS_MSK                                                        ( 0x01 << MDR_UART_MIS_RTMIS_POS                                                         )
#define MDR_UART_MIS_FEMIS_MSK                                                        ( 0x01 << MDR_UART_MIS_FEMIS_POS                                                         )
#define MDR_UART_MIS_PEMIS_MSK                                                        ( 0x01 << MDR_UART_MIS_PEMIS_POS                                                         )
#define MDR_UART_MIS_BEMIS_MSK                                                        ( 0x01 << MDR_UART_MIS_BEMIS_POS                                                         )
#define MDR_UART_MIS_OEMIS_MSK                                                        ( 0x01 << MDR_UART_MIS_OEMIS_POS                                                         )

#define MDR_UART_MIS_RIMMIS_NOT_ACTIVE                                                ~( 0x01 << MDR_UART_MIS_RIMMIS_POS                                                       )
#define MDR_UART_MIS_RIMMIS_ACTIVE                                                    ( 0x01 << MDR_UART_MIS_RIMMIS_POS                                                        )

#define MDR_UART_MIS_CTSMMIS_NOT_ACTIVE                                               ~( 0x01 << MDR_UART_MIS_CTSMMIS_POS                                                      )
#define MDR_UART_MIS_CTSMMIS_ACTIVE                                                   ( 0x01 << MDR_UART_MIS_CTSMMIS_POS                                                       )

#define MDR_UART_MIS_DCDMMIS_NOT_ACTIVE                                               ~( 0x01 << MDR_UART_MIS_DCDMMIS_POS                                                      )
#define MDR_UART_MIS_DCDMMIS_ACTIVE                                                   ( 0x01 << MDR_UART_MIS_DCDMMIS_POS                                                       )

#define MDR_UART_MIS_DSRMMIS_NOT_ACTIVE                                               ~( 0x01 << MDR_UART_MIS_DSRMMIS_POS                                                      )
#define MDR_UART_MIS_DSRMMIS_ACTIVE                                                   ( 0x01 << MDR_UART_MIS_DSRMMIS_POS                                                       )

#define MDR_UART_MIS_RXMIS_NOT_ACTIVE                                                 ~( 0x01 << MDR_UART_MIS_RXMIS_POS                                                        )
#define MDR_UART_MIS_RXMIS_ACTIVE                                                     ( 0x01 << MDR_UART_MIS_RXMIS_POS                                                         )

#define MDR_UART_MIS_TXMIS_NOT_ACTIVE                                                 ~( 0x01 << MDR_UART_MIS_TXMIS_POS                                                        )
#define MDR_UART_MIS_TXMIS_ACTIVE                                                     ( 0x01 << MDR_UART_MIS_TXMIS_POS                                                         )

#define MDR_UART_MIS_RTMIS_NOT_ACTIVE                                                 ~( 0x01 << MDR_UART_MIS_RTMIS_POS                                                        )
#define MDR_UART_MIS_RTMIS_ACTIVE                                                     ( 0x01 << MDR_UART_MIS_RTMIS_POS                                                         )

#define MDR_UART_MIS_FEMIS_NOT_ACTIVE                                                 ~( 0x01 << MDR_UART_MIS_FEMIS_POS                                                        )
#define MDR_UART_MIS_FEMIS_ACTIVE                                                     ( 0x01 << MDR_UART_MIS_FEMIS_POS                                                         )

#define MDR_UART_MIS_PEMIS_NOT_ACTIVE                                                 ~( 0x01 << MDR_UART_MIS_PEMIS_POS                                                        )
#define MDR_UART_MIS_PEMIS_ACTIVE                                                     ( 0x01 << MDR_UART_MIS_PEMIS_POS                                                         )

#define MDR_UART_MIS_BEMIS_NOT_ACTIVE                                                 ~( 0x01 << MDR_UART_MIS_BEMIS_POS                                                        )
#define MDR_UART_MIS_BEMIS_ACTIVE                                                     ( 0x01 << MDR_UART_MIS_BEMIS_POS                                                         )

#define MDR_UART_MIS_OEMIS_NOT_ACTIVE                                                 ~( 0x01 << MDR_UART_MIS_OEMIS_POS                                                        )
#define MDR_UART_MIS_OEMIS_ACTIVE                                                     ( 0x01 << MDR_UART_MIS_OEMIS_POS                                                         )

// ICR register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_ICR_RIMIC_POS                                                        0
#define MDR_UART_ICR_CTSMIC_POS                                                       1
#define MDR_UART_ICR_DCDMIC_POS                                                       2
#define MDR_UART_ICR_DSRMIC_POS                                                       3
#define MDR_UART_ICR_RXIC_POS                                                         4
#define MDR_UART_ICR_TXIC_POS                                                         5
#define MDR_UART_ICR_RTIC_POS                                                         6
#define MDR_UART_ICR_FEIC_POS                                                         7
#define MDR_UART_ICR_PEIC_POS                                                         8
#define MDR_UART_ICR_BEIC_POS                                                         9
#define MDR_UART_ICR_OEIC_POS                                                         10

#define MDR_UART_ICR_RIMIC_MSK                                                        ( 0x01 << MDR_UART_ICR_RIMIC_POS                                                         )
#define MDR_UART_ICR_CTSMIC_MSK                                                       ( 0x01 << MDR_UART_ICR_CTSMIC_POS                                                        )
#define MDR_UART_ICR_DCDMIC_MSK                                                       ( 0x01 << MDR_UART_ICR_DCDMIC_POS                                                        )
#define MDR_UART_ICR_DSRMIC_MSK                                                       ( 0x01 << MDR_UART_ICR_DSRMIC_POS                                                        )
#define MDR_UART_ICR_RXIC_MSK                                                         ( 0x01 << MDR_UART_ICR_RXIC_POS                                                          )
#define MDR_UART_ICR_TXIC_MSK                                                         ( 0x01 << MDR_UART_ICR_TXIC_POS                                                          )
#define MDR_UART_ICR_RTIC_MSK                                                         ( 0x01 << MDR_UART_ICR_RTIC_POS                                                          )
#define MDR_UART_ICR_FEIC_MSK                                                         ( 0x01 << MDR_UART_ICR_FEIC_POS                                                          )
#define MDR_UART_ICR_PEIC_MSK                                                         ( 0x01 << MDR_UART_ICR_PEIC_POS                                                          )
#define MDR_UART_ICR_BEIC_MSK                                                         ( 0x01 << MDR_UART_ICR_BEIC_POS                                                          )
#define MDR_UART_ICR_OEIC_MSK                                                         ( 0x01 << MDR_UART_ICR_OEIC_POS                                                          )

#define MDR_UART_ICR_RIMIC_CLEAR                                                      ( 0x01 << MDR_UART_ICR_RIMIC_POS                                                         )
#define MDR_UART_ICR_CTSMIC_CLEAR                                                     ( 0x01 << MDR_UART_ICR_CTSMIC_POS                                                        )
#define MDR_UART_ICR_DCDMIC_CLEAR                                                     ( 0x01 << MDR_UART_ICR_DCDMIC_POS                                                        )
#define MDR_UART_ICR_DSRMIC_CLEAR                                                     ( 0x01 << MDR_UART_ICR_DSRMIC_POS                                                        )
#define MDR_UART_ICR_RXIC_CLEAR                                                       ( 0x01 << MDR_UART_ICR_RXIC_POS                                                          )
#define MDR_UART_ICR_TXIC_CLEAR                                                       ( 0x01 << MDR_UART_ICR_TXIC_POS                                                          )
#define MDR_UART_ICR_RTIC_CLEAR                                                       ( 0x01 << MDR_UART_ICR_RTIC_POS                                                          )
#define MDR_UART_ICR_FEIC_CLEAR                                                       ( 0x01 << MDR_UART_ICR_FEIC_POS                                                          )
#define MDR_UART_ICR_PEIC_CLEAR                                                       ( 0x01 << MDR_UART_ICR_PEIC_POS                                                          )
#define MDR_UART_ICR_BEIC_CLEAR                                                       ( 0x01 << MDR_UART_ICR_BEIC_POS                                                          )
#define MDR_UART_ICR_OEIC_CLEAR                                                       ( 0x01 << MDR_UART_ICR_OEIC_POS                                                          )
// DMACR register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_DMACR_RXDMAE_POS                                                     0
#define MDR_UART_DMACR_TXDMAE_POS                                                     1
#define MDR_UART_DMACR_DMAONERR_POS                                                   2

#define MDR_UART_DMACR_RXDMAE_MSK                                                     ( 0x01 << MDR_UART_DMACR_RXDMAE_POS                                                      )
#define MDR_UART_DMACR_TXDMAE_MSK                                                     ( 0x01 << MDR_UART_DMACR_TXDMAE_POS                                                      )
#define MDR_UART_DMACR_DMAONERR_MSK                                                   ( 0x01 << MDR_UART_DMACR_DMAONERR_POS                                                    )

#define MDR_UART_DMACR_RXDMAE_DISABLE                                                 ~( 0x01 << MDR_UART_DMACR_RXDMAE_POS                                                     )
#define MDR_UART_DMACR_RXDMAE_ENABLE                                                  ( 0x01 << MDR_UART_DMACR_RXDMAE_POS                                                      )

#define MDR_UART_DMACR_TXDMAE_DISABLE                                                 ~( 0x01 << MDR_UART_DMACR_TXDMAE_POS                                                     )
#define MDR_UART_DMACR_TXDMAE_ENABLE                                                  ( 0x01 << MDR_UART_DMACR_TXDMAE_POS                                                      )

#define MDR_UART_DMACR_DMAONERR_CONTINUE                                              ~( 0x01 << MDR_UART_DMACR_DMAONERR_POS                                                   )
#define MDR_UART_DMACR_DMAONERR_BLOCK                                                 ( 0x01 << MDR_UART_DMACR_DMAONERR_POS                                                    )

// DR register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_DR_DATA_ZERO_VAL                                                     0
#define MDR_UART_DR_DATA_VAL( x )                                                     ( x                                                                                      )

#define MDR_UART_DR_FE_NO_ERROR_VAL                                                   0
#define MDR_UART_DR_FE_ERROR_VAL                                                      1

#define MDR_UART_DR_PE_NO_ERROR_VAL                                                   0
#define MDR_UART_DR_PE_ERROR_VAL                                                      1

#define MDR_UART_DR_BE_NO_ERROR_VAL                                                   0
#define MDR_UART_DR_BE_ERROR_VAL                                                      1

#define MDR_UART_DR_OE_NO_ERROR_VAL                                                   0
#define MDR_UART_DR_OE_ERROR_VAL                                                      1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t DATA         : 8;
        uint32_t FE           : 1;
        uint32_t PE           : 1;
        uint32_t BE           : 1;
        uint32_t OE           : 1;
        uint32_t              : 20;
    };

} MDR_UART_DR_TypeDef;
// RSR_ECR register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_RSR_ECR_FE_NO_ERROR_VAL                                              0
#define MDR_UART_RSR_ECR_FE_ERROR_VAL                                                 1

#define MDR_UART_RSR_ECR_PE_NO_ERROR_VAL                                              0
#define MDR_UART_RSR_ECR_PE_ERROR_VAL                                                 1

#define MDR_UART_RSR_ECR_BE_NO_ERROR_VAL                                              0
#define MDR_UART_RSR_ECR_BE_ERROR_VAL                                                 1

#define MDR_UART_RSR_ECR_OE_NO_ERROR_VAL                                              0
#define MDR_UART_RSR_ECR_OE_ERROR_VAL                                                 1

#define MDR_UART_RSR_ECR_CLEAR_ERRORS_VAL                                             1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t FE           : 1;
        uint32_t PE           : 1;
        uint32_t BE           : 1;
        uint32_t OE           : 1;
        uint32_t              : 28;
    };

} MDR_UART_RSR_ECR_TypeDef;
// FR register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_FR_CTS_LOGIC_ZERO_VAL                                                0
#define MDR_UART_FR_CTS_LOGIC_ONE_VAL                                                 1

#define MDR_UART_FR_DSR_LOGIC_ZERO_VAL                                                0
#define MDR_UART_FR_DSR_LOGIC_ONE_VAL                                                 1

#define MDR_UART_FR_DCD_LOGIC_ZERO_VAL                                                0
#define MDR_UART_FR_DCD_LOGIC_ONE_VAL                                                 1

#define MDR_UART_FR_BUSY_IDLE_VAL                                                     0
#define MDR_UART_FR_BUSY_BUSY_VAL                                                     1

#define MDR_UART_FR_RXFE_NOT_EMPTY_VAL                                                0
#define MDR_UART_FR_RXFE_EMPTY_VAL                                                    1

#define MDR_UART_FR_TXFF_NOT_FULL_VAL                                                 0
#define MDR_UART_FR_TXFF_FULL_VAL                                                     1

#define MDR_UART_FR_RXFF_NOT_FULL_VAL                                                 0
#define MDR_UART_FR_RXFF_FULL_VAL                                                     1

#define MDR_UART_FR_TXFE_NOT_EMPTY_VAL                                                0
#define MDR_UART_FR_TXFE_EMPTY_VAL                                                    1

#define MDR_UART_FR_RI_LOGIC_ZERO_VAL                                                 0
#define MDR_UART_FR_RI_LOGIC_ONE_VAL                                                  1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CTS          : 1;
        uint32_t DSR          : 1;
        uint32_t DCD          : 1;
        uint32_t BUSY         : 1;
        uint32_t RXFE         : 1;
        uint32_t TXFF         : 1;
        uint32_t RXFF         : 1;
        uint32_t TXFE         : 1;
        uint32_t RI           : 1;
        uint32_t              : 23;
    };

} MDR_UART_FR_TypeDef;
// ILPR register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_ILPR_ILPDVSR_ZERO_VAL                                                0
#define MDR_UART_ILPR_ILPDVSR_VAL( x )                                                ( x                                                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t ILPDVSR      : 8;
        uint32_t              : 24;
    };

} MDR_UART_ILPR_TypeDef;
// IBRD register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_IBRD_BAUDDIV_INT_ZERO_VAL                                            0
#define MDR_UART_IBRD_BAUDDIV_INT_VAL( x )                                            ( x                                                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t BAUDDIV_INT  : 16;
        uint32_t              : 16;
    };

} MDR_UART_IBRD_TypeDef;
// FBRD register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_FBRD_BAUDDIV_FRAC_ZERO_VAL                                           0
#define MDR_UART_FBRD_BAUDDIV_FRAC_VAL( x )                                           ( x                                                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t BAUDDIV_FRAC : 6;
        uint32_t              : 26;
    };

} MDR_UART_FBRD_TypeDef;
// LCR_H register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_LCR_H_BRK_NORMAL_VAL                                                 0
#define MDR_UART_LCR_H_BRK_BREAK_VAL                                                  1

#define MDR_UART_LCR_H_PEN_DISABLE_VAL                                                0
#define MDR_UART_LCR_H_PEN_ENABLE_VAL                                                 1

#define MDR_UART_LCR_H_EPS_ODD_VAL                                                    0
#define MDR_UART_LCR_H_EPS_EVEN_VAL                                                   1

#define MDR_UART_LCR_H_STP2_ONE_STOP_BIT_VAL                                          0
#define MDR_UART_LCR_H_STP2_TWO_STOP_BITS_VAL                                         1

#define MDR_UART_LCR_H_FEN_DISABLE_VAL                                                0
#define MDR_UART_LCR_H_FEN_ENABLE_VAL                                                 1

#define MDR_UART_LCR_H_WLEN_5_BITS_VAL                                                0
#define MDR_UART_LCR_H_WLEN_6_BITS_VAL                                                1
#define MDR_UART_LCR_H_WLEN_7_BITS_VAL                                                2
#define MDR_UART_LCR_H_WLEN_8_BITS_VAL                                                3

#define MDR_UART_LCR_H_SPS_DISABLE_VAL                                                0
#define MDR_UART_LCR_H_SPS_ENABLE_VAL                                                 1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t BRK          : 1;
        uint32_t PEN          : 1;
        uint32_t EPS          : 1;
        uint32_t STP2         : 1;
        uint32_t FEN          : 1;
        uint32_t WLEN         : 2;
        uint32_t SPS          : 1;
        uint32_t              : 24;
    };

} MDR_UART_LCR_H_TypeDef;
// CR register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_CR_UARTEN_DISABLE_VAL                                                0
#define MDR_UART_CR_UARTEN_ENABLE_VAL                                                 1

#define MDR_UART_CR_SIREN_DISABLE_VAL                                                 0
#define MDR_UART_CR_SIREN_ENABLE_VAL                                                  1

#define MDR_UART_CR_SIRLP_PULSE_3_16_BIT_VAL                                          0
#define MDR_UART_CR_SIRLP_PULSE_3_CLOCKS_VAL                                          1

#define MDR_UART_CR_LBE_DISABLE_VAL                                                   0
#define MDR_UART_CR_LBE_ENABLE_VAL                                                    1

#define MDR_UART_CR_TXE_DISABLE_VAL                                                   0
#define MDR_UART_CR_TXE_ENABLE_VAL                                                    1

#define MDR_UART_CR_RXE_DISABLE_VAL                                                   0
#define MDR_UART_CR_RXE_ENABLE_VAL                                                    1

#define MDR_UART_CR_DTR_NOT_INVERTED_VAL                                              0
#define MDR_UART_CR_DTR_INVERTED_VAL                                                  1

#define MDR_UART_CR_RTS_NOT_INVERTED_VAL                                              0
#define MDR_UART_CR_RTS_INVERTED_VAL                                                  1

#define MDR_UART_CR_OUT1_NOT_INVERTED_VAL                                             0
#define MDR_UART_CR_OUT1_INVERTED_VAL                                                 1

#define MDR_UART_CR_OUT2_NOT_INVERTED_VAL                                             0
#define MDR_UART_CR_OUT2_INVERTED_VAL                                                 1

#define MDR_UART_CR_RTSEN_DISABLE_VAL                                                 0
#define MDR_UART_CR_RTSEN_ENABLE_VAL                                                  1

#define MDR_UART_CR_CTSEN_DISABLE_VAL                                                 0
#define MDR_UART_CR_CTSEN_ENABLE_VAL                                                  1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t UARTEN       : 1;
        uint32_t SIREN        : 1;
        uint32_t SIRLP        : 1;
        uint32_t              : 4;
        uint32_t LBE          : 1;
        uint32_t TXE          : 1;
        uint32_t RXE          : 1;
        uint32_t DTR          : 1;
        uint32_t RTS          : 1;
        uint32_t OUT1         : 1;
        uint32_t OUT2         : 1;
        uint32_t RTSEN        : 1;
        uint32_t CTSEN        : 1;
        uint32_t              : 16;
    };

} MDR_UART_CR_TypeDef;
// IFLS register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_IFLS_TXIFLSEL_1_8_VAL                                                0
#define MDR_UART_IFLS_TXIFLSEL_1_4_VAL                                                1
#define MDR_UART_IFLS_TXIFLSEL_1_2_VAL                                                2
#define MDR_UART_IFLS_TXIFLSEL_3_4_VAL                                                3
#define MDR_UART_IFLS_TXIFLSEL_7_8_VAL                                                4

#define MDR_UART_IFLS_RXIFLSEL_1_8_VAL                                                0
#define MDR_UART_IFLS_RXIFLSEL_1_4_VAL                                                1
#define MDR_UART_IFLS_RXIFLSEL_1_2_VAL                                                2
#define MDR_UART_IFLS_RXIFLSEL_3_4_VAL                                                3
#define MDR_UART_IFLS_RXIFLSEL_7_8_VAL                                                4

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t TXIFLSEL     : 3;
        uint32_t RXIFLSEL     : 3;
        uint32_t              : 26;
    };

} MDR_UART_IFLS_TypeDef;
// IMSC register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_IMSC_RIMIM_DISABLE_VAL                                               0
#define MDR_UART_IMSC_RIMIM_ENABLE_VAL                                                1

#define MDR_UART_IMSC_CTSMIM_DISABLE_VAL                                              0
#define MDR_UART_IMSC_CTSMIM_ENABLE_VAL                                               1

#define MDR_UART_IMSC_DCDMIM_DISABLE_VAL                                              0
#define MDR_UART_IMSC_DCDMIM_ENABLE_VAL                                               1

#define MDR_UART_IMSC_DSRMIM_DISABLE_VAL                                              0
#define MDR_UART_IMSC_DSRMIM_ENABLE_VAL                                               1

#define MDR_UART_IMSC_RXIM_DISABLE_VAL                                                0
#define MDR_UART_IMSC_RXIM_ENABLE_VAL                                                 1

#define MDR_UART_IMSC_TXIM_DISABLE_VAL                                                0
#define MDR_UART_IMSC_TXIM_ENABLE_VAL                                                 1

#define MDR_UART_IMSC_RTIM_DISABLE_VAL                                                0
#define MDR_UART_IMSC_RTIM_ENABLE_VAL                                                 1

#define MDR_UART_IMSC_FEIM_DISABLE_VAL                                                0
#define MDR_UART_IMSC_FEIM_ENABLE_VAL                                                 1

#define MDR_UART_IMSC_PEIM_DISABLE_VAL                                                0
#define MDR_UART_IMSC_PEIM_ENABLE_VAL                                                 1

#define MDR_UART_IMSC_BEIM_DISABLE_VAL                                                0
#define MDR_UART_IMSC_BEIM_ENABLE_VAL                                                 1

#define MDR_UART_IMSC_OEIM_DISABLE_VAL                                                0
#define MDR_UART_IMSC_OEIM_ENABLE_VAL                                                 1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t RIMIM        : 1;
        uint32_t CTSMIM       : 1;
        uint32_t DCDMIM       : 1;
        uint32_t DSRMIM       : 1;
        uint32_t RXIM         : 1;
        uint32_t TXIM         : 1;
        uint32_t RTIM         : 1;
        uint32_t FEIM         : 1;
        uint32_t PEIM         : 1;
        uint32_t BEIM         : 1;
        uint32_t OEIM         : 1;
        uint32_t              : 21;
    };

} MDR_UART_IMSC_TypeDef;
// RIS register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_RIS_RIRMIS_NOT_ACTIVE_VAL                                            0
#define MDR_UART_RIS_RIRMIS_ACTIVE_VAL                                                1

#define MDR_UART_RIS_CTSRMIS_NOT_ACTIVE_VAL                                           0
#define MDR_UART_RIS_CTSRMIS_ACTIVE_VAL                                               1

#define MDR_UART_RIS_DCDRMIS_NOT_ACTIVE_VAL                                           0
#define MDR_UART_RIS_DCDRMIS_ACTIVE_VAL                                               1

#define MDR_UART_RIS_DSRRMIS_NOT_ACTIVE_VAL                                           0
#define MDR_UART_RIS_DSRRMIS_ACTIVE_VAL                                               1

#define MDR_UART_RIS_RXRIS_NOT_ACTIVE_VAL                                             0
#define MDR_UART_RIS_RXRIS_ACTIVE_VAL                                                 1

#define MDR_UART_RIS_TXRIS_NOT_ACTIVE_VAL                                             0
#define MDR_UART_RIS_TXRIS_ACTIVE_VAL                                                 1

#define MDR_UART_RIS_RTRIS_NOT_ACTIVE_VAL                                             0
#define MDR_UART_RIS_RTRIS_ACTIVE_VAL                                                 1

#define MDR_UART_RIS_FERIS_NOT_ACTIVE_VAL                                             0
#define MDR_UART_RIS_FERIS_ACTIVE_VAL                                                 1

#define MDR_UART_RIS_PERIS_NOT_ACTIVE_VAL                                             0
#define MDR_UART_RIS_PERIS_ACTIVE_VAL                                                 1

#define MDR_UART_RIS_BERIS_NOT_ACTIVE_VAL                                             0
#define MDR_UART_RIS_BERIS_ACTIVE_VAL                                                 1

#define MDR_UART_RIS_OERIS_NOT_ACTIVE_VAL                                             0
#define MDR_UART_RIS_OERIS_ACTIVE_VAL                                                 1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t RIRMIS       : 1;
        uint32_t CTSRMIS      : 1;
        uint32_t DCDRMIS      : 1;
        uint32_t DSRRMIS      : 1;
        uint32_t RXRIS        : 1;
        uint32_t TXRIS        : 1;
        uint32_t RTRIS        : 1;
        uint32_t FERIS        : 1;
        uint32_t PERIS        : 1;
        uint32_t BERIS        : 1;
        uint32_t OERIS        : 1;
        uint32_t              : 21;
    };

} MDR_UART_RIS_TypeDef;
// MIS register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_MIS_RIMMIS_NOT_ACTIVE_VAL                                            0
#define MDR_UART_MIS_RIMMIS_ACTIVE_VAL                                                1

#define MDR_UART_MIS_CTSMMIS_NOT_ACTIVE_VAL                                           0
#define MDR_UART_MIS_CTSMMIS_ACTIVE_VAL                                               1

#define MDR_UART_MIS_DCDMMIS_NOT_ACTIVE_VAL                                           0
#define MDR_UART_MIS_DCDMMIS_ACTIVE_VAL                                               1

#define MDR_UART_MIS_DSRMMIS_NOT_ACTIVE_VAL                                           0
#define MDR_UART_MIS_DSRMMIS_ACTIVE_VAL                                               1

#define MDR_UART_MIS_RXMIS_NOT_ACTIVE_VAL                                             0
#define MDR_UART_MIS_RXMIS_ACTIVE_VAL                                                 1

#define MDR_UART_MIS_TXMIS_NOT_ACTIVE_VAL                                             0
#define MDR_UART_MIS_TXMIS_ACTIVE_VAL                                                 1

#define MDR_UART_MIS_RTMIS_NOT_ACTIVE_VAL                                             0
#define MDR_UART_MIS_RTMIS_ACTIVE_VAL                                                 1

#define MDR_UART_MIS_FEMIS_NOT_ACTIVE_VAL                                             0
#define MDR_UART_MIS_FEMIS_ACTIVE_VAL                                                 1

#define MDR_UART_MIS_PEMIS_NOT_ACTIVE_VAL                                             0
#define MDR_UART_MIS_PEMIS_ACTIVE_VAL                                                 1

#define MDR_UART_MIS_BEMIS_NOT_ACTIVE_VAL                                             0
#define MDR_UART_MIS_BEMIS_ACTIVE_VAL                                                 1

#define MDR_UART_MIS_OEMIS_NOT_ACTIVE_VAL                                             0
#define MDR_UART_MIS_OEMIS_ACTIVE_VAL                                                 1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t RIMMIS       : 1;
        uint32_t CTSMMIS      : 1;
        uint32_t DCDMMIS      : 1;
        uint32_t DSRMMIS      : 1;
        uint32_t RXMIS        : 1;
        uint32_t TXMIS        : 1;
        uint32_t RTMIS        : 1;
        uint32_t FEMIS        : 1;
        uint32_t PEMIS        : 1;
        uint32_t BEMIS        : 1;
        uint32_t OEMIS        : 1;
        uint32_t              : 21;
    };

} MDR_UART_MIS_TypeDef;
// ICR register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_ICR_RIMIC_CLEAR_VAL                                                  1
#define MDR_UART_ICR_CTSMIC_CLEAR_VAL                                                 1
#define MDR_UART_ICR_DCDMIC_CLEAR_VAL                                                 1
#define MDR_UART_ICR_DSRMIC_CLEAR_VAL                                                 1
#define MDR_UART_ICR_RXIC_CLEAR_VAL                                                   1
#define MDR_UART_ICR_TXIC_CLEAR_VAL                                                   1
#define MDR_UART_ICR_RTIC_CLEAR_VAL                                                   1
#define MDR_UART_ICR_FEIC_CLEAR_VAL                                                   1
#define MDR_UART_ICR_PEIC_CLEAR_VAL                                                   1
#define MDR_UART_ICR_BEIC_CLEAR_VAL                                                   1
#define MDR_UART_ICR_OEIC_CLEAR_VAL                                                   1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t RIMIC        : 1;
        uint32_t CTSMIC       : 1;
        uint32_t DCDMIC       : 1;
        uint32_t DSRMIC       : 1;
        uint32_t RXIC         : 1;
        uint32_t TXIC         : 1;
        uint32_t RTIC         : 1;
        uint32_t FEIC         : 1;
        uint32_t PEIC         : 1;
        uint32_t BEIC         : 1;
        uint32_t OEIC         : 1;
        uint32_t              : 21;
    };

} MDR_UART_ICR_TypeDef;
// DMACR register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART_DMACR_RXDMAE_DISABLE_VAL                                             0
#define MDR_UART_DMACR_RXDMAE_ENABLE_VAL                                              1

#define MDR_UART_DMACR_TXDMAE_DISABLE_VAL                                             0
#define MDR_UART_DMACR_TXDMAE_ENABLE_VAL                                              1

#define MDR_UART_DMACR_DMAONERR_CONTINUE_VAL                                          0
#define MDR_UART_DMACR_DMAONERR_BLOCK_VAL                                             1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t RXDMAE       : 1;
        uint32_t TXDMAE       : 1;
        uint32_t DMAONERR     : 1;
        uint32_t              : 29;
    };

} MDR_UART_DMACR_TypeDef;
// UART structure Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef struct
{
    __IO MDR_UART_DR_TypeDef      DR;
    __IO MDR_UART_RSR_ECR_TypeDef RSR_ECR;
    __I  uint32_t                 RESERVED0[4];
    __I  MDR_UART_FR_TypeDef      FR;
    __I  uint32_t                 RESERVED1;
    __IO MDR_UART_ILPR_TypeDef    ILPR;
    __IO MDR_UART_IBRD_TypeDef    IBRD;
    __IO MDR_UART_FBRD_TypeDef    FBRD;
    __IO MDR_UART_LCR_H_TypeDef   LCR_H;
    __IO MDR_UART_CR_TypeDef      CR;
    __IO MDR_UART_IFLS_TypeDef    IFLS;
    __IO MDR_UART_IMSC_TypeDef    IMSC;
    __I  MDR_UART_RIS_TypeDef     RIS;
    __I  MDR_UART_MIS_TypeDef     MIS;
    __O  MDR_UART_ICR_TypeDef     ICR;
    __IO MDR_UART_DMACR_TypeDef   DMACR;

} MDR_UART_TypeDefUnion;

// UART addresses
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_UART1_UNION_BASE                                                         ( 0x40030000                                                )
#define MDR_UART2_UNION_BASE                                                         ( 0x40038000                                                )

#define MDR_UART1_DR_ADDRESS                                                         ( MDR_UART1_UNION_BASE + 0x000                              )
#define MDR_UART1_RSR_ECR_ADDRESS                                                    ( MDR_UART1_UNION_BASE + 0x004                              )
#define MDR_UART1_FR_ADDRESS                                                         ( MDR_UART1_UNION_BASE + 0x018                              )
#define MDR_UART1_ILPR_ADDRESS                                                       ( MDR_UART1_UNION_BASE + 0x020                              )
#define MDR_UART1_IBRD_ADDRESS                                                       ( MDR_UART1_UNION_BASE + 0x024                              )
#define MDR_UART1_FBRD_ADDRESS                                                       ( MDR_UART1_UNION_BASE + 0x028                              )
#define MDR_UART1_LCR_H_ADDRESS                                                      ( MDR_UART1_UNION_BASE + 0x02C                              )
#define MDR_UART1_CR_ADDRESS                                                         ( MDR_UART1_UNION_BASE + 0x030                              )
#define MDR_UART1_IFLS_ADDRESS                                                       ( MDR_UART1_UNION_BASE + 0x034                              )
#define MDR_UART1_IMSC_ADDRESS                                                       ( MDR_UART1_UNION_BASE + 0x038                              )
#define MDR_UART1_RIS_ADDRESS                                                        ( MDR_UART1_UNION_BASE + 0x03C                              )
#define MDR_UART1_MIS_ADDRESS                                                        ( MDR_UART1_UNION_BASE + 0x040                              )
#define MDR_UART1_ICR_ADDRESS                                                        ( MDR_UART1_UNION_BASE + 0x044                              )
#define MDR_UART1_DMACR_ADDRESS                                                      ( MDR_UART1_UNION_BASE + 0x048                              )

#define MDR_UART2_DR_ADDRESS                                                         ( MDR_UART2_UNION_BASE + 0x000                              )
#define MDR_UART2_RSR_ECR_ADDRESS                                                    ( MDR_UART2_UNION_BASE + 0x004                              )
#define MDR_UART2_FR_ADDRESS                                                         ( MDR_UART2_UNION_BASE + 0x018                              )
#define MDR_UART2_ILPR_ADDRESS                                                       ( MDR_UART2_UNION_BASE + 0x020                              )
#define MDR_UART2_IBRD_ADDRESS                                                       ( MDR_UART2_UNION_BASE + 0x024                              )
#define MDR_UART2_FBRD_ADDRESS                                                       ( MDR_UART2_UNION_BASE + 0x028                              )
#define MDR_UART2_LCR_H_ADDRESS                                                      ( MDR_UART2_UNION_BASE + 0x02C                              )
#define MDR_UART2_CR_ADDRESS                                                         ( MDR_UART2_UNION_BASE + 0x030                              )
#define MDR_UART2_IFLS_ADDRESS                                                       ( MDR_UART2_UNION_BASE + 0x034                              )
#define MDR_UART2_IMSC_ADDRESS                                                       ( MDR_UART2_UNION_BASE + 0x038                              )
#define MDR_UART2_RIS_ADDRESS                                                        ( MDR_UART2_UNION_BASE + 0x03C                              )
#define MDR_UART2_MIS_ADDRESS                                                        ( MDR_UART2_UNION_BASE + 0x040                              )
#define MDR_UART2_ICR_ADDRESS                                                        ( MDR_UART2_UNION_BASE + 0x044                              )
#define MDR_UART2_DMACR_ADDRESS                                                      ( MDR_UART2_UNION_BASE + 0x048                              )

#define MDR_UART1_UNION                                                              ( ( MDR_UART_TypeDefUnion * ) MDR_UART1_UNION_BASE           )
#define MDR_UART2_UNION                                                              ( ( MDR_UART_TypeDefUnion * ) MDR_UART2_UNION_BASE           )

// UART Union functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void MDR_UART_Union_Enable( MDR_UART_TypeDefUnion *uart );
void MDR_UART_Union_Disable( MDR_UART_TypeDefUnion *uart );

void MDR_UART_Union_TxEnable( MDR_UART_TypeDefUnion *uart );
void MDR_UART_Union_TxDisable( MDR_UART_TypeDefUnion *uart );
void MDR_UART_Union_RxEnable( MDR_UART_TypeDefUnion *uart );
void MDR_UART_Union_RxDisable( MDR_UART_TypeDefUnion *uart );

void MDR_UART_Union_SetBaudDivInt( MDR_UART_TypeDefUnion *uart, uint16_t baud_div_int );
void MDR_UART_Union_SetBaudDivFrac( MDR_UART_TypeDefUnion *uart, uint8_t baud_div_frac );

void MDR_UART_Union_SetWordLength5( MDR_UART_TypeDefUnion *uart );
void MDR_UART_Union_SetWordLength6( MDR_UART_TypeDefUnion *uart );
void MDR_UART_Union_SetWordLength7( MDR_UART_TypeDefUnion *uart );
void MDR_UART_Union_SetWordLength8( MDR_UART_TypeDefUnion *uart );

void MDR_UART_Union_SetOneStopBit( MDR_UART_TypeDefUnion *uart );
void MDR_UART_Union_SetTwoStopBits( MDR_UART_TypeDefUnion *uart );

void MDR_UART_Union_ParityDisable( MDR_UART_TypeDefUnion *uart );
void MDR_UART_Union_ParityEnable( MDR_UART_TypeDefUnion *uart );
void MDR_UART_Union_SetParityOdd( MDR_UART_TypeDefUnion *uart );
void MDR_UART_Union_SetParityEven( MDR_UART_TypeDefUnion *uart );

void MDR_UART_Union_FifoEnable( MDR_UART_TypeDefUnion *uart );
void MDR_UART_Union_FifoDisable( MDR_UART_TypeDefUnion *uart );

void MDR_UART_Union_WriteByte( MDR_UART_TypeDefUnion *uart, uint8_t data );
void MDR_UART_Union_WriteString( MDR_UART_TypeDefUnion *uart, const char *text );
void MDR_UART_Union_WriteBuffer( MDR_UART_TypeDefUnion *uart, const uint8_t *buffer, uint32_t length );

uint8_t MDR_UART_Union_ReadByte( MDR_UART_TypeDefUnion *uart );
uint8_t MDR_UART_Union_IsRxDataAvailable( MDR_UART_TypeDefUnion *uart );
void MDR_UART_Union_ClearErrors( MDR_UART_TypeDefUnion *uart );

void MDR_UART_Union_WriteUInt16( MDR_UART_TypeDefUnion *uart, uint16_t value );

// UART Milandr functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void MDR_UART_Enable( MDR_UART_TypeDef *uart );
void MDR_UART_Disable( MDR_UART_TypeDef *uart );

void MDR_UART_TxEnable( MDR_UART_TypeDef *uart );
void MDR_UART_TxDisable( MDR_UART_TypeDef *uart );
void MDR_UART_RxEnable( MDR_UART_TypeDef *uart );
void MDR_UART_RxDisable( MDR_UART_TypeDef *uart );

void MDR_UART_SetBaudDivInt( MDR_UART_TypeDef *uart, uint16_t baud_div_int );
void MDR_UART_SetBaudDivFrac( MDR_UART_TypeDef *uart, uint8_t baud_div_frac );

void MDR_UART_SetWordLength5( MDR_UART_TypeDef *uart );
void MDR_UART_SetWordLength6( MDR_UART_TypeDef *uart );
void MDR_UART_SetWordLength7( MDR_UART_TypeDef *uart );
void MDR_UART_SetWordLength8( MDR_UART_TypeDef *uart );

void MDR_UART_SetOneStopBit( MDR_UART_TypeDef *uart );
void MDR_UART_SetTwoStopBits( MDR_UART_TypeDef *uart );

void MDR_UART_ParityDisable( MDR_UART_TypeDef *uart );
void MDR_UART_ParityEnable( MDR_UART_TypeDef *uart );
void MDR_UART_SetParityOdd( MDR_UART_TypeDef *uart );
void MDR_UART_SetParityEven( MDR_UART_TypeDef *uart );

void MDR_UART_FifoEnable( MDR_UART_TypeDef *uart );
void MDR_UART_FifoDisable( MDR_UART_TypeDef *uart );

void MDR_UART_WriteByte( MDR_UART_TypeDef *uart, uint8_t data );
void MDR_UART_WriteString( MDR_UART_TypeDef *uart, const char *text );
void MDR_UART_WriteBuffer( MDR_UART_TypeDef *uart, const uint8_t *buffer, uint32_t length );

uint8_t MDR_UART_ReadByte( MDR_UART_TypeDef *uart );
uint8_t MDR_UART_IsRxDataAvailable( MDR_UART_TypeDef *uart );
void MDR_UART_ClearErrors( MDR_UART_TypeDef *uart );

void MDR_UART_WriteUInt16( MDR_UART_TypeDef *uart, uint16_t value );

#endif