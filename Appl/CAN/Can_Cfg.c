/*
 * Can_Cfg.c
 *
 *  Created on: 2022. 11. 1.
 *      Author: USER
 */

#include "Can_Cfg.h"

McmcanType                  Can0_Node00;                       /* Global MCMCAN configuration and control structure    */
McmcanType                  Can1_Node00;                       /* Global MCMCAN configuration and control structure    */
McmcanType                  Can2_Node00;                       /* Global MCMCAN configuration and control structure    */

uint32 g_can0_rx_cnt = 0;
uint32 g_can1_rx_cnt = 0;
uint32 g_can2_rx_cnt = 0;
Can_Node_Info Can0_Cfg;
Can_Node_Info Can1_Cfg;
Can_Node_Info Can2_Cfg;
Can_Node_Info Can3_Cfg;




IfxCan_Filter Can0_filterStdConf[CAN0_NUMBER_OF_STND_ID_FILTERS] =
{
    { 0, IfxCan_FilterElementConfiguration_rejectId,        IfxCan_FilterType_range,    0x017, 0x019,                   DO_NOT_CARE_BUFFER_INDEX },
    { 1, IfxCan_FilterElementConfiguration_storeInRxBuffer,  IfxCan_FilterType_classic,  0x700, 0x700,                   DO_NOT_CARE_BUFFER_INDEX },
    { 2, IfxCan_FilterElementConfiguration_storeInRxFifo1,  IfxCan_FilterType_dualId,   0x201, 0x187,                   DO_NOT_CARE_BUFFER_INDEX },
    { 3, IfxCan_FilterElementConfiguration_storeInRxFifo0,  IfxCan_FilterType_dualId,   0x60A, 0x60B,                   DO_NOT_CARE_BUFFER_INDEX },
    { 4, IfxCan_FilterElementConfiguration_storeInRxFifo0,  IfxCan_FilterType_classic,  0x202, 0x39F,                   DO_NOT_CARE_BUFFER_INDEX },
    { 5, IfxCan_FilterElementConfiguration_storeInRxFifo1,  IfxCan_FilterType_classic,  0x199, 0x39F,                   DO_NOT_CARE_BUFFER_INDEX },
    { 6, IfxCan_FilterElementConfiguration_storeInRxBuffer, IfxCan_FilterType_none,     0x325, DO_NOT_CARE_ID2_VALUE,   IfxCan_RxBufferId_2 },
    { 7, IfxCan_FilterElementConfiguration_storeInRxBuffer, IfxCan_FilterType_none,     0x326, DO_NOT_CARE_ID2_VALUE,   IfxCan_RxBufferId_5 }
};

IfxCan_Filter Can0_filterExtConf[CAN0_NUMBER_OF_EXTD_ID_FILTERS] =
{
    { 0, IfxCan_FilterElementConfiguration_storeInRxBuffer, IfxCan_FilterType_none,     0x12222222, DO_NOT_CARE_ID2_VALUE,  IfxCan_RxBufferId_0 },
    { 1, IfxCan_FilterElementConfiguration_storeInRxFifo1,  IfxCan_FilterType_range,    0x19999999, 0x1BBBBBBB,             DO_NOT_CARE_BUFFER_INDEX },
    { 2, IfxCan_FilterElementConfiguration_storeInRxFifo0,  IfxCan_FilterType_dualId,   0x1FFABCDE, 0x1FFABCDE,             DO_NOT_CARE_BUFFER_INDEX },
    { 3, IfxCan_FilterElementConfiguration_storeInRxFifo1,  IfxCan_FilterType_none,     0x16666666, 0x16666666,             DO_NOT_CARE_BUFFER_INDEX }
};

/*
McmcanType                  Can0_Node11;
McmcanType                  Can1_Node00;
McmcanType                  Can2_Node21;
McmcanType                  Can3_Node03;
*/





