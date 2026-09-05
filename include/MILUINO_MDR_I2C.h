#ifndef __MILUINO_MDR_I2C_H
#define __MILUINO_MDR_I2C_H

#include "MDR32F9Q2I.h"
#include <stdint.h>
// PRL register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_I2C_PRL_PR_POS                                                             0

#define MDR_I2C_PRL_PR_MSK                                                             ( 0xFF          << MDR_I2C_PRL_PR_POS                                                    )

#define MDR_I2C_PRL_PR_ZERO                                                           ~( 0xFF          << MDR_I2C_PRL_PR_POS                                                    )
#define MDR_I2C_PRL_PR_VALUE( x )                                                      ( ( x )         << MDR_I2C_PRL_PR_POS                                                    )

#define I2C_PRL_PR_POS                                                                  0
#define I2C_PRL_PR_MSK                                                                 ( 0xFF          << I2C_PRL_PR_POS                                                        )

#define I2C_PRL_PR_ZERO                                                               ~( 0xFF          << I2C_PRL_PR_POS                                                        )
#define I2C_PRL_PR_VALUE( x )                                                          ( ( x )         << I2C_PRL_PR_POS                                                        )
// PRH register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_I2C_PRH_PR_POS                                                             0

#define MDR_I2C_PRH_PR_MSK                                                             ( 0xFF          << MDR_I2C_PRH_PR_POS                                                    )

#define MDR_I2C_PRH_PR_ZERO                                                           ~( 0xFF          << MDR_I2C_PRH_PR_POS                                                    )
#define MDR_I2C_PRH_PR_VALUE( x )                                                      ( ( x )         << MDR_I2C_PRH_PR_POS                                                    )

#define I2C_PRH_PR_POS                                                                  0
#define I2C_PRH_PR_MSK                                                                 ( 0xFF          << I2C_PRH_PR_POS                                                        )

#define I2C_PRH_PR_ZERO                                                               ~( 0xFF          << I2C_PRH_PR_POS                                                        )
#define I2C_PRH_PR_VALUE( x )                                                          ( ( x )         << I2C_PRH_PR_POS                                                        )
// CTR register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_I2C_CTR_EN_INT_POS                                                         6
#define MDR_I2C_CTR_EN_I2C_POS                                                         7

#define MDR_I2C_CTR_EN_INT_MSK                                                         ( 0x01          << MDR_I2C_CTR_EN_INT_POS                                                )
#define MDR_I2C_CTR_EN_I2C_MSK                                                         ( 0x01          << MDR_I2C_CTR_EN_I2C_POS                                                )

#define MDR_I2C_CTR_EN_INT_DISABLE                                                    ~( 0x01          << MDR_I2C_CTR_EN_INT_POS                                                )
#define MDR_I2C_CTR_EN_INT_ENABLE                                                      ( 0x01          << MDR_I2C_CTR_EN_INT_POS                                                )

#define MDR_I2C_CTR_EN_I2C_DISABLE                                                    ~( 0x01          << MDR_I2C_CTR_EN_I2C_POS                                                )
#define MDR_I2C_CTR_EN_I2C_ENABLE                                                      ( 0x01          << MDR_I2C_CTR_EN_I2C_POS                                                )

#define I2C_CTR_BIT_POS( x )                                                           ( x                                                                                      )
#define I2C_CTR_BIT_MSK( x )                                                           ( 0x01          << I2C_CTR_BIT_POS( x )                                                  )

#define I2C_CTR_BIT_DISABLE( x )                                                      ~( 0x01          << I2C_CTR_BIT_POS( x )                                                  )
#define I2C_CTR_BIT_ENABLE( x )                                                        ( 0x01          << I2C_CTR_BIT_POS( x )                                                  )
// RXD register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_I2C_RXD_RXD_POS                                                            0

#define MDR_I2C_RXD_RXD_MSK                                                            ( 0xFF          << MDR_I2C_RXD_RXD_POS                                                   )

