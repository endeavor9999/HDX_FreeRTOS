/*
 * CAN_Interrupt.c
 *
 *  Created on: 2022. 11. 1.
 *      Author: USER
 */

#include "Can_Cfg.h"


IFX_INTERRUPT(can0IsrTxHandler, 0, ISR_PRIORITY_CAN0_TX_Complete);
IFX_INTERRUPT(can0IsrRxHandler1, 0, ISR_PRIORITY_CAN0_RX_BUFFER);
IFX_INTERRUPT(can0IsrRxHandler2, 0, ISR_PRIORITY_CAN0_RX_FIFO_0);
IFX_INTERRUPT(can0IsrRxHandler3, 0, ISR_PRIORITY_CAN0_RX_FIFO_1);


IFX_INTERRUPT(can1IsrTxHandler, 0, ISR_PRIORITY_CAN1_TX_Complete);
IFX_INTERRUPT(can1IsrRxHandler1, 0, ISR_PRIORITY_CAN1_RX_BUFFER);
IFX_INTERRUPT(can1IsrRxHandler2, 0, ISR_PRIORITY_CAN1_RX_FIFO_0);
IFX_INTERRUPT(can1IsrRxHandler3, 0, ISR_PRIORITY_CAN1_RX_FIFO_1);

IFX_INTERRUPT(can2IsrTxHandler, 0, ISR_PRIORITY_CAN2_TX_Complete);
IFX_INTERRUPT(can2IsrRxHandler1, 0, ISR_PRIORITY_CAN2_RX_BUFFER);
IFX_INTERRUPT(can2IsrRxHandler2, 0, ISR_PRIORITY_CAN2_RX_FIFO_0);
IFX_INTERRUPT(can2IsrRxHandler3, 0, ISR_PRIORITY_CAN2_RX_FIFO_1);

IFX_INTERRUPT(can3IsrTxHandler, 0, ISR_PRIORITY_CAN3_TX_Complete);
IFX_INTERRUPT(can3IsrRxHandler1, 0, ISR_PRIORITY_CAN3_RX_BUFFER);
IFX_INTERRUPT(can3IsrRxHandler2, 0, ISR_PRIORITY_CAN3_RX_FIFO_0);
IFX_INTERRUPT(can3IsrRxHandler3, 0, ISR_PRIORITY_CAN3_RX_FIFO_1);




uint32 TX_TEST=0;
uint32 RX_TEST1=0;
uint32 RX_TEST2=0;
uint32 RX_TEST3=0;
uint32 RX_buf=0;
Can_ReciveData_Type Recive_Data_0x60b;
uint32 Recive_Data_0x201[4][3];

void can0IsrTxHandler(void)
{

    if(Can0_Cfg.Can_Ch->canSrcNode.node->IR.U&(1u << IfxCan_Interrupt_transmissionCompleted)){
        IfxCan_Node_clearInterruptFlag(Can0_Cfg.Can_Ch->canSrcNode.node, IfxCan_Interrupt_transmissionCompleted);

    }
}

void can0IsrRxHandler1(void)
{

}


