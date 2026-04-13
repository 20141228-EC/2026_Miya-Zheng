#ifndef _CAN_PROTOCOL_H
#define _CAN_PROTOCOL_H

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"

/* Exported macro ------------------------------------------------------------*/
#define MASTER_CAN_RX_ID    0x222
#define CAPBOARD_CAN_TX_ID  0x211
#define WIRELESS_CAN_TX_ID  0x212

/* Exported functions --------------------------------------------------------*/
void CAN_user_rxHandler(void);

#endif
