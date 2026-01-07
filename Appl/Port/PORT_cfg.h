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
#define DioConf_DioChannel_0_0_TC387_CAN2_TXD DIO_CHANNEL0_[0]
#define DioConf_DioChannel_0_1_TC387_CAN2_RXD DIO_CHANNEL0_[1]
#define DioConf_DioChannel_0_2_TC387_CAN2_STB DIO_CHANNEL0_[2]
#define DioConf_DioChannel_0_3_TLF35584_WDI DIO_CHANNEL0_[3]
#define DioConf_DioChannel_0_4_TP4205 DIO_CHANNEL0_[4]
#define DioConf_DioChannel_0_5_TP4206 DIO_CHANNEL0_[5]
#define DioConf_DioChannel_0_6_TP4207 DIO_CHANNEL0_[6]
#define DioConf_DioChannel_0_7_TP4200 DIO_CHANNEL0_[7]
#define DioConf_DioChannel_0_8_TP4201 DIO_CHANNEL0_[8]
#define DioConf_DioChannel_0_9_SYS_PWR_FLT DIO_CHANNEL0_[9]
#define DioConf_DioChannel_0_10_SYS_PWR_IMON DIO_CHANNEL0_[10]
#define DioConf_DioChannel_0_11_JAO_PWR_FLT DIO_CHANNEL0_[11]
#define DioConf_DioChannel_0_12_JAO_PWR_IMON DIO_CHANNEL0_[12]

///////////*DioConf_DioPort_DioPort_1 (DIO_PORT_1)*///////////
#define DioConf_DioChannel_1_3_V_TSC8071_4P0_EN DIO_CHANNEL1_[3]
#define DioConf_DioChannel_1_4_V_TSC8071_4P0_PG DIO_CHANNEL1_[4]
#define DioConf_DioChannel_1_5_V_NPU_EN DIO_CHANNEL1_[5]
#define DioConf_DioChannel_1_6_V_NPU_PG DIO_CHANNEL1_[6]
#define DioConf_DioChannel_1_7_NC DIO_CHANNEL1_[7]

///////////*DioConf_DioPort_DioPort_2 (DIO_PORT_2)*///////////
#define DioConf_DioChannel_2_0_TC387_CAN0_TXD DIO_CHANNEL2_[0]
#define DioConf_DioChannel_2_1_TC387_CAN0_RXD DIO_CHANNEL2_[1]
#define DioConf_DioChannel_2_2_TC387_CAN0_STB DIO_CHANNEL2_[2]
#define DioConf_DioChannel_2_3_V_ETH_EN DIO_CHANNEL2_[3]
#define DioConf_DioChannel_2_4_V_ETH_PG DIO_CHANNEL2_[4]
#define DioConf_DioChannel_2_5_TMON1_RESET_N DIO_CHANNEL2_[5]
#define DioConf_DioChannel_2_6_TMON1_ALERT DIO_CHANNEL2_[6]
#define DioConf_DioChannel_2_7_TMON2_RESET_N DIO_CHANNEL2_[7]
#define DioConf_DioChannel_2_8_TMON2_ALERT DIO_CHANNEL2_[8]
#define DioConf_DioChannel_2_9_TC387_CAN1_TXD DIO_CHANNEL2_[9]
#define DioConf_DioChannel_2_10_TC387_CAN1_RXD DIO_CHANNEL2_[10]
#define DioConf_DioChannel_2_11_TC387_CAN1_STB DIO_CHANNEL2_[11]

