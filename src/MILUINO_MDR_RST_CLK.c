#include "MILUINO_MDR_RST_CLK.h"

#include <stdint.h>

// RST_CLK Union functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_RST_CLK_Union_PeripheralEnable( uint32_t peripheral_mask )
{
    MDR_RST_CLK_UNION->PER_CLOCK.Register |= peripheral_mask;
}

void MDR_RST_CLK_Union_PeripheralDisable( uint32_t peripheral_mask )
{
    MDR_RST_CLK_UNION->PER_CLOCK.Register &= ~peripheral_mask;
}

void MDR_RST_CLK_Union_HSI_Enable( void )
{
    MDR_RST_CLK_Union_PeripheralEnable( MDR_RST_CLK_PER_CLOCK_BKP_ENABLE );
    MDR_BKP->REG_0F |= MDR_BKP_REG_0F_HSI_ON_ENABLE;
}

void MDR_RST_CLK_Union_HSI_Disable( void )
{
    MDR_RST_CLK_Union_PeripheralEnable( MDR_RST_CLK_PER_CLOCK_BKP_ENABLE );
    MDR_BKP->REG_0F &= MDR_BKP_REG_0F_HSI_ON_DISABLE;
}

void MDR_RST_CLK_Union_LSI_Enable( void )
{
    MDR_RST_CLK_Union_PeripheralEnable( MDR_RST_CLK_PER_CLOCK_BKP_ENABLE );
    MDR_BKP->REG_0F |= MDR_BKP_REG_0F_LSI_ON_ENABLE;
}

void MDR_RST_CLK_Union_LSI_Disable( void )
{
    MDR_RST_CLK_Union_PeripheralEnable( MDR_RST_CLK_PER_CLOCK_BKP_ENABLE );
    MDR_BKP->REG_0F &= MDR_BKP_REG_0F_LSI_ON_DISABLE;
}

void MDR_RST_CLK_Union_HSE_SetMode( uint32_t hse_mode )
{
    MDR_RST_CLK_UNION->HS_CONTROL.Register &= ~MDR_RST_CLK_HS_CONTROL_HSE_BYP_MSK;
    MDR_RST_CLK_UNION->HS_CONTROL.Register |= ( hse_mode & MDR_RST_CLK_HS_CONTROL_HSE_BYP_MSK );
}

void MDR_RST_CLK_Union_HSE_Enable( void )
{
    MDR_RST_CLK_UNION->HS_CONTROL.Register |= MDR_RST_CLK_HS_CONTROL_HSE_ON_ENABLE;
}

void MDR_RST_CLK_Union_HSE_Disable( void )
{
    MDR_RST_CLK_UNION->HS_CONTROL.Register &= MDR_RST_CLK_HS_CONTROL_HSE_ON_DISABLE;
}

void MDR_RST_CLK_Union_CPU_PLL_Enable( void )
{
    MDR_RST_CLK_UNION->PLL_CONTROL.Register |= MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_ENABLE;
}

void MDR_RST_CLK_Union_CPU_PLL_Disable( void )
{
    MDR_RST_CLK_UNION->PLL_CONTROL.Register &= MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_DISABLE;
}

void MDR_RST_CLK_Union_CPU_PLL_Configure( uint32_t cpu_c1_source, uint32_t pll_cpu_mul )
{
    MDR_RST_CLK_UNION->CPU_CLOCK.Register &= ~MDR_RST_CLK_CPU_CLOCK_CPU_C1_SEL_MSK;
    MDR_RST_CLK_UNION->CPU_CLOCK.Register |= ( cpu_c1_source & MDR_RST_CLK_CPU_CLOCK_CPU_C1_SEL_MSK );
    MDR_RST_CLK_UNION->PLL_CONTROL.Register &= ~MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_MSK;
    MDR_RST_CLK_UNION->PLL_CONTROL.Register |= ( pll_cpu_mul & MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_MSK );
}