#define MDR_I2C_RXD_RXD_ZERO                                                          ~( 0xFF          << MDR_I2C_RXD_RXD_POS                                                   )
#define MDR_I2C_RXD_RXD_VALUE( x )                                                     ( ( x )         << MDR_I2C_RXD_RXD_POS                                                   )

#define I2C_RXD_RXD_POS                                                                 0
#define I2C_RXD_RXD_MSK                                                                ( 0xFF          << I2C_RXD_RXD_POS                                                       )

#define I2C_RXD_RXD_ZERO                                                              ~( 0xFF          << I2C_RXD_RXD_POS                                                       )
#define I2C_RXD_RXD_VALUE( x )                                                         ( ( x )         << I2C_RXD_RXD_POS                                                       )
// STA register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_I2C_STA_INT_POS                                                            0
#define MDR_I2C_STA_TR_PROG_POS                                                        1
#define MDR_I2C_STA_LOST_ARB_POS                                                       5
#define MDR_I2C_STA_BUSY_POS                                                           6
#define MDR_I2C_STA_RX_ACK_POS                                                         7

#define MDR_I2C_STA_INT_MSK                                                            ( 0x01          << MDR_I2C_STA_INT_POS                                                   )
#define MDR_I2C_STA_TR_PROG_MSK                                                        ( 0x01          << MDR_I2C_STA_TR_PROG_POS                                               )
#define MDR_I2C_STA_LOST_ARB_MSK                                                       ( 0x01          << MDR_I2C_STA_LOST_ARB_POS                                              )
#define MDR_I2C_STA_BUSY_MSK                                                           ( 0x01          << MDR_I2C_STA_BUSY_POS                                                  )
#define MDR_I2C_STA_RX_ACK_MSK                                                         ( 0x01          << MDR_I2C_STA_RX_ACK_POS                                                )

#define MDR_I2C_STA_INT_NOT_SET                                                       ~( 0x01          << MDR_I2C_STA_INT_POS                                                   )
#define MDR_I2C_STA_INT_SET                                                            ( 0x01          << MDR_I2C_STA_INT_POS                                                   )

#define MDR_I2C_STA_TR_PROG_COMPLETED                                                 ~( 0x01          << MDR_I2C_STA_TR_PROG_POS                                               )
#define MDR_I2C_STA_TR_PROG_IN_PROGRESS                                                ( 0x01          << MDR_I2C_STA_TR_PROG_POS                                               )

#define MDR_I2C_STA_LOST_ARB_NOT_LOST                                                 ~( 0x01          << MDR_I2C_STA_LOST_ARB_POS                                              )
#define MDR_I2C_STA_LOST_ARB_LOST                                                      ( 0x01          << MDR_I2C_STA_LOST_ARB_POS                                              )

#define MDR_I2C_STA_BUSY_AFTER_STOP                                                   ~( 0x01          << MDR_I2C_STA_BUSY_POS                                                  )
#define MDR_I2C_STA_BUSY_AFTER_START                                                   ( 0x01          << MDR_I2C_STA_BUSY_POS                                                  )

#define MDR_I2C_STA_RX_ACK_ACK_RECEIVED                                               ~( 0x01          << MDR_I2C_STA_RX_ACK_POS                                                )
#define MDR_I2C_STA_RX_ACK_NACK_RECEIVED                                               ( 0x01          << MDR_I2C_STA_RX_ACK_POS                                                )

#define I2C_STA_FLAG_POS( x )                                                          ( x                                                                                      )
#define I2C_STA_FLAG_MSK( x )                                                          ( 0x01          << I2C_STA_FLAG_POS( x )                                                 )

#define I2C_STA_FLAG_CLEAR( x )                                                       ~( 0x01          << I2C_STA_FLAG_POS( x )                                                 )
#define I2C_STA_FLAG_SET( x )                                                          ( 0x01          << I2C_STA_FLAG_POS( x )                                                 )
// TXD register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_I2C_TXD_TXD_POS                                                            0

#define MDR_I2C_TXD_TXD_MSK                                                            ( 0xFF          << MDR_I2C_TXD_TXD_POS                                                   )

