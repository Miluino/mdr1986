#include "MILUINO_MDR_I2C.h"

#include <stdint.h>

// I2C Union functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_I2C_Union_Enable( void )
{
    MDR_I2C_UNION->CTR.Register |= MDR_I2C_CTR_EN_I2C_ENABLE;
}

void MDR_I2C_Union_Disable( void )
{
    MDR_I2C_UNION->CTR.Register &= MDR_I2C_CTR_EN_I2C_DISABLE;
}

void MDR_I2C_Union_InterruptEnable( void )
{
    MDR_I2C_UNION->CTR.Register |= MDR_I2C_CTR_EN_INT_ENABLE;
}

void MDR_I2C_Union_InterruptDisable( void )
{
    MDR_I2C_UNION->CTR.Register &= MDR_I2C_CTR_EN_INT_DISABLE;
}

void MDR_I2C_Union_SetPrescaler( uint16_t prescaler )
{
    MDR_I2C_UNION->PRL.Register &= ~MDR_I2C_PRL_PR_MSK;
    MDR_I2C_UNION->PRL.Register |= ( MDR_I2C_PRL_PR_VALUE( prescaler ) & MDR_I2C_PRL_PR_MSK );

    MDR_I2C_UNION->PRH.Register &= ~MDR_I2C_PRH_PR_MSK;
    MDR_I2C_UNION->PRH.Register |= ( MDR_I2C_PRH_PR_VALUE( prescaler >> 8 ) & MDR_I2C_PRH_PR_MSK );
}

void MDR_I2C_Union_StartWrite( uint8_t first_byte )
{
    MDR_I2C_UNION->TXD.Register = ( MDR_I2C_TXD_TXD_VALUE( first_byte ) & MDR_I2C_TXD_TXD_MSK );
    MDR_I2C_UNION->CMD.Register = MDR_I2C_CMD_START_SEND | MDR_I2C_CMD_WR_START;
}

void MDR_I2C_Union_WriteByte( uint8_t data )
{
    MDR_I2C_UNION->TXD.Register = ( MDR_I2C_TXD_TXD_VALUE( data ) & MDR_I2C_TXD_TXD_MSK );
    MDR_I2C_UNION->CMD.Register = MDR_I2C_CMD_WR_START;
}

uint8_t MDR_I2C_Union_ReadByte( uint32_t ack )
{
    MDR_I2C_UNION->CMD.Register = MDR_I2C_CMD_RD_START | ( ack & MDR_I2C_CMD_ACK_MSK );
    MDR_I2C_Union_WaitTransferComplete();

    return ( uint8_t )( MDR_I2C_UNION->RXD.Register & MDR_I2C_RXD_RXD_MSK );
}

void MDR_I2C_Union_SendStop( void )
{
    MDR_I2C_UNION->CMD.Register = MDR_I2C_CMD_STOP_SEND;
}

void MDR_I2C_Union_ClearInterrupt( void )
{
    MDR_I2C_UNION->CMD.Register = MDR_I2C_CMD_CLR_INT_CLEAR;
}

void MDR_I2C_Union_WaitTransferComplete( void )
{
    while ( ( MDR_I2C_UNION->STA.Register & MDR_I2C_STA_TR_PROG_MSK ) != 0 )
    {
    }
}

uint8_t MDR_I2C_Union_IsTransferInProgress( void )
{
    return ( ( MDR_I2C_UNION->STA.Register & MDR_I2C_STA_TR_PROG_MSK ) != 0 );
}

uint8_t MDR_I2C_Union_IsBusBusy( void )
{
    return ( ( MDR_I2C_UNION->STA.Register & MDR_I2C_STA_BUSY_MSK ) != 0 );
}

uint8_t MDR_I2C_Union_IsArbitrationLost( void )
{
    return ( ( MDR_I2C_UNION->STA.Register & MDR_I2C_STA_LOST_ARB_MSK ) != 0 );
}