void MDR_RST_CLK_Union_CPU_C2_Select( uint32_t cpu_c2_source )
{
    MDR_RST_CLK_UNION->CPU_CLOCK.Register &= ~MDR_RST_CLK_CPU_CLOCK_CPU_C2_SEL_MSK;
    MDR_RST_CLK_UNION->CPU_CLOCK.Register |= ( cpu_c2_source & MDR_RST_CLK_CPU_CLOCK_CPU_C2_SEL_MSK );
}

void MDR_RST_CLK_Union_CPU_C3_Div( uint32_t cpu_c3_div )
{
    MDR_RST_CLK_UNION->CPU_CLOCK.Register &= ~MDR_RST_CLK_CPU_CLOCK_CPU_C3_SEL_MSK;
    MDR_RST_CLK_UNION->CPU_CLOCK.Register |= ( cpu_c3_div & MDR_RST_CLK_CPU_CLOCK_CPU_C3_SEL_MSK );
}

void MDR_RST_CLK_Union_CPU_HCLK_Select( uint32_t cpu_hclk_source )
{
    MDR_RST_CLK_UNION->CPU_CLOCK.Register &= ~MDR_RST_CLK_CPU_CLOCK_HCLK_SEL_MSK;
    MDR_RST_CLK_UNION->CPU_CLOCK.Register |= ( cpu_hclk_source & MDR_RST_CLK_CPU_CLOCK_HCLK_SEL_MSK );
}

void MDR_RST_CLK_Union_UART1_SetDivider( uint32_t uart1_div )
{
    MDR_RST_CLK_UNION->UART_CLOCK.Register &= ~MDR_RST_CLK_UART_CLOCK_UART1_BRG_MSK;
    MDR_RST_CLK_UNION->UART_CLOCK.Register |=  ( uart1_div & MDR_RST_CLK_UART_CLOCK_UART1_BRG_MSK );
}

void MDR_RST_CLK_Union_UART2_SetDivider( uint32_t uart2_div )
{
    MDR_RST_CLK_UNION->UART_CLOCK.Register &= ~MDR_RST_CLK_UART_CLOCK_UART2_BRG_MSK;
    MDR_RST_CLK_UNION->UART_CLOCK.Register |= ( uart2_div & MDR_RST_CLK_UART_CLOCK_UART2_BRG_MSK );
}

void MDR_RST_CLK_Union_UART1_ClockEnable( void )
{
    MDR_RST_CLK_UNION->UART_CLOCK.Register |= MDR_RST_CLK_UART_CLOCK_UART1_CLK_ENABLE;
}

void MDR_RST_CLK_Union_UART2_ClockEnable( void )
{
    MDR_RST_CLK_UNION->UART_CLOCK.Register |= MDR_RST_CLK_UART_CLOCK_UART2_CLK_ENABLE;
}

void MDR_RST_CLK_Union_TIMER1_SetDivider( uint32_t timer1_div )
{
    MDR_RST_CLK_UNION->TIM_CLOCK.Register &= ~MDR_RST_CLK_TIM_CLOCK_TIM1_BRG_MSK;
    MDR_RST_CLK_UNION->TIM_CLOCK.Register |= ( timer1_div & MDR_RST_CLK_TIM_CLOCK_TIM1_BRG_MSK );
}

void MDR_RST_CLK_Union_TIMER1_ClockEnable( void )
{
    MDR_RST_CLK_UNION->TIM_CLOCK.Register |= MDR_RST_CLK_TIM_CLOCK_TIM1_CLK_ENABLE;
}

void MDR_RST_CLK_Union_TIMER1_ClockDisable( void )
{
    MDR_RST_CLK_UNION->TIM_CLOCK.Register &= MDR_RST_CLK_TIM_CLOCK_TIM1_CLK_DISABLE;
}

void MDR_RST_CLK_Union_TIMER2_SetDivider( uint32_t timer2_div )
{
    MDR_RST_CLK_UNION->TIM_CLOCK.Register &= ~MDR_RST_CLK_TIM_CLOCK_TIM2_BRG_MSK;
    MDR_RST_CLK_UNION->TIM_CLOCK.Register |= ( timer2_div & MDR_RST_CLK_TIM_CLOCK_TIM2_BRG_MSK );
}

