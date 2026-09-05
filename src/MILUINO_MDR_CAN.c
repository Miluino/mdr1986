#include "MILUINO_MDR_CAN.h"

#include <stdint.h>

// CAN Union functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_CAN_Union_Enable( MDR_CAN_TypeDefUnion *can )
{
    can->CONTROL.Register |= MDR_CAN_CONTROL_CAN_EN_ENABLE;
}

void MDR_CAN_Union_Disable( MDR_CAN_TypeDefUnion *can )
{
    can->CONTROL.Register &= MDR_CAN_CONTROL_CAN_EN_DISABLE;
}

void MDR_CAN_Union_NormalMode( MDR_CAN_TypeDefUnion *can )
{
    can->CONTROL.Register &= MDR_CAN_CONTROL_ROM_NORMAL;
    can->CONTROL.Register &= MDR_CAN_CONTROL_STM_NORMAL;
}

void MDR_CAN_Union_ReceiveOnlyEnable( MDR_CAN_TypeDefUnion *can )
{
    can->CONTROL.Register &= MDR_CAN_CONTROL_STM_NORMAL;
    can->CONTROL.Register |= MDR_CAN_CONTROL_ROM_RECEIVE_ONLY;
}

void MDR_CAN_Union_ReceiveOnlyDisable( MDR_CAN_TypeDefUnion *can )
{
    can->CONTROL.Register &= MDR_CAN_CONTROL_ROM_NORMAL;
}

void MDR_CAN_Union_SelfTestEnable( MDR_CAN_TypeDefUnion *can )
{
    can->CONTROL.Register &= MDR_CAN_CONTROL_ROM_NORMAL;
    can->CONTROL.Register |= MDR_CAN_CONTROL_STM_SELF_TEST;
}

void MDR_CAN_Union_SelfTestDisable( MDR_CAN_TypeDefUnion *can )
{
    can->CONTROL.Register &= MDR_CAN_CONTROL_STM_NORMAL;
}

void MDR_CAN_Union_AckOwnPacketsEnable( MDR_CAN_TypeDefUnion *can )
{
    can->CONTROL.Register |= MDR_CAN_CONTROL_SAP_ACK_OWN;
}

void MDR_CAN_Union_AckOwnPacketsDisable( MDR_CAN_TypeDefUnion *can )
{
    can->CONTROL.Register &= MDR_CAN_CONTROL_SAP_ACK_OTHER_ONLY;
}

void MDR_CAN_Union_ReceiveOwnPacketsEnable( MDR_CAN_TypeDefUnion *can )
{
    can->CONTROL.Register |= MDR_CAN_CONTROL_ROP_RECEIVE_OWN;
}

void MDR_CAN_Union_ReceiveOwnPacketsDisable( MDR_CAN_TypeDefUnion *can )
{
    can->CONTROL.Register &= MDR_CAN_CONTROL_ROP_RECEIVE_OTHER_ONLY;
}

void MDR_CAN_Union_SetBitTiming( MDR_CAN_TypeDefUnion *can, uint32_t brp, uint32_t pseg, uint32_t seg1, uint32_t seg2, uint32_t sjw, uint32_t sampling )
{
    can->BITTMNG.Register &= ~MDR_CAN_BITTMNG_BRP_MSK;
    can->BITTMNG.Register |= ( brp & MDR_CAN_BITTMNG_BRP_MSK );

    can->BITTMNG.Register &= ~MDR_CAN_BITTMNG_PSEG_MSK;
    can->BITTMNG.Register |= ( pseg & MDR_CAN_BITTMNG_PSEG_MSK );

    can->BITTMNG.Register &= ~MDR_CAN_BITTMNG_SEG1_MSK;
    can->BITTMNG.Register |= ( seg1 & MDR_CAN_BITTMNG_SEG1_MSK );

    can->BITTMNG.Register &= ~MDR_CAN_BITTMNG_SEG2_MSK;
    can->BITTMNG.Register |= ( seg2 & MDR_CAN_BITTMNG_SEG2_MSK );

    can->BITTMNG.Register &= ~MDR_CAN_BITTMNG_SJW_MSK;
    can->BITTMNG.Register |= ( sjw & MDR_CAN_BITTMNG_SJW_MSK );

    can->BITTMNG.Register &= ~MDR_CAN_BITTMNG_SB_MSK;
    can->BITTMNG.Register |= ( sampling & MDR_CAN_BITTMNG_SB_MSK );
}