uint8_t MDR_I2C_Union_IsAckReceived( void )
{
    return ( ( MDR_I2C_UNION->STA.Register & MDR_I2C_STA_RX_ACK_MSK ) == 0 );
}

uint8_t MDR_I2C_Union_IsInterruptSet( void )
{
    return ( ( MDR_I2C_UNION->STA.Register & MDR_I2C_STA_INT_MSK ) != 0 );
}

// I2C Milandr functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_I2C_Enable( void )
{
    MDR_I2C->CTR |= MDR_I2C_CTR_EN_I2C_ENABLE;
}

void MDR_I2C_Disable( void )
{
    MDR_I2C->CTR &= MDR_I2C_CTR_EN_I2C_DISABLE;
}

void MDR_I2C_InterruptEnable( void )
{
    MDR_I2C->CTR |= MDR_I2C_CTR_EN_INT_ENABLE;
}

void MDR_I2C_InterruptDisable( void )
{
    MDR_I2C->CTR &= MDR_I2C_CTR_EN_INT_DISABLE;
}

void MDR_I2C_SetPrescaler( uint16_t prescaler )
{
    MDR_I2C->PRL &= ~MDR_I2C_PRL_PR_MSK;
    MDR_I2C->PRL |= ( MDR_I2C_PRL_PR_VALUE( prescaler ) & MDR_I2C_PRL_PR_MSK );

    MDR_I2C->PRH &= ~MDR_I2C_PRH_PR_MSK;
    MDR_I2C->PRH |= ( MDR_I2C_PRH_PR_VALUE( prescaler >> 8 ) & MDR_I2C_PRH_PR_MSK );
}

void MDR_I2C_StartWrite( uint8_t first_byte )
{
    MDR_I2C->TXD = ( MDR_I2C_TXD_TXD_VALUE( first_byte ) & MDR_I2C_TXD_TXD_MSK );
    MDR_I2C->CMD = MDR_I2C_CMD_START_SEND | MDR_I2C_CMD_WR_START;
}

void MDR_I2C_WriteByte( uint8_t data )
{
    MDR_I2C->TXD = ( MDR_I2C_TXD_TXD_VALUE( data ) & MDR_I2C_TXD_TXD_MSK );
    MDR_I2C->CMD = MDR_I2C_CMD_WR_START;
}

uint8_t MDR_I2C_ReadByte( uint32_t ack )
{
    MDR_I2C->CMD = MDR_I2C_CMD_RD_START | ( ack & MDR_I2C_CMD_ACK_MSK );
    MDR_I2C_WaitTransferComplete();

    return ( uint8_t )( MDR_I2C->RXD & MDR_I2C_RXD_RXD_MSK );
}

void MDR_I2C_SendStop( void )
{
    MDR_I2C->CMD = MDR_I2C_CMD_STOP_SEND;
}

void MDR_I2C_ClearInterrupt( void )
{
    MDR_I2C->CMD = MDR_I2C_CMD_CLR_INT_CLEAR;
}

void MDR_I2C_WaitTransferComplete( void )
{
    while ( ( MDR_I2C->STA & MDR_I2C_STA_TR_PROG_MSK ) != 0 )
    {
    }
}

uint8_t MDR_I2C_IsTransferInProgress( void )
{
    return ( ( MDR_I2C->STA & MDR_I2C_STA_TR_PROG_MSK ) != 0 );
}

uint8_t MDR_I2C_IsBusBusy( void )
{
    return ( ( MDR_I2C->STA & MDR_I2C_STA_BUSY_MSK ) != 0 );
}

uint8_t MDR_I2C_IsArbitrationLost( void )
{
    return ( ( MDR_I2C->STA & MDR_I2C_STA_LOST_ARB_MSK ) != 0 );
}

uint8_t MDR_I2C_IsAckReceived( void )
{
    return ( ( MDR_I2C->STA & MDR_I2C_STA_RX_ACK_MSK ) == 0 );
}

uint8_t MDR_I2C_IsInterruptSet( void )
{
    return ( ( MDR_I2C->STA & MDR_I2C_STA_INT_MSK ) != 0 );
}