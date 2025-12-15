#include "PWR_SQ.h"



void set_pad_TCS8071_driver(void)
{
    uint16 pw = IfxScuWdt_getSafetyWatchdogPassword();//이 보호 기능은 실수나 잘못된 코드가 시스템 핵심 레지스터를 망가뜨리지 않도록 하는 장치입니다.
    IfxScuWdt_clearSafetyEndinit(pw);
    //TCS8071 Power_Sequence
    //Opendrain Setting
    IfxPort_setPinPadDriver(PORT20, PIN_11,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 20.11
    IfxPort_setPinPadDriver(PORT01, PIN_03,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 01.3
    IfxPort_setPinPadDriver(PORT33, PIN_04,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 33.4
    //Input/Output Setting
    IfxPort_setPinPadDriver(PORT01, PIN_04,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 22.0
    IfxPort_setPinPadDriver(PORT22, PIN_00,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 22.0
    IfxPort_setPinPadDriver(PORT23, PIN_00,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 23.0
    IfxPort_setPinPadDriver(PORT23, PIN_01,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 23.1
    IfxPort_setPinPadDriver(PORT14, PIN_09,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 14.9

    //251209 추가 요청 초기화
    IfxPort_setPinPadDriver(PORT01, PIN_03,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 V_TSC8071_4P0_EN : P01_3
    IfxPort_setPinPadDriver(PORT02, PIN_03,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 V_ETH_EN : P02_3
    IfxPort_setPinPadDriver(PORT10, PIN_04,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 V_USB_EN : P10_4
    IfxPort_setPinPadDriver(PORT14, PIN_09,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 V_SWDT_0P75_EN : P14_9
    IfxPort_setPinPadDriver(PORT13, PIN_03,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 CAM_POC_EN : P13_3
    IfxPort_setPinPadDriver(PORT23, PIN_06,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 V_SER_POC_EN : P23_6
    IfxPort_setPinPadDriver(PORT32, PIN_03,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 V_SDR_3P3_EN : P32_3
    IfxPort_setPinPadDriver(PORT32, PIN_05,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 V_SDR_1P8_EN : P32_5
    IfxPort_setPinPadDriver(PORT33, PIN_00,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 TSC8071_DP_3V3_EN  : P33_0
    IfxPort_setPinPadDriver(PORT33, PIN_11,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 V_MAX96712_EN : P33_11
    IfxPort_setPinPadDriver(PORT33, PIN_13,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 V_MAX96735_EN : P33_13
    //251210 추가 요청
    IfxPort_setPinPadDriver(PORT22, PIN_01,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 STR_EN 22_1

    IfxScuWdt_setSafetyEndinit(pw);
}
void set_pad_JAO_driver(void)
{
    uint16 pw = IfxScuWdt_getSafetyWatchdogPassword();//이 보호 기능은 실수나 잘못된 코드가 시스템 핵심 레지스터를 망가뜨리지 않도록 하는 장치입니다.
    IfxScuWdt_clearSafetyEndinit(pw);
    //JAO Power_Sequence
    IfxPort_setPinPadDriver(PORT20, PIN_00,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 20.0
    IfxPort_setPinPadDriver(PORT20, PIN_01,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 20.1
    IfxPort_setPinPadDriver(PORT20, PIN_03,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 20.3
    IfxPort_setPinPadDriver(PORT20, PIN_06,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 20.6
    IfxPort_setPinPadDriver(PORT20, PIN_07,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 20.7
    IfxPort_setPinPadDriver(PORT20, PIN_08,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 20.8
    IfxPort_setPinPadDriver(PORT20, PIN_09,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 20.9
    IfxPort_setPinPadDriver(PORT20, PIN_10,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 20.10
    //1211
    IfxPort_setPinPadDriver(PORT21, PIN_01,  IfxPort_PadDriver_cmosAutomotiveSpeed1);//핀설정 20.10

    IfxScuWdt_setSafetyEndinit(pw);
}

void gpio_TCS8071_init(void)
{
    set_pad_TCS8071_driver();

    /* Configure pins as push-pull output */
    //TCS8071 Power_Sequence
    //Opendrain Setting
    IfxPort_setPinModeOutput(PORT20, PIN_11, IfxPort_OutputMode_openDrain, IfxPort_OutputIdx_general); //20.11 Opendrain
    IfxPort_setPinModeOutput(PORT01, PIN_03, IfxPort_OutputMode_openDrain, IfxPort_OutputIdx_general); //01.3 Opendrain
    IfxPort_setPinModeOutput(PORT33, PIN_04, IfxPort_OutputMode_openDrain, IfxPort_OutputIdx_general); //33.4 Opendrain
    //Input/Output Setting
    IfxPort_setPinModeInput (PORT01, PIN_04, IfxPort_InputMode_pullUp);
    IfxPort_setPinModeOutput(PORT22, PIN_00, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinModeOutput(PORT23, PIN_00, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinModeOutput(PORT14, PIN_09, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);

    //251209 추가 요청 초기화
    IfxPort_setPinModeOutput(PORT01, PIN_03, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);//핀설정 V_TSC8071_4P0_EN : P01_3
    IfxPort_setPinModeOutput(PORT02, PIN_03, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);//핀설정 V_ETH_EN : P02_3
    IfxPort_setPinModeOutput(PORT10, PIN_04, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);//핀설정 V_USB_EN : P10_4
    IfxPort_setPinModeOutput(PORT14, PIN_09, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);//핀설정 V_SWDT_0P75_EN : P14_9
    IfxPort_setPinModeOutput(PORT13, PIN_03, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);//핀설정 CAM_POC_EN : P13_3
    IfxPort_setPinModeOutput(PORT23, PIN_06, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);//핀설정 V_SER_POC_EN : P23_6
    IfxPort_setPinModeOutput(PORT32, PIN_03, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);//핀설정 V_SDR_3P3_EN : P32_3
    IfxPort_setPinModeOutput(PORT32, PIN_05, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);//핀설정 V_SDR_1P8_EN : P32_5
    IfxPort_setPinModeOutput(PORT33, PIN_00, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);//핀설정 TSC8071_DP_3V3_EN  : P33_0
    IfxPort_setPinModeOutput(PORT33, PIN_11, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);//핀설정 V_MAX96712_EN : P33_11
    IfxPort_setPinModeOutput(PORT33, PIN_13, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);//핀설정 V_MAX96735_EN : P33_13
    IfxPort_setPinHigh(PORT01, PIN_03);
    IfxPort_setPinHigh(PORT02, PIN_03);
    IfxPort_setPinHigh(PORT10, PIN_04);
    IfxPort_setPinHigh(PORT14, PIN_09);
    IfxPort_setPinHigh(PORT13, PIN_03);
    IfxPort_setPinHigh(PORT23, PIN_06);
    IfxPort_setPinHigh(PORT32, PIN_03);
    IfxPort_setPinHigh(PORT32, PIN_05);
    IfxPort_setPinHigh(PORT33, PIN_00);
    IfxPort_setPinHigh(PORT33, PIN_11);
    IfxPort_setPinHigh(PORT33, PIN_13);

    //1210테스트
    IfxPort_setPinModeInput (PORT23, PIN_01, IfxPort_InputMode_pullUp);
    IfxPort_setPinModeOutput(PORT22, PIN_01, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);//핀설정 V_MAX96735_EN : P33_13

    //TCS8071 Power_Sequence
    IfxPort_setPinHigh(PORT20, PIN_11);
    IfxPort_setPinHigh(PORT01, PIN_03);
    IfxPort_setPinHigh(PORT33, PIN_04);
    IfxPort_setPinLow(PORT22, PIN_00);
    IfxPort_setPinLow(PORT23, PIN_00);
    IfxPort_setPinLow(PORT14, PIN_09);

    //1210테스트
    IfxPort_setPinLow(PORT22, PIN_01);
}

void gpio_JAO_init(void)
{
    set_pad_JAO_driver();

    /* Configure pins as push-pull output */
    //JAO Power_Sequence
    IfxPort_setPinModeOutput(PORT20, PIN_00, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinModeOutput(PORT20, PIN_01, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinModeInput (PORT20, PIN_03, IfxPort_InputMode_pullUp);
    IfxPort_setPinModeOutput(PORT20, PIN_06, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinModeInput (PORT20, PIN_07, IfxPort_InputMode_pullUp);
    IfxPort_setPinModeInput (PORT20, PIN_08, IfxPort_InputMode_pullUp);
    IfxPort_setPinModeOutput(PORT20, PIN_09, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinModeInput (PORT20, PIN_10, IfxPort_InputMode_pullUp);
    //1211
    //IfxPort_setPinModeOutput(PORT21, PIN_01, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinModeInput (PORT21, PIN_01, IfxPort_InputMode_pullUp);
    /* Default state: low */
    //JAO Power_Sequence
    IfxPort_setPinLow(PORT20, PIN_00);
    IfxPort_setPinLow(PORT20, PIN_01);
    IfxPort_setPinLow(PORT20, PIN_06);
    IfxPort_setPinLow(PORT20, PIN_09);
    //IfxPort_setPinLow(PORT21, PIN_01);
}

//JAO
void p20_0_high(void)  { IfxPort_setPinHigh(PORT20, PIN_00);}
void p20_0_low(void)   { IfxPort_setPinLow(PORT20,  PIN_00);}
void p20_0_toggle(void){ IfxPort_togglePin(PORT20,  PIN_00);}
void p20_1_high(void)  { IfxPort_setPinHigh(PORT20, PIN_01);}
void p20_1_low(void)   { IfxPort_setPinLow(PORT20,  PIN_01);}
void p20_1_toggle(void){ IfxPort_togglePin(PORT20,  PIN_01);}
void p20_6_high(void)  { IfxPort_setPinHigh(PORT20, PIN_06);}
void p20_6_low(void)   { IfxPort_setPinLow(PORT20,  PIN_06);}
void p20_6_toggle(void){ IfxPort_togglePin(PORT20,  PIN_06);}
void p20_9_high(void)  { IfxPort_setPinHigh(PORT20, PIN_09);}
void p20_9_low(void)   { IfxPort_setPinLow(PORT20,  PIN_09);}
void p20_9_toggle(void){ IfxPort_togglePin(PORT20,  PIN_09);}

boolean read_V_JAO_MV_5V_PG(void)
{
    return IfxPort_getPinState(PORT20,PIN_03);
}
boolean read_V_JAO_HV_12V_PG(void)
{
    return IfxPort_getPinState(PORT20,PIN_07);
}
boolean read_JAO_VDDIN_PWR_BAD_N_3P3(void)
{
    return IfxPort_getPinState(PORT20,PIN_08);
}
boolean read_JAO_CARRIER_POWER_ON(void)
{
    return IfxPort_getPinState(PORT20,PIN_10);
}


//TCS8071
void p14_9_high(void)  { IfxPort_setPinHigh(PORT14, PIN_09);}
void p14_9_low(void)   { IfxPort_setPinLow(PORT14,  PIN_09);}
void p14_9_toggle(void){ IfxPort_togglePin(PORT14,  PIN_09);}
void p22_0_high(void)  { IfxPort_setPinHigh(PORT22, PIN_00);}
void p22_0_low(void)   { IfxPort_setPinLow(PORT22,  PIN_00);}
void p22_0_toggle(void){ IfxPort_togglePin(PORT22,  PIN_00);}
void p23_0_high(void)  { IfxPort_setPinHigh(PORT23, PIN_00);}
void p23_0_low(void)   { IfxPort_setPinLow(PORT23,  PIN_00);}
void p23_0_toggle(void){ IfxPort_togglePin(PORT23,  PIN_00);}

boolean read_V_TSC8071_4P0_PG(void)
{
    return IfxPort_getPinState(PORT01,PIN_04);
}


void task_app_TCS8071_PWR_SQ(void *arg)
{
    gpio_TCS8071_init();

    while(1)
    {
        while(!read_V_TSC8071_4P0_PG())
        {

        }
        delay_ms(1);
        p22_0_high();
        delay_ms(10);
        p23_0_high();
        delay_ms(3);
        p14_9_high();


    }

}

void task_app_JAO_PWR_SQ(void *arg)
{
    gpio_JAO_init();

    while(1)
    {
        p20_0_high();
        delay_ms(10);
        p20_0_low();
        delay_ms(3);
        p20_0_high();
        delay_ms(20);
        p20_1_high();
        while(!read_V_JAO_MV_5V_PG())
        {

        }
        delay_ms(1);
        p20_6_high();
        while(!read_V_JAO_HV_12V_PG())
        {

        }
        delay_ms(50);
        p20_9_high();


    }

}