#define MDR_I2C_TXD_TXD_ZERO                                                          ~( 0xFF          << MDR_I2C_TXD_TXD_POS                                                   )
#define MDR_I2C_TXD_TXD_VALUE( x )                                                     ( ( x )         << MDR_I2C_TXD_TXD_POS                                                   )

#define I2C_TXD_TXD_POS                                                                 0
#define I2C_TXD_TXD_MSK                                                                ( 0xFF          << I2C_TXD_TXD_POS                                                       )

#define I2C_TXD_TXD_ZERO                                                              ~( 0xFF          << I2C_TXD_TXD_POS                                                       )
#define I2C_TXD_TXD_VALUE( x )                                                         ( ( x )         << I2C_TXD_TXD_POS                                                       )
// CMD register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_I2C_CMD_CLR_INT_POS                                                        0
#define MDR_I2C_CMD_ACK_POS                                                            3
#define MDR_I2C_CMD_WR_POS                                                             4
#define MDR_I2C_CMD_RD_POS                                                             5
#define MDR_I2C_CMD_STOP_POS                                                           6
#define MDR_I2C_CMD_START_POS                                                          7

#define MDR_I2C_CMD_CLR_INT_MSK                                                        ( 0x01          << MDR_I2C_CMD_CLR_INT_POS                                               )
#define MDR_I2C_CMD_ACK_MSK                                                            ( 0x01          << MDR_I2C_CMD_ACK_POS                                                   )
#define MDR_I2C_CMD_WR_MSK                                                             ( 0x01          << MDR_I2C_CMD_WR_POS                                                    )
#define MDR_I2C_CMD_RD_MSK                                                             ( 0x01          << MDR_I2C_CMD_RD_POS                                                    )
#define MDR_I2C_CMD_STOP_MSK                                                           ( 0x01          << MDR_I2C_CMD_STOP_POS                                                  )
#define MDR_I2C_CMD_START_MSK                                                          ( 0x01          << MDR_I2C_CMD_START_POS                                                 )

#define MDR_I2C_CMD_CLR_INT_NO_ACTION                                                 ~( 0x01          << MDR_I2C_CMD_CLR_INT_POS                                               )
#define MDR_I2C_CMD_CLR_INT_CLEAR                                                      ( 0x01          << MDR_I2C_CMD_CLR_INT_POS                                               )

#define MDR_I2C_CMD_ACK_SEND_ACK                                                      ~( 0x01          << MDR_I2C_CMD_ACK_POS                                                   )
#define MDR_I2C_CMD_ACK_SEND_NACK                                                      ( 0x01          << MDR_I2C_CMD_ACK_POS                                                   )

#define MDR_I2C_CMD_WR_NO_ACTION                                                      ~( 0x01          << MDR_I2C_CMD_WR_POS                                                    )
#define MDR_I2C_CMD_WR_START                                                           ( 0x01          << MDR_I2C_CMD_WR_POS                                                    )

#define MDR_I2C_CMD_RD_NO_ACTION                                                      ~( 0x01          << MDR_I2C_CMD_RD_POS                                                    )
#define MDR_I2C_CMD_RD_START                                                           ( 0x01          << MDR_I2C_CMD_RD_POS                                                    )

#define MDR_I2C_CMD_STOP_NO_ACTION                                                    ~( 0x01          << MDR_I2C_CMD_STOP_POS                                                  )
#define MDR_I2C_CMD_STOP_SEND                                                          ( 0x01          << MDR_I2C_CMD_STOP_POS                                                  )

#define MDR_I2C_CMD_START_NO_ACTION                                                   ~( 0x01          << MDR_I2C_CMD_START_POS                                                 )
#define MDR_I2C_CMD_START_SEND                                                         ( 0x01          << MDR_I2C_CMD_START_POS                                                 )

#define I2C_CMD_BIT_POS( x )                                                           ( x                                                                                      )
#define I2C_CMD_BIT_MSK( x )                                                           ( 0x01          << I2C_CMD_BIT_POS( x )                                                  )