void MDR_RST_CLK_Union_TIMER2_ClockEnable( void )
{
    MDR_RST_CLK_UNION->TIM_CLOCK.Register |= MDR_RST_CLK_TIM_CLOCK_TIM2_CLK_ENABLE;
}

void MDR_RST_CLK_Union_TIMER2_ClockDisable( void )
{
    MDR_RST_CLK_UNION->TIM_CLOCK.Register &= MDR_RST_CLK_TIM_CLOCK_TIM2_CLK_DISABLE;
}

void MDR_RST_CLK_Union_TIMER3_SetDivider( uint32_t timer3_div )
{
    MDR_RST_CLK_UNION->TIM_CLOCK.Register &= ~MDR_RST_CLK_TIM_CLOCK_TIM3_BRG_MSK;
    MDR_RST_CLK_UNION->TIM_CLOCK.Register |= ( timer3_div & MDR_RST_CLK_TIM_CLOCK_TIM3_BRG_MSK );
}

void MDR_RST_CLK_Union_TIMER3_ClockEnable( void )
{
    MDR_RST_CLK_UNION->TIM_CLOCK.Register |= MDR_RST_CLK_TIM_CLOCK_TIM3_CLK_ENABLE;
}

void MDR_RST_CLK_Union_TIMER3_ClockDisable( void )
{
    MDR_RST_CLK_UNION->TIM_CLOCK.Register &= MDR_RST_CLK_TIM_CLOCK_TIM3_CLK_DISABLE;
}

void MDR_RST_CLK_Union_CAN1_SetDivider( uint32_t can1_div )
{
    MDR_RST_CLK_UNION->CAN_CLOCK.Register &= ~MDR_RST_CLK_CAN_CLOCK_CAN1_BRG_MSK;
    MDR_RST_CLK_UNION->CAN_CLOCK.Register |= ( can1_div & MDR_RST_CLK_CAN_CLOCK_CAN1_BRG_MSK );
}

void MDR_RST_CLK_Union_CAN1_ClockEnable( void )
{
    MDR_RST_CLK_UNION->CAN_CLOCK.Register |= MDR_RST_CLK_CAN_CLOCK_CAN1_CLK_ENABLE;
}

void MDR_RST_CLK_Union_CAN1_ClockDisable( void )
{
    MDR_RST_CLK_UNION->CAN_CLOCK.Register &= MDR_RST_CLK_CAN_CLOCK_CAN1_CLK_DISABLE;
}

void MDR_RST_CLK_Union_CAN2_SetDivider( uint32_t can2_div )
{
    MDR_RST_CLK_UNION->CAN_CLOCK.Register &= ~MDR_RST_CLK_CAN_CLOCK_CAN2_BRG_MSK;
    MDR_RST_CLK_UNION->CAN_CLOCK.Register |= ( can2_div & MDR_RST_CLK_CAN_CLOCK_CAN2_BRG_MSK );
}

void MDR_RST_CLK_Union_CAN2_ClockEnable( void )
{
    MDR_RST_CLK_UNION->CAN_CLOCK.Register |= MDR_RST_CLK_CAN_CLOCK_CAN2_CLK_ENABLE;
}

void MDR_RST_CLK_Union_CAN2_ClockDisable( void )
{
    MDR_RST_CLK_UNION->CAN_CLOCK.Register &= MDR_RST_CLK_CAN_CLOCK_CAN2_CLK_DISABLE;
}

void MDR_RST_CLK_Union_SSP1_SetDivider( uint32_t ssp1_div )
{
    MDR_RST_CLK_UNION->SSP_CLOCK.Register &= ~MDR_RST_CLK_SSP_CLOCK_SSP1_BRG_MSK;
    MDR_RST_CLK_UNION->SSP_CLOCK.Register |= ( ssp1_div & MDR_RST_CLK_SSP_CLOCK_SSP1_BRG_MSK );
}

