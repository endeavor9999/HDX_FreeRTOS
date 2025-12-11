/*
 * PORT_cfg.h
 *
 *  Created on: 2022. 9. 26.
 *      Author: USER
 */

#ifndef PORT_CFG_H_
#define PORT_CFG_H_
#include "IfxPort.h"
#include "IfxPort_regdef.h"

typedef struct{
        Ifx_P *Port ;
        uint8 Pin_Num ;
        IfxPort_Mode Mode_Status ;
        IfxPort_State Level_Status;
}PORT_PIN_Info;

extern PORT_PIN_Info DIO_CHANNEL0_[16];
extern PORT_PIN_Info DIO_CHANNEL1_[16];
extern PORT_PIN_Info DIO_CHANNEL2_[16];
extern PORT_PIN_Info DIO_CHANNEL10_[16];
extern PORT_PIN_Info DIO_CHANNEL11_[16];
extern PORT_PIN_Info DIO_CHANNEL12_[2];
extern PORT_PIN_Info DIO_CHANNEL13_[16];
extern PORT_PIN_Info DIO_CHANNEL14_[16];
extern PORT_PIN_Info DIO_CHANNEL15_[16];
extern PORT_PIN_Info DIO_CHANNEL20_[15];
extern PORT_PIN_Info DIO_CHANNEL21_[8];
extern PORT_PIN_Info DIO_CHANNEL22_[12];
extern PORT_PIN_Info DIO_CHANNEL23_[8];
extern PORT_PIN_Info DIO_CHANNEL24_[16];
extern PORT_PIN_Info DIO_CHANNEL25_[16];
extern PORT_PIN_Info DIO_CHANNEL26_[1];
extern PORT_PIN_Info DIO_CHANNEL30_[16];
extern PORT_PIN_Info DIO_CHANNEL31_[16];
extern PORT_PIN_Info DIO_CHANNEL32_[8];
extern PORT_PIN_Info DIO_CHANNEL33_[16];
extern PORT_PIN_Info DIO_CHANNEL34_[6];
extern PORT_PIN_Info DIO_CHANNEL40_[16];
extern PORT_PIN_Info DIO_CHANNEL41_[9];


#define STD_HIGH 1
#define STD_LOW 0

///////////*DioConf_DioPort_DioPort_0 (DIO_PORT_0)*///////////
#define DioConf_DioChannel_0_0 DIO_CHANNEL0_[0]
#define DioConf_DioChannel_0_1 DIO_CHANNEL0_[1]
#define DioConf_DioChannel_0_2 DIO_CHANNEL0_[2]
#define DioConf_DioChannel_0_3 DIO_CHANNEL0_[3]
#define DioConf_DioChannel_0_4 DIO_CHANNEL0_[4]
#define DioConf_DioChannel_0_5 DIO_CHANNEL0_[5]
#define DioConf_DioChannel_0_6 DIO_CHANNEL0_[6]
#define DioConf_DioChannel_0_7 DIO_CHANNEL0_[7]
#define DioConf_DioChannel_0_8 DIO_CHANNEL0_[8]
#define DioConf_DioChannel_0_9 DIO_CHANNEL0_[9]
#define DioConf_DioChannel_0_10 DIO_CHANNEL0_[10]
#define DioConf_DioChannel_0_11 DIO_CHANNEL0_[11]
#define DioConf_DioChannel_0_12 DIO_CHANNEL0_[12]

///////////*DioConf_DioPort_DioPort_1 (DIO_PORT_1)*///////////
#define DioConf_DioChannel_1_3 DIO_CHANNEL1_[3]
#define DioConf_DioChannel_1_4 DIO_CHANNEL1_[4]
#define DioConf_DioChannel_1_5 DIO_CHANNEL1_[5]
#define DioConf_DioChannel_1_6 DIO_CHANNEL1_[6]
#define DioConf_DioChannel_1_7 DIO_CHANNEL1_[7]

///////////*DioConf_DioPort_DioPort_2 (DIO_PORT_2)*///////////
#define DioConf_DioChannel_2_0 DIO_CHANNEL2_[0]
#define DioConf_DioChannel_2_1 DIO_CHANNEL2_[1]
#define DioConf_DioChannel_2_2 DIO_CHANNEL2_[2]
#define DioConf_DioChannel_2_3 DIO_CHANNEL2_[3]
#define DioConf_DioChannel_2_4 DIO_CHANNEL2_[4]
#define DioConf_DioChannel_2_5 DIO_CHANNEL2_[5]
#define DioConf_DioChannel_2_6 DIO_CHANNEL2_[6]
#define DioConf_DioChannel_2_7 DIO_CHANNEL2_[7]
#define DioConf_DioChannel_2_8 DIO_CHANNEL2_[8]
#define DioConf_DioChannel_2_9 DIO_CHANNEL2_[9]
#define DioConf_DioChannel_2_10 DIO_CHANNEL2_[10]
#define DioConf_DioChannel_2_11 DIO_CHANNEL2_[11]

