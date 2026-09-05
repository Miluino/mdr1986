#include "MILUINO_MDR_UART.h"

#include <stdint.h>

// UART Union functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_UART_Union_Enable( MDR_UART_TypeDefUnion *uart )
{
    uart->CR.Register |= MDR_UART_CR_UARTEN_ENABLE;
}

void MDR_UART_Union_Disable( MDR_UART_TypeDefUnion *uart )
{
    uart->CR.Register &= MDR_UART_CR_UARTEN_DISABLE;
}

void MDR_UART_Union_TxEnable( MDR_UART_TypeDefUnion *uart )
{
    uart->CR.Register |= MDR_UART_CR_TXE_ENABLE;
}

void MDR_UART_Union_TxDisable( MDR_UART_TypeDefUnion *uart )
{
    uart->CR.Register &= MDR_UART_CR_TXE_DISABLE;
}

void MDR_UART_Union_RxEnable( MDR_UART_TypeDefUnion *uart )
{
    uart->CR.Register |= MDR_UART_CR_RXE_ENABLE;
}

void MDR_UART_Union_RxDisable( MDR_UART_TypeDefUnion *uart )
{
    uart->CR.Register &= MDR_UART_CR_RXE_DISABLE;
}

void MDR_UART_Union_SetBaudDivInt( MDR_UART_TypeDefUnion *uart, uint16_t baud_div_int )
{
    uart->IBRD.Register &= ~MDR_UART_IBRD_BAUDDIV_INT_MSK;
    uart->IBRD.Register |= ( MDR_UART_IBRD_BAUDDIV_INT_VALUE( baud_div_int ) & MDR_UART_IBRD_BAUDDIV_INT_MSK );
}

void MDR_UART_Union_SetBaudDivFrac( MDR_UART_TypeDefUnion *uart, uint8_t baud_div_frac )
{
    uart->FBRD.Register &= ~MDR_UART_FBRD_BAUDDIV_FRAC_MSK;
    uart->FBRD.Register |= ( MDR_UART_FBRD_BAUDDIV_FRAC_VALUE( baud_div_frac ) & MDR_UART_FBRD_BAUDDIV_FRAC_MSK );
}

void MDR_UART_Union_SetWordLength5( MDR_UART_TypeDefUnion *uart )
{
    uart->LCR_H.Register &= ~MDR_UART_LCR_H_WLEN_MSK;
    uart->LCR_H.Register |= ( MDR_UART_LCR_H_WLEN_5_BITS & MDR_UART_LCR_H_WLEN_MSK );
}

void MDR_UART_Union_SetWordLength6( MDR_UART_TypeDefUnion *uart )
{
    uart->LCR_H.Register &= ~MDR_UART_LCR_H_WLEN_MSK;
    uart->LCR_H.Register |= ( MDR_UART_LCR_H_WLEN_6_BITS & MDR_UART_LCR_H_WLEN_MSK );
}

void MDR_UART_Union_SetWordLength7( MDR_UART_TypeDefUnion *uart )
{
    uart->LCR_H.Register &= ~MDR_UART_LCR_H_WLEN_MSK;
    uart->LCR_H.Register |= ( MDR_UART_LCR_H_WLEN_7_BITS & MDR_UART_LCR_H_WLEN_MSK );
}

void MDR_UART_Union_SetWordLength8( MDR_UART_TypeDefUnion *uart )
{
    uart->LCR_H.Register &= ~MDR_UART_LCR_H_WLEN_MSK;
    uart->LCR_H.Register |= ( MDR_UART_LCR_H_WLEN_8_BITS & MDR_UART_LCR_H_WLEN_MSK );
}

void MDR_UART_Union_SetOneStopBit( MDR_UART_TypeDefUnion *uart )
{
    uart->LCR_H.Register &= MDR_UART_LCR_H_STP2_ONE_STOP_BIT;
}

void MDR_UART_Union_SetTwoStopBits( MDR_UART_TypeDefUnion *uart )
{
    uart->LCR_H.Register |= MDR_UART_LCR_H_STP2_TWO_STOP_BITS;
}

void MDR_UART_Union_ParityDisable( MDR_UART_TypeDefUnion *uart )
{
    uart->LCR_H.Register &= MDR_UART_LCR_H_PEN_DISABLE;
}

void MDR_UART_Union_ParityEnable( MDR_UART_TypeDefUnion *uart )
{
    uart->LCR_H.Register |= MDR_UART_LCR_H_PEN_ENABLE;
}

void MDR_UART_Union_SetParityOdd( MDR_UART_TypeDefUnion *uart )
{
    uart->LCR_H.Register &= MDR_UART_LCR_H_EPS_ODD;
}

void MDR_UART_Union_SetParityEven( MDR_UART_TypeDefUnion *uart )
{
    uart->LCR_H.Register |= MDR_UART_LCR_H_EPS_EVEN;
}

