#ifndef _CAP_BOARD_CONFIG_H
#define _CAP_BOARD_CONFIG_H

#include "config.h"

/* 电容板限制，基本通用 */
#define BAT_V_MIN_LIMIT   (20.f)                    // 最小电源输入电压（硬性指标）
#define BAT_V_MAX_LIMIT   (28.f)                    // 最大电源输入电压（硬性指标）
#define CAP_I_MIN_LIMIT   (-14.5f)                  // 电容组最大放电电流（硬性指标）
#define CAP_I_MAX_LIMIT   (14.5f)                   // 电容组最大充电电流（硬性指标）
#define CAP_V_MIN_LIMIT   (2.f)                     // 电容组最小可达电压（硬性指标）
#define CAP_V_MAX_LIMIT   (24.5f)                   // 电容组最大可达电压（硬性指标）
#define CAP_POWER_OUT_MAX (-300.f)                  // 电容组最大放电功率（硬性指标）
#define CAP_POWER_IN_MAX  (300.f)                   // 电容组最大充电功率（硬性指标）
#define BOTTOM_ABILITY_PERCENTAGE_ENERGY (15.f)     // 触底电量
#define MIN_ABILITY_PERCENTAGE_ENERGY    (30.f)     // 电量触底后，达到30%才允许放电
#define HALF_FULL_PERCENTAGE_ENERGY      (50.f)     // 半满电电量
#define CLOSE_FULL_PERCENTAGE_ENERGY     (90.f)     // 即将满电电量


/* 各板的个性参数 */
/* 对于第一批板，chasi和capi的方向与直觉相反，故要取反 */
/* 一号全系未投入使用 */
#ifdef _USE_BOARD_1_x
///* 第一批板初始校准系数 */
//#define CURRENT_BOARD_NUMBER 1_x
//#define BAT_V_COEFF_A   (1.f)
//#define BAT_V_COEFF_B   (0.f)
//#define CAP_I_COEFF_A   (-1.f)
//#define CAP_I_COEFF_B   (0.f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (0.f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (1.f)
//#define BAT_I_COEFF_B   (0.f)
//#define CHAS_I_COEFF_A  (-1.f)
//#define CHAS_I_COEFF_B  (0.f)

///* 1-1校准系数 */
//#define CURRENT_BOARD_NUMBER 1_1
//#define BAT_V_COEFF_A   (1.0025f)
//#define BAT_V_COEFF_B   (0.0624f)
//#define CAP_I_COEFF_A   (-1.014f)
//#define CAP_I_COEFF_B   (-0.055f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (0.f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (0.9965f)
//#define BAT_I_COEFF_B   (0.1001f)
//#define CHAS_I_COEFF_A  (-1.f)
//#define CHAS_I_COEFF_B  (-0.09f)

///* 1-2校准系数 */
//#define CURRENT_BOARD_NUMBER 1_2
//#define BAT_V_COEFF_A   (0.9932f)
//#define BAT_V_COEFF_B   (0.0503f)
//#define CAP_I_COEFF_A   (-0.998f)
//#define CAP_I_COEFF_B   (-0.055f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (0.f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (1.0024f)
//#define BAT_I_COEFF_B   (0.0612f)
//#define CHAS_I_COEFF_A  (-0.9918f)
//#define CHAS_I_COEFF_B  (-0.081f)

///* 1-3校准系数 */
//#define CURRENT_BOARD_NUMBER 1_3
//#define DEVICE_UID_LOW  (0x0042003F)
//#define DEVICE_UID_MID  (0x33345004)
//#define DEVICE_UID_MOST (0x20383253)
//#define BAT_V_COEFF_A   (0.9945f)
//#define BAT_V_COEFF_B   (0.0815f)
//#define CAP_I_COEFF_A   (-0.9871f)
//#define CAP_I_COEFF_B   (-0.039f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (0.f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (0.993f)
//#define BAT_I_COEFF_B   (0.1598f)
//#define CHAS_I_COEFF_A  (-0.9954f)
//#define CHAS_I_COEFF_B  (0.2029f)