void MDR_CAN_Union_SetErrorThreshold( MDR_CAN_TypeDefUnion *can, uint8_t error_threshold )
{
    can->OVER.Register &= ~MDR_CAN_OVER_ERROR_MAX_MSK;
    can->OVER.Register |= ( MDR_CAN_OVER_ERROR_MAX_VALUE( error_threshold ) & MDR_CAN_OVER_ERROR_MAX_MSK );
}

uint32_t MDR_CAN_Union_GetStatus( MDR_CAN_TypeDefUnion *can )
{
    return can->STATUS.Register;
}

void MDR_CAN_Union_ClearErrorFlags( MDR_CAN_TypeDefUnion *can, uint32_t error_mask )
{
    uint32_t clear_mask;

    clear_mask = MDR_CAN_STATUS_ERROR_OVER_MSK |
                 MDR_CAN_STATUS_BIT_ERR_MSK |
                 MDR_CAN_STATUS_BIT_STUFF_ERR_MSK |
                 MDR_CAN_STATUS_CRC_ERR_MSK |
                 MDR_CAN_STATUS_FRAME_ERR_MSK |
                 MDR_CAN_STATUS_ACK_ERR_MSK;

    can->STATUS.Register &= ~( error_mask & clear_mask );
}

void MDR_CAN_Union_InterruptEnable( MDR_CAN_TypeDefUnion *can, uint32_t interrupt_mask )
{
    uint32_t enable_mask;

    enable_mask = MDR_CAN_INT_EN_GLB_INT_EN_MSK |
                  MDR_CAN_INT_EN_RX_INT_EN_MSK |
                  MDR_CAN_INT_EN_TX_INT_EN_MSK |
                  MDR_CAN_INT_EN_ERR_INT_EN_MSK |
                  MDR_CAN_INT_EN_ERR_OVER_INT_EN_MSK;

    can->INT_EN.Register |= ( interrupt_mask & enable_mask );
}

void MDR_CAN_Union_InterruptDisable( MDR_CAN_TypeDefUnion *can, uint32_t interrupt_mask )
{
    uint32_t enable_mask;

    enable_mask = MDR_CAN_INT_EN_GLB_INT_EN_MSK |
                  MDR_CAN_INT_EN_RX_INT_EN_MSK |
                  MDR_CAN_INT_EN_TX_INT_EN_MSK |
                  MDR_CAN_INT_EN_ERR_INT_EN_MSK |
                  MDR_CAN_INT_EN_ERR_OVER_INT_EN_MSK;

    can->INT_EN.Register &= ~( interrupt_mask & enable_mask );
}

void MDR_CAN_Union_RxBufferInterruptEnable( MDR_CAN_TypeDefUnion *can, uint8_t buffer )
{
    can->INT_RX.Register |= CAN_CHANNEL_MSK( buffer );
}

void MDR_CAN_Union_RxBufferInterruptDisable( MDR_CAN_TypeDefUnion *can, uint8_t buffer )
{
    can->INT_RX.Register &= ~CAN_CHANNEL_MSK( buffer );
}

void MDR_CAN_Union_TxBufferInterruptEnable( MDR_CAN_TypeDefUnion *can, uint8_t buffer )
{
    can->INT_TX.Register |= CAN_CHANNEL_MSK( buffer );
}

void MDR_CAN_Union_TxBufferInterruptDisable( MDR_CAN_TypeDefUnion *can, uint8_t buffer )
{
    can->INT_TX.Register &= ~CAN_CHANNEL_MSK( buffer );
}