void Can_NodeConfig_Set(){

    Can0_Cfg.Can_Ch = &Can0_Node00;
    Can0_Cfg.Can_Module = &MODULE_CAN0;
    Can0_Cfg.Node = IfxCan_NodeId_0;
    Can0_Cfg.Tx_Priority = ISR_PRIORITY_CAN0_TX_Complete;

    Can0_Cfg.Rx_Priority[0] = ISR_PRIORITY_CAN0_RX_BUFFER;
    Can0_Cfg.Rx_Priority[1] = ISR_PRIORITY_CAN0_RX_FIFO_0;
    Can0_Cfg.Rx_Priority[2] = ISR_PRIORITY_CAN0_RX_FIFO_1;

    Can0_Cfg.Tx_InterruptLine    = IfxCan_InterruptLine_0;
    Can0_Cfg.Rx_InterruptLine[0] = IfxCan_InterruptLine_1;
    Can0_Cfg.Rx_InterruptLine[1] = IfxCan_InterruptLine_2;
    Can0_Cfg.Rx_InterruptLine[2] = IfxCan_InterruptLine_3;
    Can0_Cfg.pins.txPin = &Can0_Tx_pin;
    Can0_Cfg.pins.txPinMode = IfxPort_OutputMode_pushPull;
    Can0_Cfg.pins.rxPin = &Can0_Rx_pin;
    Can0_Cfg.pins.rxPinMode = IfxPort_InputMode_pullUp;
    Can0_Cfg.pins.padDriver = IfxPort_PadDriver_ttlSpeed1;
    Can0_Cfg.Filter_Std_Cfg = &Can0_filterStdConf[0];
    Can0_Cfg.Filter_Std_Num = NUMBER_OF_STND_ID_FILTERS;
    Can0_Cfg.Filter_Ext_Cfg = &Can0_filterExtConf[0];
    Can0_Cfg.Filter_Ext_Num = NUMBER_OF_EXTD_ID_FILTERS;
    Can0_Cfg.Can_num = 0;

    IfxCan_Can_initMessage(&Can0_Cfg.Can_Ch->rxMsg[0]);

    Can0_Cfg.Can_Ch->rxMsg[0].messageId = INVALID_ID_VALUE;
    Can0_Cfg.Can_Ch->rxMsg[0].dataLengthCode = INVALID_DLC_VALUE;
    Can0_Cfg.Can_Ch->rxMsg[0].frameMode = DEFAULT_FRAME_MODE;

    /* Invalidation of the RX message data content */
    memset((void *)(&Can0_Cfg.Can_Ch->rxData[0][0]), INVALID_RX_DATA_VALUE, MAXIMUM_CAN_FD_DATA_PAYLOAD);

    /* Invalidation of the TX message data content */
    memset((void *)(&Can0_Cfg.Can_Ch->txData[0]), INVALID_TX_DATA_VALUE, MAXIMUM_CAN_DATA_PAYLOAD);

    /* Initialization of the TX message with the default configuration */
    IfxCan_Can_initMessage(&Can0_Cfg.Can_Ch->txMsg);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    Can1_Cfg.Can_Ch = &Can1_Node00;
    Can1_Cfg.Can_Module = &MODULE_CAN0;
    Can1_Cfg.Node = IfxCan_NodeId_1;
    Can1_Cfg.Tx_Priority = ISR_PRIORITY_CAN1_TX_Complete;

    Can1_Cfg.Rx_Priority[0] = ISR_PRIORITY_CAN1_RX_BUFFER;
    Can1_Cfg.Rx_Priority[1] = ISR_PRIORITY_CAN1_RX_FIFO_0;
    Can1_Cfg.Rx_Priority[2] = ISR_PRIORITY_CAN1_RX_FIFO_1;

    Can1_Cfg.Tx_InterruptLine    = IfxCan_InterruptLine_4;
    Can1_Cfg.Rx_InterruptLine[0] = IfxCan_InterruptLine_5;
    Can1_Cfg.Rx_InterruptLine[1] = IfxCan_InterruptLine_6;
    Can1_Cfg.Rx_InterruptLine[2] = IfxCan_InterruptLine_7;
    Can1_Cfg.pins.txPin = &Can1_Tx_pin;
    Can1_Cfg.pins.txPinMode = IfxPort_OutputMode_pushPull;
    Can1_Cfg.pins.rxPin = &Can1_Rx_pin;
    Can1_Cfg.pins.rxPinMode = IfxPort_InputMode_pullUp;
    Can1_Cfg.pins.padDriver = IfxPort_PadDriver_ttlSpeed1;
    Can1_Cfg.Filter_Std_Cfg = &Can0_filterStdConf[0];
    Can1_Cfg.Filter_Std_Num = NUMBER_OF_STND_ID_FILTERS;
    Can1_Cfg.Filter_Ext_Cfg = &Can0_filterExtConf[0];
    Can1_Cfg.Filter_Ext_Num = NUMBER_OF_EXTD_ID_FILTERS;
    Can1_Cfg.Can_num = 1;

    IfxCan_Can_initMessage(&Can1_Cfg.Can_Ch->rxMsg[0]);

    Can1_Cfg.Can_Ch->rxMsg[0].messageId = INVALID_ID_VALUE;
    Can1_Cfg.Can_Ch->rxMsg[0].dataLengthCode = INVALID_DLC_VALUE;
    Can1_Cfg.Can_Ch->rxMsg[0].frameMode = DEFAULT_FRAME_MODE;

    /* Invalidation of the RX message data content */
    memset((void *)(&Can1_Cfg.Can_Ch->rxData[0][0]), INVALID_RX_DATA_VALUE, MAXIMUM_CAN_FD_DATA_PAYLOAD);

    /* Invalidation of the TX message data content */
    memset((void *)(&Can1_Cfg.Can_Ch->txData[0]), INVALID_TX_DATA_VALUE, MAXIMUM_CAN_DATA_PAYLOAD);

    /* Initialization of the TX message with the default configuration */
    IfxCan_Can_initMessage(&Can1_Cfg.Can_Ch->txMsg);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    Can2_Cfg.Can_Ch = &Can2_Node00;
    Can2_Cfg.Can_Module = &MODULE_CAN1; // CAN노드 모듈번호 전체 확인 해둘것!!!!!!!!!!!!!!!
    Can2_Cfg.Node = IfxCan_NodeId_0;
    Can2_Cfg.Tx_Priority = ISR_PRIORITY_CAN2_TX_Complete;

    Can2_Cfg.Rx_Priority[0] = ISR_PRIORITY_CAN2_RX_BUFFER;
    Can2_Cfg.Rx_Priority[1] = ISR_PRIORITY_CAN2_RX_FIFO_0;
    Can2_Cfg.Rx_Priority[2] = ISR_PRIORITY_CAN2_RX_FIFO_1;

    Can2_Cfg.Tx_InterruptLine    = IfxCan_InterruptLine_8;
    Can2_Cfg.Rx_InterruptLine[0] = IfxCan_InterruptLine_9;
    Can2_Cfg.Rx_InterruptLine[1] = IfxCan_InterruptLine_10;
    Can2_Cfg.Rx_InterruptLine[2] = IfxCan_InterruptLine_11;
    Can2_Cfg.pins.txPin = &Can2_Tx_pin;
    Can2_Cfg.pins.txPinMode = IfxPort_OutputMode_pushPull;
    Can2_Cfg.pins.rxPin = &Can2_Rx_pin;
    Can2_Cfg.pins.rxPinMode = IfxPort_InputMode_pullUp;
    Can2_Cfg.pins.padDriver = IfxPort_PadDriver_ttlSpeed1;
    Can2_Cfg.Filter_Std_Cfg = &Can0_filterStdConf[0];
    Can2_Cfg.Filter_Std_Num = NUMBER_OF_STND_ID_FILTERS;
    Can2_Cfg.Filter_Ext_Cfg = &Can0_filterExtConf[0];
    Can2_Cfg.Filter_Ext_Num = NUMBER_OF_EXTD_ID_FILTERS;
    Can2_Cfg.Can_num = 2;

    IfxCan_Can_initMessage(&Can2_Cfg.Can_Ch->rxMsg[0]);

    Can2_Cfg.Can_Ch->rxMsg[0].messageId = INVALID_ID_VALUE;
    Can2_Cfg.Can_Ch->rxMsg[0].dataLengthCode = INVALID_DLC_VALUE;
    Can2_Cfg.Can_Ch->rxMsg[0].frameMode = DEFAULT_FRAME_MODE;

    /* Invalidation of the RX message data content */
    memset((void *)(&Can2_Cfg.Can_Ch->rxData[0][0]), INVALID_RX_DATA_VALUE, MAXIMUM_CAN_FD_DATA_PAYLOAD);

    /* Invalidation of the TX message data content */
    memset((void *)(&Can2_Cfg.Can_Ch->txData[0]), INVALID_TX_DATA_VALUE, MAXIMUM_CAN_DATA_PAYLOAD);

    /* Initialization of the TX message with the default configuration */
    IfxCan_Can_initMessage(&Can2_Cfg.Can_Ch->txMsg);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}




