#include "MILUINO_MDR_SSP.h"

#include <stdint.h>

// SSP Union functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_SSP_Union_Enable( MDR_SSP_TypeDefUnion *ssp )
{
    ssp->CR1.Register |= MDR_SSP_CR1_SSE_ENABLE;
}

void MDR_SSP_Union_Disable( MDR_SSP_TypeDefUnion *ssp )
{
    ssp->CR1.Register &= MDR_SSP_CR1_SSE_DISABLE;
}

void MDR_SSP_Union_SetMode( MDR_SSP_TypeDefUnion *ssp, uint32_t mode )
{
    ssp->CR1.Register &= ~MDR_SSP_CR1_MS_MSK;
    ssp->CR1.Register |= ( mode & MDR_SSP_CR1_MS_MSK );
}

void MDR_SSP_Union_LoopbackEnable( MDR_SSP_TypeDefUnion *ssp )
{
    ssp->CR1.Register |= MDR_SSP_CR1_LBM_LOOPBACK;
}

void MDR_SSP_Union_LoopbackDisable( MDR_SSP_TypeDefUnion *ssp )
{
    ssp->CR1.Register &= MDR_SSP_CR1_LBM_NORMAL;
}

void MDR_SSP_Union_SlaveOutputEnable( MDR_SSP_TypeDefUnion *ssp )
{
    ssp->CR1.Register &= MDR_SSP_CR1_SOD_OUTPUT_ENABLE;
}

void MDR_SSP_Union_SlaveOutputDisable( MDR_SSP_TypeDefUnion *ssp )
{
    ssp->CR1.Register |= MDR_SSP_CR1_SOD_OUTPUT_DISABLE;
}

void MDR_SSP_Union_SetDataSize( MDR_SSP_TypeDefUnion *ssp, uint32_t data_size )
{
    ssp->CR0.Register &= ~MDR_SSP_CR0_DSS_MSK;
    ssp->CR0.Register |= ( data_size & MDR_SSP_CR0_DSS_MSK );
}

void MDR_SSP_Union_SetFrameFormat( MDR_SSP_TypeDefUnion *ssp, uint32_t frame_format )
{
    ssp->CR0.Register &= ~MDR_SSP_CR0_FRF_MSK;
    ssp->CR0.Register |= ( frame_format & MDR_SSP_CR0_FRF_MSK );
}

void MDR_SSP_Union_SetClockPolarity( MDR_SSP_TypeDefUnion *ssp, uint32_t polarity )
{
    ssp->CR0.Register &= ~MDR_SSP_CR0_SPO_MSK;
    ssp->CR0.Register |= ( polarity & MDR_SSP_CR0_SPO_MSK );
}

void MDR_SSP_Union_SetClockPhase( MDR_SSP_TypeDefUnion *ssp, uint32_t phase )
{
    ssp->CR0.Register &= ~MDR_SSP_CR0_SPH_MSK;
    ssp->CR0.Register |= ( phase & MDR_SSP_CR0_SPH_MSK );
}

void MDR_SSP_Union_SetSerialClockRate( MDR_SSP_TypeDefUnion *ssp, uint32_t serial_clock_rate )
{
    ssp->CR0.Register &= ~MDR_SSP_CR0_SCR_MSK;
    ssp->CR0.Register |= ( MDR_SSP_CR0_SCR_VALUE( serial_clock_rate ) & MDR_SSP_CR0_SCR_MSK );
}

void MDR_SSP_Union_SetClockPrescaler( MDR_SSP_TypeDefUnion *ssp, uint32_t prescaler )
{
    ssp->CPSR.Register = ( MDR_SSP_CPSR_CPSDVSR_VALUE( prescaler ) & MDR_SSP_CPSR_CPSDVSR_MSK );
}

void MDR_SSP_Union_WriteData( MDR_SSP_TypeDefUnion *ssp, uint16_t data )
{
    while ( ( ssp->SR.Register & MDR_SSP_SR_TNF_MSK ) == 0 )
    {
    }

    ssp->DR.Register = ( MDR_SSP_DR_DATA_VALUE( data ) & MDR_SSP_DR_DATA_MSK );
}

uint16_t MDR_SSP_Union_ReadData( MDR_SSP_TypeDefUnion *ssp )
{
    while ( ( ssp->SR.Register & MDR_SSP_SR_RNE_MSK ) == 0 )
    {
    }

    return ( uint16_t )( ssp->DR.Register & MDR_SSP_DR_DATA_MSK );
}

uint8_t MDR_SSP_Union_IsTxReady( MDR_SSP_TypeDefUnion *ssp )
{
    return ( ( ssp->SR.Register & MDR_SSP_SR_TNF_MSK ) != 0 );
}

uint8_t MDR_SSP_Union_IsRxReady( MDR_SSP_TypeDefUnion *ssp )
{
    return ( ( ssp->SR.Register & MDR_SSP_SR_RNE_MSK ) != 0 );
}

