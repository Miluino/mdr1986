#include "MILUINO_MDR_TIMER.h"

#include <stdint.h>

// TIMER Union functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_TIMER_Union_Enable( MDR_TIMER_TypeDefUnion *timer )
{
    timer->CNTRL.Register |= MDR_TIMER_CNTRL_CNT_EN_ENABLE;
}

void MDR_TIMER_Union_Disable( MDR_TIMER_TypeDefUnion *timer )
{
    timer->CNTRL.Register &= MDR_TIMER_CNTRL_CNT_EN_DISABLE;
}

void MDR_TIMER_Union_SetPrescaler( MDR_TIMER_TypeDefUnion *timer, uint16_t prescaler )
{
    timer->PSG.Register &= ~MDR_TIMER_PSG_PSG_MSK;
    timer->PSG.Register |= ( MDR_TIMER_PSG_PSG_VALUE( prescaler ) & MDR_TIMER_PSG_PSG_MSK );
}

void MDR_TIMER_Union_SetAutoReload( MDR_TIMER_TypeDefUnion *timer, uint16_t reload )
{
    timer->ARR.Register &= ~MDR_TIMER_ARR_ARR_MSK;
    timer->ARR.Register |= ( MDR_TIMER_ARR_ARR_VALUE( reload ) & MDR_TIMER_ARR_ARR_MSK );
}

void MDR_TIMER_Union_SetCounter( MDR_TIMER_TypeDefUnion *timer, uint16_t value )
{
    timer->CNT.Register &= ~MDR_TIMER_CNT_CNT_MSK;
    timer->CNT.Register |= ( MDR_TIMER_CNT_CNT_VALUE( value ) & MDR_TIMER_CNT_CNT_MSK );
}

uint16_t MDR_TIMER_Union_GetCounter( MDR_TIMER_TypeDefUnion *timer )
{
    return timer->CNT.Register;
}

void MDR_TIMER_Union_SetDirectionUp( MDR_TIMER_TypeDefUnion *timer )
{
    timer->CNTRL.Register &= MDR_TIMER_CNTRL_DIR_UP;
}

void MDR_TIMER_Union_SetDirectionDown( MDR_TIMER_TypeDefUnion *timer )
{
    timer->CNTRL.Register |= MDR_TIMER_CNTRL_DIR_DOWN;
}

uint32_t MDR_TIMER_Union_GetStatus( MDR_TIMER_TypeDefUnion *timer )
{
    return timer->STATUS.Register;
}

void MDR_TIMER_Union_ClearStatus( MDR_TIMER_TypeDefUnion *timer, uint32_t status_mask )
{
    timer->STATUS.Register &= ~status_mask;
}

void MDR_TIMER_Union_InterruptEnable( MDR_TIMER_TypeDefUnion *timer, uint32_t interrupt_mask )
{
    timer->IE.Register |= interrupt_mask;
}

void MDR_TIMER_Union_InterruptDisable( MDR_TIMER_TypeDefUnion *timer, uint32_t interrupt_mask )
{
    timer->IE.Register &= ~interrupt_mask;
}

// TIMER Milandr functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_TIMER_Enable( MDR_TIMER_TypeDef *timer )
{
    timer->CNTRL |= MDR_TIMER_CNTRL_CNT_EN_ENABLE;
}

void MDR_TIMER_Disable( MDR_TIMER_TypeDef *timer )
{
    timer->CNTRL &= MDR_TIMER_CNTRL_CNT_EN_DISABLE;
}

void MDR_TIMER_SetPrescaler( MDR_TIMER_TypeDef *timer, uint16_t prescaler )
{
    timer->PSG &= ~MDR_TIMER_PSG_PSG_MSK;
    timer->PSG |= ( MDR_TIMER_PSG_PSG_VALUE( prescaler ) & MDR_TIMER_PSG_PSG_MSK );
}

void MDR_TIMER_SetAutoReload( MDR_TIMER_TypeDef *timer, uint16_t reload )
{
    timer->ARR &= ~MDR_TIMER_ARR_ARR_MSK;
    timer->ARR |= ( MDR_TIMER_ARR_ARR_VALUE( reload ) & MDR_TIMER_ARR_ARR_MSK );
}

void MDR_TIMER_SetCounter( MDR_TIMER_TypeDef *timer, uint16_t value )
{
    timer->CNT &= ~MDR_TIMER_CNT_CNT_MSK;
    timer->CNT |= ( MDR_TIMER_CNT_CNT_VALUE( value ) & MDR_TIMER_CNT_CNT_MSK );
}

uint16_t MDR_TIMER_GetCounter( MDR_TIMER_TypeDef *timer )
{
    return timer->CNT;
}

void MDR_TIMER_SetDirectionUp( MDR_TIMER_TypeDef *timer )
{
    timer->CNTRL &= MDR_TIMER_CNTRL_DIR_UP;
}

void MDR_TIMER_SetDirectionDown( MDR_TIMER_TypeDef *timer )
{
    timer->CNTRL |= MDR_TIMER_CNTRL_DIR_DOWN;
}

uint32_t MDR_TIMER_GetStatus( MDR_TIMER_TypeDef *timer )
{
    return timer->STATUS;
}

void MDR_TIMER_ClearStatus( MDR_TIMER_TypeDef *timer, uint32_t status_mask )
{
    timer->STATUS &= ~status_mask;
}

void MDR_TIMER_InterruptEnable( MDR_TIMER_TypeDef *timer, uint32_t interrupt_mask )
{
    timer->IE |= interrupt_mask;
}

void MDR_TIMER_InterruptDisable( MDR_TIMER_TypeDef *timer, uint32_t interrupt_mask )
{
    timer->IE &= ~interrupt_mask;
}