void MDR_CAN_Union_BufferEnable( MDR_CAN_TypeDefUnion *can, uint8_t buffer )
{
    can->BUF_CON[buffer].Register |= MDR_CAN_BUF_CON_EN_ENABLE;
}

void MDR_CAN_Union_BufferDisable( MDR_CAN_TypeDefUnion *can, uint8_t buffer )
{
    can->BUF_CON[buffer].Register &= MDR_CAN_BUF_CON_EN_DISABLE;
}

void MDR_CAN_Union_SetBufferMode( MDR_CAN_TypeDefUnion *can, uint8_t buffer, uint32_t mode )
{
    can->BUF_CON[buffer].Register &= ~MDR_CAN_BUF_CON_RX_TXN_MSK;
    can->BUF_CON[buffer].Register |= ( mode & MDR_CAN_BUF_CON_RX_TXN_MSK );
}

void MDR_CAN_Union_SetBufferPriority( MDR_CAN_TypeDefUnion *can, uint8_t buffer, uint32_t priority )
{
    can->BUF_CON[buffer].Register &= ~MDR_CAN_BUF_CON_PRIOR_0_MSK;
    can->BUF_CON[buffer].Register |= ( priority & MDR_CAN_BUF_CON_PRIOR_0_MSK );
}

void MDR_CAN_Union_SetBufferOverwrite( MDR_CAN_TypeDefUnion *can, uint8_t buffer, uint32_t overwrite )
{
    can->BUF_CON[buffer].Register &= ~MDR_CAN_BUF_CON_OVER_EN_MSK;
    can->BUF_CON[buffer].Register |= ( overwrite & MDR_CAN_BUF_CON_OVER_EN_MSK );
}

void MDR_CAN_Union_SetStandardID( MDR_CAN_TypeDefUnion *can, uint8_t buffer, uint16_t identifier )
{
    can->CAN_BUF[buffer].ID.Register = ( MDR_CAN_ID_SID_VALUE( identifier ) & MDR_CAN_ID_SID_MSK );
}

void MDR_CAN_Union_SetExtendedID( MDR_CAN_TypeDefUnion *can, uint8_t buffer, uint32_t identifier )
{
    can->CAN_BUF[buffer].ID.Register =
        ( MDR_CAN_ID_EID_VALUE( identifier & 0x3FFFF ) & MDR_CAN_ID_EID_MSK ) |
        ( MDR_CAN_ID_SID_VALUE( ( identifier >> 18 ) & 0x7FF ) & MDR_CAN_ID_SID_MSK );
}

void MDR_CAN_Union_SetDLC( MDR_CAN_TypeDefUnion *can, uint8_t buffer, uint8_t length, uint32_t format, uint32_t rtr )
{
    if ( length > 8 )
    {
        length = 8;
    }

    can->CAN_BUF[buffer].DLC.Register =
        ( MDR_CAN_DLC_DLC_VALUE( length ) & MDR_CAN_DLC_DLC_MSK ) |
        ( format & MDR_CAN_DLC_IDE_MSK ) |
        ( rtr & MDR_CAN_DLC_RTR_MSK );

    if ( ( format & MDR_CAN_DLC_IDE_MSK ) != 0 )
    {
        can->CAN_BUF[buffer].DLC.Register |= MDR_CAN_DLC_SRR_ONE;
    }
}

void MDR_CAN_Union_WriteBufferData( MDR_CAN_TypeDefUnion *can, uint8_t buffer, const uint8_t *data, uint8_t length )
{
    uint32_t data_low;
    uint32_t data_high;
    uint8_t index;

    if ( length > 8 )
    {
        length = 8;
    }

    data_low = 0;
    data_high = 0;

    for ( index = 0; index < length; index++ )
    {
        if ( index < 4 )
        {
            data_low |= ( ( uint32_t )data[index] << ( index * 8 ) );
        }
        else
        {
            data_high |= ( ( uint32_t )data[index] << ( ( index - 4 ) * 8 ) );
        }
    }

    can->CAN_BUF[buffer].DATAL.Register = data_low;
    can->CAN_BUF[buffer].DATAH.Register = data_high;
}

