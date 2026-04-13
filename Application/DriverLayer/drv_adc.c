/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- 
 * @Files: drv_adc.c/h
 * 
 * @Author: Ye Jinyi
 * 
 * @First  Edit Date: 2025.2.23
 * @Latest Edit Date: 
 * 
 * @illustrate: 
 * 
 * @attention: 
 * 
 *-------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* Including Files  ------------------------------------------------------------------------------------------------------------------------------------------------- */
#include "drv_adc.h"
#include "adc.h"
#include "cap_board.h"

/* External Variables Declarations ---------------------------------------------------------------------------------------------------------------------------------- */


/* Define Exported Variables ---------------------------------------------------------------------------------------------------------------------------------------- */


/* Define Privated Variables ---------------------------------------------------------------------------------------------------------------------------------------- */


/* Define Privated Functions ---------------------------------------------------------------------------------------------------------------------------------------- */


/* Define Exported Functions ---------------------------------------------------------------------------------------------------------------------------------------- */
/*!
 * @usage: 初始化ADC
 */
void ADC_init(void)
{
    /* 校准、使能ADC */
    HAL_ADCEx_Calibration_Start(&hadc1, ADC_SINGLE_ENDED);
    HAL_Delay(10);
    HAL_ADC_Start_DMA(&hadc1, (uint32_t *)&capboard.dma_adc_raw_data[BAT_V], 1);
    HAL_ADCEx_Calibration_Start(&hadc2, ADC_SINGLE_ENDED);
    HAL_Delay(10);
    HAL_ADC_Start_DMA(&hadc2, (uint32_t *)&capboard.dma_adc_raw_data[CAP_I], 1);
    HAL_ADCEx_Calibration_Start(&hadc3, ADC_SINGLE_ENDED);
    HAL_Delay(10);
    HAL_ADC_Start_DMA(&hadc3, (uint32_t *)&capboard.dma_adc_raw_data[CAP_V], 1);
    HAL_ADCEx_Calibration_Start(&hadc4, ADC_SINGLE_ENDED);
    HAL_Delay(10);
    HAL_ADC_Start_DMA(&hadc4, (uint32_t *)&capboard.dma_adc_raw_data[BAT_I], 1);
    HAL_ADCEx_Calibration_Start(&hadc5, ADC_SINGLE_ENDED);
    HAL_Delay(10);
    HAL_ADC_Start_DMA(&hadc5, (uint32_t *)&capboard.dma_adc_raw_data[CHAS_I], 1);
    
}