///////////*DioConf_DioPort_DioPort_10 (DIO_PORT_10)*///////////
#define DioConf_DioChannel_10_0_TC387_SPI1_CS_N DIO_CHANNEL10_[0]
#define DioConf_DioChannel_10_1_TC387_SPI1_MISO DIO_CHANNEL10_[1]
#define DioConf_DioChannel_10_2_TC387_SPI1_CLK DIO_CHANNEL10_[2]
#define DioConf_DioChannel_10_3_TC387_SPI1_MOSI DIO_CHANNEL10_[3]
#define DioConf_DioChannel_10_4_V_USB_EN DIO_CHANNEL10_[4]
#define DioConf_DioChannel_10_5_HWCFG4 DIO_CHANNEL10_[5]
#define DioConf_DioChannel_10_6_HWCFG5 DIO_CHANNEL10_[6]
#define DioConf_DioChannel_10_7_V_USB_PG DIO_CHANNEL10_[7]
#define DioConf_DioChannel_10_8_USB_RST_N DIO_CHANNEL10_[8]

///////////*DioConf_DioPort_DioPort_11 (DIO_PORT_11)*///////////
#define DioConf_DioChannel_11_0_TC387_GETH_TXD3 DIO_CHANNEL11_[0]
#define DioConf_DioChannel_11_1_TC387_GETH_TXD2 DIO_CHANNEL11_[1]
#define DioConf_DioChannel_11_2_TC387_GETH_TXD1 DIO_CHANNEL11_[2]
#define DioConf_DioChannel_11_3_TC387_GETH_TXD0 DIO_CHANNEL11_[3]
#define DioConf_DioChannel_11_4_TC387_GETH_TXCLK DIO_CHANNEL11_[4]
#define DioConf_DioChannel_11_5_GETH_GREFCLK DIO_CHANNEL11_[5]
#define DioConf_DioChannel_11_6_TC387_GETH_TCTL DIO_CHANNEL11_[6]
#define DioConf_DioChannel_11_7_TC387_GETH_RXD3 DIO_CHANNEL11_[7]
#define DioConf_DioChannel_11_8_TC387_GETH_RXD2 DIO_CHANNEL11_[8]
#define DioConf_DioChannel_11_9_TC387_GETH_RXD1 DIO_CHANNEL11_[9]
#define DioConf_DioChannel_11_10_TC387_GETH_RXD0 DIO_CHANNEL11_[10]
#define DioConf_DioChannel_11_11_TC387_GETH_RCTL DIO_CHANNEL11_[11]
#define DioConf_DioChannel_11_12_TC387_GETH_RXCLK DIO_CHANNEL11_[12]
#define DioConf_DioChannel_11_13_TC387_I2C1_SDA DIO_CHANNEL11_[13]
#define DioConf_DioChannel_11_14_TC387_I2C1_SCL DIO_CHANNEL11_[14]
#define DioConf_DioChannel_11_15_MCU_I2C1_RESET_N DIO_CHANNEL11_[15]

///////////*DioConf_DioPort_DioPort_12 (DIO_PORT_12)*///////////
#define DioConf_DioChannel_12_0_TC387_MDC DIO_CHANNEL12_[0]
#define DioConf_DioChannel_12_1_TC387_MDIO DIO_CHANNEL12_[1]

///////////*DioConf_DioPort_DioPort_13 (DIO_PORT_13)*///////////
#define DioConf_DioChannel_13_0_NC DIO_CHANNEL13_[0]
#define DioConf_DioChannel_13_1_TC387_I2C0_SCL DIO_CHANNEL13_[1]
#define DioConf_DioChannel_13_2_TC387_I2C0_SDA DIO_CHANNEL13_[2]
#define DioConf_DioChannel_13_3_CAM_POC_EN DIO_CHANNEL13_[3]


///////////*DioConf_DioPort_DioPort_14 (DIO_PORT_14)*///////////
#define DioConf_DioChannel_14_0_TSC8071_MCU_UART_RXD DIO_CHANNEL14_[0]
#define DioConf_DioChannel_14_1_TSC8071_MCU_UART_TXD DIO_CHANNEL14_[1]
#define DioConf_DioChannel_14_2_HWCFG2 DIO_CHANNEL14_[2]
#define DioConf_DioChannel_14_3_HWCFG3 DIO_CHANNEL14_[3]
#define DioConf_DioChannel_14_4_HWCFG6 DIO_CHANNEL14_[4]
#define DioConf_DioChannel_14_5_HWCFG1 DIO_CHANNEL14_[5]
#define DioConf_DioChannel_14_6_V_CAM_POC_PG DIO_CHANNEL14_[6]
#define DioConf_DioChannel_14_7_CPP0_INT_N DIO_CHANNEL14_[7]
#define DioConf_DioChannel_14_8_CPP1_INT_N DIO_CHANNEL14_[8]
#define DioConf_DioChannel_14_9_V_SWDT_0P75_EN DIO_CHANNEL14_[9]
#define DioConf_DioChannel_14_10_V_TSC8071_SWDT_PG DIO_CHANNEL14_[10]