void MDR_RST_CLK_Union_SSP1_ClockEnable( void )
{
    MDR_RST_CLK_UNION->SSP_CLOCK.Register |= MDR_RST_CLK_SSP_CLOCK_SSP1_CLK_ENABLE;
}

void MDR_RST_CLK_Union_SSP1_ClockDisable( void )
{
    MDR_RST_CLK_UNION->SSP_CLOCK.Register &= MDR_RST_CLK_SSP_CLOCK_SSP1_CLK_DISABLE;
}

void MDR_RST_CLK_Union_SSP2_SetDivider( uint32_t ssp2_div )
{
    MDR_RST_CLK_UNION->SSP_CLOCK.Register &= ~MDR_RST_CLK_SSP_CLOCK_SSP2_BRG_MSK;
    MDR_RST_CLK_UNION->SSP_CLOCK.Register |= ( ssp2_div & MDR_RST_CLK_SSP_CLOCK_SSP2_BRG_MSK );
}

void MDR_RST_CLK_Union_SSP2_ClockEnable( void )
{
    MDR_RST_CLK_UNION->SSP_CLOCK.Register |= MDR_RST_CLK_SSP_CLOCK_SSP2_CLK_ENABLE;
}

void MDR_RST_CLK_Union_SSP2_ClockDisable( void )
{
    MDR_RST_CLK_UNION->SSP_CLOCK.Register &= MDR_RST_CLK_SSP_CLOCK_SSP2_CLK_DISABLE;
}

void MDR_RST_CLK_Union_ADC_C1_Select( uint32_t adc_c1_source )
{
    MDR_RST_CLK_UNION->ADC_MCO_CLOCK.Register &= ~MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_SEL_MSK;
    MDR_RST_CLK_UNION->ADC_MCO_CLOCK.Register |= ( adc_c1_source & MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_SEL_MSK );
}

void MDR_RST_CLK_Union_ADC_C2_Select( uint32_t adc_c2_source )
{
    MDR_RST_CLK_UNION->ADC_MCO_CLOCK.Register &= ~MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_SEL_MSK;
    MDR_RST_CLK_UNION->ADC_MCO_CLOCK.Register |= ( adc_c2_source & MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_SEL_MSK );
}

void MDR_RST_CLK_Union_ADC_SetDivider( uint32_t adc_div )
{
    MDR_RST_CLK_UNION->ADC_MCO_CLOCK.Register &= ~MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_SEL_MSK;
    MDR_RST_CLK_UNION->ADC_MCO_CLOCK.Register |= ( adc_div & MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_SEL_MSK );
}

void MDR_RST_CLK_Union_ADC_ClockEnable( void )
{
    MDR_RST_CLK_UNION->ADC_MCO_CLOCK.Register |= MDR_RST_CLK_ADC_MCO_CLOCK_ADC_CLK_ENABLE;
}

void MDR_RST_CLK_Union_ADC_ClockDisable( void )
{
    MDR_RST_CLK_UNION->ADC_MCO_CLOCK.Register &= MDR_RST_CLK_ADC_MCO_CLOCK_ADC_CLK_DISABLE;
}

// RST_CLK Milandr functions
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void MDR_RST_CLK_PeripheralEnable( uint32_t peripheral_mask )
{
    MDR_RST_CLK->PER_CLOCK |= peripheral_mask;
}

void MDR_RST_CLK_PeripheralDisable( uint32_t peripheral_mask )
{
    MDR_RST_CLK->PER_CLOCK &= ~peripheral_mask;
}

void MDR_RST_CLK_HSI_Enable( void )
{
    MDR_RST_CLK_PeripheralEnable( MDR_RST_CLK_PER_CLOCK_BKP_ENABLE );
    MDR_BKP->REG_0F |= MDR_BKP_REG_0F_HSI_ON_ENABLE;
}

