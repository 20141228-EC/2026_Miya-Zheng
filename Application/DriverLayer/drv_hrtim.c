/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- 
 * @Files: drv_hrtim.c/h
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
#include "drv_hrtim.h"
#include "hrtim.h"
#include "config.h"

/* External Variables Declarations ---------------------------------------------------------------------------------------------------------------------------------- */


/* Define Exported Variables ---------------------------------------------------------------------------------------------------------------------------------------- */


/* Define Privated Variables ---------------------------------------------------------------------------------------------------------------------------------------- */


/* Define Privated Functions ---------------------------------------------------------------------------------------------------------------------------------------- */


/* Define Exported Functions ---------------------------------------------------------------------------------------------------------------------------------------- */
/*!
 * @usage: 初始化HRTIM
 */
void HRTIM_init(void)
{
    /* 使能HRTIM */
    HAL_HRTIM_WaveformCounterStart(&hhrtim1, HRTIM_TIMERID_MASTER  | \
                                             HRTIM_TIMERID_TIMER_B | \
                                             HRTIM_TIMERID_TIMER_D );
    
    /* 开启pwm输出，上电输出低电平 */
    hhrtim1.Instance->sTimerxRegs[HR_TIMERB_IDX].CMP1xR = HRTIM_PERIOD_0_5;
    hhrtim1.Instance->sTimerxRegs[HR_TIMERB_IDX].CMP3xR = HRTIM_PERIOD_0_5;
    
    hhrtim1.Instance->sTimerxRegs[HR_TIMERD_IDX].CMP1xR = HRTIM_PERIOD_0_5;
    hhrtim1.Instance->sTimerxRegs[HR_TIMERD_IDX].CMP3xR = HRTIM_PERIOD_0_5;
    
    HAL_HRTIM_WaveformOutputStart(&hhrtim1, HRTIM_OUTPUT_TB1 | \
                                            HRTIM_OUTPUT_TB2 | \
                                            HRTIM_OUTPUT_TD1 | \
                                            HRTIM_OUTPUT_TD2 );
    
    /* 开启HRTIM MasterTimer的重复更新中断 */
    __HAL_HRTIM_MASTER_CLEAR_IT(&hhrtim1, HRTIM_MASTER_IT_MREP);
    __HAL_HRTIM_MASTER_ENABLE_IT(&hhrtim1, HRTIM_MASTER_IT_MREP);
}