///////////*DioConf_DioPort_DioPort_15 (DIO_PORT_15)*///////////
#define DioConf_DioChannel_15_0_JAO_MCU_UART2_RXD DIO_CHANNEL15_[0]
#define DioConf_DioChannel_15_1_JAO_MCU_UART2_TXD DIO_CHANNEL15_[1]
#define DioConf_DioChannel_15_2_TC387_UART0_DBG_TXD DIO_CHANNEL15_[2]
#define DioConf_DioChannel_15_3_V_IN_ALERT_N DIO_CHANNEL15_[3]
#define DioConf_DioChannel_15_4_V_NPU_IN_ALERT_N DIO_CHANNEL15_[4]
#define DioConf_DioChannel_15_5_TC387_SPI2_CS_N DIO_CHANNEL15_[5]
#define DioConf_DioChannel_15_6_TC387_SPI2_MOSI DIO_CHANNEL15_[6]
#define DioConf_DioChannel_15_7_TC387_SPI2_MISO DIO_CHANNEL15_[7]
#define DioConf_DioChannel_15_8_TC387_SPI2_CLK DIO_CHANNEL15_[8]


///////////*DioConf_DioPort_DioPort_20 (DIO_PORT_20)*///////////
#define DioConf_DioChannel_20_0_JAO_POWER_BTN_N DIO_CHANNEL20_[0]
#define DioConf_DioChannel_20_1_V_JAO_MV_5V_EN DIO_CHANNEL20_[1]
#define DioConf_DioChannel_20_2_TP DIO_CHANNEL20_[2]
#define DioConf_DioChannel_20_3_V_JAO_MV_5V_PG DIO_CHANNEL20_[3]
#define DioConf_DioChannel_20_6_V_JAO_HV_12V_EN DIO_CHANNEL20_[6]
#define DioConf_DioChannel_20_7_V_JAO_HV_12V_PG DIO_CHANNEL20_[7]
#define DioConf_DioChannel_20_8_JAO_VDDIN_PWR_BAD_N_3P3 DIO_CHANNEL20_[8]
#define DioConf_DioChannel_20_9_JAO_MODULE_POWER_ON_3P3 DIO_CHANNEL20_[9]
#define DioConf_DioChannel_20_10_JAO_CARRIER_POWER_ON DIO_CHANNEL20_[10]
#define DioConf_DioChannel_20_11_V_SYSTEM_EN DIO_CHANNEL20_[11]
#define DioConf_DioChannel_20_12_V_SYSTEM_PG DIO_CHANNEL20_[12]
#define DioConf_DioChannel_20_13_NC DIO_CHANNEL20_[13]
#define DioConf_DioChannel_20_14_NC DIO_CHANNEL20_[14]

///////////*DioConf_DioPort_DioPort_21 (DIO_PORT_21)*///////////
#define DioConf_DioChannel_21_0_JAO_SYS_RESET_N_3P3 DIO_CHANNEL21_[0]
#define DioConf_DioChannel_21_1_JAO_PERIPHERAL_RESET_N_3P3 DIO_CHANNEL21_[1]
#define DioConf_DioChannel_21_2_JAO_MODULE_SLEEP_N_3P3 DIO_CHANNEL21_[2]
#define DioConf_DioChannel_21_3_JAO_MODULE_SHDN_N_3P3 DIO_CHANNEL21_[3]
#define DioConf_DioChannel_21_4_JAO_THERM_ALERT_N_3P3 DIO_CHANNEL21_[4]
#define DioConf_DioChannel_21_5_NC DIO_CHANNEL21_[5]