void MDR_RST_CLK_HSI_Disable( void )
{
    MDR_RST_CLK_PeripheralEnable( MDR_RST_CLK_PER_CLOCK_BKP_ENABLE );
    MDR_BKP->REG_0F &= MDR_BKP_REG_0F_HSI_ON_DISABLE;
}

void MDR_RST_CLK_LSI_Enable( void )
{
    MDR_RST_CLK_PeripheralEnable( MDR_RST_CLK_PER_CLOCK_BKP_ENABLE );
    MDR_BKP->REG_0F |= MDR_BKP_REG_0F_LSI_ON_ENABLE;
}

void MDR_RST_CLK_LSI_Disable( void )
{
    MDR_RST_CLK_PeripheralEnable( MDR_RST_CLK_PER_CLOCK_BKP_ENABLE );
    MDR_BKP->REG_0F &= MDR_BKP_REG_0F_LSI_ON_DISABLE;
}

void MDR_RST_CLK_HSE_SetMode( uint32_t hse_mode )
{
    MDR_RST_CLK->HS_CONTROL &= ~MDR_RST_CLK_HS_CONTROL_HSE_BYP_MSK;
    MDR_RST_CLK->HS_CONTROL |= (hse_mode & MDR_RST_CLK_HS_CONTROL_HSE_BYP_MSK);
}

void MDR_RST_CLK_HSE_Enable( void )
{
    MDR_RST_CLK->HS_CONTROL |= MDR_RST_CLK_HS_CONTROL_HSE_ON_ENABLE;
}

void MDR_RST_CLK_HSE_Disable( void )
{
    MDR_RST_CLK->HS_CONTROL &= MDR_RST_CLK_HS_CONTROL_HSE_ON_DISABLE;
}

void MDR_RST_CLK_CPU_PLL_Enable( void )
{
    MDR_RST_CLK->PLL_CONTROL |= MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_ENABLE;
}

void MDR_RST_CLK_CPU_PLL_Disable( void )
{
    MDR_RST_CLK->PLL_CONTROL &= MDR_RST_CLK_PLL_CONTROL_PLL_CPU_ON_DISABLE;
}

void MDR_RST_CLK_CPU_PLL_Configure( uint32_t cpu_c1_source, uint32_t pll_cpu_mul )
{
    MDR_RST_CLK->CPU_CLOCK &= ~MDR_RST_CLK_CPU_CLOCK_CPU_C1_SEL_MSK;
    MDR_RST_CLK->CPU_CLOCK |= ( cpu_c1_source & MDR_RST_CLK_CPU_CLOCK_CPU_C1_SEL_MSK );
    MDR_RST_CLK->PLL_CONTROL &= ~MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_MSK;
    MDR_RST_CLK->PLL_CONTROL |= ( pll_cpu_mul & MDR_RST_CLK_PLL_CONTROL_PLL_CPU_MUL_MSK );
}

void MDR_RST_CLK_CPU_C2_Select( uint32_t cpu_c2_source )
{
    MDR_RST_CLK->CPU_CLOCK &= ~MDR_RST_CLK_CPU_CLOCK_CPU_C2_SEL_MSK;
    MDR_RST_CLK->CPU_CLOCK |= ( cpu_c2_source & MDR_RST_CLK_CPU_CLOCK_CPU_C2_SEL_MSK );
}

void MDR_RST_CLK_CPU_C3_Div( uint32_t cpu_c3_div )
{
    MDR_RST_CLK->CPU_CLOCK &= ~MDR_RST_CLK_CPU_CLOCK_CPU_C3_SEL_MSK;
    MDR_RST_CLK->CPU_CLOCK |= cpu_c3_div;
}

void MDR_RST_CLK_CPU_HCLK_Select( uint32_t cpu_hclk_source )
{
    MDR_RST_CLK->CPU_CLOCK &= ~MDR_RST_CLK_CPU_CLOCK_HCLK_SEL_MSK;
    MDR_RST_CLK->CPU_CLOCK |= cpu_hclk_source;
}

