/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- 
 * @Files:can_protocol.c/h
 * 
 * @Author: Ye Jinyi
 * 
 * @First  Edit Date: 2025.2.24
 * @Latest Edit Date: 
 * 
 * @illustrate: 
 * 
 * @attention: 
 * 
 *-------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

/* Including Files  ------------------------------------------------------------------------------------------------------------------------------------------------- */
#include "can_protocol.h"
#include "drv_can.h"
#include "cap_board.h"

/* External Variables Declarations ---------------------------------------------------------------------------------------------------------------------------------- */
extern FDCAN_HandleTypeDef hfdcan3;

/* Define Exported Variables ---------------------------------------------------------------------------------------------------------------------------------------- */


/* Define Privated Variables ---------------------------------------------------------------------------------------------------------------------------------------- */
static FDCAN_RxFrameTypeDef FDCAN_RxFrame;

/* Define Privated Functions ---------------------------------------------------------------------------------------------------------------------------------------- */


/* Define Exported Functions ---------------------------------------------------------------------------------------------------------------------------------------- */
/*!
 * @usage: 分配、分离CAN接收数据
 */
void CAN_user_rxHandler(void)
{
    if (__HAL_FDCAN_GET_IT_SOURCE(&hfdcan3, FDCAN_IT_RX_FIFO0_NEW_MESSAGE))
    {
         HAL_FDCAN_GetRxMessage(&hfdcan3, FDCAN_RX_FIFO0, &FDCAN_RxFrame.header, FDCAN_RxFrame.data);
        
        switch (FDCAN_RxFrame.header.Identifier)
        {
            case MASTER_CAN_RX_ID:
            {
                get_master_rx_info(FDCAN_RxFrame.data);
                break;
            }
            case WIRELESS_CAN_TX_ID:
            {
                get_wireless_rx_info(FDCAN_RxFrame.data);
                break;
            }
            default:
                break;
        }
        
    }
    
}

