#ifndef __MILUINO_MDR_DAC_H // Headquard comment
#define __MILUINO_MDR_DAC_H

#include "MDR32F9Q2I.h"
#include <stdint.h>
// CFG register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_DAC_CFG_M_REF0_POS                                                            0
#define MDR_DAC_CFG_M_REF1_POS                                                            1
#define MDR_DAC_CFG_ON_DAC0_POS                                                           2
#define MDR_DAC_CFG_ON_DAC1_POS                                                           3
#define MDR_DAC_CFG_SYNC_A_POS                                                            4

#define MDR_DAC_CFG_M_REF0_MSK                                                             ( 0x01                     << MDR_DAC_CFG_M_REF0_POS                                                                       )
#define MDR_DAC_CFG_M_REF1_MSK                                                             ( 0x01                     << MDR_DAC_CFG_M_REF1_POS                                                                       )
#define MDR_DAC_CFG_ON_DAC0_MSK                                                            ( 0x01                     << MDR_DAC_CFG_ON_DAC0_POS                                                                      )
#define MDR_DAC_CFG_ON_DAC1_MSK                                                            ( 0x01                     << MDR_DAC_CFG_ON_DAC1_POS                                                                      )
#define MDR_DAC_CFG_SYNC_A_MSK                                                             ( 0x01                     << MDR_DAC_CFG_SYNC_A_POS                                                                       )

#define MDR_DAC_CFG_M_REF0_AUCC                                                           ~( 0x01                     << MDR_DAC_CFG_M_REF0_POS                                                                       )
#define MDR_DAC_CFG_M_REF0_DAC1_REF                                                        ( 0x01                     << MDR_DAC_CFG_M_REF0_POS                                                                       )

#define MDR_DAC_CFG_M_REF1_AUCC                                                           ~( 0x01                     << MDR_DAC_CFG_M_REF1_POS                                                                       )
#define MDR_DAC_CFG_M_REF1_DAC2_REF                                                        ( 0x01                     << MDR_DAC_CFG_M_REF1_POS                                                                       )

#define MDR_DAC_CFG_ON_DAC0_DISABLE                                                       ~( 0x01                     << MDR_DAC_CFG_ON_DAC0_POS                                                                      )
#define MDR_DAC_CFG_ON_DAC0_ENABLE                                                         ( 0x01                     << MDR_DAC_CFG_ON_DAC0_POS                                                                      )

#define MDR_DAC_CFG_ON_DAC1_DISABLE                                                       ~( 0x01                     << MDR_DAC_CFG_ON_DAC1_POS                                                                      )
#define MDR_DAC_CFG_ON_DAC1_ENABLE                                                         ( 0x01                     << MDR_DAC_CFG_ON_DAC1_POS                                                                      )

#define MDR_DAC_CFG_SYNC_A_ASYNCHRONOUS                                                   ~( 0x01                     << MDR_DAC_CFG_SYNC_A_POS                                                                       )
#define MDR_DAC_CFG_SYNC_A_SYNCHRONOUS                                                     ( 0x01                     << MDR_DAC_CFG_SYNC_A_POS                                                                       )

#define DAC_CFG_BIT_POS( x )                                                               ( x                                                                                                                        )
#define DAC_CFG_BIT_MSK( x )                                                               ( (uint32_t)0x01           << DAC_CFG_BIT_POS( x )                                                                         )

#define DAC_CFG_BIT_DISABLE( x )                                                          ~( (uint32_t)0x01           << DAC_CFG_BIT_POS( x )                                                                         )
#define DAC_CFG_BIT_ENABLE( x )                                                            ( (uint32_t)0x01           << DAC_CFG_BIT_POS( x )                                                                         )
// DAC1_DATA register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_DAC_DAC1_DATA_DAC0_DATA_POS                                                   0
#define MDR_DAC_DAC1_DATA_DAC1_DATA_POS                                                   16

#define MDR_DAC_DAC1_DATA_DAC0_DATA_MSK                                                    ( 0xFFF                    << MDR_DAC_DAC1_DATA_DAC0_DATA_POS                                                              )
#define MDR_DAC_DAC1_DATA_DAC1_DATA_MSK                                                    ( 0xFFF                    << MDR_DAC_DAC1_DATA_DAC1_DATA_POS                                                              )

#define MDR_DAC_DAC1_DATA_DAC0_DATA_ZERO                                                  ~( 0xFFF                    << MDR_DAC_DAC1_DATA_DAC0_DATA_POS                                                              )
#define MDR_DAC_DAC1_DATA_DAC0_DATA_VALUE( x )                                             ( ( x )                    << MDR_DAC_DAC1_DATA_DAC0_DATA_POS                                                              )