void MDR_RST_CLK_UART1_SetDivider( uint32_t uart1_div )
{
    MDR_RST_CLK->UART_CLOCK &= ~MDR_RST_CLK_UART_CLOCK_UART1_BRG_MSK;
    MDR_RST_CLK->UART_CLOCK |= uart1_div;
}

void MDR_RST_CLK_UART2_SetDivider( uint32_t uart2_div )
{
    MDR_RST_CLK->UART_CLOCK &= ~MDR_RST_CLK_UART_CLOCK_UART2_BRG_MSK;
    MDR_RST_CLK->UART_CLOCK |= uart2_div;
}

void MDR_RST_CLK_UART1_ClockEnable( void )
{
    MDR_RST_CLK->UART_CLOCK |= MDR_RST_CLK_UART_CLOCK_UART1_CLK_ENABLE;
}

void MDR_RST_CLK_UART2_ClockEnable( void )
{
    MDR_RST_CLK->UART_CLOCK |= MDR_RST_CLK_UART_CLOCK_UART2_CLK_ENABLE;
}

void MDR_RST_CLK_TIMER1_SetDivider( uint32_t timer1_div )
{
    MDR_RST_CLK->TIM_CLOCK &= ~MDR_RST_CLK_TIM_CLOCK_TIM1_BRG_MSK;
    MDR_RST_CLK->TIM_CLOCK |= timer1_div;
}

void MDR_RST_CLK_TIMER1_ClockEnable( void )
{
    MDR_RST_CLK->TIM_CLOCK |= MDR_RST_CLK_TIM_CLOCK_TIM1_CLK_ENABLE;
}

void MDR_RST_CLK_TIMER1_ClockDisable( void )
{
    MDR_RST_CLK->TIM_CLOCK &= MDR_RST_CLK_TIM_CLOCK_TIM1_CLK_DISABLE;
}

void MDR_RST_CLK_TIMER2_SetDivider( uint32_t timer2_div )
{
    MDR_RST_CLK->TIM_CLOCK &= ~MDR_RST_CLK_TIM_CLOCK_TIM2_BRG_MSK;
    MDR_RST_CLK->TIM_CLOCK |= timer2_div;
}

void MDR_RST_CLK_TIMER2_ClockEnable( void )
{
    MDR_RST_CLK->TIM_CLOCK |= MDR_RST_CLK_TIM_CLOCK_TIM2_CLK_ENABLE;
}

void MDR_RST_CLK_TIMER2_ClockDisable( void )
{
    MDR_RST_CLK->TIM_CLOCK &= MDR_RST_CLK_TIM_CLOCK_TIM2_CLK_DISABLE;
}

void MDR_RST_CLK_TIMER3_SetDivider( uint32_t timer3_div )
{
    MDR_RST_CLK->TIM_CLOCK &= ~MDR_RST_CLK_TIM_CLOCK_TIM3_BRG_MSK;
    MDR_RST_CLK->TIM_CLOCK |= timer3_div;
}

void MDR_RST_CLK_TIMER3_ClockEnable( void )
{
    MDR_RST_CLK->TIM_CLOCK |= MDR_RST_CLK_TIM_CLOCK_TIM3_CLK_ENABLE;
}

void MDR_RST_CLK_TIMER3_ClockDisable( void )
{
    MDR_RST_CLK->TIM_CLOCK &= MDR_RST_CLK_TIM_CLOCK_TIM3_CLK_DISABLE;
}

void MDR_RST_CLK_CAN1_SetDivider( uint32_t can1_div )
{
    MDR_RST_CLK->CAN_CLOCK &= ~MDR_RST_CLK_CAN_CLOCK_CAN1_BRG_MSK;
    MDR_RST_CLK->CAN_CLOCK |= can1_div;
}

void MDR_RST_CLK_CAN1_ClockEnable( void )
{
    MDR_RST_CLK->CAN_CLOCK |= MDR_RST_CLK_CAN_CLOCK_CAN1_CLK_ENABLE;
}

