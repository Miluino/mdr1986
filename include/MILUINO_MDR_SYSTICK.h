#ifndef __MILUINO_MDR_SYSTICK_H
#define __MILUINO_MDR_SYSTICK_H

#include "MDR32F9Q2I.h"
#include "core_cm3.h"
#include <stdint.h>

// CTRL register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SYSTICK_CTRL_ENABLE_POS                                  0
#define MDR_SYSTICK_CTRL_TICKINT_POS                                 1
#define MDR_SYSTICK_CTRL_CLKSOURCE_POS                               2
#define MDR_SYSTICK_CTRL_COUNTFLAG_POS                               16

#define MDR_SYSTICK_CTRL_ENABLE_MSK                                ( 0x01 << MDR_SYSTICK_CTRL_ENABLE_POS                    )
#define MDR_SYSTICK_CTRL_TICKINT_MSK                               ( 0x01 << MDR_SYSTICK_CTRL_TICKINT_POS                   )
#define MDR_SYSTICK_CTRL_CLKSOURCE_MSK                             ( 0x01 << MDR_SYSTICK_CTRL_CLKSOURCE_POS                 )
#define MDR_SYSTICK_CTRL_COUNTFLAG_MSK                             ( 0x01 << MDR_SYSTICK_CTRL_COUNTFLAG_POS                 )

#define MDR_SYSTICK_CTRL_ENABLE_DISABLE                           ~( 0x01 << MDR_SYSTICK_CTRL_ENABLE_POS                    )
#define MDR_SYSTICK_CTRL_ENABLE_ENABLE                             ( 0x01 << MDR_SYSTICK_CTRL_ENABLE_POS                    )

#define MDR_SYSTICK_CTRL_TICKINT_NO_REQUEST                       ~( 0x01 << MDR_SYSTICK_CTRL_TICKINT_POS                   )
#define MDR_SYSTICK_CTRL_TICKINT_REQUEST                           ( 0x01 << MDR_SYSTICK_CTRL_TICKINT_POS                   )

#define MDR_SYSTICK_CTRL_CLKSOURCE_LSI                            ~( 0x01 << MDR_SYSTICK_CTRL_CLKSOURCE_POS                 )
#define MDR_SYSTICK_CTRL_CLKSOURCE_HCLK                            ( 0x01 << MDR_SYSTICK_CTRL_CLKSOURCE_POS                 )

#define MDR_SYSTICK_CTRL_COUNTFLAG_NOT_COUNTED_TO_ZERO            ~( 0x01 << MDR_SYSTICK_CTRL_COUNTFLAG_POS                 )
#define MDR_SYSTICK_CTRL_COUNTFLAG_COUNTED_TO_ZERO                 ( 0x01 << MDR_SYSTICK_CTRL_COUNTFLAG_POS                 )

#define SYSTICK_CTRL_BIT_POS( x )                                  ( x                                                      )
#define SYSTICK_CTRL_BIT_MSK( x )                                  ( 0x01 << SYSTICK_CTRL_BIT_POS( x )                      )

#define SYSTICK_CTRL_BIT_CLEAR( x )                               ~( 0x01 << SYSTICK_CTRL_BIT_POS( x )                      )
#define SYSTICK_CTRL_BIT_SET( x )                                  ( 0x01 << SYSTICK_CTRL_BIT_POS( x )                      )

// LOAD register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SYSTICK_LOAD_RELOAD_POS                                 0

#define MDR_SYSTICK_LOAD_RELOAD_MSK                               ( 0x00FFFFFF << MDR_SYSTICK_LOAD_RELOAD_POS               )

#define MDR_SYSTICK_LOAD_RELOAD_ZERO                             ~( 0x00FFFFFF << MDR_SYSTICK_LOAD_RELOAD_POS               )
#define MDR_SYSTICK_LOAD_RELOAD_VALUE( x )                        ( ( x ) << MDR_SYSTICK_LOAD_RELOAD_POS                    )

#define SYSTICK_LOAD_RELOAD_POS                                     0
#define SYSTICK_LOAD_RELOAD_MSK                                   ( 0x00FFFFFF << SYSTICK_LOAD_RELOAD_POS                   )