///////////*DioConf_DioPort_DioPort_10 (DIO_PORT_10)*///////////
#define DioConf_DioChannel_10_0 DIO_CHANNEL10_[0]
#define DioConf_DioChannel_10_1 DIO_CHANNEL10_[1]
#define DioConf_DioChannel_10_2 DIO_CHANNEL10_[2]
#define DioConf_DioChannel_10_3 DIO_CHANNEL10_[3]
#define DioConf_DioChannel_10_4 DIO_CHANNEL10_[4]
#define DioConf_DioChannel_10_5 DIO_CHANNEL10_[5]
#define DioConf_DioChannel_10_6 DIO_CHANNEL10_[6]
#define DioConf_DioChannel_10_7 DIO_CHANNEL10_[7]
#define DioConf_DioChannel_10_8 DIO_CHANNEL10_[8]

///////////*DioConf_DioPort_DioPort_11 (DIO_PORT_11)*///////////
#define DioConf_DioChannel_11_0 DIO_CHANNEL11_[0]
#define DioConf_DioChannel_11_1 DIO_CHANNEL11_[1]
#define DioConf_DioChannel_11_2 DIO_CHANNEL11_[2]
#define DioConf_DioChannel_11_3 DIO_CHANNEL11_[3]
#define DioConf_DioChannel_11_4 DIO_CHANNEL11_[4]
#define DioConf_DioChannel_11_5 DIO_CHANNEL11_[5]
#define DioConf_DioChannel_11_6 DIO_CHANNEL11_[6]
#define DioConf_DioChannel_11_7 DIO_CHANNEL11_[7]
#define DioConf_DioChannel_11_8 DIO_CHANNEL11_[8]
#define DioConf_DioChannel_11_9 DIO_CHANNEL11_[9]
#define DioConf_DioChannel_11_10 DIO_CHANNEL11_[10]
#define DioConf_DioChannel_11_11 DIO_CHANNEL11_[11]
#define DioConf_DioChannel_11_12 DIO_CHANNEL11_[12]
#define DioConf_DioChannel_11_13 DIO_CHANNEL11_[13]
#define DioConf_DioChannel_11_14 DIO_CHANNEL11_[14]
#define DioConf_DioChannel_11_15 DIO_CHANNEL11_[15]

///////////*DioConf_DioPort_DioPort_12 (DIO_PORT_12)*///////////
#define DioConf_DioChannel_12_0 DIO_CHANNEL12_[0]
#define DioConf_DioChannel_12_1 DIO_CHANNEL12_[1]

///////////*DioConf_DioPort_DioPort_13 (DIO_PORT_13)*///////////
#define DioConf_DioChannel_13_0 DIO_CHANNEL13_[0]
#define DioConf_DioChannel_13_1 DIO_CHANNEL13_[1]
#define DioConf_DioChannel_13_2 DIO_CHANNEL13_[2]
#define DioConf_DioChannel_13_3 DIO_CHANNEL13_[3]

///////////*DioConf_DioPort_DioPort_14 (DIO_PORT_14)*///////////
#define DioConf_DioChannel_14_0 DIO_CHANNEL14_[0]
#define DioConf_DioChannel_14_1 DIO_CHANNEL14_[1]
#define DioConf_DioChannel_14_2 DIO_CHANNEL14_[2]
#define DioConf_DioChannel_14_3 DIO_CHANNEL14_[3]
#define DioConf_DioChannel_14_4 DIO_CHANNEL14_[4]
#define DioConf_DioChannel_14_5 DIO_CHANNEL14_[5]
#define DioConf_DioChannel_14_6 DIO_CHANNEL14_[6]
#define DioConf_DioChannel_14_7 DIO_CHANNEL14_[7]
#define DioConf_DioChannel_14_8 DIO_CHANNEL14_[8]
#define DioConf_DioChannel_14_9 DIO_CHANNEL14_[9]
#define DioConf_DioChannel_14_10 DIO_CHANNEL14_[10]

