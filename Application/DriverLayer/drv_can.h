#ifndef _DRV_CAN_H
#define _DRV_CAN_H

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"
#include "fdcan.h"

/* Exported variables --------------------------------------------------------*/


/* Private typedef -----------------------------------------------------------*/
typedef struct {
    FDCAN_RxHeaderTypeDef header;
    uint8_t               data[8];
} FDCAN_RxFrameTypeDef;

/* Exported functions --------------------------------------------------------*/
void FDCAN3_SendData(uint32_t stdId,uint8_t data_length, uint8_t *data);
void FDCAN3_Init(void);



#endif