///* 1-4校准系数 */
//#define CURRENT_BOARD_NUMBER 1_4
//#define DEVICE_UID_LOW  (0x00450039)
//#define DEVICE_UID_MID  (0x33345004)
//#define DEVICE_UID_MOST (0x20383253)
//#define BAT_V_COEFF_A   (1.0009f)
//#define BAT_V_COEFF_B   (0.0955f)
//#define CAP_I_COEFF_A   (-0.976f)
//#define CAP_I_COEFF_B   (-0.13f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (0.f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (1.0009f)
//#define BAT_I_COEFF_B   (0.0432f)
//#define CHAS_I_COEFF_A  (-0.9942f)
//#define CHAS_I_COEFF_B  (-0.0863f)

///* 1-5校准系数 */
//#define CURRENT_BOARD_NUMBER 1_5
//#define DEVICE_UID_LOW  (0x00450033)
//#define DEVICE_UID_MID  (0x33345004)
//#define DEVICE_UID_MOST (0x20383253)
//#define BAT_V_COEFF_A   (1.0013f)
//#define BAT_V_COEFF_B   (0.0751f)
//#define CAP_I_COEFF_A   (-0.994f)
//#define CAP_I_COEFF_B   (-0.075f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (0.f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (0.9988f)
//#define BAT_I_COEFF_B   (0.0814f)
//#define CHAS_I_COEFF_A  (-0.9988f)
//#define CHAS_I_COEFF_B  (-0.0644f)

#endif

#ifdef _USE_BOARD_2_x
///* 第二批板初始校准系数 */
//#define CURRENT_BOARD_NUMBER 2_x
//#define DEVICE_UID_LOW  (uint32_t)(0x00000000)
//#define DEVICE_UID_MID  (uint32_t)(0x00000000)
//#define DEVICE_UID_MOST (uint32_t)(0x00000000)
//#define BAT_V_COEFF_A   (1.f)
//#define BAT_V_COEFF_B   (0.f)
//#define CAP_I_COEFF_A   (1.f)
//#define CAP_I_COEFF_B   (0.f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (0.f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (1.f)
//#define BAT_I_COEFF_B   (0.f)
//#define CHAS_I_COEFF_A  (1.f)
//#define CHAS_I_COEFF_B  (0.f)

///* 2-1校准系数 */
//#define CURRENT_BOARD_NUMBER 2_1
//#define DEVICE_UID_LOW  (uint32_t)(0x00450025)
//#define DEVICE_UID_MID  (uint32_t)(0x33345004)
//#define DEVICE_UID_MOST (uint32_t)(0x20383253)
//#define BAT_V_COEFF_A   (0.9987f)
//#define BAT_V_COEFF_B   (0.0529f)
//#define CAP_I_COEFF_A   (1.f)
//#define CAP_I_COEFF_B   (-0.05f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (0.f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (1.0035f)
//#define BAT_I_COEFF_B   (0.0758f)
//#define CHAS_I_COEFF_A  (1.0035f)
//#define CHAS_I_COEFF_B  (0.0819f)

///* 2-2校准系数 */
//#define CURRENT_BOARD_NUMBER 2_2
//#define DEVICE_UID_LOW  (uint32_t)(0x00420038)
//#define DEVICE_UID_MID  (uint32_t)(0x33345004)
//#define DEVICE_UID_MOST (uint32_t)(0x20383253)
//#define BAT_V_COEFF_A   (0.9994f)
//#define BAT_V_COEFF_B   (0.0519f)
//#define CAP_I_COEFF_A   (1.f)
//#define CAP_I_COEFF_B   (0.01f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (0.f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (0.9953f)
//#define BAT_I_COEFF_B   (0.0657f)
//#define CHAS_I_COEFF_A  (0.9965f)
//#define CHAS_I_COEFF_B  (0.0841f)

#endif


#ifdef _USE_BOARD_3_x
/* 第三批板初始校准系数 */
//#define CURRENT_BOARD_NUMBER 3_x
//#define DEVICE_UID_LOW  (uint32_t)(0x00000000)
//#define DEVICE_UID_MID  (uint32_t)(0x00000000)
//#define DEVICE_UID_MOST (uint32_t)(0x00000000)
//#define BAT_V_COEFF_A   (1.f)
//#define BAT_V_COEFF_B   (0.f)
//#define CAP_I_COEFF_A   (1.f)
//#define CAP_I_COEFF_B   (0.f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (0.f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (1.f)
//#define BAT_I_COEFF_B   (0.f)
//#define CHAS_I_COEFF_A  (1.f)
//#define CHAS_I_COEFF_B  (0.f)

