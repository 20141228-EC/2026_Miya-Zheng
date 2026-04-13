/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------- 
 * @Files: drv_can.c/h
 * 
 * @Author: Ye Jinyi
 * 
 * @First  Edit Date: 2025.1.16
 * @Latest Edit Date: 2025.1.17
 * 
 * @illustrate: 
 * 
 * @attention: stmg474的时钟频率为170MHz，CubeMX中无法配置波特率为1000000，最接近只能是999999，
 *             但是目前可以和车上主控正常通信，若通信出问题可以考虑是不是这方面原因。
 * 
 *-------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
 
/* Includes ------------------------------------------------------------------*/
#include "drv_can.h"

/* External variables --------------------------------------------------------*/
extern FDCAN_HandleTypeDef hfdcan3;

/* Private function prototypes -----------------------------------------------*/


/* Private variables ---------------------------------------------------------*/


/* rxData Handler [Weak] functions -------------------------------------------*/


/* Exported functions --------------------------------------------------------*/
/**
 * @brief  FDCAN1发送数据
 * @param  StdId: 标准ID
 * @param  data_length: 数据长度
 * @param  data: 数据指针
 * @retval None
 */
void FDCAN3_SendData(uint32_t stdId,uint8_t data_length, uint8_t *data)
{
    // 定义FDCAN消息头结构体
    FDCAN_TxHeaderTypeDef txHeader;
    
    txHeader.Identifier = stdId;                            // 设置标准ID
    txHeader.IdType = FDCAN_STANDARD_ID;                    // 设置为标准ID
    txHeader.TxFrameType = FDCAN_DATA_FRAME;                // 数据帧
    txHeader.DataLength = data_length;                      // 数据长度
    txHeader.ErrorStateIndicator = FDCAN_ESI_ACTIVE;        // 错误状态指示符
    txHeader.BitRateSwitch = FDCAN_BRS_OFF;                 // 比特率切换关闭
    txHeader.FDFormat = FDCAN_CLASSIC_CAN;                  // 使用经典CAN格式
    txHeader.TxEventFifoControl = FDCAN_NO_TX_EVENTS;       // 不使用事件FIFO
    txHeader.MessageMarker = 0;                             // 消息标记（可选）
    
    // 使用HAL库将消息发送到发送队列
    HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan3, &txHeader, data);
}

/**
 * @brief  CAN滤波器初始化、使能、开启FIFO 0接收中断
 *         不过滤任何数据
 * @retval None
 */
void FDCAN3_Init(void)
{
    FDCAN_FilterTypeDef filterConfig;
    
    // 配置滤波器为不过滤任何数据，接受所有消息
    filterConfig.FilterIndex = 0;                           // 滤波器的索引
    filterConfig.FilterType = FDCAN_FILTER_MASK;            // 使用掩码模式
    filterConfig.FilterConfig = FDCAN_FILTER_TO_RXFIFO0;    // 接收 FIFO 0
    filterConfig.FilterID1 = 0x00000000;                    // 设置为接受所有标准ID
    filterConfig.FilterID2 = 0x00000000;                    // 设置为接受所有扩展ID
        
    // 添加滤波器到 FDCAN3 过滤器组
    HAL_FDCAN_ConfigFilter(&hfdcan3, &filterConfig);
    
    // 使能接收 FIFO 0 中断
    HAL_FDCAN_ActivateNotification(&hfdcan3, FDCAN_IT_RX_FIFO0_NEW_MESSAGE, 0);
    
    // 开启FDCAN3
    HAL_FDCAN_Start(&hfdcan3);
}

///**
// * @brief  CAN滤波器初始化、使能、开启FIFO 0接收中断
// *         配置滤波器为只接收 ID 为 0x222 的标准ID
// * @retval None
// */
//void FDCAN3_Init(void)
//{
//    FDCAN_FilterTypeDef filterConfig;
//    
//    // 配置滤波器为只接收 ID 为 0x222 的标准ID
//    filterConfig.IdType = FDCAN_STANDARD_ID;                 // 设置为标准ID
//    filterConfig.FilterIndex = 0;                            // 滤波器的索引
//    filterConfig.FilterType = FDCAN_FILTER_MASK;             // 使用掩码模式
//    filterConfig.FilterConfig = FDCAN_FILTER_TO_RXFIFO0;     // 接收 FIFO 0
//    filterConfig.FilterID1 = 0x222;                          // 设置为标准ID 0x222
//    filterConfig.FilterID2 = 0x000;                          // 不需要扩展ID，只处理标准ID
//    
//    // 添加滤波器到 FDCAN3 过滤器组
//    HAL_FDCAN_ConfigFilter(&hfdcan3, &filterConfig);
//    
//    // 使能接收 FIFO 0 中断
//    HAL_FDCAN_ActivateNotification(&hfdcan3, FDCAN_IT_RX_FIFO0_NEW_MESSAGE, 0);
//    
//    // 开启FDCAN3
//    HAL_FDCAN_Start(&hfdcan3);
//}


