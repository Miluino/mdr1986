#include "MILUINO_MDR_GPIO.h"

#include <stdint.h>

// PORT Union RXTX functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_Union_RXTX_SetHigh( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask )
{
    port->RXTX.Register |= pin_mask;
}

void MDR_PORT_Union_RXTX_SetLow( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask )
{
    port->RXTX.Register &= pin_mask;
}

void MDR_PORT_Union_RXTX_Toggle( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask )
{
    port->RXTX.Register ^= pin_mask;
}

uint32_t MDR_PORT_Union_RXTX_Read( MDR_PORT_TypeDefUnion *port )
{
    return port->RXTX.Register;
}

// PORT Union OE functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_Union_OE_SetInput( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask )
{
    port->OE.Register &= pin_mask;
}

void MDR_PORT_Union_OE_SetOutput( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask )
{
    port->OE.Register |= pin_mask;
}

// PORT Union FUNC functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_Union_FUNC_Set( MDR_PORT_TypeDefUnion *port, uint32_t func_mask, uint32_t func_value )
{
    port->FUNC.Register &= ~func_mask;
    port->FUNC.Register |= ( func_value & func_mask );
}

// PORT Union ANALOG functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_Union_ANALOG_DigitalEnable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask )
{
    port->ANALOG.Register |= pin_mask;
}

void MDR_PORT_Union_ANALOG_DigitalDisable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask )
{
    port->ANALOG.Register &= pin_mask;
}

// PORT Union PULL functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_Union_PULL_UpEnable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask )
{
    port->PULL.Register |= pin_mask;
}

void MDR_PORT_Union_PULL_UpDisable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask )
{
    port->PULL.Register &= pin_mask;
}

void MDR_PORT_Union_PULL_DownEnable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask )
{
    port->PULL.Register |= pin_mask;
}

void MDR_PORT_Union_PULL_DownDisable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask )
{
    port->PULL.Register &= pin_mask;
}

// PORT Union PD functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_Union_PD_OpenDrainEnable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask )
{
    port->PD.Register |= pin_mask;
}

void MDR_PORT_Union_PD_OpenDrainDisable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask )
{
    port->PD.Register &= pin_mask;
}

void MDR_PORT_Union_PD_SchmittEnable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask )
{
    port->PD.Register |= pin_mask;
}

void MDR_PORT_Union_PD_SchmittDisable( MDR_PORT_TypeDefUnion *port, uint32_t pin_mask )
{
    port->PD.Register &= pin_mask;
}

// PORT Union PWR functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_Union_PWR_Set( MDR_PORT_TypeDefUnion *port, uint32_t pwr_mask, uint32_t pwr_value )
{
    port->PWR.Register &= ~pwr_mask;
    port->PWR.Register |= ( pwr_value & pwr_mask );
}

// PORT Union GFEN functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_Union_GFEN_Enable( MDR_PORT_TypeDefUnion *port, uint32_t gfen_mask )
{
    port->GFEN.Register |= gfen_mask;
}

void MDR_PORT_Union_GFEN_Disable( MDR_PORT_TypeDefUnion *port, uint32_t gfen_mask )
{
    port->GFEN.Register &= gfen_mask;
}


// PORT Milandr RXTX functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_RXTX_SetHigh( MDR_PORT_TypeDef *port, uint32_t pin_mask )
{
    port->RXTX |= pin_mask;
}

void MDR_PORT_RXTX_SetLow( MDR_PORT_TypeDef *port, uint32_t pin_mask )
{
    port->RXTX &= ~pin_mask;
}

void MDR_PORT_RXTX_Toggle( MDR_PORT_TypeDef *port, uint32_t pin_mask )
{
    port->RXTX ^= pin_mask;
}

uint32_t MDR_PORT_RXTX_Read( MDR_PORT_TypeDef *port )
{
    return port->RXTX;
}

// PORT Milandr OE functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_OE_SetInput( MDR_PORT_TypeDef *port, uint32_t pin_mask )
{
    port->OE &= ~pin_mask;
}

void MDR_PORT_OE_SetOutput( MDR_PORT_TypeDef *port, uint32_t pin_mask )
{
    port->OE |= pin_mask;
}

// PORT Milandr FUNC functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_FUNC_Set( MDR_PORT_TypeDef *port, uint32_t func_mask, uint32_t func_value )
{
    port->FUNC &= ~func_mask;
    port->FUNC |= ( func_value & func_mask );
}

// PORT Milandr ANALOG functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_ANALOG_DigitalEnable( MDR_PORT_TypeDef *port, uint32_t pin_mask )
{
    port->ANALOG |= pin_mask;
}

void MDR_PORT_ANALOG_DigitalDisable( MDR_PORT_TypeDef *port, uint32_t pin_mask )
{
    port->ANALOG &= pin_mask;
}

// PORT Milandr PULL functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_PULL_UpEnable( MDR_PORT_TypeDef *port, uint32_t pin_mask )
{
    port->PULL |= pin_mask;
}

void MDR_PORT_PULL_UpDisable( MDR_PORT_TypeDef *port, uint32_t pin_mask )
{
    port->PULL &= pin_mask;
}

void MDR_PORT_PULL_DownEnable( MDR_PORT_TypeDef *port, uint32_t pin_mask )
{
    port->PULL |= pin_mask;
}

void MDR_PORT_PULL_DownDisable( MDR_PORT_TypeDef *port, uint32_t pin_mask )
{
    port->PULL &= pin_mask;
}

// PORT Milandr PD functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_PD_OpenDrainEnable( MDR_PORT_TypeDef *port, uint32_t pin_mask )
{
    port->PD |= pin_mask;
}

void MDR_PORT_PD_OpenDrainDisable( MDR_PORT_TypeDef *port, uint32_t pin_mask )
{
    port->PD &= pin_mask;
}

void MDR_PORT_PD_SchmittEnable( MDR_PORT_TypeDef *port, uint32_t pin_mask )
{
    port->PD |= pin_mask;
}

void MDR_PORT_PD_SchmittDisable( MDR_PORT_TypeDef *port, uint32_t pin_mask )
{
    port->PD &= pin_mask;
}

// PORT Milandr PWR functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_PWR_Set( MDR_PORT_TypeDef *port, uint32_t pwr_mask, uint32_t pwr_value )
{
    port->PWR &= ~pwr_mask;
    port->PWR |= ( pwr_value & pwr_mask );
}

// PORT Milandr GFEN functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_PORT_GFEN_Enable( MDR_PORT_TypeDef *port, uint32_t gfen_mask )
{
    port->GFEN |= gfen_mask;
}

void MDR_PORT_GFEN_Disable( MDR_PORT_TypeDef *port, uint32_t gfen_mask )
{
    port->GFEN &= gfen_mask;
}