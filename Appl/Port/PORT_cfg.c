/*
 * PORT_cfg.c
 *
 *  Created on: 2022. 9. 26.
 *      Author: USER
 */


#include "PORT_cfg.h"

//DioConf_DioChannel_10_14_88Q6113_A_CRITICAL

PORT_PIN_Info DIO_CHANNEL0_[16];
PORT_PIN_Info DIO_CHANNEL1_[16];
PORT_PIN_Info DIO_CHANNEL2_[16];
PORT_PIN_Info DIO_CHANNEL10_[16];
PORT_PIN_Info DIO_CHANNEL11_[16];
PORT_PIN_Info DIO_CHANNEL12_[2];
PORT_PIN_Info DIO_CHANNEL13_[16];
PORT_PIN_Info DIO_CHANNEL14_[16];
PORT_PIN_Info DIO_CHANNEL15_[16];
PORT_PIN_Info DIO_CHANNEL20_[15];
PORT_PIN_Info DIO_CHANNEL21_[8];
PORT_PIN_Info DIO_CHANNEL22_[12];
PORT_PIN_Info DIO_CHANNEL23_[8];
PORT_PIN_Info DIO_CHANNEL24_[16];
PORT_PIN_Info DIO_CHANNEL25_[16];
PORT_PIN_Info DIO_CHANNEL26_[1];
PORT_PIN_Info DIO_CHANNEL30_[16];
PORT_PIN_Info DIO_CHANNEL31_[16];
PORT_PIN_Info DIO_CHANNEL32_[8];
PORT_PIN_Info DIO_CHANNEL33_[16];
PORT_PIN_Info DIO_CHANNEL34_[6];
PORT_PIN_Info DIO_CHANNEL40_[16];
PORT_PIN_Info DIO_CHANNEL41_[9];