///* 3-1校准系数 */
//#define CURRENT_BOARD_NUMBER 3_1
//#define DEVICE_UID_LOW  (uint32_t)(0x002E0025)
//#define DEVICE_UID_MID  (uint32_t)(0x464D5015)
//#define DEVICE_UID_MOST (uint32_t)(0x20373935)
//#define BAT_V_COEFF_A   (1.0071f)
//#define BAT_V_COEFF_B   (0.0546f)
//#define CAP_I_COEFF_A   (1.f)
//#define CAP_I_COEFF_B   (0.02f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (0.f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (0.9884f)
//#define BAT_I_COEFF_B   (0.0526f)
//#define CHAS_I_COEFF_A  (1.f)
//#define CHAS_I_COEFF_B  (0.08f)

/* 3-2校准系数 */
/*#define CURRENT_BOARD_NUMBER 3_2
#define DEVICE_UID_LOW  (uint32_t)(0x003F002E)
#define DEVICE_UID_MID  (uint32_t)(0x464D5015)
#define DEVICE_UID_MOST (uint32_t)(0x20373935)
#define BAT_V_COEFF_A   (1.0034f)
#define BAT_V_COEFF_B   (0.0729f)
#define CAP_I_COEFF_A   (1.f)
#define CAP_I_COEFF_B   (0.f)
#define CAP_V_COEFF_A   (1.f)
#define CAP_V_COEFF_B   (0.f)
#define CAP_ESR         (0.3f)
#define BAT_I_COEFF_A   (0.9965f)
#define BAT_I_COEFF_B   (0.0643f)
#define CHAS_I_COEFF_A  (0.9873f)
#define CHAS_I_COEFF_B  (0.0554f)*/

///* 3-3校准系数 */
//#define CURRENT_BOARD_NUMBER 3_3
//#define DEVICE_UID_LOW  (uint32_t)(0x0041002E)
//#define DEVICE_UID_MID  (uint32_t)(0x464D5015)
//#define DEVICE_UID_MOST (uint32_t)(0x20373935)
//#define BAT_V_COEFF_A   (0.9993f)
//#define BAT_V_COEFF_B   (0.0647f)
//#define CAP_I_COEFF_A   (1.f)
//#define CAP_I_COEFF_B   (0.03f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (0.f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (0.9976f)
//#define BAT_I_COEFF_B   (0.0629f)
//#define CHAS_I_COEFF_A  (0.9793f)
//#define CHAS_I_COEFF_B  (0.0493f)

///* 3-4校准系数 */
//#define CURRENT_BOARD_NUMBER 3_4
//#define DEVICE_UID_LOW  (uint32_t)(0x00270027)
//#define DEVICE_UID_MID  (uint32_t)(0x464D5015)
//#define DEVICE_UID_MOST (uint32_t)(0x20373935)
//#define BAT_V_COEFF_A   (1.0031f)
//#define BAT_V_COEFF_B   (0.0531f)
//#define CAP_I_COEFF_A   (1.f)
//#define CAP_I_COEFF_B   (0.f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (0.f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (0.9849f)
//#define BAT_I_COEFF_B   (0.0784f)
//#define CHAS_I_COEFF_A  (0.9827f)
//#define CHAS_I_COEFF_B  (0.0531f)

///* 3-5校准系数 */
//#define CURRENT_BOARD_NUMBER 3_5
//#define DEVICE_UID_LOW  (uint32_t)(0x00300025)
//#define DEVICE_UID_MID  (uint32_t)(0x464D5015)
//#define DEVICE_UID_MOST (uint32_t)(0x20373935)
//#define BAT_V_COEFF_A   (0.9969f)
//#define BAT_V_COEFF_B   (0.0447f)
//#define CAP_I_COEFF_A   (1.f)
//#define CAP_I_COEFF_B   (0.f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (0.f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (0.986f)
//#define BAT_I_COEFF_B   (0.0495f)
//#define CHAS_I_COEFF_A  (0.986f)
//#define CHAS_I_COEFF_B  (0.2049f)

///* 3-6校准系数 */
//#define CURRENT_BOARD_NUMBER 3_6
//#define DEVICE_UID_LOW  (uint32_t)(0x002A0027)
//#define DEVICE_UID_MID  (uint32_t)(0x464D5015)
//#define DEVICE_UID_MOST (uint32_t)(0x20373935)
//#define BAT_V_COEFF_A   (1.0103f)
//#define BAT_V_COEFF_B   (0.0594f)
//#define CAP_I_COEFF_A   (1.f)
//#define CAP_I_COEFF_B   (0.03f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (0.f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (0.9939f)
//#define BAT_I_COEFF_B   (0.0381f)
//#define CHAS_I_COEFF_A  (0.9971f)
//#define CHAS_I_COEFF_B  (0.038f)