uint32 CAN_MESSAGE_ID   = 0x00000000;
uint32 CAN_TX_LDATA     = 0x00000000;      /* Define CAN data lower word to be transmitted         */
uint32 CAN_TX_HDATA     = 0x00000000;      /* Define CAN data higher word to be transmitted        */

uint32 can_tx_status=0x00;
void ARS408_Setting(){

    IfxCan_Can_initMessage(&Can0_Cfg.Can_Ch->txMsg);
    IfxCan_Can_initMessage(&Can1_Cfg.Can_Ch->txMsg);
    IfxCan_Can_initMessage(&Can2_Cfg.Can_Ch->txMsg);

    CAN_TX_LDATA=0x00001909; //0x09190000;
    CAN_TX_HDATA=0x15100008; //0x08001005;
    CAN_MESSAGE_ID=0x200;

    Can0_Cfg.Can_Ch->txData[0] = CAN_TX_LDATA;
    Can0_Cfg.Can_Ch->txData[1] = CAN_TX_HDATA;
    Can0_Cfg.Can_Ch->txMsg.messageId= CAN_MESSAGE_ID;

    if(Recive_Data_0x201[0][2]==0x02)
    {
        Can0_Cfg.Can_Ch->txData[0] = CAN_TX_LDATA;
        Can0_Cfg.Can_Ch->txData[1] = CAN_TX_HDATA;
        Can0_Cfg.Can_Ch->txMsg.messageId= CAN_MESSAGE_ID;
        can_tx_status=IfxCan_Can_sendMessage(&Can0_Cfg.Can_Ch->canSrcNode, &Can0_Cfg.Can_Ch->txMsg, &Can0_Cfg.Can_Ch->txData[0]);
    }
    if(Recive_Data_0x201[1][2]==0x02)
    {
        Can1_Cfg.Can_Ch->txData[0] = CAN_TX_LDATA;
        Can1_Cfg.Can_Ch->txData[1] = CAN_TX_HDATA;
        Can1_Cfg.Can_Ch->txMsg.messageId= CAN_MESSAGE_ID;
        can_tx_status=IfxCan_Can_sendMessage(&Can1_Cfg.Can_Ch->canSrcNode, &Can1_Cfg.Can_Ch->txMsg, &Can1_Cfg.Can_Ch->txData[0]);
    }
    if(Recive_Data_0x201[2][2]==0x02)
    {
        Can2_Cfg.Can_Ch->txData[0] = CAN_TX_LDATA;
        Can2_Cfg.Can_Ch->txData[1] = CAN_TX_HDATA;
        Can2_Cfg.Can_Ch->txMsg.messageId= CAN_MESSAGE_ID;
        can_tx_status=IfxCan_Can_sendMessage(&Can2_Cfg.Can_Ch->canSrcNode, &Can2_Cfg.Can_Ch->txMsg, &Can2_Cfg.Can_Ch->txData[0]);
    }
    if(Recive_Data_0x201[3][2]==0x02)
    {
        Can3_Cfg.Can_Ch->txData[0] = CAN_TX_LDATA;
        Can3_Cfg.Can_Ch->txData[1] = CAN_TX_HDATA;
        Can3_Cfg.Can_Ch->txMsg.messageId= CAN_MESSAGE_ID;
        can_tx_status=IfxCan_Can_sendMessage(&Can3_Cfg.Can_Ch->canSrcNode, &Can3_Cfg.Can_Ch->txMsg, &Can3_Cfg.Can_Ch->txData[0]);
    }
}