void Port_Init(){


///////////////////Pin_Number & Module Address Setting///////////////////
    for(uint8 i=0;i<=15;i++){

        DIO_CHANNEL0_[i].Pin_Num=i;
        DIO_CHANNEL0_[i].Port= &MODULE_P00;

        DIO_CHANNEL1_[i].Pin_Num=i;
        DIO_CHANNEL1_[i].Port= &MODULE_P01;

        DIO_CHANNEL2_[i].Pin_Num=i;
        DIO_CHANNEL2_[i].Port= &MODULE_P02;

        DIO_CHANNEL10_[i].Pin_Num=i;
        DIO_CHANNEL10_[i].Port= &MODULE_P10;

        DIO_CHANNEL11_[i].Pin_Num=i;
        DIO_CHANNEL11_[i].Port= &MODULE_P11;

        DIO_CHANNEL13_[i].Pin_Num=i;
        DIO_CHANNEL13_[i].Port= &MODULE_P13;

        DIO_CHANNEL14_[i].Pin_Num=i;
        DIO_CHANNEL14_[i].Port= &MODULE_P14;

        DIO_CHANNEL15_[i].Pin_Num=i;
        DIO_CHANNEL15_[i].Port= &MODULE_P15;

        DIO_CHANNEL24_[i].Pin_Num=i;
        DIO_CHANNEL24_[i].Port= &MODULE_P24;

        DIO_CHANNEL25_[i].Pin_Num=i;
        DIO_CHANNEL25_[i].Port= &MODULE_P25;

        DIO_CHANNEL30_[i].Pin_Num=i;
        DIO_CHANNEL30_[i].Port= &MODULE_P30;

        DIO_CHANNEL31_[i].Pin_Num=i;
        DIO_CHANNEL31_[i].Port= &MODULE_P31;

        DIO_CHANNEL33_[i].Pin_Num=i;
        DIO_CHANNEL33_[i].Port= &MODULE_P33;

        DIO_CHANNEL40_[i].Pin_Num=i;
        DIO_CHANNEL40_[i].Port= &MODULE_P40;

        if(i<=14){
            DIO_CHANNEL20_[i].Pin_Num=i;
            DIO_CHANNEL20_[i].Port= &MODULE_P20;
        }
        if(i<=11){
            DIO_CHANNEL22_[i].Pin_Num=i;
            DIO_CHANNEL22_[i].Port= &MODULE_P22;
        }

        if(i<=8){
            DIO_CHANNEL41_[i].Pin_Num=i;
            DIO_CHANNEL41_[i].Port= &MODULE_P41;
        }

        if(i<=7){
            DIO_CHANNEL23_[i].Pin_Num=i;
            DIO_CHANNEL23_[i].Port= &MODULE_P23;

            DIO_CHANNEL32_[i].Pin_Num=i;
            DIO_CHANNEL32_[i].Port= &MODULE_P32;
        }

        if(i<=5){
            DIO_CHANNEL21_[i].Pin_Num=i;
            DIO_CHANNEL21_[i].Port= &MODULE_P21;

            DIO_CHANNEL34_[i].Pin_Num=i;
            DIO_CHANNEL34_[i].Port= &MODULE_P34;
        }

        if(i<=1){
            DIO_CHANNEL12_[i].Pin_Num=i;
            DIO_CHANNEL12_[i].Port= &MODULE_P12;
        }
        if(i==0){
            DIO_CHANNEL26_[i].Pin_Num=i;
            DIO_CHANNEL26_[i].Port= &MODULE_P26;
        }
    }

///////////////////Pin_Direction Setting///////////////////

    ///////////*DioConf_DioPort_DioPort_0 (DIO_PORT_0)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_0_0_TC387_CAN2_TXD.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_1_TC387_CAN2_RXD.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_2_TC387_CAN2_STB.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_3_TLF35584_WDI.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_4_TP4205.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_5_TP4206.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_6_TP4207.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_7_TP4200.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_8_TP4201.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_9_SYS_PWR_FLT.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_10_SYS_PWR_IMON.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_11_JAO_PWR_FLT.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_12_JAO_PWR_IMON.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_1 (DIO_PORT_1)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_1_3_V_TSC8071_4P0_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_1_4_V_TSC8071_4P0_PG.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_1_5_V_NPU_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_1_6_V_NPU_PG.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_1_7_NC.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_2 (DIO_PORT_2)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_2_0_TC387_CAN0_TXD.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_1_TC387_CAN0_RXD.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_2_TC387_CAN0_STB.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_3_V_ETH_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_4_V_ETH_PG.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_5_TMON1_RESET_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_6_TMON1_ALERT.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_7_TMON2_RESET_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_8_TMON2_ALERT.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_9_TC387_CAN1_TXD.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_10_TC387_CAN1_RXD.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_11_TC387_CAN1_STB.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_10 (DIO_PORT_10)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_10_0_TC387_SPI1_CS_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_10_1_TC387_SPI1_MISO.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_10_2_TC387_SPI1_CLK.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_10_3_TC387_SPI1_MOSI.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_10_4_V_USB_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_10_5_HWCFG4.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_10_6_HWCFG5.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_10_7_V_USB_PG.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_10_8_USB_RST_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_11 (DIO_PORT_11)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_11_0_TC387_GETH_TXD3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_1_TC387_GETH_TXD2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_2_TC387_GETH_TXD1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_3_TC387_GETH_TXD0.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_4_TC387_GETH_TXCLK.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_5_GETH_GREFCLK.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_6_TC387_GETH_TCTL.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_7_TC387_GETH_RXD3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_8_TC387_GETH_RXD2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_9_TC387_GETH_RXD1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_10_TC387_GETH_RXD0.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_11_TC387_GETH_RCTL.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_12_TC387_GETH_RXCLK.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_13_TC387_I2C1_SDA.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_14_TC387_I2C1_SCL.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_15_MCU_I2C1_RESET_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_12 (DIO_PORT_12)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_12_0_TC387_MDC.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_12_1_TC387_MDIO.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_13 (DIO_PORT_13)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_13_0_NC.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_13_1_TC387_I2C0_SCL.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_13_2_TC387_I2C0_SDA.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_13_3_CAM_POC_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_14 (DIO_PORT_14)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_14_0_TSC8071_MCU_UART_RXD.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_1_TSC8071_MCU_UART_TXD.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_2_HWCFG2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_3_HWCFG3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_4_HWCFG6.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_5_HWCFG1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_6_V_CAM_POC_PG.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_7_CPP0_INT_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_8_CPP1_INT_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_9_V_SWDT_0P75_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_10_V_TSC8071_SWDT_PG.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_15 (DIO_PORT_15)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_15_0_JAO_MCU_UART2_RXD.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_15_1_JAO_MCU_UART2_TXD.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_15_2_TC387_UART0_DBG_TXD.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_15_3_V_IN_ALERT_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_15_4_V_NPU_IN_ALERT_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_15_5_TC387_SPI2_CS_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_15_6_TC387_SPI2_MOSI.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_15_7_TC387_SPI2_MISO.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_15_8_TC387_SPI2_CLK.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_20 (DIO_PORT_20)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_20_0_JAO_POWER_BTN_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_1_V_JAO_MV_5V_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_2_TP.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_3_V_JAO_MV_5V_PG.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_6_V_JAO_HV_12V_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_7_V_JAO_HV_12V_PG.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_8_JAO_VDDIN_PWR_BAD_N_3P3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_9_JAO_MODULE_POWER_ON_3P3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_10_JAO_CARRIER_POWER_ON.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_11_V_SYSTEM_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_12_V_SYSTEM_PG.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_13_NC.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_14_NC.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_21 (DIO_PORT_21)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_21_0_JAO_SYS_RESET_N_3P3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_21_1_JAO_PERIPHERAL_RESET_N_3P3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_21_2_JAO_MODULE_SLEEP_N_3P3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_21_3_JAO_MODULE_SHDN_N_3P3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_21_4_JAO_THERM_ALERT_N_3P3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_21_5_NC.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_22 (DIO_PORT_22)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_22_0_TSC8071_PMIC_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_1_TSC8071_STR_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_2_TC387_SWDT_WDO_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_3_TC387_SWDT_DIS_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_4_TC387_SWDT_RST_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_5_TC387_CAN5_STB.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_6_TC387_CAN5_TXD.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_7_TC387_CAN5_RXD.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_8_TC387_SPI0_CLK.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_9_TC387_SPI0_MISO.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_10_TC387_SPI0_MOSI.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_11_TC387_SPI0_CS_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_23 (DIO_PORT_23)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_23_0_TSC8071_RESET_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_23_1_TSC8071_RSTOUT_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_23_2_TSC8071_SYS_PWR_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_23_3_TSC8071_PMIC_IRQ_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_23_4_NC.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_23_5_TSC8071_PMIC_ERR.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_23_6_V_SER_POC_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_23_7_V_SER_POC_PG.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_32 (DIO_PORT_32)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_32_0_GATE1N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_32_1_GATE1P.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_32_2_AK4602_MUTE.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_32_3_V_SDR_3P3_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_32_4_V_SDR_3P3_PG.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_32_5_V_SDR_1P8_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_32_6_V_SDR_1P8_PG.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_32_7_BCM89586_SM_FLT_IND.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_33 (DIO_PORT_33)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_33_0_TSC8071_DP_3V3_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_1_TSC8071_DP_3V3_FAULT_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_2_JAO_DP_3V3_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_3_JAO_3V3_FAULT_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_4_V_MEM_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_5_V_MEM_PG.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_6_NC.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_7_NC.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_8_TC387_ERR.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_9_TLF35584_SS1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_10_TC387_UART0_DBG_RXD.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_11_V_MAX96712_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_12_V_MAX96712_PG.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_13_V_MAX96735_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_14_V_MAX96735_PG.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_15_TMON2_ALERT.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_34 (DIO_PORT_34)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_34_1_V_AMP_PWR_EN.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_34_2_V_AMP_PWR_PG.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_34_3_V_JAO_VBUS_PG.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_34_4_V_JAO_IN_ALERT_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_34_5_V_TSC8071_IN_ALERT_N.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_40 (DIO_PORT_40)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_40_0_.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_1_.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_2_.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_3_.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_4_.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_5_.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_6_.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_7_.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_8_.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_9_.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_10_.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_11_.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_12_.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_13_.Mode_Status=IfxPort_Mode_inputNoPullDevice;                      //IfxPort_Mode_inputNoPullDevice
    DioConf_DioChannel_40_14_.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////////////Pin_LEVEL Setting///////////////////


    ///////////*DioConf_DioPort_DioPort_0 (DIO_PORT_0)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_0_0_TC387_CAN2_TXD.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_1_TC387_CAN2_RXD.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_2_TC387_CAN2_STB.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_3_TLF35584_WDI.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_4_TP4205.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_5_TP4206.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_6_TP4207.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_7_TP4200.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_8_TP4201.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_9_SYS_PWR_FLT.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_10_SYS_PWR_IMON.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_11_JAO_PWR_FLT.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_12_JAO_PWR_IMON.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_1 (DIO_PORT_1)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_1_3_V_TSC8071_4P0_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_1_4_V_TSC8071_4P0_PG.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_1_5_V_NPU_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_1_6_V_NPU_PG.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_1_7_NC.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_2 (DIO_PORT_2)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_2_0_TC387_CAN0_TXD.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_1_TC387_CAN0_RXD.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_2_TC387_CAN0_STB.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_3_V_ETH_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_4_V_ETH_PG.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_5_TMON1_RESET_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_6_TMON1_ALERT.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_7_TMON2_RESET_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_8_TMON2_ALERT.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_9_TC387_CAN1_TXD.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_10_TC387_CAN1_RXD.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_11_TC387_CAN1_STB.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_10 (DIO_PORT_10)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_10_0_TC387_SPI1_CS_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_10_1_TC387_SPI1_MISO.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_10_2_TC387_SPI1_CLK.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_10_3_TC387_SPI1_MOSI.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_10_4_V_USB_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_10_5_HWCFG4.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_10_6_HWCFG5.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_10_7_V_USB_PG.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_10_8_USB_RST_N.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_11 (DIO_PORT_11)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_11_0_TC387_GETH_TXD3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_1_TC387_GETH_TXD2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_2_TC387_GETH_TXD1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_3_TC387_GETH_TXD0.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_4_TC387_GETH_TXCLK.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_5_GETH_GREFCLK.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_6_TC387_GETH_TCTL.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_7_TC387_GETH_RXD3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_8_TC387_GETH_RXD2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_9_TC387_GETH_RXD1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_10_TC387_GETH_RXD0.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_11_TC387_GETH_RCTL.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_12_TC387_GETH_RXCLK.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_13_TC387_I2C1_SDA.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_14_TC387_I2C1_SCL.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_15_MCU_I2C1_RESET_N.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_12 (DIO_PORT_12)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_12_0_TC387_MDC.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_12_1_TC387_MDIO.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_13 (DIO_PORT_13)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_13_0_NC.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_13_1_TC387_I2C0_SCL.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_13_2_TC387_I2C0_SDA.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_13_3_CAM_POC_EN.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_14 (DIO_PORT_14)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_14_0_TSC8071_MCU_UART_RXD.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_1_TSC8071_MCU_UART_TXD.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_2_HWCFG2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_3_HWCFG3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_4_HWCFG6.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_5_HWCFG1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_6_V_CAM_POC_PG.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_7_CPP0_INT_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_8_CPP1_INT_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_9_V_SWDT_0P75_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_10_V_TSC8071_SWDT_PG.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_15 (DIO_PORT_15)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_15_0_JAO_MCU_UART2_RXD.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_15_1_JAO_MCU_UART2_TXD.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_15_2_TC387_UART0_DBG_TXD.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_15_3_V_IN_ALERT_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_15_4_V_NPU_IN_ALERT_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_15_5_TC387_SPI2_CS_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_15_6_TC387_SPI2_MOSI.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_15_7_TC387_SPI2_MISO.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_15_8_TC387_SPI2_CLK.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_20 (DIO_PORT_20)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_20_0_JAO_POWER_BTN_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_1_V_JAO_MV_5V_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_2_TP.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_3_V_JAO_MV_5V_PG.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_6_V_JAO_HV_12V_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_7_V_JAO_HV_12V_PG.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_8_JAO_VDDIN_PWR_BAD_N_3P3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_9_JAO_MODULE_POWER_ON_3P3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_10_JAO_CARRIER_POWER_ON.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_11_V_SYSTEM_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_12_V_SYSTEM_PG.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_13_NC.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_14_NC.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_21 (DIO_PORT_21)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_21_0_JAO_SYS_RESET_N_3P3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_21_1_JAO_PERIPHERAL_RESET_N_3P3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_21_2_JAO_MODULE_SLEEP_N_3P3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_21_3_JAO_MODULE_SHDN_N_3P3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_21_4_JAO_THERM_ALERT_N_3P3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_21_5_NC.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_22 (DIO_PORT_22)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_22_0_TSC8071_PMIC_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_1_TSC8071_STR_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_2_TC387_SWDT_WDO_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_3_TC387_SWDT_DIS_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_4_TC387_SWDT_RST_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_5_TC387_CAN5_STB.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_6_TC387_CAN5_TXD.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_7_TC387_CAN5_RXD.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_8_TC387_SPI0_CLK.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_9_TC387_SPI0_MISO.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_10_TC387_SPI0_MOSI.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_11_TC387_SPI0_CS_N.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_23 (DIO_PORT_23)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_23_0_TSC8071_RESET_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_23_1_TSC8071_RSTOUT_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_23_2_TSC8071_SYS_PWR_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_23_3_TSC8071_PMIC_IRQ_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_23_4_NC.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_23_5_TSC8071_PMIC_ERR.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_23_6_V_SER_POC_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_23_7_V_SER_POC_PG.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_32 (DIO_PORT_32)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_32_0_GATE1N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_32_1_GATE1P.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_32_2_AK4602_MUTE.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_32_3_V_SDR_3P3_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_32_4_V_SDR_3P3_PG.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_32_5_V_SDR_1P8_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_32_6_V_SDR_1P8_PG.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_32_7_BCM89586_SM_FLT_IND.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_33 (DIO_PORT_33)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_33_0_TSC8071_DP_3V3_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_1_TSC8071_DP_3V3_FAULT_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_2_JAO_DP_3V3_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_3_JAO_3V3_FAULT_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_4_V_MEM_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_5_V_MEM_PG.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_6_NC.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_7_NC.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_8_TC387_ERR.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_9_TLF35584_SS1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_10_TC387_UART0_DBG_RXD.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_11_V_MAX96712_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_12_V_MAX96712_PG.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_13_V_MAX96735_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_14_V_MAX96735_PG.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_15_TMON2_ALERT.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_34 (DIO_PORT_34)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_34_1_V_AMP_PWR_EN.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_34_2_V_AMP_PWR_PG.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_34_3_V_JAO_VBUS_PG.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_34_4_V_JAO_IN_ALERT_N.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_34_5_V_TSC8071_IN_ALERT_N.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_40 (DIO_PORT_40)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_40_0_.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_1_.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_2_.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_3_.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_4_.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_5_.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_6_.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_7_.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_8_.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_9_.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_10_.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_11_.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_12_.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_13_.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_14_.Level_Status=IfxPort_State_low;



    for(uint8 i=0;i<=15;i++){

        if(i<=1){
            IfxPort_setPinMode(DIO_CHANNEL12_[i].Port, DIO_CHANNEL12_[i].Pin_Num, DIO_CHANNEL12_[i].Mode_Status);
            IfxPort_setPinState(DIO_CHANNEL12_[i].Port, DIO_CHANNEL12_[i].Pin_Num, DIO_CHANNEL12_[i].Level_Status);
        }

        if(i<=3){
            IfxPort_setPinMode(DIO_CHANNEL13_[i].Port, DIO_CHANNEL13_[i].Pin_Num, DIO_CHANNEL13_[i].Mode_Status);
            IfxPort_setPinState(DIO_CHANNEL13_[i].Port, DIO_CHANNEL13_[i].Pin_Num, DIO_CHANNEL13_[i].Level_Status);
        }

        if(i<=5){
            IfxPort_setPinMode(DIO_CHANNEL21_[i].Port, DIO_CHANNEL21_[i].Pin_Num, DIO_CHANNEL21_[i].Mode_Status);
            IfxPort_setPinState(DIO_CHANNEL21_[i].Port, DIO_CHANNEL21_[i].Pin_Num, DIO_CHANNEL21_[i].Level_Status);

            if(i>=1){
                IfxPort_setPinMode(DIO_CHANNEL34_[i].Port, DIO_CHANNEL34_[i].Pin_Num, DIO_CHANNEL34_[i].Mode_Status);
                IfxPort_setPinState(DIO_CHANNEL34_[i].Port, DIO_CHANNEL34_[i].Pin_Num, DIO_CHANNEL34_[i].Level_Status);
            }
        }

        if(i<=7){
            IfxPort_setPinMode(DIO_CHANNEL23_[i].Port, DIO_CHANNEL23_[i].Pin_Num, DIO_CHANNEL23_[i].Mode_Status);
            IfxPort_setPinState(DIO_CHANNEL23_[i].Port, DIO_CHANNEL23_[i].Pin_Num, DIO_CHANNEL23_[i].Level_Status);

            if(i>=3)
            {
                IfxPort_setPinMode(DIO_CHANNEL1_[i].Port, DIO_CHANNEL1_[i].Pin_Num, DIO_CHANNEL1_[i].Mode_Status);
                IfxPort_setPinState(DIO_CHANNEL1_[i].Port, DIO_CHANNEL1_[i].Pin_Num, DIO_CHANNEL1_[i].Level_Status);
            }
        }

        if(i<=8){
            IfxPort_setPinMode(DIO_CHANNEL10_[i].Port, DIO_CHANNEL10_[i].Pin_Num, DIO_CHANNEL10_[i].Mode_Status);
            IfxPort_setPinState(DIO_CHANNEL10_[i].Port, DIO_CHANNEL10_[i].Pin_Num, DIO_CHANNEL10_[i].Level_Status);

            IfxPort_setPinMode(DIO_CHANNEL15_[i].Port, DIO_CHANNEL15_[i].Pin_Num, DIO_CHANNEL15_[i].Mode_Status);
            IfxPort_setPinState(DIO_CHANNEL15_[i].Port, DIO_CHANNEL15_[i].Pin_Num, DIO_CHANNEL15_[i].Level_Status);
        }

        if(i!=10){
            IfxPort_setPinMode(DIO_CHANNEL14_[i].Port, DIO_CHANNEL14_[i].Pin_Num, DIO_CHANNEL14_[i].Mode_Status);
            IfxPort_setPinState(DIO_CHANNEL14_[i].Port, DIO_CHANNEL14_[i].Pin_Num, DIO_CHANNEL14_[i].Level_Status);

        }

        if(i<=11){
            IfxPort_setPinMode(DIO_CHANNEL2_[i].Port, DIO_CHANNEL2_[i].Pin_Num, DIO_CHANNEL2_[i].Mode_Status);
            IfxPort_setPinState(DIO_CHANNEL2_[i].Port, DIO_CHANNEL2_[i].Pin_Num, DIO_CHANNEL2_[i].Level_Status);

            IfxPort_setPinMode(DIO_CHANNEL22_[i].Port, DIO_CHANNEL22_[i].Pin_Num, DIO_CHANNEL22_[i].Mode_Status);
            IfxPort_setPinState(DIO_CHANNEL22_[i].Port, DIO_CHANNEL22_[i].Pin_Num, DIO_CHANNEL22_[i].Level_Status);
        }

        if(i<=12){
            IfxPort_setPinMode(DIO_CHANNEL0_[i].Port, DIO_CHANNEL0_[i].Pin_Num, DIO_CHANNEL0_[i].Mode_Status);
            IfxPort_setPinState(DIO_CHANNEL0_[i].Port, DIO_CHANNEL0_[i].Pin_Num, DIO_CHANNEL0_[i].Level_Status);
        }

        if(i<=14){
            IfxPort_setPinMode(DIO_CHANNEL20_[i].Port, DIO_CHANNEL20_[i].Pin_Num, DIO_CHANNEL20_[i].Mode_Status);
            IfxPort_setPinState(DIO_CHANNEL20_[i].Port, DIO_CHANNEL20_[i].Pin_Num, DIO_CHANNEL20_[i].Level_Status);

            IfxPort_setPinMode(DIO_CHANNEL40_[i].Port, DIO_CHANNEL40_[i].Pin_Num, DIO_CHANNEL40_[i].Mode_Status);
            IfxPort_setPinState(DIO_CHANNEL40_[i].Port, DIO_CHANNEL40_[i].Pin_Num, DIO_CHANNEL40_[i].Level_Status);
        }

        if(i<=15){
            IfxPort_setPinMode(DIO_CHANNEL11_[i].Port, DIO_CHANNEL11_[i].Pin_Num, DIO_CHANNEL11_[i].Mode_Status);
            IfxPort_setPinState(DIO_CHANNEL11_[i].Port, DIO_CHANNEL11_[i].Pin_Num, DIO_CHANNEL11_[i].Level_Status);

            IfxPort_setPinMode(DIO_CHANNEL33_[i].Port, DIO_CHANNEL33_[i].Pin_Num, DIO_CHANNEL33_[i].Mode_Status);
            IfxPort_setPinState(DIO_CHANNEL33_[i].Port, DIO_CHANNEL33_[i].Pin_Num, DIO_CHANNEL33_[i].Level_Status);
        }
    }
}

void GPIO_SetPinState(PORT_PIN_Info *DioChannel_info,IfxPort_State Set_Level){

    DioChannel_info->Level_Status=Set_Level;

    IfxPort_setPinState(DioChannel_info->Port,DioChannel_info->Pin_Num,DioChannel_info->Level_Status);

}

void GPIO_GetPinState(PORT_PIN_Info *DioChannel_info,uint8 *Get_Level){

   *Get_Level=IfxPort_getPinState(DioChannel_info->Port,DioChannel_info->Pin_Num);
}


void GPIO_SetPinMode(PORT_PIN_Info *DioChannel_info,IfxPort_Mode mode){

    DioChannel_info->Mode_Status=mode;
    IfxPort_setPinMode(DioChannel_info->Port,DioChannel_info->Pin_Num, mode);


}