///* 3-7校准系数 */
//#define CURRENT_BOARD_NUMBER 3_7
//#define DEVICE_UID_LOW  (uint32_t)(0x003D002E)
//#define DEVICE_UID_MID  (uint32_t)(0x464D5015)
//#define DEVICE_UID_MOST (uint32_t)(0x20373935)
//#define BAT_V_COEFF_A   (0.997f)
//#define BAT_V_COEFF_B   (0.055f)
//#define CAP_I_COEFF_A   (1.f)
//#define CAP_I_COEFF_B   (0.17f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (0.f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (0.9953f)
//#define BAT_I_COEFF_B   (0.0739f)
//#define CHAS_I_COEFF_A  (0.9898f)
//#define CHAS_I_COEFF_B  (0.0767f)

///* 3-8校准系数 */
//#define CURRENT_BOARD_NUMBER 3_8
//#define DEVICE_UID_LOW  (uint32_t)(0x003E002E)
//#define DEVICE_UID_MID  (uint32_t)(0x464D5015)
//#define DEVICE_UID_MOST (uint32_t)(0x20373935)
//#define BAT_V_COEFF_A   (1.0049f)
//#define BAT_V_COEFF_B   (0.0612f)
//#define CAP_I_COEFF_A   (1.f)
//#define CAP_I_COEFF_B   (0.f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (0.f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (0.9898f)
//#define BAT_I_COEFF_B   (0.0731f)
//#define CHAS_I_COEFF_A  (0.9966f)
//#define CHAS_I_COEFF_B  (0.0826f)

///* 3-9校准系数 */
//#define CURRENT_BOARD_NUMBER 3_9
//#define DEVICE_UID_LOW  (uint32_t)(0x003D0025)
//#define DEVICE_UID_MID  (uint32_t)(0x464D5015)
//#define DEVICE_UID_MOST (uint32_t)(0x20373935)
//#define BAT_V_COEFF_A   (0.9959f)
//#define BAT_V_COEFF_B   (0.0575f)
//#define CAP_I_COEFF_A   (1.f)
//#define CAP_I_COEFF_B   (0.f)
//#define CAP_V_COEFF_A   (1.f)
//#define CAP_V_COEFF_B   (-0.04f)
//#define CAP_ESR         (0.3f)
//#define BAT_I_COEFF_A   (0.9838f)
//#define BAT_I_COEFF_B   (0.0465f)
//#define CHAS_I_COEFF_A  (0.9861f)
//#define CHAS_I_COEFF_B  (0.0352f)

// /* 3-10校准系数 */
// #define CURRENT_BOARD_NUMBER 3_10
// #define DEVICE_UID_LOW  (uint32_t)(0x0040002E)
// #define DEVICE_UID_MID  (uint32_t)(0x464D5015)
// #define DEVICE_UID_MOST (uint32_t)(0x20373935)
// #define BAT_V_COEFF_A   (0.9959f)
// #define BAT_V_COEFF_B   (0.0575f)
// #define CAP_I_COEFF_A   (1.f)
// #define CAP_I_COEFF_B   (0.f)
// #define CAP_V_COEFF_A   (1.f)
// #define CAP_V_COEFF_B   (-0.04f)
// #define CAP_ESR         (0.3f)
// #define BAT_I_COEFF_A   (0.9838f)
// #define BAT_I_COEFF_B   (0.1565f)
// #define CHAS_I_COEFF_A  (0.9861f)
// #define CHAS_I_COEFF_B  (0.0352f)

#endif

#ifdef _USE_BOARD_4_x
/* 第四批板初始校准系数 */
/*#define CURRENT_BOARD_NUMBER 4_0
#define DEVICE_UID_LOW  (uint32_t)(0x0042002A) 
#define DEVICE_UID_MID  (uint32_t)(0x39415014)
#define DEVICE_UID_MOST (uint32_t)(0x20383452)
#define BAT_V_COEFF_A   (1.f)
#define BAT_V_COEFF_B   (0.f)
#define CAP_I_COEFF_A   (1.f)
#define CAP_I_COEFF_B   (0.f)
#define CAP_V_COEFF_A   (1.f)
#define CAP_V_COEFF_B   (0.f)
#define CAP_ESR         (0.3f)
#define BAT_I_COEFF_A   (1.f)
#define BAT_I_COEFF_B   (0.f)
#define CHAS_I_COEFF_A  (1.f)
#define CHAS_I_COEFF_B  (0.f)*/

