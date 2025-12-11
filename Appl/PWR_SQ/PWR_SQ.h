#include "Ifx_Types.h"

#include "IfxPort.h"
#include "IfxStm.h"

#define PORT01          (&MODULE_P01)
#define PORT02          (&MODULE_P02)
#define PORT10          (&MODULE_P10)
#define PORT13          (&MODULE_P13)
#define PORT14          (&MODULE_P14)
#define PORT20          (&MODULE_P20)
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

void set_pad_TCS8071_driver(void);
void gpio_TCS8071_init(void);
void set_pad_JAO_driver(void);
void gpio_JAO_init(void);

//JAO
void p20_0_high(void);
void p20_0_low(void);
void p20_0_toggle(void);
void p20_1_high(void);
void p20_1_low(void);
void p20_1_toggle(void);
void p20_6_high(void);
void p20_6_low(void);
void p20_6_toggle(void);
void p20_9_high(void);
void p20_9_low(void);
void p20_9_toggle(void);
void p21_1_high(void);
void p21_1_low(void);
void p21_1_toggle(void);
boolean read_V_JAO_MV_5V_PG(void);
boolean read_V_JAO_HV_12V_PG(void);
boolean read_JAO_VDDIN_PWR_BAD_N_3P3(void);
boolean read_JAO_CARRIER_POWER_ON(void);

//TCS8071
void p14_9_high(void);
void p14_9_low(void);
void p14_9_toggle(void);
void p22_0_high(void);
void p22_0_low(void);
void p22_0_toggle(void);
void p23_0_high(void);
void p23_0_low(void);
void p23_0_toggle(void);
boolean read_V_TSC8071_4P0_PG(void);

void task_app_TCS8071_PWR_SQ(void *arg);
void task_app_JAO_PWR_SQ(void *arg);
#include "FreeRTOS.h"
#include "task.h"
#include "Ifx_Types.h"

#include "IfxPort.h"


#define PORT01          (&MODULE_P01)
#define PORT14          (&MODULE_P14)
#define PORT20          (&MODULE_P20)
#define PORT21          (&MODULE_P21)
#define PORT22          (&MODULE_P22)
#define PORT23          (&MODULE_P23)
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

void set_pad_TCS8071_driver(void);
void gpio_TCS8071_init(void);
void set_pad_JAO_driver(void);
void gpio_JAO_init(void);
void delay_ms(uint32 ms);

//JAO
void p20_0_high(void);
void p20_0_low(void);
void p20_0_toggle(void);
void p20_1_high(void);
void p20_1_low(void);
void p20_1_toggle(void);
void p20_6_high(void);
void p20_6_low(void);
void p20_6_toggle(void);
void p20_9_high(void);
void p20_9_low(void);
void p20_9_toggle(void);
boolean read_V_JAO_MV_5V_PG(void);
boolean read_V_JAO_HV_12V_PG(void);
boolean read_JAO_VDDIN_PWR_BAD_N_3P3(void);
boolean read_JAO_CARRIER_POWER_ON(void);

//TCS8071
void p14_9_high(void);
void p14_9_low(void);
void p14_9_toggle(void);
void p22_0_high(void);
void p22_0_low(void);
void p22_0_toggle(void);
void p23_0_high(void);
void p23_0_low(void);
void p23_0_toggle(void);
boolean read_V_TSC8071_4P0_PG(void);

void task_app_TCS8071_PWR_SQ(void *arg);
void task_app_JAO_PWR_SQ(void *arg);