void MDR_CAN_Union_ReadBufferData( MDR_CAN_TypeDefUnion *can, uint8_t buffer, uint8_t *data, uint8_t length )
{
    uint32_t data_low;
    uint32_t data_high;
    uint8_t index;

    if ( length > 8 )
    {
        length = 8;
    }

    data_low = can->CAN_BUF[buffer].DATAL.Register;
    data_high = can->CAN_BUF[buffer].DATAH.Register;

    for ( index = 0; index < length; index++ )
    {
        if ( index < 4 )
        {
            data[index] = ( uint8_t )( data_low >> ( index * 8 ) );
        }
        else
        {
            data[index] = ( uint8_t )( data_high >> ( ( index - 4 ) * 8 ) );
        }
    }
}

void MDR_CAN_Union_RequestTransmission( MDR_CAN_TypeDefUnion *can, uint8_t buffer )
{
    can->BUF_CON[buffer].Register |= MDR_CAN_BUF_CON_TX_REQ_REQUEST;
}

uint8_t MDR_CAN_Union_IsTransmissionPending( MDR_CAN_TypeDefUnion *can, uint8_t buffer )
{
    return ( ( can->BUF_CON[buffer].Register & MDR_CAN_BUF_CON_TX_REQ_MSK ) != 0 );
}

uint8_t MDR_CAN_Union_IsReceiveFull( MDR_CAN_TypeDefUnion *can, uint8_t buffer )
{
    return ( ( can->BUF_CON[buffer].Register & MDR_CAN_BUF_CON_RX_FULL_MSK ) != 0 );
}

void MDR_CAN_Union_ClearReceiveFull( MDR_CAN_TypeDefUnion *can, uint8_t buffer )
{
    can->BUF_CON[buffer].Register &= MDR_CAN_BUF_CON_RX_FULL_EMPTY;
}

void MDR_CAN_Union_SetFilter( MDR_CAN_TypeDefUnion *can, uint8_t buffer, uint32_t mask, uint32_t filter )
{
    uint32_t identifier_mask;

    identifier_mask = MDR_CAN_ID_EID_MSK | MDR_CAN_ID_SID_MSK;

    can->CAN_BUF_FILTER[buffer].MASK.Register = ( mask & identifier_mask );
    can->CAN_BUF_FILTER[buffer].FILTER.Register = ( filter & identifier_mask );
}

// CAN Milandr functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_CAN_Enable( MDR_CAN_TypeDef *can )
{
    can->CONTROL |= MDR_CAN_CONTROL_CAN_EN_ENABLE;
}

void MDR_CAN_Disable( MDR_CAN_TypeDef *can )
{
    can->CONTROL &= MDR_CAN_CONTROL_CAN_EN_DISABLE;
}

void MDR_CAN_NormalMode( MDR_CAN_TypeDef *can )
{
    can->CONTROL &= MDR_CAN_CONTROL_ROM_NORMAL;
    can->CONTROL &= MDR_CAN_CONTROL_STM_NORMAL;
}

void MDR_CAN_ReceiveOnlyEnable( MDR_CAN_TypeDef *can )
{
    can->CONTROL &= MDR_CAN_CONTROL_STM_NORMAL;
    can->CONTROL |= MDR_CAN_CONTROL_ROM_RECEIVE_ONLY;
}

void MDR_CAN_ReceiveOnlyDisable( MDR_CAN_TypeDef *can )
{
    can->CONTROL &= MDR_CAN_CONTROL_ROM_NORMAL;
}

void MDR_CAN_SelfTestEnable( MDR_CAN_TypeDef *can )
{
    can->CONTROL &= MDR_CAN_CONTROL_ROM_NORMAL;
    can->CONTROL |= MDR_CAN_CONTROL_STM_SELF_TEST;
}