///* 4-1校准系数 *///
/*#define CURRENT_BOARD_NUMBER 4_1
#define DEVICE_UID_LOW  (uint32_t)(0x00280032) 
#define DEVICE_UID_MID  (uint32_t)(0x39415014)
#define DEVICE_UID_MOST (uint32_t)(0x20383452)
#define BAT_V_COEFF_A   (0.9945f)
#define BAT_V_COEFF_B   (-0.2636f)
#define CAP_I_COEFF_A   (1.034f)
#define CAP_I_COEFF_B   (-0.015f)
#define CAP_V_COEFF_A   (1.f)
#define CAP_V_COEFF_B   (0.f)
#define CAP_ESR         (0.3f)
#define BAT_I_COEFF_A   (1.0139f)
#define BAT_I_COEFF_B   (0.0837f)
#define CHAS_I_COEFF_A  (1.0085f)
#define CHAS_I_COEFF_B  (-0.0179f)*/


///* 4-2校准系数 *///
/*#define CURRENT_BOARD_NUMBER 4_2
#define DEVICE_UID_LOW  (uint32_t)(0x00230043) 
#define DEVICE_UID_MID  (uint32_t)(0x39415014)
#define DEVICE_UID_MOST (uint32_t)(0x20383452)
#define BAT_V_COEFF_A   (0.9847f)
#define BAT_V_COEFF_B   (0.0685f)
#define CAP_I_COEFF_A   (0.97f)
#define CAP_I_COEFF_B   (-0.003f)
#define CAP_V_COEFF_A   (1.f)
#define CAP_V_COEFF_B   (0.f)
#define CAP_ESR         (0.3f)
#define BAT_I_COEFF_A   (0.9804f)
#define BAT_I_COEFF_B   (0.2264f)
#define CHAS_I_COEFF_A  (0.9842f)
#define CHAS_I_COEFF_B  (0.0286f)*/


///* 4-3校准系数 *///
/*#define CURRENT_BOARD_NUMBER 4_3
#define DEVICE_UID_LOW  (uint32_t)(0x00230042) 
#define DEVICE_UID_MID  (uint32_t)(0x39415014)
#define DEVICE_UID_MOST (uint32_t)(0x20383452)
#define BAT_V_COEFF_A   (0.9891f)
#define BAT_V_COEFF_B   (-0.0212f)
#define CAP_I_COEFF_A   (1.04f)
#define CAP_I_COEFF_B   (-0.014f)
#define CAP_V_COEFF_A   (1.f)
#define CAP_V_COEFF_B   (0.f)
#define CAP_ESR         (0.3f)
#define BAT_I_COEFF_A   (1.0515f)
#define BAT_I_COEFF_B   (-0.0076f)
#define CHAS_I_COEFF_A  (0.9831f)
#define CHAS_I_COEFF_B  (0.042f)*/

///* 4-4校准系数 *///
/*#define CURRENT_BOARD_NUMBER 4_4
#define DEVICE_UID_LOW  (uint32_t)(0x00440049) 
#define DEVICE_UID_MID  (uint32_t)(0x39415013)
#define DEVICE_UID_MOST (uint32_t)(0x20383452)
#define BAT_V_COEFF_A   (0.9581f)
#define BAT_V_COEFF_B   (0.1883f)
#define CAP_I_COEFF_A   (1.026f)
#define CAP_I_COEFF_B   (-0.013f)
#define CAP_V_COEFF_A   (1.f)
#define CAP_V_COEFF_B   (0.f)
#define CAP_ESR         (0.3f)
#define BAT_I_COEFF_A   (1.0453f)
#define BAT_I_COEFF_B   (0.101f)
#define CHAS_I_COEFF_A  (0.977f)
#define CHAS_I_COEFF_B  (-0.0474f)*/

