/*
 * Can_Cfg.h
 *
 *  Created on: 2022. 11. 1.
 *      Author: USER
 */

#ifndef APPL_CAN_CAN_CFG_H_
#define APPL_CAN_CAN_CFG_H_



#include "Can.h"
//----------------------------------------------------------
#include "FreeRTOS.h"
#include "IfxPort.h"
#include "Ifx_Console.h"
#include "task.h"

#define PORT00          (&MODULE_P00)
#define PORT01          (&MODULE_P01)
#define PORT02          (&MODULE_P02)
#define PORT10          (&MODULE_P10)
#define PORT13          (&MODULE_P13)
#define PORT14          (&MODULE_P14)
#define PORT20          (&MODULE_P20)
#define PORT21          (&MODULE_P21)
#define PORT22          (&MODULE_P22)
#define PORT23          (&MODULE_P23)
#define PORT32          (&MODULE_P32)
#define PORT33          (&MODULE_P33)

#define PIN_00       0
#define PIN_01       1
#define PIN_02       2
#define PIN_03       3
#define PIN_04       4
#define PIN_05       5
#define PIN_06       6
#define PIN_07       7
#define PIN_08       8
#define PIN_09       9
#define PIN_10      10
#define PIN_11      11
#define PIN_12      12
#define PIN_13      13

// 보드에 맞게 조정하세요
#define CAN0_TX_PORT   PORT02
#define CAN0_TX_PIN    PIN_00   // P02.0 = CAN0_TXD
#define CAN0_RX_PORT   PORT02
#define CAN0_RX_PIN    PIN_01   // P02.1 = CAN0_RXD
#define CAN0_STB_PORT  PORT02
#define CAN0_STB_PIN   PIN_02   // P02.2 = CAN0_STB

#define CAN1_TX_PORT   PORT02
#define CAN1_TX_PIN    PIN_09   // P02.0 = CAN0_TXD
#define CAN1_RX_PORT   PORT02
#define CAN1_RX_PIN    PIN_10   // P02.1 = CAN0_RXD
#define CAN1_STB_PORT  PORT02
#define CAN1_STB_PIN   PIN_11   // P02.2 = CAN0_STB

#define CAN2_TX_PORT   PORT00
#define CAN2_TX_PIN    PIN_00   // P02.0 = CAN0_TXD
#define CAN2_RX_PORT   PORT00
#define CAN2_RX_PIN    PIN_01   // P02.1 = CAN0_RXD
#define CAN2_STB_PORT  PORT00
#define CAN2_STB_PIN   PIN_02   // P02.2 = CAN0_STB
//----------------------------------------------------------



extern Can_Node_Info Can0_Cfg;
extern Can_Node_Info Can1_Cfg;
extern Can_Node_Info Can2_Cfg;
extern Can_Node_Info Can3_Cfg;

extern Can_ReciveData_Type Recive_Data_0x60b;
extern uint32 Recive_Data_0x201[4][3];
#define ISR_PRIORITY_CAN0_TX_Complete 40
#define ISR_PRIORITY_CAN0_RX_BUFFER 41
#define ISR_PRIORITY_CAN0_RX_FIFO_0 42
#define ISR_PRIORITY_CAN0_RX_FIFO_1 43

#define ISR_PRIORITY_CAN1_TX_Complete 44
#define ISR_PRIORITY_CAN1_RX_BUFFER 45
#define ISR_PRIORITY_CAN1_RX_FIFO_0 46
#define ISR_PRIORITY_CAN1_RX_FIFO_1 47

#define ISR_PRIORITY_CAN2_TX_Complete 48
#define ISR_PRIORITY_CAN2_RX_BUFFER 49
#define ISR_PRIORITY_CAN2_RX_FIFO_0 50
#define ISR_PRIORITY_CAN2_RX_FIFO_1 51

#define ISR_PRIORITY_CAN3_TX_Complete 52
#define ISR_PRIORITY_CAN3_RX_BUFFER 53
#define ISR_PRIORITY_CAN3_RX_FIFO_0 54
#define ISR_PRIORITY_CAN3_RX_FIFO_1 55

#define INVALID_TX_DATA_VALUE       (uint32)0x00000000          /* Used to invalidate TX message data content        */
#define INVALID_RX_DATA_VALUE       (uint32)0xAAAAAAAA          /* Used to invalidate RX message data content        */
#define CAN0_NUMBER_OF_STND_ID_FILTERS   8                           /* Define the number of standard ID filter elements  */
#define CAN0_NUMBER_OF_EXTD_ID_FILTERS   4                           /* Define the number of extended ID filter elements  */
#define INVALID_ID_VALUE            (uint32)0xFFFFFFFF          /* Used to invalidate RX messages ID value           */
#define INVALID_DLC_VALUE           IfxCan_DataLengthCode_0     /* Used to invalidate RX messages DLC value          */
#define DEFAULT_FRAME_MODE          IfxCan_FrameMode_standard   /* Used to invalidate RX messages frame mode value   */

///////////////CanModule 0///////////////
///////////////Can1->Node1////////////////
#define Can0_Tx_pin IfxCan_TXD00_P02_0_OUT    //Add Can tranceiver For Mobis board
#define Can0_Rx_pin IfxCan_RXD00A_P02_1_IN    //Add Can tranceiver For Mobis board

///////////////CanModule 1///////////////
///////////////Can0->Node0////////////////
#define Can1_Tx_pin IfxCan_TXD01_P02_9_OUT
#define Can1_Rx_pin IfxCan_RXD01E_P02_10_IN

///////////////CanModule 2///////////////
///////////////Can2->Node1////////////////
#define Can2_Tx_pin IfxCan_TXD10_P00_0_OUT
#define Can2_Rx_pin IfxCan_RXD10A_P00_1_IN


void Can_NodeConfig_Set(void);
void ARS408_Setting(void);

#endif /* APPL_CAN_CAN_CFG_H_ */