#define SYSTICK_LOAD_RELOAD_ZERO                                 ~( 0x00FFFFFF << SYSTICK_LOAD_RELOAD_POS                   )
#define SYSTICK_LOAD_RELOAD_VALUE( x )                            ( ( x ) << SYSTICK_LOAD_RELOAD_POS                        )

// VAL register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SYSTICK_VAL_CURRENT_POS                                 0

#define MDR_SYSTICK_VAL_CURRENT_MSK                               ( 0x00FFFFFF << MDR_SYSTICK_VAL_CURRENT_POS               )

#define MDR_SYSTICK_VAL_CURRENT_ZERO                             ~( 0x00FFFFFF << MDR_SYSTICK_VAL_CURRENT_POS               )
#define MDR_SYSTICK_VAL_CURRENT_VALUE( x )                        ( ( x ) << MDR_SYSTICK_VAL_CURRENT_POS                    )

#define SYSTICK_VAL_CURRENT_POS                                     0
#define SYSTICK_VAL_CURRENT_MSK                                   ( 0x00FFFFFF << SYSTICK_VAL_CURRENT_POS                   )

#define SYSTICK_VAL_CURRENT_ZERO                                 ~( 0x00FFFFFF << SYSTICK_VAL_CURRENT_POS                   )
#define SYSTICK_VAL_CURRENT_VALUE( x )                            ( ( x ) << SYSTICK_VAL_CURRENT_POS                        )

// CAL register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SYSTICK_CAL_TENMS_POS                                   0
#define MDR_SYSTICK_CAL_SKEW_POS                                    30
#define MDR_SYSTICK_CAL_NOREF_POS                                   31

#define MDR_SYSTICK_CAL_TENMS_MSK                                 ( 0x00FFFFFF << MDR_SYSTICK_CAL_TENMS_POS                 )
#define MDR_SYSTICK_CAL_SKEW_MSK                                  ( 0x01 << MDR_SYSTICK_CAL_SKEW_POS                        )
#define MDR_SYSTICK_CAL_NOREF_MSK                                 ( 0x01 << MDR_SYSTICK_CAL_NOREF_POS                       )

#define MDR_SYSTICK_CAL_TENMS_ZERO                               ~( 0x00FFFFFF << MDR_SYSTICK_CAL_TENMS_POS                 )
#define MDR_SYSTICK_CAL_SKEW_ZERO                                ~( 0x01 << MDR_SYSTICK_CAL_SKEW_POS                        )
#define MDR_SYSTICK_CAL_NOREF_ZERO                               ~( 0x01 << MDR_SYSTICK_CAL_NOREF_POS                       )

#define SYSTICK_CAL_TENMS_POS                                       0
#define SYSTICK_CAL_FLAG_POS( x )                                  ( x                                                      )

#define SYSTICK_CAL_TENMS_MSK                                    ( 0x00FFFFFF << SYSTICK_CAL_TENMS_POS                      )
#define SYSTICK_CAL_FLAG_MSK( x )                                  ( 0x01 << SYSTICK_CAL_FLAG_POS( x )                      )

#define SYSTICK_CAL_TENMS_ZERO                                  ~( 0x00FFFFFF << SYSTICK_CAL_TENMS_POS                      )
#define SYSTICK_CAL_FLAG_ZERO( x )                               ~( 0x01 << SYSTICK_CAL_FLAG_POS( x )                       )

// CTRL register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SYSTICK_CTRL_ENABLE_DISABLE_VAL                         0
#define MDR_SYSTICK_CTRL_ENABLE_ENABLE_VAL                          1

#define MDR_SYSTICK_CTRL_TICKINT_NO_REQUEST_VAL                     0
#define MDR_SYSTICK_CTRL_TICKINT_REQUEST_VAL                        1

#define MDR_SYSTICK_CTRL_CLKSOURCE_LSI_VAL                          0
#define MDR_SYSTICK_CTRL_CLKSOURCE_HCLK_VAL                         1