void can0IsrRxHandler2(void)
{
    uint8 Object_ID=0;
    /* Clear the "RX FIFO 0 new message" interrupt flag */
    IfxCan_Node_clearInterruptFlag(Can0_Cfg.Can_Ch->canSrcNode.node, IfxCan_Interrupt_rxFifo0NewMessage);

    /* Received message content should be updated with the data stored in the RX FIFO 0 */
    Can0_Cfg.Can_Ch->rxMsg[0].readFromRxFifo0 = TRUE;
    Can0_Cfg.Can_Ch->rxMsg[0].readFromRxFifo1 = FALSE;

    /* Read the received CAN message */
    IfxCan_Can_readMessage(&Can0_Cfg.Can_Ch->canSrcNode,&Can0_Cfg.Can_Ch->rxMsg[0],(uint32*)&Can0_Cfg.Can_Ch->rxData[0][0]);
    if(Can0_Cfg.Can_Ch->rxMsg[0].messageId==0x060b){
        Object_ID=(uint8)Can0_Cfg.Can_Ch->rxData[0][0]&0xff;
        Recive_Data_0x60b.rxData[Object_ID][0]=Can0_Cfg.Can_Ch->rxData[0][0];
        Recive_Data_0x60b.rxData[Object_ID][1]=Can0_Cfg.Can_Ch->rxData[0][1];
    }
}
void can0IsrRxHandler3(void)
{

    /* Clear the "RX FIFO 1 new message" interrupt flag */
    IfxCan_Node_clearInterruptFlag(Can0_Cfg.Can_Ch->canSrcNode.node, IfxCan_Interrupt_rxFifo1NewMessage);

    /* Received message content should be updated with the data stored in the RX FIFO 1 */
    Can0_Cfg.Can_Ch->rxMsg[1].readFromRxFifo0 = FALSE;
    Can0_Cfg.Can_Ch->rxMsg[1].readFromRxFifo1 = TRUE;

    /* Read the received CAN message */
    IfxCan_Can_readMessage(&Can0_Cfg.Can_Ch->canSrcNode,&Can0_Cfg.Can_Ch->rxMsg[1],(uint32*)&Can0_Cfg.Can_Ch->rxData[1][0]);
    if(Can0_Cfg.Can_Ch->rxMsg[1].messageId==0x201){
        Recive_Data_0x201[0][0]=Can0_Cfg.Can_Ch->rxData[1][0];
        Recive_Data_0x201[0][1]=Can0_Cfg.Can_Ch->rxData[1][1];
        Recive_Data_0x201[0][2]=((Can0_Cfg.Can_Ch->rxData[1][1]&0xc00)>>10);
    }
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void can1IsrTxHandler(void)
{

    if(Can1_Cfg.Can_Ch->canSrcNode.node->IR.U&(1u << IfxCan_Interrupt_transmissionCompleted)){
        IfxCan_Node_clearInterruptFlag(Can1_Cfg.Can_Ch->canSrcNode.node, IfxCan_Interrupt_transmissionCompleted);

    }
}

void can1IsrRxHandler1(void)
{


}


void can1IsrRxHandler2(void)
{
    uint8 Object_ID=0;
    /* Clear the "RX FIFO 0 new message" interrupt flag */
    IfxCan_Node_clearInterruptFlag(Can1_Cfg.Can_Ch->canSrcNode.node, IfxCan_Interrupt_rxFifo0NewMessage);

    /* Received message content should be updated with the data stored in the RX FIFO 0 */
    Can1_Cfg.Can_Ch->rxMsg[0].readFromRxFifo0 = TRUE;
    Can1_Cfg.Can_Ch->rxMsg[0].readFromRxFifo1 = FALSE;

    /* Read the received CAN message */
    IfxCan_Can_readMessage(&Can1_Cfg.Can_Ch->canSrcNode,&Can1_Cfg.Can_Ch->rxMsg[0],(uint32*)&Can1_Cfg.Can_Ch->rxData[0][0]);
    if(Can1_Cfg.Can_Ch->rxMsg[0].messageId==0x060b){
        Object_ID=(uint8)Can1_Cfg.Can_Ch->rxData[0][0]&0xff;
        Recive_Data_0x60b.rxData[Object_ID][0]=Can1_Cfg.Can_Ch->rxData[0][0];
        Recive_Data_0x60b.rxData[Object_ID][1]=Can1_Cfg.Can_Ch->rxData[0][1];
    }
}
void can1IsrRxHandler3(void)
{
    /* Clear the "RX FIFO 1 new message" interrupt flag */
    IfxCan_Node_clearInterruptFlag(Can1_Cfg.Can_Ch->canSrcNode.node, IfxCan_Interrupt_rxFifo1NewMessage);

    /* Received message content should be updated with the data stored in the RX FIFO 1 */
    Can1_Cfg.Can_Ch->rxMsg[1].readFromRxFifo0 = FALSE;
    Can1_Cfg.Can_Ch->rxMsg[1].readFromRxFifo1 = TRUE;

    /* Read the received CAN message */
    IfxCan_Can_readMessage(&Can1_Cfg.Can_Ch->canSrcNode,&Can1_Cfg.Can_Ch->rxMsg[1],(uint32*)&Can1_Cfg.Can_Ch->rxData[1][0]);
    if(Can1_Cfg.Can_Ch->rxMsg[1].messageId==0x201){
        Recive_Data_0x201[1][0]=Can1_Cfg.Can_Ch->rxData[1][0];
        Recive_Data_0x201[1][1]=Can1_Cfg.Can_Ch->rxData[1][1];
        Recive_Data_0x201[1][2]=((Can1_Cfg.Can_Ch->rxData[1][1]&0xc00)>>10);
    }
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void can2IsrTxHandler(void)
{

    if(Can2_Cfg.Can_Ch->canSrcNode.node->IR.U&(1u << IfxCan_Interrupt_transmissionCompleted)){
        IfxCan_Node_clearInterruptFlag(Can2_Cfg.Can_Ch->canSrcNode.node, IfxCan_Interrupt_transmissionCompleted);

    }
}

void can2IsrRxHandler1(void)
{
}


void can2IsrRxHandler2(void)
{
    uint8 Object_ID=0;
    /* Clear the "RX FIFO 0 new message" interrupt flag */
    IfxCan_Node_clearInterruptFlag(Can2_Cfg.Can_Ch->canSrcNode.node, IfxCan_Interrupt_rxFifo0NewMessage);

    /* Received message content should be updated with the data stored in the RX FIFO 0 */
    Can2_Cfg.Can_Ch->rxMsg[0].readFromRxFifo0 = TRUE;
    Can2_Cfg.Can_Ch->rxMsg[0].readFromRxFifo1 = FALSE;

    /* Read the received CAN message */
    IfxCan_Can_readMessage(&Can2_Cfg.Can_Ch->canSrcNode,&Can2_Cfg.Can_Ch->rxMsg[0],(uint32*)&Can2_Cfg.Can_Ch->rxData[0][0]);
    if(Can2_Cfg.Can_Ch->rxMsg[0].messageId==0x060b){
        Object_ID=(uint8)Can2_Cfg.Can_Ch->rxData[0][0]&0xff;
        Recive_Data_0x60b.rxData[Object_ID][0]=Can2_Cfg.Can_Ch->rxData[0][0];
        Recive_Data_0x60b.rxData[Object_ID][1]=Can2_Cfg.Can_Ch->rxData[0][1];
    }
}
void can2IsrRxHandler3(void)
{
    /* Clear the "RX FIFO 1 new message" interrupt flag */
    IfxCan_Node_clearInterruptFlag(Can2_Cfg.Can_Ch->canSrcNode.node, IfxCan_Interrupt_rxFifo1NewMessage);

    /* Received message content should be updated with the data stored in the RX FIFO 1 */
    Can2_Cfg.Can_Ch->rxMsg[1].readFromRxFifo0 = FALSE;
    Can2_Cfg.Can_Ch->rxMsg[1].readFromRxFifo1 = TRUE;

    /* Read the received CAN message */
    IfxCan_Can_readMessage(&Can2_Cfg.Can_Ch->canSrcNode,&Can2_Cfg.Can_Ch->rxMsg[1],(uint32*)&Can2_Cfg.Can_Ch->rxData[1][0]);
    if(Can2_Cfg.Can_Ch->rxMsg[1].messageId==0x201){
        Recive_Data_0x201[2][0]=Can2_Cfg.Can_Ch->rxData[1][0];
        Recive_Data_0x201[2][1]=Can2_Cfg.Can_Ch->rxData[1][1];
        Recive_Data_0x201[2][2]=((Can2_Cfg.Can_Ch->rxData[1][1]&0xc00)>>10);
    }

}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void can3IsrTxHandler(void)
{

    if(Can3_Cfg.Can_Ch->canSrcNode.node->IR.U&(1u << IfxCan_Interrupt_transmissionCompleted)){
        IfxCan_Node_clearInterruptFlag(Can3_Cfg.Can_Ch->canSrcNode.node, IfxCan_Interrupt_transmissionCompleted);

    }
}

void can3IsrRxHandler1(void)
{

}


void can3IsrRxHandler2(void)
{
    uint8 Object_ID=0;
    /* Clear the "RX FIFO 0 new message" interrupt flag */
    IfxCan_Node_clearInterruptFlag(Can3_Cfg.Can_Ch->canSrcNode.node, IfxCan_Interrupt_rxFifo0NewMessage);

    /* Received message content should be updated with the data stored in the RX FIFO 0 */
    Can3_Cfg.Can_Ch->rxMsg[0].readFromRxFifo0 = TRUE;
    Can3_Cfg.Can_Ch->rxMsg[0].readFromRxFifo1 = FALSE;

    /* Read the received CAN message */
    IfxCan_Can_readMessage(&Can3_Cfg.Can_Ch->canSrcNode,&Can3_Cfg.Can_Ch->rxMsg[0],(uint32*)&Can3_Cfg.Can_Ch->rxData[0][0]);
    if(Can3_Cfg.Can_Ch->rxMsg[0].messageId==0x060b){
        Object_ID=(uint8)Can3_Cfg.Can_Ch->rxData[0][0]&0xff;
        Recive_Data_0x60b.rxData[Object_ID][0]=Can3_Cfg.Can_Ch->rxData[0][0];
        Recive_Data_0x60b.rxData[Object_ID][1]=Can3_Cfg.Can_Ch->rxData[0][1];
    }
}
void can3IsrRxHandler3(void)
{
    /* Clear the "RX FIFO 1 new message" interrupt flag */
    IfxCan_Node_clearInterruptFlag(Can3_Cfg.Can_Ch->canSrcNode.node, IfxCan_Interrupt_rxFifo1NewMessage);

    /* Received message content should be updated with the data stored in the RX FIFO 1 */
    Can3_Cfg.Can_Ch->rxMsg[1].readFromRxFifo0 = FALSE;
    Can3_Cfg.Can_Ch->rxMsg[1].readFromRxFifo1 = TRUE;

    /* Read the received CAN message */
    IfxCan_Can_readMessage(&Can3_Cfg.Can_Ch->canSrcNode,&Can3_Cfg.Can_Ch->rxMsg[1],(uint32*)&Can3_Cfg.Can_Ch->rxData[1][0]);
    if(Can3_Cfg.Can_Ch->rxMsg[1].messageId==0x201){
        Recive_Data_0x201[3][0]=Can3_Cfg.Can_Ch->rxData[1][0];
        Recive_Data_0x201[3][1]=Can3_Cfg.Can_Ch->rxData[1][1];
        Recive_Data_0x201[3][2]=((Can3_Cfg.Can_Ch->rxData[1][1]&0xc00)>>10);
    }

}