void MDR_UART_Union_FifoEnable( MDR_UART_TypeDefUnion *uart )
{
    uart->LCR_H.Register |= MDR_UART_LCR_H_FEN_ENABLE;
}

void MDR_UART_Union_FifoDisable( MDR_UART_TypeDefUnion *uart )
{
    uart->LCR_H.Register &= MDR_UART_LCR_H_FEN_DISABLE;
}

void MDR_UART_Union_WriteByte( MDR_UART_TypeDefUnion *uart, uint8_t data )
{
    while ( ( uart->FR.Register & MDR_UART_FR_TXFF_MSK ) == MDR_UART_FR_TXFF_FULL )
    {
    }

    uart->DR.Register = ( MDR_UART_DR_DATA_VALUE( data ) & MDR_UART_DR_DATA_MSK );
}

void MDR_UART_Union_WriteString( MDR_UART_TypeDefUnion *uart, const char *text )
{
    while ( *text != '\0' )
    {
        MDR_UART_Union_WriteByte( uart, *text );
        text++;
    }
}

void MDR_UART_Union_WriteBuffer( MDR_UART_TypeDefUnion *uart, const uint8_t *buffer, uint32_t length )
{
    uint32_t index;

    for ( index = 0; index < length; index++ )
    {
        MDR_UART_Union_WriteByte( uart, buffer[index] );
    }
}

uint8_t MDR_UART_Union_ReadByte( MDR_UART_TypeDefUnion *uart )
{
    while ( ( uart->FR.Register & MDR_UART_FR_RXFE_MSK ) == MDR_UART_FR_RXFE_EMPTY )
    {
    }

    return ( uint8_t )( uart->DR.Register & MDR_UART_DR_DATA_MSK );
}

uint8_t MDR_UART_Union_IsRxDataAvailable( MDR_UART_TypeDefUnion *uart )
{
    if ( ( uart->FR.Register & MDR_UART_FR_RXFE_MSK ) == 0 )
    {
        return 1;
    }

    return 0;
}

void MDR_UART_Union_ClearErrors( MDR_UART_TypeDefUnion *uart )
{
    uart->RSR_ECR.Register = MDR_UART_RSR_ECR_CLEAR_ERRORS;
}

void MDR_UART_Union_WriteUInt16( MDR_UART_TypeDefUnion *uart, uint16_t value )
{
    uint8_t digits[5];
    uint8_t count;

    count = 0;

    if ( value == 0 )
    {
        MDR_UART_Union_WriteByte( uart, '0' );
        return;
    }

    while ( value != 0 )
    {
        digits[count] = value % 10;
        value = value / 10;
        count++;
    }

    while ( count != 0 )
    {
        count--;
        MDR_UART_Union_WriteByte( uart, digits[count] + '0' );
    }
}

// UART Milandr functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_UART_Enable( MDR_UART_TypeDef *uart )
{
    uart->CR |= MDR_UART_CR_UARTEN_ENABLE;
}

void MDR_UART_Disable( MDR_UART_TypeDef *uart )
{
    uart->CR &= MDR_UART_CR_UARTEN_DISABLE;
}

void MDR_UART_TxEnable( MDR_UART_TypeDef *uart )
{
    uart->CR |= MDR_UART_CR_TXE_ENABLE;
}

void MDR_UART_TxDisable( MDR_UART_TypeDef *uart )
{
    uart->CR &= MDR_UART_CR_TXE_DISABLE;
}

void MDR_UART_RxEnable( MDR_UART_TypeDef *uart )
{
    uart->CR |= MDR_UART_CR_RXE_ENABLE;
}

void MDR_UART_RxDisable( MDR_UART_TypeDef *uart )
{
    uart->CR &= MDR_UART_CR_RXE_DISABLE;
}

void MDR_UART_SetBaudDivInt( MDR_UART_TypeDef *uart, uint16_t baud_div_int )
{
    uart->IBRD &= ~MDR_UART_IBRD_BAUDDIV_INT_MSK;
    uart->IBRD |= ( MDR_UART_IBRD_BAUDDIV_INT_VALUE( baud_div_int ) & MDR_UART_IBRD_BAUDDIV_INT_MSK );
}

void MDR_UART_SetBaudDivFrac( MDR_UART_TypeDef *uart, uint8_t baud_div_frac )
{
    uart->FBRD &= ~MDR_UART_FBRD_BAUDDIV_FRAC_MSK;
    uart->FBRD |= ( MDR_UART_FBRD_BAUDDIV_FRAC_VALUE( baud_div_frac ) & MDR_UART_FBRD_BAUDDIV_FRAC_MSK );
}