void MDR_CAN_SelfTestDisable( MDR_CAN_TypeDef *can )
{
    can->CONTROL &= MDR_CAN_CONTROL_STM_NORMAL;
}

void MDR_CAN_AckOwnPacketsEnable( MDR_CAN_TypeDef *can )
{
    can->CONTROL |= MDR_CAN_CONTROL_SAP_ACK_OWN;
}

void MDR_CAN_AckOwnPacketsDisable( MDR_CAN_TypeDef *can )
{
    can->CONTROL &= MDR_CAN_CONTROL_SAP_ACK_OTHER_ONLY;
}

void MDR_CAN_ReceiveOwnPacketsEnable( MDR_CAN_TypeDef *can )
{
    can->CONTROL |= MDR_CAN_CONTROL_ROP_RECEIVE_OWN;
}

void MDR_CAN_ReceiveOwnPacketsDisable( MDR_CAN_TypeDef *can )
{
    can->CONTROL &= MDR_CAN_CONTROL_ROP_RECEIVE_OTHER_ONLY;
}

void MDR_CAN_SetBitTiming( MDR_CAN_TypeDef *can, uint32_t brp, uint32_t pseg, uint32_t seg1, uint32_t seg2, uint32_t sjw, uint32_t sampling )
{
    can->BITTMNG &= ~MDR_CAN_BITTMNG_BRP_MSK;
    can->BITTMNG |= ( brp & MDR_CAN_BITTMNG_BRP_MSK );

    can->BITTMNG &= ~MDR_CAN_BITTMNG_PSEG_MSK;
    can->BITTMNG |= ( pseg & MDR_CAN_BITTMNG_PSEG_MSK );

    can->BITTMNG &= ~MDR_CAN_BITTMNG_SEG1_MSK;
    can->BITTMNG |= ( seg1 & MDR_CAN_BITTMNG_SEG1_MSK );

    can->BITTMNG &= ~MDR_CAN_BITTMNG_SEG2_MSK;
    can->BITTMNG |= ( seg2 & MDR_CAN_BITTMNG_SEG2_MSK );

    can->BITTMNG &= ~MDR_CAN_BITTMNG_SJW_MSK;
    can->BITTMNG |= ( sjw & MDR_CAN_BITTMNG_SJW_MSK );

    can->BITTMNG &= ~MDR_CAN_BITTMNG_SB_MSK;
    can->BITTMNG |= ( sampling & MDR_CAN_BITTMNG_SB_MSK );
}

void MDR_CAN_SetErrorThreshold( MDR_CAN_TypeDef *can, uint8_t error_threshold )
{
    can->OVER &= ~MDR_CAN_OVER_ERROR_MAX_MSK;
    can->OVER |= ( MDR_CAN_OVER_ERROR_MAX_VALUE( error_threshold ) & MDR_CAN_OVER_ERROR_MAX_MSK );
}

uint32_t MDR_CAN_GetStatus( MDR_CAN_TypeDef *can )
{
    return can->STATUS;
}

void MDR_CAN_ClearErrorFlags( MDR_CAN_TypeDef *can, uint32_t error_mask )
{
    uint32_t clear_mask;

    clear_mask = MDR_CAN_STATUS_ERROR_OVER_MSK |
                 MDR_CAN_STATUS_BIT_ERR_MSK |
                 MDR_CAN_STATUS_BIT_STUFF_ERR_MSK |
                 MDR_CAN_STATUS_CRC_ERR_MSK |
                 MDR_CAN_STATUS_FRAME_ERR_MSK |
                 MDR_CAN_STATUS_ACK_ERR_MSK;

    can->STATUS &= ~( error_mask & clear_mask );
}