///////////*DioConf_DioPort_DioPort_22 (DIO_PORT_22)*///////////
#define DioConf_DioChannel_22_0_TSC8071_PMIC_EN DIO_CHANNEL22_[0]
#define DioConf_DioChannel_22_1_TSC8071_STR_EN DIO_CHANNEL22_[1]
#define DioConf_DioChannel_22_2_TC387_SWDT_WDO_N DIO_CHANNEL22_[2]
#define DioConf_DioChannel_22_3_TC387_SWDT_DIS_N DIO_CHANNEL22_[3]
#define DioConf_DioChannel_22_4_TC387_SWDT_RST_N DIO_CHANNEL22_[4]
#define DioConf_DioChannel_22_5_TC387_CAN5_STB DIO_CHANNEL22_[5]
#define DioConf_DioChannel_22_6_TC387_CAN5_TXD DIO_CHANNEL22_[6]
#define DioConf_DioChannel_22_7_TC387_CAN5_RXD DIO_CHANNEL22_[7]
#define DioConf_DioChannel_22_8_TC387_SPI0_CLK DIO_CHANNEL22_[8]
#define DioConf_DioChannel_22_9_TC387_SPI0_MISO DIO_CHANNEL22_[9]
#define DioConf_DioChannel_22_10_TC387_SPI0_MOSI DIO_CHANNEL22_[10]
#define DioConf_DioChannel_22_11_TC387_SPI0_CS_N DIO_CHANNEL22_[11]

///////////*DioConf_DioPort_DioPort_23 (DIO_PORT_23)*///////////
#define DioConf_DioChannel_23_0_TSC8071_RESET_N DIO_CHANNEL23_[0]
#define DioConf_DioChannel_23_1_TSC8071_RSTOUT_N DIO_CHANNEL23_[1]
#define DioConf_DioChannel_23_2_TSC8071_SYS_PWR_EN DIO_CHANNEL23_[2]
#define DioConf_DioChannel_23_3_TSC8071_PMIC_IRQ_N DIO_CHANNEL23_[3]
#define DioConf_DioChannel_23_4_NC DIO_CHANNEL23_[4]
#define DioConf_DioChannel_23_5_TSC8071_PMIC_ERR DIO_CHANNEL23_[5]
#define DioConf_DioChannel_23_6_V_SER_POC_EN DIO_CHANNEL23_[6]
#define DioConf_DioChannel_23_7_V_SER_POC_PG DIO_CHANNEL23_[7]

///////////*DioConf_DioPort_DioPort_32 (DIO_PORT_32)*///////////
#define DioConf_DioChannel_32_0_GATE1N DIO_CHANNEL32_[0]
#define DioConf_DioChannel_32_1_GATE1P DIO_CHANNEL32_[1]
#define DioConf_DioChannel_32_2_AK4602_MUTE DIO_CHANNEL32_[2]
#define DioConf_DioChannel_32_3_V_SDR_3P3_EN DIO_CHANNEL32_[3]
#define DioConf_DioChannel_32_4_V_SDR_3P3_PG DIO_CHANNEL32_[4]
#define DioConf_DioChannel_32_5_V_SDR_1P8_EN DIO_CHANNEL32_[5]
#define DioConf_DioChannel_32_6_V_SDR_1P8_PG DIO_CHANNEL32_[6]
#define DioConf_DioChannel_32_7_BCM89586_SM_FLT_IND DIO_CHANNEL32_[7]

