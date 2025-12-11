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
    DioConf_DioChannel_0_0.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_4.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_5.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_6.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_7.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_8.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_9.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_10.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_11.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_0_12.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_1 (DIO_PORT_1)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_1_3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_1_4.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_1_5.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_1_6.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_1_7.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_2 (DIO_PORT_2)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_2_0.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_4.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_5.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_6.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_7.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_8.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_9.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_10.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_2_11.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_10 (DIO_PORT_10)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_10_0.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_10_1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_10_2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_10_3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_10_4.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_10_5.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_10_6.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_10_7.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_10_8.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_11 (DIO_PORT_11)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_11_0.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_4.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_5.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_6.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_7.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_8.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_9.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_10.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_11.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_12.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_13.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_14.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_11_15.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_12 (DIO_PORT_12)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_12_0.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_12_1.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_13 (DIO_PORT_13)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_13_0.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_13_1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_13_2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_13_3.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_14 (DIO_PORT_14)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_14_0.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_4.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_5.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_6.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_7.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_8.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_9.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_14_10.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_15 (DIO_PORT_15)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_15_0.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_15_1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_15_2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_15_3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_15_4.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_15_5.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_15_6.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_15_7.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_15_8.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_20 (DIO_PORT_20)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_20_0.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_6.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_7.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_8.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_9.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_10.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_11.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_12.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_13.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_20_14.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_21 (DIO_PORT_21)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_21_0.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_21_1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_21_2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_21_3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_21_4.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_21_5.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_22 (DIO_PORT_22)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_22_0.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_4.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_5.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_6.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_7.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_8.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_9.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_10.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_22_11.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_23 (DIO_PORT_23)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_23_0.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_23_1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_23_2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_23_3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_23_4.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_23_5.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_23_6.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_23_7.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_32 (DIO_PORT_32)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_32_0.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_32_1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_32_2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_32_3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_32_4.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_32_5.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_32_6.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_32_7.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_33 (DIO_PORT_33)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_33_0.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_4.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_5.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_6.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_7.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_8.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_9.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_10.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_11.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_12.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_13.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_14.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_33_15.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_34 (DIO_PORT_34)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_34_1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_34_2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_34_3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_34_4.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_34_5.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////*DioConf_DioPort_DioPort_40 (DIO_PORT_40)*///////////
          ///////////////Pin_Direction///////////////
    DioConf_DioChannel_40_0.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_1.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_2.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_3.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_4.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_5.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_6.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_7.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_8.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_9.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_10.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_11.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_12.Mode_Status=IfxPort_Mode_inputNoPullDevice;
    DioConf_DioChannel_40_13.Mode_Status=IfxPort_Mode_inputNoPullDevice;                      //IfxPort_Mode_inputNoPullDevice
    DioConf_DioChannel_40_14.Mode_Status=IfxPort_Mode_inputNoPullDevice;


    ///////////////////Pin_LEVEL Setting///////////////////


    ///////////*DioConf_DioPort_DioPort_0 (DIO_PORT_0)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_0_0.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_4.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_5.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_6.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_7.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_8.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_9.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_10.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_11.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_0_12.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_1 (DIO_PORT_1)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_1_3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_1_4.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_1_5.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_1_6.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_1_7.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_2 (DIO_PORT_2)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_2_0.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_4.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_5.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_6.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_7.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_8.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_9.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_10.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_2_11.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_10 (DIO_PORT_10)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_10_0.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_10_1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_10_2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_10_3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_10_4.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_10_5.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_10_6.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_10_7.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_10_8.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_11 (DIO_PORT_11)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_11_0.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_4.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_5.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_6.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_7.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_8.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_9.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_10.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_11.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_12.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_13.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_14.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_11_15.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_12 (DIO_PORT_12)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_12_0.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_12_1.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_13 (DIO_PORT_13)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_13_0.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_13_1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_13_2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_13_3.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_14 (DIO_PORT_14)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_14_0.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_4.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_5.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_6.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_7.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_8.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_9.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_14_10.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_15 (DIO_PORT_15)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_15_0.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_15_1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_15_2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_15_3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_15_4.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_15_5.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_15_6.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_15_7.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_15_8.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_20 (DIO_PORT_20)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_20_0.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_6.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_7.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_8.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_9.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_10.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_11.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_12.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_13.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_20_14.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_21 (DIO_PORT_21)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_21_0.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_21_1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_21_2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_21_3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_21_4.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_21_5.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_22 (DIO_PORT_22)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_22_0.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_4.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_5.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_6.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_7.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_8.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_9.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_10.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_22_11.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_23 (DIO_PORT_23)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_23_0.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_23_1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_23_2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_23_3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_23_4.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_23_5.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_23_6.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_23_7.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_32 (DIO_PORT_32)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_32_0.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_32_1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_32_2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_32_3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_32_4.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_32_5.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_32_6.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_32_7.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_33 (DIO_PORT_33)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_33_0.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_4.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_5.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_6.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_7.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_8.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_9.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_10.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_11.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_12.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_13.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_14.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_33_15.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_34 (DIO_PORT_34)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_34_1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_34_2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_34_3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_34_4.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_34_5.Level_Status=IfxPort_State_low;


    ///////////*DioConf_DioPort_DioPort_40 (DIO_PORT_40)*///////////
///////////////Pin_LEVEL///////////////
    DioConf_DioChannel_40_0.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_1.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_2.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_3.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_4.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_5.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_6.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_7.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_8.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_9.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_10.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_11.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_12.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_13.Level_Status=IfxPort_State_low;
    DioConf_DioChannel_40_14.Level_Status=IfxPort_State_low;



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