void Can_Task(void *arg)
{
    TickType_t lastCanTick0 = xTaskGetTickCount();
    TickType_t lastCanTick1 = xTaskGetTickCount();
    TickType_t lastCanTick2 = xTaskGetTickCount();

    uint32 lastRxMarker = 0;
    uint32 lastRxCnt0 = 0;
    uint32 lastRxCnt1 = 0;
    uint32 lastRxCnt2 = 0;

    //CAN0 STB LOW
    IfxPort_setPinPadDriver(CAN0_STB_PORT, CAN0_STB_PIN, IfxPort_PadDriver_cmosAutomotiveSpeed1);
    IfxPort_setPinModeOutput(CAN0_STB_PORT, CAN0_STB_PIN,IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinLow(CAN0_STB_PORT, CAN0_STB_PIN);
    IfxPort_setPinPadDriver(CAN0_TX_PORT, CAN0_TX_PIN, IfxPort_PadDriver_cmosAutomotiveSpeed1);
    IfxPort_setPinModeOutput(CAN0_TX_PORT, CAN0_TX_PIN, IfxPort_OutputMode_pushPull,IfxPort_OutputIdx_alt2);
    IfxPort_setPinModeInput(CAN0_RX_PORT, CAN0_RX_PIN, IfxPort_InputMode_noPullDevice);

    //CAN1 STB LOW
    IfxPort_setPinPadDriver(CAN1_STB_PORT, CAN1_STB_PIN, IfxPort_PadDriver_cmosAutomotiveSpeed1);
    IfxPort_setPinModeOutput(CAN1_STB_PORT, CAN1_STB_PIN,IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinLow(CAN1_STB_PORT, CAN1_STB_PIN);
    IfxPort_setPinPadDriver(CAN1_TX_PORT, CAN1_TX_PIN, IfxPort_PadDriver_cmosAutomotiveSpeed1);
    IfxPort_setPinModeOutput(CAN1_TX_PORT, CAN1_TX_PIN, IfxPort_OutputMode_pushPull,IfxPort_OutputIdx_alt2);
    IfxPort_setPinModeInput(CAN1_RX_PORT, CAN1_RX_PIN, IfxPort_InputMode_noPullDevice);

    //CAN2 STB LOW
    IfxPort_setPinPadDriver(CAN2_STB_PORT, CAN2_STB_PIN, IfxPort_PadDriver_cmosAutomotiveSpeed1);
    IfxPort_setPinModeOutput(CAN2_STB_PORT, CAN2_STB_PIN,IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinLow(CAN2_STB_PORT, CAN2_STB_PIN);
    IfxPort_setPinPadDriver(CAN2_TX_PORT, CAN2_TX_PIN, IfxPort_PadDriver_cmosAutomotiveSpeed1);
    IfxPort_setPinModeOutput(CAN2_TX_PORT, CAN2_TX_PIN, IfxPort_OutputMode_pushPull,IfxPort_OutputIdx_alt2);
    IfxPort_setPinModeInput(CAN2_RX_PORT, CAN2_RX_PIN, IfxPort_InputMode_noPullDevice);


    ////////////////////
    Can_NodeConfig_Set();
    Can_init(&Can0_Cfg);
    Can_init(&Can1_Cfg);
    Can_init(&Can2_Cfg);

    while(1)
    {
        //*
        if((xTaskGetTickCount() - lastCanTick0) >= pdMS_TO_TICKS(1000))
        {
            Can0_Cfg.Can_Ch->txMsg.messageId = 0x201;
            Can0_Cfg.Can_Ch->txMsg.dataLengthCode = IfxCan_DataLengthCode_8;
            Can0_Cfg.Can_Ch->txMsg.frameMode = IfxCan_FrameMode_standard;
            Can0_Cfg.Can_Ch->txData[0] = 0x01010101U;
            Can0_Cfg.Can_Ch->txData[1] = 0x01010101U;
            IfxCan_Can_sendMessage(&Can0_Cfg.Can_Ch->canSrcNode, &Can0_Cfg.Can_Ch->txMsg,
                                   &Can0_Cfg.Can_Ch->txData[0]);
            lastCanTick0 = xTaskGetTickCount();
            Ifx_Console_print("TEST SEND0\r\n");
        }
        if (lastRxCnt0 != g_can0_rx_cnt)
        {
            lastRxCnt0 = g_can0_rx_cnt;
            Ifx_Console_print("TEST0 \r\n");
            lastRxMarker = Recive_Data_0x201[0][0];
            Ifx_Console_print("CAN RX 0x201: %08X %08X (cnt=%u)\r\n",
                              Recive_Data_0x201[0][0], Recive_Data_0x201[0][1],lastRxCnt0);
        }
        // */
        //*
        if((xTaskGetTickCount() - lastCanTick1) >= pdMS_TO_TICKS(1000))
        {
            Can1_Cfg.Can_Ch->txMsg.messageId = 0x202;
            Can1_Cfg.Can_Ch->txMsg.dataLengthCode = IfxCan_DataLengthCode_8;
            Can1_Cfg.Can_Ch->txMsg.frameMode = IfxCan_FrameMode_standard;
            Can1_Cfg.Can_Ch->txData[0] = 0x01010101U;
            Can1_Cfg.Can_Ch->txData[1] = 0x01010101U;
            IfxCan_Can_sendMessage(&Can1_Cfg.Can_Ch->canSrcNode, &Can1_Cfg.Can_Ch->txMsg,
                                   &Can1_Cfg.Can_Ch->txData[0]);
            lastCanTick1 = xTaskGetTickCount();
            Ifx_Console_print("TEST SEND1\r\n");
        }
        if (lastRxCnt1 != g_can1_rx_cnt)
        {
            lastRxCnt1 = g_can1_rx_cnt;
            Ifx_Console_print("TEST1 \r\n");
            lastRxMarker = Recive_Data_0x201[0][0];
            Ifx_Console_print("CAN RX 0x201: %08X %08X (cnt=%u)\r\n",
                              Recive_Data_0x201[1][0], Recive_Data_0x201[1][1],lastRxCnt1);
        }
        // */
        //*
        if((xTaskGetTickCount() - lastCanTick2) >= pdMS_TO_TICKS(1000))
        {
            Can2_Cfg.Can_Ch->txMsg.messageId = 0x203;
            Can2_Cfg.Can_Ch->txMsg.dataLengthCode = IfxCan_DataLengthCode_8;
            Can2_Cfg.Can_Ch->txMsg.frameMode = IfxCan_FrameMode_standard;
            Can2_Cfg.Can_Ch->txData[0] = 0x01010101U;
            Can2_Cfg.Can_Ch->txData[1] = 0x01010101U;
            IfxCan_Can_sendMessage(&Can2_Cfg.Can_Ch->canSrcNode, &Can2_Cfg.Can_Ch->txMsg,
                                   &Can2_Cfg.Can_Ch->txData[0]);
            lastCanTick2 = xTaskGetTickCount();
            Ifx_Console_print("TEST SEND2\r\n");
        }
        if (lastRxCnt2 != g_can2_rx_cnt)
        {
            lastRxCnt2 = g_can2_rx_cnt;
            Ifx_Console_print("TEST2 \r\n");
            lastRxMarker = Recive_Data_0x201[0][0];
            Ifx_Console_print("CAN RX 0x201: %08X %08X (cnt=%u)\r\n",
                              Recive_Data_0x201[2][0], Recive_Data_0x201[2][1],lastRxCnt2);
        }
        // */
        //Ifx_Console_print("TEST \r\n");
        //vTaskDelay(100);
        vTaskDelay(pdMS_TO_TICKS(10));
    }
}

