///////////*DioConf_DioPort_DioPort_33 (DIO_PORT_33)*///////////
#define DioConf_DioChannel_33_0_TSC8071_DP_3V3_EN DIO_CHANNEL33_[0]
#define DioConf_DioChannel_33_1_TSC8071_DP_3V3_FAULT_N DIO_CHANNEL33_[1]
#define DioConf_DioChannel_33_2_JAO_DP_3V3_EN DIO_CHANNEL33_[2]
#define DioConf_DioChannel_33_3_JAO_3V3_FAULT_N DIO_CHANNEL33_[3]
#define DioConf_DioChannel_33_4_V_MEM_EN DIO_CHANNEL33_[4]
#define DioConf_DioChannel_33_5_V_MEM_PG DIO_CHANNEL33_[5]
#define DioConf_DioChannel_33_6_NC DIO_CHANNEL33_[6]
#define DioConf_DioChannel_33_7_NC DIO_CHANNEL33_[7]
#define DioConf_DioChannel_33_8_TC387_ERR DIO_CHANNEL33_[8]
#define DioConf_DioChannel_33_9_TLF35584_SS1 DIO_CHANNEL33_[9]
#define DioConf_DioChannel_33_10_TC387_UART0_DBG_RXD DIO_CHANNEL33_[10]
#define DioConf_DioChannel_33_11_V_MAX96712_EN DIO_CHANNEL33_[11]
#define DioConf_DioChannel_33_12_V_MAX96712_PG DIO_CHANNEL33_[12]
#define DioConf_DioChannel_33_13_V_MAX96735_EN DIO_CHANNEL33_[13]
#define DioConf_DioChannel_33_14_V_MAX96735_PG DIO_CHANNEL33_[14]
#define DioConf_DioChannel_33_15_TMON2_ALERT DIO_CHANNEL33_[15]

///////////*DioConf_DioPort_DioPort_34 (DIO_PORT_34)*///////////
#define DioConf_DioChannel_34_1_V_AMP_PWR_EN DIO_CHANNEL34_[1]
#define DioConf_DioChannel_34_2_V_AMP_PWR_PG DIO_CHANNEL34_[2]
#define DioConf_DioChannel_34_3_V_JAO_VBUS_PG DIO_CHANNEL34_[3]
#define DioConf_DioChannel_34_4_V_JAO_IN_ALERT_N DIO_CHANNEL34_[4]
#define DioConf_DioChannel_34_5_V_TSC8071_IN_ALERT_N DIO_CHANNEL34_[5]

///////////*DioConf_DioPort_DioPort_40 (DIO_PORT_40)*///////////
#define DioConf_DioChannel_40_10_ DIO_CHANNEL40_[10]
#define DioConf_DioChannel_40_11_ DIO_CHANNEL40_[11]
#define DioConf_DioChannel_40_12_ DIO_CHANNEL40_[12]
#define DioConf_DioChannel_40_0_ DIO_CHANNEL40_[0]
#define DioConf_DioChannel_40_1_ DIO_CHANNEL40_[1]
#define DioConf_DioChannel_40_2_ DIO_CHANNEL40_[2]
#define DioConf_DioChannel_40_3_ DIO_CHANNEL40_[3]
#define DioConf_DioChannel_40_13_ DIO_CHANNEL40_[13]
#define DioConf_DioChannel_40_14_ DIO_CHANNEL40_[14]
#define DioConf_DioChannel_40_4_ DIO_CHANNEL40_[4]
#define DioConf_DioChannel_40_5_ DIO_CHANNEL40_[5]
#define DioConf_DioChannel_40_6_ DIO_CHANNEL40_[6]
#define DioConf_DioChannel_40_7_ DIO_CHANNEL40_[7]
#define DioConf_DioChannel_40_8_ DIO_CHANNEL40_[8]
#define DioConf_DioChannel_40_9_ DIO_CHANNEL40_[9]


void Port_Init(void);
void GPIO_SetPinState(PORT_PIN_Info *DioChannel_info,IfxPort_State Set_Level);
void GPIO_GetPinState(PORT_PIN_Info *DioChannel_info,uint8 *Get_Level);
void GPIO_SetPinMode(PORT_PIN_Info *DioChannel_info,IfxPort_Mode mode);
#endif /* PORT_CFG_H_ */