#define MDR_DAC_DAC1_DATA_DAC1_DATA_ZERO                                                  ~( 0xFFF                    << MDR_DAC_DAC1_DATA_DAC1_DATA_POS                                                              )
#define MDR_DAC_DAC1_DATA_DAC1_DATA_VALUE( x )                                             ( ( x )                    << MDR_DAC_DAC1_DATA_DAC1_DATA_POS                                                              )
// DAC2_DATA register
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_DAC_DAC2_DATA_DAC1_DATA_POS                                                   0
#define MDR_DAC_DAC2_DATA_DAC0_DATA_POS                                                   16

#define MDR_DAC_DAC2_DATA_DAC1_DATA_MSK                                                    ( 0xFFF                    << MDR_DAC_DAC2_DATA_DAC1_DATA_POS                                                              )
#define MDR_DAC_DAC2_DATA_DAC0_DATA_MSK                                                    ( 0xFFF                    << MDR_DAC_DAC2_DATA_DAC0_DATA_POS                                                              )

#define MDR_DAC_DAC2_DATA_DAC1_DATA_ZERO                                                  ~( 0xFFF                    << MDR_DAC_DAC2_DATA_DAC1_DATA_POS                                                              )
#define MDR_DAC_DAC2_DATA_DAC1_DATA_VALUE( x )                                             ( ( x )                    << MDR_DAC_DAC2_DATA_DAC1_DATA_POS                                                              )

#define MDR_DAC_DAC2_DATA_DAC0_DATA_ZERO                                                  ~( 0xFFF                    << MDR_DAC_DAC2_DATA_DAC0_DATA_POS                                                              )
#define MDR_DAC_DAC2_DATA_DAC0_DATA_VALUE( x )                                             ( ( x )                    << MDR_DAC_DAC2_DATA_DAC0_DATA_POS                                                              )
// CFG register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_DAC_CFG_M_REF0_AUCC_VAL                                                       0
#define MDR_DAC_CFG_M_REF0_DAC1_REF_VAL                                                   1

#define MDR_DAC_CFG_M_REF1_AUCC_VAL                                                       0
#define MDR_DAC_CFG_M_REF1_DAC2_REF_VAL                                                   1

#define MDR_DAC_CFG_ON_DAC0_DISABLE_VAL                                                   0
#define MDR_DAC_CFG_ON_DAC0_ENABLE_VAL                                                    1

#define MDR_DAC_CFG_ON_DAC1_DISABLE_VAL                                                   0
#define MDR_DAC_CFG_ON_DAC1_ENABLE_VAL                                                    1

#define MDR_DAC_CFG_SYNC_A_ASYNCHRONOUS_VAL                                               0
#define MDR_DAC_CFG_SYNC_A_SYNCHRONOUS_VAL                                                1

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t M_REF0               : 1;
        uint32_t M_REF1               : 1;
        uint32_t ON_DAC0              : 1;
        uint32_t ON_DAC1              : 1;
        uint32_t SYNC_A               : 1;
        uint32_t                      : 27;
    };

} MDR_DAC_CFG_TypeDef;
// DAC1_DATA register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_DAC_DAC1_DATA_DAC0_DATA_ZERO_VAL                                              0

#define MDR_DAC_DAC1_DATA_DAC1_DATA_ZERO_VAL                                              0

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t DAC0_DATA            : 12;
        uint32_t                      : 4;
        uint32_t DAC1_DATA            : 12;
        uint32_t                      : 4;
    };

} MDR_DAC_DAC1_DATA_TypeDef;
// DAC2_DATA register Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_DAC_DAC2_DATA_DAC1_DATA_ZERO_VAL                                              0

#define MDR_DAC_DAC2_DATA_DAC0_DATA_ZERO_VAL                                              0

typedef union
{
    uint32_t Register : 32;

    struct
    {
        uint32_t DAC1_DATA            : 12;
        uint32_t                      : 4;
        uint32_t DAC0_DATA            : 12;
        uint32_t                      : 4;
    };

} MDR_DAC_DAC2_DATA_TypeDef;
// DAC structure Union
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef struct
{
    __IO MDR_DAC_CFG_TypeDef       CFG;
    __IO MDR_DAC_DAC1_DATA_TypeDef DAC1_DATA;
    __IO MDR_DAC_DAC2_DATA_TypeDef DAC2_DATA;

} MDR_DAC_TypeDefUnion;

// DAC addresses
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define MDR_DAC_UNION_BASE                                                           ( 0x40090000                                                )
#define MDR_DAC_CFG_ADDRESS                                                          ( MDR_DAC_UNION_BASE + 0x00                                 )
#define MDR_DAC_DAC1_DATA_ADDRESS                                                    ( MDR_DAC_UNION_BASE + 0x04                                 )
#define MDR_DAC_DAC2_DATA_ADDRESS                                                    ( MDR_DAC_UNION_BASE + 0x08                                 )

#define MDR_DAC_UNION                                                                ( ( MDR_DAC_TypeDefUnion * ) MDR_DAC_UNION_BASE             )

#endif