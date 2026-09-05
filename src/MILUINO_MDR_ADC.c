#include "MILUINO_MDR_ADC.h"

#include <stdbool.h>
#include <stdint.h>

// ADC Union functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_ADC_Union_ADC1_Enable( void )
{
    MDR_ADC_UNION->ADC1_CFG.Register |= MDR_ADC_ADC1_CFG_ADON_ENABLE;
}

void MDR_ADC_Union_ADC1_Disable( void )
{
    MDR_ADC_UNION->ADC1_CFG.Register &= MDR_ADC_ADC1_CFG_ADON_DISABLE;
}

void MDR_ADC_Union_ADC2_Enable( void )
{
    MDR_ADC_UNION->ADC2_CFG.Register |= MDR_ADC_ADC2_CFG_ADON_ENABLE;
}

void MDR_ADC_Union_ADC2_Disable( void )
{
    MDR_ADC_UNION->ADC2_CFG.Register &= MDR_ADC_ADC2_CFG_ADON_DISABLE;
}

void MDR_ADC_Union_SetChannel( uint32_t channel )
{
    MDR_ADC_UNION->ADC1_CFG.Register &= ~MDR_ADC_ADC1_CFG_CHS_MSK;
    MDR_ADC_UNION->ADC1_CFG.Register |= ( channel & MDR_ADC_ADC1_CFG_CHS_MSK );
}

void MDR_ADC_Union_ADC1_StartConversion( void )
{
    MDR_ADC_UNION->ADC1_CFG.Register |= MDR_ADC_ADC1_CFG_GO_START;
}

bool MDR_ADC_Union_ADC1_IsConversionComplete( void )
{
    return ( MDR_ADC_UNION->ADC1_STATUS.Register & MDR_ADC_ADC_STATUS_EOCIF_MSK ) != 0;
}

uint16_t MDR_ADC_Union_ADC1_GetResult( void )
{
    return ( uint16_t )( MDR_ADC_UNION->ADC1_RESULT.Register & MDR_ADC_ADC_RESULT_RESULT_MSK );
}

void MDR_ADC_Union_ADC1_SetSampleMode( uint32_t mode )
{
    MDR_ADC_UNION->ADC1_CFG.Register &= ~MDR_ADC_ADC1_CFG_SAMPLE_MSK;
    MDR_ADC_UNION->ADC1_CFG.Register |= ( mode & MDR_ADC_ADC1_CFG_SAMPLE_MSK );
}

void MDR_ADC_Union_ADC1_SetChannelSwitching( uint32_t switching )
{
    MDR_ADC_UNION->ADC1_CFG.Register &= ~MDR_ADC_ADC1_CFG_CHCH_MSK;
    MDR_ADC_UNION->ADC1_CFG.Register |= ( switching & MDR_ADC_ADC1_CFG_CHCH_MSK );
}

void MDR_ADC_Union_ADC1_SetClockDivider( uint32_t divider )
{
    MDR_ADC_UNION->ADC1_CFG.Register &= ~MDR_ADC_ADC1_CFG_DIVCLK_MSK;
    MDR_ADC_UNION->ADC1_CFG.Register |= ( divider & MDR_ADC_ADC1_CFG_DIVCLK_MSK );
}

void MDR_ADC_Union_ADC1_SetReference( uint32_t reference )
{
    MDR_ADC_UNION->ADC1_CFG.Register &= ~MDR_ADC_ADC1_CFG_M_REF_MSK;
    MDR_ADC_UNION->ADC1_CFG.Register |= ( reference & MDR_ADC_ADC1_CFG_M_REF_MSK );
}

void MDR_ADC_Union_ADC1_SetChannel( uint32_t channel )
{
    MDR_ADC_UNION->ADC1_CFG.Register &= ~MDR_ADC_ADC1_CFG_CHS_MSK;
    MDR_ADC_UNION->ADC1_CFG.Register |= ( channel & MDR_ADC_ADC1_CFG_CHS_MSK );
}

void MDR_ADC_Union_ADC1_SetClockSource( uint32_t clock_source )
{
    MDR_ADC_UNION->ADC1_CFG.Register &= ~MDR_ADC_ADC1_CFG_CLKS_MSK;
    MDR_ADC_UNION->ADC1_CFG.Register |= ( clock_source & MDR_ADC_ADC1_CFG_CLKS_MSK );
}

// ADC Milandr functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_ADC1_Enable( void )
{
    MDR_ADC->ADC1_CFG |= MDR_ADC_ADC1_CFG_ADON_ENABLE;
}

void MDR_ADC1_Disable( void )
{
    MDR_ADC->ADC1_CFG &= MDR_ADC_ADC1_CFG_ADON_DISABLE;
}

void MDR_ADC2_Enable( void )
{
    MDR_ADC->ADC2_CFG |= MDR_ADC_ADC2_CFG_ADON_ENABLE;
}

void MDR_ADC2_Disable( void )
{
    MDR_ADC->ADC2_CFG &= MDR_ADC_ADC2_CFG_ADON_DISABLE;
}

void MDR_ADC1_SetChannel( uint32_t channel )
{
    MDR_ADC->ADC1_CFG &= ~MDR_ADC_ADC1_CFG_CHS_MSK;
    MDR_ADC->ADC1_CFG |= ( channel & MDR_ADC_ADC1_CFG_CHS_MSK );
}

void MDR_ADC1_StartConversion( void )
{
    MDR_ADC->ADC1_CFG |= MDR_ADC_ADC1_CFG_GO_START;
}

bool MDR_ADC1_IsConversionComplete( void )
{
    return ( MDR_ADC->ADC1_STATUS & MDR_ADC_ADC_STATUS_EOCIF_MSK ) != 0;
}

uint16_t MDR_ADC1_GetResult( void )
{
    return ( uint16_t )( MDR_ADC->ADC1_RESULT & MDR_ADC_ADC_RESULT_RESULT_MSK );
}

void MDR_ADC1_SetSampleMode( uint32_t mode )
{
    MDR_ADC->ADC1_CFG &= ~MDR_ADC_ADC1_CFG_SAMPLE_MSK;
    MDR_ADC->ADC1_CFG |= ( mode & MDR_ADC_ADC1_CFG_SAMPLE_MSK );
}

void MDR_ADC1_SetChannelSwitching( uint32_t switching )
{
    MDR_ADC->ADC1_CFG &= ~MDR_ADC_ADC1_CFG_CHCH_MSK;
    MDR_ADC->ADC1_CFG |= ( switching & MDR_ADC_ADC1_CFG_CHCH_MSK );
}

void MDR_ADC1_SetClockDivider( uint32_t divider )
{
    MDR_ADC->ADC1_CFG &= ~MDR_ADC_ADC1_CFG_DIVCLK_MSK;
    MDR_ADC->ADC1_CFG |= ( divider & MDR_ADC_ADC1_CFG_DIVCLK_MSK );
}

void MDR_ADC1_SetReference( uint32_t reference )
{
    MDR_ADC->ADC1_CFG &= ~MDR_ADC_ADC1_CFG_M_REF_MSK;
    MDR_ADC->ADC1_CFG |= ( reference & MDR_ADC_ADC1_CFG_M_REF_MSK );
}

void MDR_ADC1_SetClockSource( uint32_t clock_source )
{
    MDR_ADC->ADC1_CFG &= ~MDR_ADC_ADC1_CFG_CLKS_MSK;
    MDR_ADC->ADC1_CFG |= ( clock_source & MDR_ADC_ADC1_CFG_CLKS_MSK );