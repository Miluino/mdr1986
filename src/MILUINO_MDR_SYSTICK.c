#include "MILUINO_MDR_SYSTICK.h"

#include <stdint.h>

// SysTick Union functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_SYSTICK_Union_Enable( void )
{
    MDR_SYSTICK_UNION->CTRL.Register |= MDR_SYSTICK_CTRL_ENABLE_ENABLE;
}

void MDR_SYSTICK_Union_Disable( void )
{
    MDR_SYSTICK_UNION->CTRL.Register &= MDR_SYSTICK_CTRL_ENABLE_DISABLE;
}

void MDR_SYSTICK_Union_SetClockSource( uint32_t clock_source )
{
    MDR_SYSTICK_UNION->CTRL.Register &= ~MDR_SYSTICK_CTRL_CLKSOURCE_MSK;
    MDR_SYSTICK_UNION->CTRL.Register |= ( clock_source & MDR_SYSTICK_CTRL_CLKSOURCE_MSK );
}

void MDR_SYSTICK_Union_InterruptEnable( void )
{
    MDR_SYSTICK_UNION->CTRL.Register |= MDR_SYSTICK_CTRL_TICKINT_REQUEST;
}

void MDR_SYSTICK_Union_InterruptDisable( void )
{
    MDR_SYSTICK_UNION->CTRL.Register &= MDR_SYSTICK_CTRL_TICKINT_NO_REQUEST;
}

void MDR_SYSTICK_Union_SetReload( uint32_t reload )
{
    MDR_SYSTICK_UNION->LOAD.Register &= ~MDR_SYSTICK_LOAD_RELOAD_MSK;
    MDR_SYSTICK_UNION->LOAD.Register |= ( MDR_SYSTICK_LOAD_RELOAD_VALUE( reload ) & MDR_SYSTICK_LOAD_RELOAD_MSK );
}

uint32_t MDR_SYSTICK_Union_GetReload( void )
{
    return ( MDR_SYSTICK_UNION->LOAD.Register & MDR_SYSTICK_LOAD_RELOAD_MSK );
}

void MDR_SYSTICK_Union_ClearCurrent( void )
{
    MDR_SYSTICK_UNION->VAL.Register = 0;
}

uint32_t MDR_SYSTICK_Union_GetCurrent( void )
{
    return ( MDR_SYSTICK_UNION->VAL.Register & MDR_SYSTICK_VAL_CURRENT_MSK );
}

uint8_t MDR_SYSTICK_Union_GetCountFlag( void )
{
    return ( ( MDR_SYSTICK_UNION->CTRL.Register & MDR_SYSTICK_CTRL_COUNTFLAG_MSK ) != 0 );
}

// SysTick CMSIS functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_SYSTICK_Enable( void )
{
    SysTick->CTRL |= MDR_SYSTICK_CTRL_ENABLE_ENABLE;
}

void MDR_SYSTICK_Disable( void )
{
    SysTick->CTRL &= MDR_SYSTICK_CTRL_ENABLE_DISABLE;
}

void MDR_SYSTICK_SetClockSource( uint32_t clock_source )
{
    SysTick->CTRL &= ~MDR_SYSTICK_CTRL_CLKSOURCE_MSK;
    SysTick->CTRL |= ( clock_source & MDR_SYSTICK_CTRL_CLKSOURCE_MSK );
}

void MDR_SYSTICK_InterruptEnable( void )
{
    SysTick->CTRL |= MDR_SYSTICK_CTRL_TICKINT_REQUEST;
}

void MDR_SYSTICK_InterruptDisable( void )
{
    SysTick->CTRL &= MDR_SYSTICK_CTRL_TICKINT_NO_REQUEST;
}

void MDR_SYSTICK_SetReload( uint32_t reload )
{
    SysTick->LOAD &= ~MDR_SYSTICK_LOAD_RELOAD_MSK;
    SysTick->LOAD |= ( MDR_SYSTICK_LOAD_RELOAD_VALUE( reload ) & MDR_SYSTICK_LOAD_RELOAD_MSK );
}

uint32_t MDR_SYSTICK_GetReload( void )
{
    return ( SysTick->LOAD & MDR_SYSTICK_LOAD_RELOAD_MSK );
}

void MDR_SYSTICK_ClearCurrent( void )
{
    SysTick->VAL = 0;
}

uint32_t MDR_SYSTICK_GetCurrent( void )
{
    return ( SysTick->VAL & MDR_SYSTICK_VAL_CURRENT_MSK );
}

uint8_t MDR_SYSTICK_GetCountFlag( void )
{
    return ( ( SysTick->CTRL & MDR_SYSTICK_CTRL_COUNTFLAG_MSK ) != 0 );
}


void MDR_SYSTICK_DelayUs( uint32_t microseconds, uint32_t hclk_hz )
{
    uint64_t ticks;
    uint32_t current_ticks;

    ticks = ( ( uint64_t )hclk_hz * microseconds ) / 1000000;

    if ( ticks == 0 )
    {
        return;
    }

    MDR_SYSTICK_SetClockSource( MDR_SYSTICK_CTRL_CLKSOURCE_HCLK );
    MDR_SYSTICK_InterruptDisable();

    while ( ticks != 0 )
    {
        if ( ticks > 0x01000000 )
        {
            current_ticks = 0x01000000;
        }
        else
        {
            current_ticks = ( uint32_t )ticks;
        }

        MDR_SYSTICK_SetReload( current_ticks - 1 );
        MDR_SYSTICK_ClearCurrent();
        MDR_SYSTICK_Enable();

        while ( MDR_SYSTICK_GetCountFlag() == 0 )
        {
        }

        MDR_SYSTICK_Disable();

        ticks -= current_ticks;
    }
}