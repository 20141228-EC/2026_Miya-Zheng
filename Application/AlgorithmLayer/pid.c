/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- 
 * @Files: pid.c/h
 * 
 * @Author: Ye Jinyi
 * 
 * @First  Edit Date: 2025.1.15
 * @Latest Edit Date: 2025.1.18
 * 
 * @illustrate: 
 * 
 * @attention: 
 * 
 *-------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* Including Files  ------------------------------------------------------------------------------------------------------------------------------------------------- */
#include "pid.h"

/* External Variables Declarations ---------------------------------------------------------------------------------------------------------------------------------- */


/* Define Exported Variables ---------------------------------------------------------------------------------------------------------------------------------------- */


/* Define Privated Variables ---------------------------------------------------------------------------------------------------------------------------------------- */


/* Define Privated Functions ---------------------------------------------------------------------------------------------------------------------------------------- */


/* Define Exported Functions ---------------------------------------------------------------------------------------------------------------------------------------- */

inline void position_pid_ctrl(position_pid_ctrl_t *pid)
{
    /* 计算误差 */
    pid->err = pid->target - pid->measure;
    
    /* 积分 */
    pid->integral += pid->err;
    pid->integral = constrain(pid->integral, pid->integral_min, pid->integral_max);
    
    /* p i d 输出项计算 */
    pid->pout = pid->Kp * pid->err;
    pid->iout = pid->Ki * pid->integral;
    pid->dout = pid->Kd * (pid->err - pid->last_err);
    
    /* 累加pid输出值 */
    pid->out = pid->pout + pid->iout + pid->dout;
    pid->out = constrain(pid->out, pid->out_min, pid->out_max);
    
    /* 记录上次误差值 */
    pid->last_err = pid->err;
}


inline void incremental_pid_ctrl(incremental_pid_ctrl_t *pid)
{
    /* 计算误差 */
    pid->err = pid->target - pid->measure;
    
    /* 增量计算 */
    pid->delta_u = pid->Kp * (pid->err - pid->last_err)                          // 比例增量
                   + pid->Ki * pid->err                                          // 积分增量
                   + pid->Kd * (pid->err - 2.f * pid->last_err + pid->prev_err); // 微分增量
    
    /* 累加输出 */
    pid->out = pid->last_out + pid->delta_u;
    
    /* 限幅输出 */
    pid->out = constrain(pid->out, pid->out_min, pid->out_max);
    
    /* 保存状态，供下一次迭代使用 */
    pid->prev_err = pid->last_err;      // 更新上上次误差
    pid->last_err = pid->err;           // 更新上次误差
    pid->last_out = pid->out;           // 更新上次输出
}