uint8_t MDR_SSP_Union_IsBusy( MDR_SSP_TypeDefUnion *ssp )
{
    return ( ( ssp->SR.Register & MDR_SSP_SR_BSY_MSK ) != 0 );
}

void MDR_SSP_Union_InterruptEnable( MDR_SSP_TypeDefUnion *ssp, uint32_t interrupt_mask )
{
    ssp->IMSC.Register |= ( interrupt_mask & ( MDR_SSP_IMSC_RORIM_MSK |
                                               MDR_SSP_IMSC_RTIM_MSK |
                                               MDR_SSP_IMSC_RXIM_MSK |
                                               MDR_SSP_IMSC_TXIM_MSK ) );
}

void MDR_SSP_Union_InterruptDisable( MDR_SSP_TypeDefUnion *ssp, uint32_t interrupt_mask )
{
    ssp->IMSC.Register &= ~( interrupt_mask & ( MDR_SSP_IMSC_RORIM_MSK |
                                                MDR_SSP_IMSC_RTIM_MSK |
                                                MDR_SSP_IMSC_RXIM_MSK |
                                                MDR_SSP_IMSC_TXIM_MSK ) );
}

uint32_t MDR_SSP_Union_GetRawInterruptStatus( MDR_SSP_TypeDefUnion *ssp )
{
    return ssp->RIS.Register;
}

uint32_t MDR_SSP_Union_GetMaskedInterruptStatus( MDR_SSP_TypeDefUnion *ssp )
{
    return ssp->MIS.Register;
}

void MDR_SSP_Union_ClearInterrupts( MDR_SSP_TypeDefUnion *ssp, uint32_t interrupt_mask )
{
    ssp->ICR.Register = ( interrupt_mask & ( MDR_SSP_ICR_RORIC_MSK | MDR_SSP_ICR_RTIC_MSK ) );
}

void MDR_SSP_Union_RxDMAEnable( MDR_SSP_TypeDefUnion *ssp )
{
    ssp->DMACR.Register |= MDR_SSP_DMACR_RXDMAE_ENABLE;
}

void MDR_SSP_Union_RxDMADisable( MDR_SSP_TypeDefUnion *ssp )
{
    ssp->DMACR.Register &= MDR_SSP_DMACR_RXDMAE_DISABLE;
}

void MDR_SSP_Union_TxDMAEnable( MDR_SSP_TypeDefUnion *ssp )
{
    ssp->DMACR.Register |= MDR_SSP_DMACR_TXDMAE_ENABLE;
}

void MDR_SSP_Union_TxDMADisable( MDR_SSP_TypeDefUnion *ssp )
{
    ssp->DMACR.Register &= MDR_SSP_DMACR_TXDMAE_DISABLE;
}

// SSP Milandr functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_SSP_Enable( MDR_SSP_TypeDef *ssp )
{
    ssp->CR1 |= MDR_SSP_CR1_SSE_ENABLE;
}

void MDR_SSP_Disable( MDR_SSP_TypeDef *ssp )
{
    ssp->CR1 &= MDR_SSP_CR1_SSE_DISABLE;
}

void MDR_SSP_SetMode( MDR_SSP_TypeDef *ssp, uint32_t mode )
{
    ssp->CR1 &= ~MDR_SSP_CR1_MS_MSK;
    ssp->CR1 |= ( mode & MDR_SSP_CR1_MS_MSK );
}

void MDR_SSP_LoopbackEnable( MDR_SSP_TypeDef *ssp )
{
    ssp->CR1 |= MDR_SSP_CR1_LBM_LOOPBACK;
}

void MDR_SSP_LoopbackDisable( MDR_SSP_TypeDef *ssp )
{
    ssp->CR1 &= MDR_SSP_CR1_LBM_NORMAL;
}

void MDR_SSP_SlaveOutputEnable( MDR_SSP_TypeDef *ssp )
{
    ssp->CR1 &= MDR_SSP_CR1_SOD_OUTPUT_ENABLE;
}

void MDR_SSP_SlaveOutputDisable( MDR_SSP_TypeDef *ssp )
{
    ssp->CR1 |= MDR_SSP_CR1_SOD_OUTPUT_DISABLE;
}

void MDR_SSP_SetDataSize( MDR_SSP_TypeDef *ssp, uint32_t data_size )
{
    ssp->CR0 &= ~MDR_SSP_CR0_DSS_MSK;
    ssp->CR0 |= ( data_size & MDR_SSP_CR0_DSS_MSK );
}

void MDR_SSP_SetFrameFormat( MDR_SSP_TypeDef *ssp, uint32_t frame_format )
{
    ssp->CR0 &= ~MDR_SSP_CR0_FRF_MSK;
    ssp->CR0 |= ( frame_format & MDR_SSP_CR0_FRF_MSK );
}