#define I2C_CMD_BIT_CLEAR( x )                                                        ~( 0x01          << I2C_CMD_BIT_POS( x )                                                  )
#define I2C_CMD_BIT_SET( x )                                                           ( 0x01          << I2C_CMD_BIT_POS( x )                                                  )
// PRL register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_I2C_PRL_PR_ZERO_VAL                                                        0
#define MDR_I2C_PRL_PR_VAL( x )                                                        ( x                                                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t PR : 8;
        uint32_t    : 24;
    };

} MDR_I2C_PRL_TypeDef;
// PRH register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_I2C_PRH_PR_ZERO_VAL                                                        0
#define MDR_I2C_PRH_PR_VAL( x )                                                        ( x                                                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t PR : 8;
        uint32_t    : 24;
    };

} MDR_I2C_PRH_TypeDef;
// CTR register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_I2C_CTR_EN_INT_DISABLE_VAL                                                 0
#define MDR_I2C_CTR_EN_INT_ENABLE_VAL                                                  1

#define MDR_I2C_CTR_EN_I2C_DISABLE_VAL                                                 0
#define MDR_I2C_CTR_EN_I2C_ENABLE_VAL                                                  1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t        : 6;
        uint32_t EN_INT : 1;
        uint32_t EN_I2C : 1;
        uint32_t        : 24;
    };

} MDR_I2C_CTR_TypeDef;
// RXD register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_I2C_RXD_RXD_ZERO_VAL                                                       0
#define MDR_I2C_RXD_RXD_VAL( x )                                                       ( x                                                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t RXD : 8;
        uint32_t     : 24;
    };

} MDR_I2C_RXD_TypeDef;
// STA register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_I2C_STA_INT_NOT_SET_VAL                                                    0
#define MDR_I2C_STA_INT_SET_VAL                                                        1

#define MDR_I2C_STA_TR_PROG_COMPLETED_VAL                                              0
#define MDR_I2C_STA_TR_PROG_IN_PROGRESS_VAL                                            1

#define MDR_I2C_STA_LOST_ARB_NOT_LOST_VAL                                              0
#define MDR_I2C_STA_LOST_ARB_LOST_VAL                                                  1

#define MDR_I2C_STA_BUSY_AFTER_STOP_VAL                                                0
#define MDR_I2C_STA_BUSY_AFTER_START_VAL                                               1

#define MDR_I2C_STA_RX_ACK_ACK_RECEIVED_VAL                                            0
#define MDR_I2C_STA_RX_ACK_NACK_RECEIVED_VAL                                           1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t INT      : 1;
        uint32_t TR_PROG  : 1;
        uint32_t          : 3;
        uint32_t LOST_ARB : 1;
        uint32_t BUSY     : 1;
        uint32_t RX_ACK   : 1;
        uint32_t          : 24;
    };

} MDR_I2C_STA_TypeDef;
// TXD register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_I2C_TXD_TXD_ZERO_VAL                                                       0
#define MDR_I2C_TXD_TXD_VAL( x )                                                       ( x                                                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t TXD : 8;
        uint32_t     : 24;
    };

} MDR_I2C_TXD_TypeDef;
// CMD register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_I2C_CMD_CLR_INT_NO_ACTION_VAL                                              0
#define MDR_I2C_CMD_CLR_INT_CLEAR_VAL                                                  1

#define MDR_I2C_CMD_ACK_SEND_ACK_VAL                                                   0
#define MDR_I2C_CMD_ACK_SEND_NACK_VAL                                                  1

#define MDR_I2C_CMD_WR_NO_ACTION_VAL                                                   0
#define MDR_I2C_CMD_WR_START_VAL                                                       1

#define MDR_I2C_CMD_RD_NO_ACTION_VAL                                                   0
#define MDR_I2C_CMD_RD_START_VAL                                                       1

#define MDR_I2C_CMD_STOP_NO_ACTION_VAL                                                 0
#define MDR_I2C_CMD_STOP_SEND_VAL                                                      1