///////////*DioConf_DioPort_DioPort_15 (DIO_PORT_15)*///////////
#define DioConf_DioChannel_15_0 DIO_CHANNEL15_[0]
#define DioConf_DioChannel_15_1 DIO_CHANNEL15_[1]
#define DioConf_DioChannel_15_2 DIO_CHANNEL15_[2]
#define DioConf_DioChannel_15_3 DIO_CHANNEL15_[3]
#define DioConf_DioChannel_15_4 DIO_CHANNEL15_[4]
#define DioConf_DioChannel_15_5 DIO_CHANNEL15_[5]
#define DioConf_DioChannel_15_6 DIO_CHANNEL15_[6]
#define DioConf_DioChannel_15_7 DIO_CHANNEL15_[7]
#define DioConf_DioChannel_15_8 DIO_CHANNEL15_[8]

///////////*DioConf_DioPort_DioPort_20 (DIO_PORT_20)*///////////
#define DioConf_DioChannel_20_0 DIO_CHANNEL20_[0]
#define DioConf_DioChannel_20_1 DIO_CHANNEL20_[1]
#define DioConf_DioChannel_20_2 DIO_CHANNEL20_[2]
#define DioConf_DioChannel_20_3 DIO_CHANNEL20_[3]
#define DioConf_DioChannel_20_6 DIO_CHANNEL20_[6]
#define DioConf_DioChannel_20_7 DIO_CHANNEL20_[7]
#define DioConf_DioChannel_20_8 DIO_CHANNEL20_[8]
#define DioConf_DioChannel_20_9 DIO_CHANNEL20_[9]
#define DioConf_DioChannel_20_10 DIO_CHANNEL20_[10]
#define DioConf_DioChannel_20_11 DIO_CHANNEL20_[11]
#define DioConf_DioChannel_20_12 DIO_CHANNEL20_[12]
#define DioConf_DioChannel_20_13 DIO_CHANNEL20_[13]
#define DioConf_DioChannel_20_14 DIO_CHANNEL20_[14]

///////////*DioConf_DioPort_DioPort_21 (DIO_PORT_21)*///////////
#define DioConf_DioChannel_21_0 DIO_CHANNEL21_[0]
#define DioConf_DioChannel_21_1 DIO_CHANNEL21_[1]
#define DioConf_DioChannel_21_2 DIO_CHANNEL21_[2]
#define DioConf_DioChannel_21_3 DIO_CHANNEL21_[3]
#define DioConf_DioChannel_21_4 DIO_CHANNEL21_[4]
#define DioConf_DioChannel_21_5 DIO_CHANNEL21_[5]

///////////*DioConf_DioPort_DioPort_22 (DIO_PORT_22)*///////////
#define DioConf_DioChannel_22_0 DIO_CHANNEL22_[0]
#define DioConf_DioChannel_22_1 DIO_CHANNEL22_[1]
#define DioConf_DioChannel_22_2 DIO_CHANNEL22_[2]
#define DioConf_DioChannel_22_3 DIO_CHANNEL22_[3]
#define DioConf_DioChannel_22_4 DIO_CHANNEL22_[4]
#define DioConf_DioChannel_22_5 DIO_CHANNEL22_[5]
#define DioConf_DioChannel_22_6 DIO_CHANNEL22_[6]
#define DioConf_DioChannel_22_7 DIO_CHANNEL22_[7]
#define DioConf_DioChannel_22_8 DIO_CHANNEL22_[8]
#define DioConf_DioChannel_22_9 DIO_CHANNEL22_[9]
#define DioConf_DioChannel_22_10 DIO_CHANNEL22_[10]
#define DioConf_DioChannel_22_11 DIO_CHANNEL22_[11]

///////////*DioConf_DioPort_DioPort_23 (DIO_PORT_23)*///////////
#define DioConf_DioChannel_23_0 DIO_CHANNEL23_[0]
#define DioConf_DioChannel_23_1 DIO_CHANNEL23_[1]
#define DioConf_DioChannel_23_2 DIO_CHANNEL23_[2]
#define DioConf_DioChannel_23_3 DIO_CHANNEL23_[3]
#define DioConf_DioChannel_23_4 DIO_CHANNEL23_[4]
#define DioConf_DioChannel_23_5 DIO_CHANNEL23_[5]
#define DioConf_DioChannel_23_6 DIO_CHANNEL23_[6]
#define DioConf_DioChannel_23_7 DIO_CHANNEL23_[7]