void MDR_CAN_InterruptEnable( MDR_CAN_TypeDef *can, uint32_t interrupt_mask )
{
    uint32_t enable_mask;

    enable_mask = MDR_CAN_INT_EN_GLB_INT_EN_MSK |
                  MDR_CAN_INT_EN_RX_INT_EN_MSK |
                  MDR_CAN_INT_EN_TX_INT_EN_MSK |
                  MDR_CAN_INT_EN_ERR_INT_EN_MSK |
                  MDR_CAN_INT_EN_ERR_OVER_INT_EN_MSK;

    can->INT_EN |= ( interrupt_mask & enable_mask );
}

void MDR_CAN_InterruptDisable( MDR_CAN_TypeDef *can, uint32_t interrupt_mask )
{
    uint32_t enable_mask;

    enable_mask = MDR_CAN_INT_EN_GLB_INT_EN_MSK |
                  MDR_CAN_INT_EN_RX_INT_EN_MSK |
                  MDR_CAN_INT_EN_TX_INT_EN_MSK |
                  MDR_CAN_INT_EN_ERR_INT_EN_MSK |
                  MDR_CAN_INT_EN_ERR_OVER_INT_EN_MSK;

    can->INT_EN &= ~( interrupt_mask & enable_mask );
}

void MDR_CAN_RxBufferInterruptEnable( MDR_CAN_TypeDef *can, uint8_t buffer )
{
    can->INT_RX |= CAN_CHANNEL_MSK( buffer );
}

void MDR_CAN_RxBufferInterruptDisable( MDR_CAN_TypeDef *can, uint8_t buffer )
{
    can->INT_RX &= ~CAN_CHANNEL_MSK( buffer );
}

void MDR_CAN_TxBufferInterruptEnable( MDR_CAN_TypeDef *can, uint8_t buffer )
{
    can->INT_TX |= CAN_CHANNEL_MSK( buffer );
}

void MDR_CAN_TxBufferInterruptDisable( MDR_CAN_TypeDef *can, uint8_t buffer )
{
    can->INT_TX &= ~CAN_CHANNEL_MSK( buffer );
}

void MDR_CAN_BufferEnable( MDR_CAN_TypeDef *can, uint8_t buffer )
{
    can->BUF_CON[buffer] |= MDR_CAN_BUF_CON_EN_ENABLE;
}

void MDR_CAN_BufferDisable( MDR_CAN_TypeDef *can, uint8_t buffer )
{
    can->BUF_CON[buffer] &= MDR_CAN_BUF_CON_EN_DISABLE;
}

void MDR_CAN_SetBufferMode( MDR_CAN_TypeDef *can, uint8_t buffer, uint32_t mode )
{
    can->BUF_CON[buffer] &= ~MDR_CAN_BUF_CON_RX_TXN_MSK;
    can->BUF_CON[buffer] |= ( mode & MDR_CAN_BUF_CON_RX_TXN_MSK );
}

void MDR_CAN_SetBufferPriority( MDR_CAN_TypeDef *can, uint8_t buffer, uint32_t priority )
{
    can->BUF_CON[buffer] &= ~MDR_CAN_BUF_CON_PRIOR_0_MSK;
    can->BUF_CON[buffer] |= ( priority & MDR_CAN_BUF_CON_PRIOR_0_MSK );
}

void MDR_CAN_SetBufferOverwrite( MDR_CAN_TypeDef *can, uint8_t buffer, uint32_t overwrite )
{
    can->BUF_CON[buffer] &= ~MDR_CAN_BUF_CON_OVER_EN_MSK;
    can->BUF_CON[buffer] |= ( overwrite & MDR_CAN_BUF_CON_OVER_EN_MSK );
}

void MDR_CAN_SetStandardID( MDR_CAN_TypeDef *can, uint8_t buffer, uint16_t identifier )
{
    can->CAN_BUF[buffer].ID = ( MDR_CAN_ID_SID_VALUE( identifier ) & MDR_CAN_ID_SID_MSK );
}

void MDR_CAN_SetExtendedID( MDR_CAN_TypeDef *can, uint8_t buffer, uint32_t identifier )
{
    can->CAN_BUF[buffer].ID =
        ( MDR_CAN_ID_EID_VALUE( identifier & 0x3FFFF ) & MDR_CAN_ID_EID_MSK ) |
        ( MDR_CAN_ID_SID_VALUE( ( identifier >> 18 ) & 0x7FF ) & MDR_CAN_ID_SID_MSK );
}