void MDR_UART_SetWordLength5( MDR_UART_TypeDef *uart )
{
    uart->LCR_H &= ~MDR_UART_LCR_H_WLEN_MSK;
    uart->LCR_H |= ( MDR_UART_LCR_H_WLEN_5_BITS & MDR_UART_LCR_H_WLEN_MSK );
}

void MDR_UART_SetWordLength6( MDR_UART_TypeDef *uart )
{
    uart->LCR_H &= ~MDR_UART_LCR_H_WLEN_MSK;
    uart->LCR_H |= ( MDR_UART_LCR_H_WLEN_6_BITS & MDR_UART_LCR_H_WLEN_MSK );
}

void MDR_UART_SetWordLength7( MDR_UART_TypeDef *uart )
{
    uart->LCR_H &= ~MDR_UART_LCR_H_WLEN_MSK;
    uart->LCR_H |= ( MDR_UART_LCR_H_WLEN_7_BITS & MDR_UART_LCR_H_WLEN_MSK );
}

void MDR_UART_SetWordLength8( MDR_UART_TypeDef *uart )
{
    uart->LCR_H &= ~MDR_UART_LCR_H_WLEN_MSK;
    uart->LCR_H |= ( MDR_UART_LCR_H_WLEN_8_BITS & MDR_UART_LCR_H_WLEN_MSK );
}

void MDR_UART_SetOneStopBit( MDR_UART_TypeDef *uart )
{
    uart->LCR_H &= MDR_UART_LCR_H_STP2_ONE_STOP_BIT;
}

void MDR_UART_SetTwoStopBits( MDR_UART_TypeDef *uart )
{
    uart->LCR_H |= MDR_UART_LCR_H_STP2_TWO_STOP_BITS;
}

void MDR_UART_ParityDisable( MDR_UART_TypeDef *uart )
{
    uart->LCR_H &= MDR_UART_LCR_H_PEN_DISABLE;
}

void MDR_UART_ParityEnable( MDR_UART_TypeDef *uart )
{
    uart->LCR_H |= MDR_UART_LCR_H_PEN_ENABLE;
}

void MDR_UART_SetParityOdd( MDR_UART_TypeDef *uart )
{
    uart->LCR_H &= MDR_UART_LCR_H_EPS_ODD;
}

void MDR_UART_SetParityEven( MDR_UART_TypeDef *uart )
{
    uart->LCR_H |= MDR_UART_LCR_H_EPS_EVEN;
}

void MDR_UART_FifoEnable( MDR_UART_TypeDef *uart )
{
    uart->LCR_H |= MDR_UART_LCR_H_FEN_ENABLE;
}

void MDR_UART_FifoDisable( MDR_UART_TypeDef *uart )
{
    uart->LCR_H &= MDR_UART_LCR_H_FEN_DISABLE;
}

void MDR_UART_WriteByte( MDR_UART_TypeDef *uart, uint8_t data )
{
    while ( ( uart->FR & MDR_UART_FR_TXFF_MSK ) == MDR_UART_FR_TXFF_FULL )
    {
    }

    uart->DR = ( MDR_UART_DR_DATA_VALUE( data ) & MDR_UART_DR_DATA_MSK );
}

void MDR_UART_WriteString( MDR_UART_TypeDef *uart, const char *text )
{
    while ( *text != '\0' )
    {
        MDR_UART_WriteByte( uart, *text );
        text++;
    }
}

void MDR_UART_WriteBuffer( MDR_UART_TypeDef *uart, const uint8_t *buffer, uint32_t length )
{
    uint32_t index;

    for ( index = 0; index < length; index++ )
    {
        MDR_UART_WriteByte( uart, buffer[index] );
    }
}

uint8_t MDR_UART_ReadByte( MDR_UART_TypeDef *uart )
{
    while ( ( uart->FR & MDR_UART_FR_RXFE_MSK ) == MDR_UART_FR_RXFE_EMPTY )
    {
    }

    return ( uint8_t )( uart->DR & MDR_UART_DR_DATA_MSK );
}

uint8_t MDR_UART_IsRxDataAvailable( MDR_UART_TypeDef *uart )
{
    if ( ( uart->FR & MDR_UART_FR_RXFE_MSK ) == 0 )
    {
        return 1;
    }

    return 0;
}

void MDR_UART_ClearErrors( MDR_UART_TypeDef *uart )
{
    uart->RSR_ECR = MDR_UART_RSR_ECR_CLEAR_ERRORS;
}

void MDR_UART_WriteUInt16( MDR_UART_TypeDef *uart, uint16_t value )
{
    uint8_t digits[5];
    uint8_t count;

    count = 0;

    if ( value == 0 )
    {
        MDR_UART_WriteByte( uart, '0' );
        return;
    }

    while ( value != 0 )
    {
        digits[count] = value % 10;
        value = value / 10;
        count++;
    }

    while ( count != 0 )
    {
        count--;
        MDR_UART_WriteByte( uart, digits[count] + '0' );
    }
}