#define MDR_I2C_CMD_START_NO_ACTION_VAL                                                0
#define MDR_I2C_CMD_START_SEND_VAL                                                     1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CLR_INT : 1;
        uint32_t         : 2;
        uint32_t ACK     : 1;
        uint32_t WR      : 1;
        uint32_t RD      : 1;
        uint32_t STOP    : 1;
        uint32_t START   : 1;
        uint32_t         : 24;
    };

} MDR_I2C_CMD_TypeDef;
// I2C structure Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef struct
{
    __IO MDR_I2C_PRL_TypeDef PRL;
    __IO MDR_I2C_PRH_TypeDef PRH;
    __IO MDR_I2C_CTR_TypeDef CTR;
    __I  MDR_I2C_RXD_TypeDef RXD;
    __I  MDR_I2C_STA_TypeDef STA;
    __IO MDR_I2C_TXD_TypeDef TXD;
    __IO MDR_I2C_CMD_TypeDef CMD;

} MDR_I2C_TypeDefUnion;

// I2C addresses
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_I2C_UNION_BASE                                                           ( 0x40050000                                                )

#define MDR_I2C_PRL_ADDRESS                                                          ( MDR_I2C_UNION_BASE + 0x00                                 )
#define MDR_I2C_PRH_ADDRESS                                                          ( MDR_I2C_UNION_BASE + 0x04                                 )
#define MDR_I2C_CTR_ADDRESS                                                          ( MDR_I2C_UNION_BASE + 0x08                                 )
#define MDR_I2C_RXD_ADDRESS                                                          ( MDR_I2C_UNION_BASE + 0x0C                                 )
#define MDR_I2C_STA_ADDRESS                                                          ( MDR_I2C_UNION_BASE + 0x10                                 )
#define MDR_I2C_TXD_ADDRESS                                                          ( MDR_I2C_UNION_BASE + 0x14                                 )
#define MDR_I2C_CMD_ADDRESS                                                          ( MDR_I2C_UNION_BASE + 0x18                                 )

#define MDR_I2C_UNION                                                               ( ( MDR_I2C_TypeDefUnion * ) MDR_I2C_UNION_BASE              )

// I2C Union functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void MDR_I2C_Union_Enable( void );
void MDR_I2C_Union_Disable( void );

void MDR_I2C_Union_InterruptEnable( void );
void MDR_I2C_Union_InterruptDisable( void );

void MDR_I2C_Union_SetPrescaler( uint16_t prescaler );

void MDR_I2C_Union_StartWrite( uint8_t first_byte );
void MDR_I2C_Union_WriteByte( uint8_t data );
uint8_t MDR_I2C_Union_ReadByte( uint32_t ack );
void MDR_I2C_Union_SendStop( void );

void MDR_I2C_Union_ClearInterrupt( void );
void MDR_I2C_Union_WaitTransferComplete( void );

uint8_t MDR_I2C_Union_IsTransferInProgress( void );
uint8_t MDR_I2C_Union_IsBusBusy( void );
uint8_t MDR_I2C_Union_IsArbitrationLost( void );
uint8_t MDR_I2C_Union_IsAckReceived( void );
uint8_t MDR_I2C_Union_IsInterruptSet( void );

// I2C Milandr functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void MDR_I2C_Enable( void );
void MDR_I2C_Disable( void );

void MDR_I2C_InterruptEnable( void );
void MDR_I2C_InterruptDisable( void );

void MDR_I2C_SetPrescaler( uint16_t prescaler );

void MDR_I2C_StartWrite( uint8_t first_byte );
void MDR_I2C_WriteByte( uint8_t data );
uint8_t MDR_I2C_ReadByte( uint32_t ack );
void MDR_I2C_SendStop( void );

void MDR_I2C_ClearInterrupt( void );
void MDR_I2C_WaitTransferComplete( void );

uint8_t MDR_I2C_IsTransferInProgress( void );
uint8_t MDR_I2C_IsBusBusy( void );
uint8_t MDR_I2C_IsArbitrationLost( void );
uint8_t MDR_I2C_IsAckReceived( void );
uint8_t MDR_I2C_IsInterruptSet( void );

#endif