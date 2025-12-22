/*
 * Can_Cfg.h
 *
 *  Created on: 2022. 11. 1.
 *      Author: USER
 */

#ifndef APPL_CAN_CAN_CFG_H_
#define APPL_CAN_CAN_CFG_H_



#include "Can.h"




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
#define Can0_Tx_pin IfxCan_TXD11_P00_4_OUT    //Add Can tranceiver For Mobis board
#define Can0_Rx_pin IfxCan_RXD11B_P00_5_IN    //Add Can tranceiver For Mobis board

///////////////CanModule 1///////////////
///////////////Can0->Node0////////////////
#define Can1_Tx_pin IfxCan_TXD00_P01_13_OUT
#define Can1_Rx_pin IfxCan_RXD00F_P01_8_IN

///////////////CanModule 2///////////////
///////////////Can2->Node1////////////////
#define Can2_Tx_pin IfxCan_TXD21_P22_6_OUT
#define Can2_Rx_pin IfxCan_RXD21F_P22_7_IN

///////////////CanModule 3///////////////
///////////////Can0->Node3////////////////
#define Can3_Tx_pin IfxCan_TXD03_P20_3_OUT
#define Can3_Rx_pin IfxCan_RXD03C_P20_0_IN


void Can_NodeConfig_Set(void);
void ARS408_Setting(void);

#endif /* APPL_CAN_CAN_CFG_H_ */