void MDR_CAN_SetDLC( MDR_CAN_TypeDef *can, uint8_t buffer, uint8_t length, uint32_t format, uint32_t rtr )
{
    if ( length > 8 )
    {
        length = 8;
    }

    can->CAN_BUF[buffer].DLC =
        ( MDR_CAN_DLC_DLC_VALUE( length ) & MDR_CAN_DLC_DLC_MSK ) |
        ( format & MDR_CAN_DLC_IDE_MSK ) |
        ( rtr & MDR_CAN_DLC_RTR_MSK );

    if ( ( format & MDR_CAN_DLC_IDE_MSK ) != 0 )
    {
        can->CAN_BUF[buffer].DLC |= MDR_CAN_DLC_SRR_ONE;
    }
}

void MDR_CAN_WriteBufferData( MDR_CAN_TypeDef *can, uint8_t buffer, const uint8_t *data, uint8_t length )
{
    uint32_t data_low;
    uint32_t data_high;
    uint8_t index;

    if ( length > 8 )
    {
        length = 8;
    }

    data_low = 0;
    data_high = 0;

    for ( index = 0; index < length; index++ )
    {
        if ( index < 4 )
        {
            data_low |= ( ( uint32_t )data[index] << ( index * 8 ) );
        }
        else
        {
            data_high |= ( ( uint32_t )data[index] << ( ( index - 4 ) * 8 ) );
        }
    }

    can->CAN_BUF[buffer].DATAL = data_low;
    can->CAN_BUF[buffer].DATAH = data_high;
}

void MDR_CAN_ReadBufferData( MDR_CAN_TypeDef *can, uint8_t buffer, uint8_t *data, uint8_t length )
{
    uint32_t data_low;
    uint32_t data_high;
    uint8_t index;

    if ( length > 8 )
    {
        length = 8;
    }

    data_low = can->CAN_BUF[buffer].DATAL;
    data_high = can->CAN_BUF[buffer].DATAH;

    for ( index = 0; index < length; index++ )
    {
        if ( index < 4 )
        {
            data[index] = ( uint8_t )( data_low >> ( index * 8 ) );
        }
        else
        {
            data[index] = ( uint8_t )( data_high >> ( ( index - 4 ) * 8 ) );
        }
    }
}

void MDR_CAN_RequestTransmission( MDR_CAN_TypeDef *can, uint8_t buffer )
{
    can->BUF_CON[buffer] |= MDR_CAN_BUF_CON_TX_REQ_REQUEST;
}

uint8_t MDR_CAN_IsTransmissionPending( MDR_CAN_TypeDef *can, uint8_t buffer )
{
    return ( ( can->BUF_CON[buffer] & MDR_CAN_BUF_CON_TX_REQ_MSK ) != 0 );
}

uint8_t MDR_CAN_IsReceiveFull( MDR_CAN_TypeDef *can, uint8_t buffer )
{
    return ( ( can->BUF_CON[buffer] & MDR_CAN_BUF_CON_RX_FULL_MSK ) != 0 );
}

void MDR_CAN_ClearReceiveFull( MDR_CAN_TypeDef *can, uint8_t buffer )
{
    can->BUF_CON[buffer] &= MDR_CAN_BUF_CON_RX_FULL_EMPTY;
}

void MDR_CAN_SetFilter( MDR_CAN_TypeDef *can, uint8_t buffer, uint32_t mask, uint32_t filter )
{
    uint32_t identifier_mask;

    identifier_mask = MDR_CAN_ID_EID_MSK | MDR_CAN_ID_SID_MSK;

    can->CAN_BUF_FILTER[buffer].MASK = ( mask & identifier_mask );
    can->CAN_BUF_FILTER[buffer].FILTER = ( filter & identifier_mask );
}