void MDR_RST_CLK_CAN1_ClockDisable( void )
{
    MDR_RST_CLK->CAN_CLOCK &= MDR_RST_CLK_CAN_CLOCK_CAN1_CLK_DISABLE;
}

void MDR_RST_CLK_CAN2_SetDivider( uint32_t can2_div )
{
    MDR_RST_CLK->CAN_CLOCK &= ~MDR_RST_CLK_CAN_CLOCK_CAN2_BRG_MSK;
    MDR_RST_CLK->CAN_CLOCK |= can2_div;
}

void MDR_RST_CLK_CAN2_ClockEnable( void )
{
    MDR_RST_CLK->CAN_CLOCK |= MDR_RST_CLK_CAN_CLOCK_CAN2_CLK_ENABLE;
}

void MDR_RST_CLK_CAN2_ClockDisable( void )
{
    MDR_RST_CLK->CAN_CLOCK &= MDR_RST_CLK_CAN_CLOCK_CAN2_CLK_DISABLE;
}

void MDR_RST_CLK_SSP1_SetDivider( uint32_t ssp1_div )
{
    MDR_RST_CLK->SSP_CLOCK &= ~MDR_RST_CLK_SSP_CLOCK_SSP1_BRG_MSK;
    MDR_RST_CLK->SSP_CLOCK |= ssp1_div;
}

void MDR_RST_CLK_SSP1_ClockEnable( void )
{
    MDR_RST_CLK->SSP_CLOCK |= MDR_RST_CLK_SSP_CLOCK_SSP1_CLK_ENABLE;
}

void MDR_RST_CLK_SSP1_ClockDisable( void )
{
    MDR_RST_CLK->SSP_CLOCK &= MDR_RST_CLK_SSP_CLOCK_SSP1_CLK_DISABLE;
}

void MDR_RST_CLK_SSP2_SetDivider( uint32_t ssp2_div )
{
    MDR_RST_CLK->SSP_CLOCK &= ~MDR_RST_CLK_SSP_CLOCK_SSP2_BRG_MSK;
    MDR_RST_CLK->SSP_CLOCK |= ssp2_div;
}

void MDR_RST_CLK_SSP2_ClockEnable( void )
{
    MDR_RST_CLK->SSP_CLOCK |= MDR_RST_CLK_SSP_CLOCK_SSP2_CLK_ENABLE;
}

void MDR_RST_CLK_SSP2_ClockDisable( void )
{
    MDR_RST_CLK->SSP_CLOCK &= MDR_RST_CLK_SSP_CLOCK_SSP2_CLK_DISABLE;
}

void MDR_RST_CLK_ADC_C1_Select( uint32_t adc_c1_source )
{
    MDR_RST_CLK->ADC_MCO_CLOCK &= ~MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C1_SEL_MSK;
    MDR_RST_CLK->ADC_MCO_CLOCK |= adc_c1_source;
}

void MDR_RST_CLK_ADC_C2_Select( uint32_t adc_c2_source )
{
    MDR_RST_CLK->ADC_MCO_CLOCK &= ~MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C2_SEL_MSK;
    MDR_RST_CLK->ADC_MCO_CLOCK |= adc_c2_source;
}

void MDR_RST_CLK_ADC_SetDivider( uint32_t adc_div )
{
    MDR_RST_CLK->ADC_MCO_CLOCK &= ~MDR_RST_CLK_ADC_MCO_CLOCK_ADC_C3_SEL_MSK;
    MDR_RST_CLK->ADC_MCO_CLOCK |= adc_div;
}

void MDR_RST_CLK_ADC_ClockEnable( void )
{
    MDR_RST_CLK->ADC_MCO_CLOCK |= MDR_RST_CLK_ADC_MCO_CLOCK_ADC_CLK_ENABLE;
}

void MDR_RST_CLK_ADC_ClockDisable( void )
{
    MDR_RST_CLK->ADC_MCO_CLOCK &= MDR_RST_CLK_ADC_MCO_CLOCK_ADC_CLK_DISABLE;
}