#define MDR_SYSTICK_CTRL_COUNTFLAG_NOT_COUNTED_TO_ZERO_VAL          0
#define MDR_SYSTICK_CTRL_COUNTFLAG_COUNTED_TO_ZERO_VAL              1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t ENABLE    : 1;
        uint32_t TICKINT   : 1;
        uint32_t CLKSOURCE : 1;
        uint32_t           : 13;
        uint32_t COUNTFLAG : 1;
        uint32_t           : 15;
    };

} MDR_SYSTICK_CTRL_TypeDef;

// LOAD register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SYSTICK_LOAD_RELOAD_ZERO_VAL                            0
#define MDR_SYSTICK_LOAD_RELOAD_VAL( x )                           ( x                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t RELOAD : 24;
        uint32_t        : 8;
    };

} MDR_SYSTICK_LOAD_TypeDef;

// VAL register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SYSTICK_VAL_CURRENT_ZERO_VAL                            0
#define MDR_SYSTICK_VAL_CURRENT_VAL( x )                           ( x                                                      )

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t CURRENT : 24;
        uint32_t         : 8;
    };

} MDR_SYSTICK_VAL_TypeDef;

// CAL register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_SYSTICK_CAL_TENMS_ZERO_VAL                              0
#define MDR_SYSTICK_CAL_SKEW_ZERO_VAL                               0
#define MDR_SYSTICK_CAL_NOREF_ZERO_VAL                              0

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t TENMS : 24;
        uint32_t       : 6;
        uint32_t SKEW  : 1;
        uint32_t NOREF : 1;
    };

} MDR_SYSTICK_CAL_TypeDef;

// SysTick structure Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef struct
{
    __IO MDR_SYSTICK_CTRL_TypeDef CTRL;
    __IO MDR_SYSTICK_LOAD_TypeDef LOAD;
    __IO MDR_SYSTICK_VAL_TypeDef  VAL;
    __I  MDR_SYSTICK_CAL_TypeDef  CAL;

} MDR_SYSTICK_TypeDefUnion;

// SysTick addresses
#define MDR_SYSTICK_BASE                                           0xE000E010
#define MDR_SYSTICK_CTRL_ADDRESS                                   ( MDR_SYSTICK_BASE + 0x00                                  )
#define MDR_SYSTICK_LOAD_ADDRESS                                   ( MDR_SYSTICK_BASE + 0x04                                  )
#define MDR_SYSTICK_VAL_ADDRESS                                    ( MDR_SYSTICK_BASE + 0x08                                  )
#define MDR_SYSTICK_CAL_ADDRESS                                    ( MDR_SYSTICK_BASE + 0x0C                                  )

#define MDR_SYSTICK                                                ( ( MDR_SYSTICK_TypeDefUnion * ) MDR_SYSTICK_BASE          )
#define SYSTICK                                                    MDR_SYSTICK
// SysTick Union functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void MDR_SYSTICK_Union_Enable( void );
void MDR_SYSTICK_Union_Disable( void );

void MDR_SYSTICK_Union_SetClockSource( uint32_t clock_source );

void MDR_SYSTICK_Union_InterruptEnable( void );
void MDR_SYSTICK_Union_InterruptDisable( void );

void MDR_SYSTICK_Union_SetReload( uint32_t reload );
uint32_t MDR_SYSTICK_Union_GetReload( void );

void MDR_SYSTICK_Union_ClearCurrent( void );
uint32_t MDR_SYSTICK_Union_GetCurrent( void );

uint8_t MDR_SYSTICK_Union_GetCountFlag( void );


// SysTick CMSIS functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void MDR_SYSTICK_Enable( void );
void MDR_SYSTICK_Disable( void );

void MDR_SYSTICK_SetClockSource( uint32_t clock_source );

void MDR_SYSTICK_InterruptEnable( void );
void MDR_SYSTICK_InterruptDisable( void );

void MDR_SYSTICK_SetReload( uint32_t reload );
uint32_t MDR_SYSTICK_GetReload( void );

void MDR_SYSTICK_ClearCurrent( void );
uint32_t MDR_SYSTICK_GetCurrent( void );

uint8_t MDR_SYSTICK_GetCountFlag( void );


// SysTick Delay functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void MDR_SYSTICK_DelayUs( uint32_t microseconds, uint32_t hclk_hz );
#endif