///* 4-5校准系数 *///
/*#define CURRENT_BOARD_NUMBER 4_5
#define DEVICE_UID_LOW  (uint32_t)(0x00260047) 
#define DEVICE_UID_MID  (uint32_t)(0x39415014)
#define DEVICE_UID_MOST (uint32_t)(0x20383452)
#define BAT_V_COEFF_A   (0.9702f)
#define BAT_V_COEFF_B   (0.0949f)
#define CAP_I_COEFF_A   (1.024f)
#define CAP_I_COEFF_B   (-0.026f)
#define CAP_V_COEFF_A   (1.f)
#define CAP_V_COEFF_B   (0.f)
#define CAP_ESR         (0.3f)
#define BAT_I_COEFF_A   (1.0357f)
#define BAT_I_COEFF_B   (0.1001f)
#define CHAS_I_COEFF_A  (0.9909f)
#define CHAS_I_COEFF_B  (0.0472f)*/
#endif

#ifdef _USE_BOARD_5_x
/* 第五批板初始校准系数 */
/*#define CURRENT_BOARD_NUMBER 5_0
#define DEVICE_UID_LOW  (uint32_t)(0x0042002A) 
#define DEVICE_UID_MID  (uint32_t)(0x39415014)
#define DEVICE_UID_MOST (uint32_t)(0x20383452)
#define BAT_V_COEFF_A   (1.f)
#define BAT_V_COEFF_B   (0.f)
#define CAP_I_COEFF_A   (1.f)
#define CAP_I_COEFF_B   (0.f)
#define CAP_V_COEFF_A   (1.f)
#define CAP_V_COEFF_B   (0.f)
#define CAP_ESR         (0.3f)
#define BAT_I_COEFF_A   (1.f)
#define BAT_I_COEFF_B   (0.f)
#define CHAS_I_COEFF_A  (1.f)
#define CHAS_I_COEFF_B  (0.f)*/


///* 5-2校准系数 *///
/*#define CURRENT_BOARD_NUMBER 5_2
#define DEVICE_UID_LOW  (uint32_t)(0x003A001A) 
#define DEVICE_UID_MID  (uint32_t)(0x48525010)
#define DEVICE_UID_MOST (uint32_t)(0x20323733)
#define BAT_V_COEFF_A   (1.0144f)
#define BAT_V_COEFF_B   (0.0016f)
#define CAP_I_COEFF_A   (0.952f)
#define CAP_I_COEFF_B   (0.01f)
#define CAP_V_COEFF_A   (1.f)
#define CAP_V_COEFF_B   (0.f)
#define CAP_ESR         (0.3f)
#define BAT_I_COEFF_A   (0.9757f)
#define BAT_I_COEFF_B   (0.2202f)
#define CHAS_I_COEFF_A  (0.9602f)
#define CHAS_I_COEFF_B  (0.1049f)*/


///* 5-3校准系数 *///
/*#define CURRENT_BOARD_NUMBER 5_3
#define DEVICE_UID_LOW  (uint32_t)(0x00200049) 
#define DEVICE_UID_MID  (uint32_t)(0x48525010)
#define DEVICE_UID_MOST (uint32_t)(0x20323733)
#define BAT_V_COEFF_A   (1.0135f)
#define BAT_V_COEFF_B   (-0.0086f)
#define CAP_I_COEFF_A   (0.944f)
#define CAP_I_COEFF_B   (-0.038f)
#define CAP_V_COEFF_A   (1.f)
#define CAP_V_COEFF_B   (0.f)
#define CAP_ESR         (0.3f)
#define BAT_I_COEFF_A   (0.9355f)
#define BAT_I_COEFF_B   (0.194f)
#define CHAS_I_COEFF_A  (0.9462f)
#define CHAS_I_COEFF_B  (0.0362f)*/

///* 5-4校准系数 *///
#define CURRENT_BOARD_NUMBER 5_4
#define DEVICE_UID_LOW  (uint32_t)(0x00230041) 
#define DEVICE_UID_MID  (uint32_t)(0x42435012)
#define DEVICE_UID_MOST (uint32_t)(0x20343346)
#define BAT_V_COEFF_A   (1.0124f)
#define BAT_V_COEFF_B   (-0.0456f)
#define CAP_I_COEFF_A   (0.912f)
#define CAP_I_COEFF_B   (-0.024f)
#define CAP_V_COEFF_A   (1.f)
#define CAP_V_COEFF_B   (0.f)
#define CAP_ESR         (0.3f)
#define BAT_I_COEFF_A   (0.9569f)
#define BAT_I_COEFF_B   (0.1848f)
#define CHAS_I_COEFF_A  (0.9569f)
#define CHAS_I_COEFF_B  (0.0307f)
#endif

#endif