///////////*DioConf_DioPort_DioPort_32 (DIO_PORT_32)*///////////
#define DioConf_DioChannel_32_0 DIO_CHANNEL32_[0]
#define DioConf_DioChannel_32_1 DIO_CHANNEL32_[1]
#define DioConf_DioChannel_32_2 DIO_CHANNEL32_[2]
#define DioConf_DioChannel_32_3 DIO_CHANNEL32_[3]
#define DioConf_DioChannel_32_4 DIO_CHANNEL32_[4]
#define DioConf_DioChannel_32_5 DIO_CHANNEL32_[5]
#define DioConf_DioChannel_32_6 DIO_CHANNEL32_[6]
#define DioConf_DioChannel_32_7 DIO_CHANNEL32_[7]

///////////*DioConf_DioPort_DioPort_33 (DIO_PORT_33)*///////////
#define DioConf_DioChannel_33_0 DIO_CHANNEL33_[0]
#define DioConf_DioChannel_33_1 DIO_CHANNEL33_[1]
#define DioConf_DioChannel_33_2 DIO_CHANNEL33_[2]
#define DioConf_DioChannel_33_3 DIO_CHANNEL33_[3]
#define DioConf_DioChannel_33_4 DIO_CHANNEL33_[4]
#define DioConf_DioChannel_33_5 DIO_CHANNEL33_[5]
#define DioConf_DioChannel_33_6 DIO_CHANNEL33_[6]
#define DioConf_DioChannel_33_7 DIO_CHANNEL33_[7]
#define DioConf_DioChannel_33_8 DIO_CHANNEL33_[8]
#define DioConf_DioChannel_33_9 DIO_CHANNEL33_[9]
#define DioConf_DioChannel_33_10 DIO_CHANNEL33_[10]
#define DioConf_DioChannel_33_11 DIO_CHANNEL33_[11]
#define DioConf_DioChannel_33_12 DIO_CHANNEL33_[12]
#define DioConf_DioChannel_33_13 DIO_CHANNEL33_[13]
#define DioConf_DioChannel_33_14 DIO_CHANNEL33_[14]
#define DioConf_DioChannel_33_15 DIO_CHANNEL33_[15]

///////////*DioConf_DioPort_DioPort_34 (DIO_PORT_34)*///////////
#define DioConf_DioChannel_34_1 DIO_CHANNEL34_[1]
#define DioConf_DioChannel_34_2 DIO_CHANNEL34_[2]
#define DioConf_DioChannel_34_3 DIO_CHANNEL34_[3]
#define DioConf_DioChannel_34_4 DIO_CHANNEL34_[4]
#define DioConf_DioChannel_34_5 DIO_CHANNEL34_[5]

///////////*DioConf_DioPort_DioPort_40 (DIO_PORT_40)*///////////
#define DioConf_DioChannel_40_10 DIO_CHANNEL40_[10]
#define DioConf_DioChannel_40_11 DIO_CHANNEL40_[11]
#define DioConf_DioChannel_40_12 DIO_CHANNEL40_[12]
#define DioConf_DioChannel_40_0 DIO_CHANNEL40_[0]
#define DioConf_DioChannel_40_1 DIO_CHANNEL40_[1]
#define DioConf_DioChannel_40_2 DIO_CHANNEL40_[2]
#define DioConf_DioChannel_40_3 DIO_CHANNEL40_[3]
#define DioConf_DioChannel_40_13 DIO_CHANNEL40_[13]
#define DioConf_DioChannel_40_14 DIO_CHANNEL40_[14]
#define DioConf_DioChannel_40_4 DIO_CHANNEL40_[4]
#define DioConf_DioChannel_40_5 DIO_CHANNEL40_[5]
#define DioConf_DioChannel_40_6 DIO_CHANNEL40_[6]
#define DioConf_DioChannel_40_7 DIO_CHANNEL40_[7]
#define DioConf_DioChannel_40_8 DIO_CHANNEL40_[8]
#define DioConf_DioChannel_40_9 DIO_CHANNEL40_[9]



void Port_Init(void);
void GPIO_SetPinState(PORT_PIN_Info *DioChannel_info,IfxPort_State Set_Level);
void GPIO_GetPinState(PORT_PIN_Info *DioChannel_info,uint8 *Get_Level);
void GPIO_SetPinMode(PORT_PIN_Info *DioChannel_info,IfxPort_Mode mode);
#endif /* PORT_CFG_H_ */