void MDR_SSP_SetClockPolarity( MDR_SSP_TypeDef *ssp, uint32_t polarity )
{
    ssp->CR0 &= ~MDR_SSP_CR0_SPO_MSK;
    ssp->CR0 |= ( polarity & MDR_SSP_CR0_SPO_MSK );
}

void MDR_SSP_SetClockPhase( MDR_SSP_TypeDef *ssp, uint32_t phase )
{
    ssp->CR0 &= ~MDR_SSP_CR0_SPH_MSK;
    ssp->CR0 |= ( phase & MDR_SSP_CR0_SPH_MSK );
}

void MDR_SSP_SetSerialClockRate( MDR_SSP_TypeDef *ssp, uint32_t serial_clock_rate )
{
    ssp->CR0 &= ~MDR_SSP_CR0_SCR_MSK;
    ssp->CR0 |= ( MDR_SSP_CR0_SCR_VALUE( serial_clock_rate ) & MDR_SSP_CR0_SCR_MSK );
}

void MDR_SSP_SetClockPrescaler( MDR_SSP_TypeDef *ssp, uint32_t prescaler )
{
    ssp->CPSR = ( MDR_SSP_CPSR_CPSDVSR_VALUE( prescaler ) & MDR_SSP_CPSR_CPSDVSR_MSK );
}

void MDR_SSP_WriteData( MDR_SSP_TypeDef *ssp, uint16_t data )
{
    while ( ( ssp->SR & MDR_SSP_SR_TNF_MSK ) == 0 )
    {
    }

    ssp->DR = ( MDR_SSP_DR_DATA_VALUE( data ) & MDR_SSP_DR_DATA_MSK );
}

uint16_t MDR_SSP_ReadData( MDR_SSP_TypeDef *ssp )
{
    while ( ( ssp->SR & MDR_SSP_SR_RNE_MSK ) == 0 )
    {
    }

    return ( uint16_t )( ssp->DR & MDR_SSP_DR_DATA_MSK );
}

uint8_t MDR_SSP_IsTxReady( MDR_SSP_TypeDef *ssp )
{
    return ( ( ssp->SR & MDR_SSP_SR_TNF_MSK ) != 0 );
}

uint8_t MDR_SSP_IsRxReady( MDR_SSP_TypeDef *ssp )
{
    return ( ( ssp->SR & MDR_SSP_SR_RNE_MSK ) != 0 );
}

uint8_t MDR_SSP_IsBusy( MDR_SSP_TypeDef *ssp )
{
    return ( ( ssp->SR & MDR_SSP_SR_BSY_MSK ) != 0 );
}

void MDR_SSP_InterruptEnable( MDR_SSP_TypeDef *ssp, uint32_t interrupt_mask )
{
    ssp->IMSC |= ( interrupt_mask & ( MDR_SSP_IMSC_RORIM_MSK |
                                      MDR_SSP_IMSC_RTIM_MSK |
                                      MDR_SSP_IMSC_RXIM_MSK |
                                      MDR_SSP_IMSC_TXIM_MSK ) );
}

void MDR_SSP_InterruptDisable( MDR_SSP_TypeDef *ssp, uint32_t interrupt_mask )
{
    ssp->IMSC &= ~( interrupt_mask & ( MDR_SSP_IMSC_RORIM_MSK |
                                       MDR_SSP_IMSC_RTIM_MSK |
                                       MDR_SSP_IMSC_RXIM_MSK |
                                       MDR_SSP_IMSC_TXIM_MSK ) );
}

uint32_t MDR_SSP_GetRawInterruptStatus( MDR_SSP_TypeDef *ssp )
{
    return ssp->RIS;
}

uint32_t MDR_SSP_GetMaskedInterruptStatus( MDR_SSP_TypeDef *ssp )
{
    return ssp->MIS;
}

void MDR_SSP_ClearInterrupts( MDR_SSP_TypeDef *ssp, uint32_t interrupt_mask )
{
    ssp->ICR = ( interrupt_mask & ( MDR_SSP_ICR_RORIC_MSK | MDR_SSP_ICR_RTIC_MSK ) );
}

void MDR_SSP_RxDMAEnable( MDR_SSP_TypeDef *ssp )
{
    ssp->DMACR |= MDR_SSP_DMACR_RXDMAE_ENABLE;
}

void MDR_SSP_RxDMADisable( MDR_SSP_TypeDef *ssp )
{
    ssp->DMACR &= MDR_SSP_DMACR_RXDMAE_DISABLE;
}

void MDR_SSP_TxDMAEnable( MDR_SSP_TypeDef *ssp )
{
    ssp->DMACR |= MDR_SSP_DMACR_TXDMAE_ENABLE;
}

void MDR_SSP_TxDMADisable( MDR_SSP_TypeDef *ssp )
{
    ssp->DMACR &= MDR_SSP_DMACR_TXDMAE_DISABLE;
}