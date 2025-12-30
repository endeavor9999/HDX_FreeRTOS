/*
 * AMC6821.h
 *
 *  Created on: 2022. 11. 14.
 *      Author: USER
 */

#ifndef APPL_I2C_DEVICE_AMC6821_AMC6821_H_
#define APPL_I2C_DEVICE_AMC6821_AMC6821_H_

#include "I2C_GPIO.h"
//NAME ADDR  DEFAULT  BIT 7 BIT 6  BIT 5 BIT 4 BIT 3 BIT 2 BIT 1 BIT 0

//IDENTIFICATION REGISTERS
#define AMC6821_Device_ID_Register 0x3D // 0x21 0 0 1 0 0 0 0 1
//Device identification number. Always read '0x21'.
#define AMC6821_Company_ID_Register 0x3E // 0x49 0 1 0 0 1 0 0 1



//CONFIGURATION REGISTERS //
#define AMC6821_Configuration_Register_1 0x00
// 0xD4 THERMOVIE FDRC1 FDRC0 FAN-Fault- EN PWMINV FANIE INT-EN START
// THERM INT Enable Fan Control Mode  FAN-Fault Pin EN PWM Invert RPM Int EN Global Int EN Start Monitor

#define AMC6821_Configuration_Register_2 0x01
// 0x3D RST PSVIE RTOIE LTOIE RTFIE TACH-EN TACH- MODE PWM-EN
// Reset LPSV Int EN RT Int EN LT Int EN Remote Failure Int EN TACH EN TACH Mode PWM-Out EN

#define AMC6821_Configuration_Register_3 0x3F
// 0x82 THERM-FAN- EN 0 0 0 0 0 1 0
// THERM-Fan Control       Part Revision Number

#define AMC6821_Configuration_Register_4 0x04
// 0x08 For Future Use PSPR TACH-FAST OVREN 1 0 0 0
// Must be rewritten to '1'. Pulse Number TACH Reading Fast OVR Pin EN Reserved

#define AMC6821_Status_Register_1 0x02
// 0x00 LTL LTH RTF R-THERM RTL RTH FANS RPM- ALARM
// LT Low LT High RT Failure RT Over Therm RT Low RT High Fan Slow Fan Fast

#define AMC6821_Status_Register_2 0x03
// 0x00 THERM-IN L-THERM LPSV LTC RTC 0 0 0
// Therm Input LT Over Therm LT Below Therm LT Over Critical RT Over Critical Reserved TEMPERATURE MONITORING

#define AMC6821_Temp_DATA_LByte 0x06
// 0x00 LT2 LT1 LT0 0 0 RT2 RT1 RT0
// 3 LSBs of Local Reading   Reserved  3 LSBs of Remote Reading

#define AMC6821_Local_Temp_DATA_HByte 0x0A
// 0x80 LT10 (MSB) LT9 LT8 LT7 LT6 LT5 LT4 LT3
// The 8 MSBs of newest reading of local temperature sensor. Default = –128C.

#define AMC6821_Remote_Temp_DATA_HByte 0x0B
// 0x80 RT10 (MSB) RT9 RT8 RT7 RT6 RT5 RT4 RT3
// The 8 MSBs of newest reading of remote temperature sensor. Default = –128C.

#define AMC6821_Local_High_Temp_Limit 0x14
// 0x3C LT-H10 LT-H9 LT-H8 LT-H7 LT-H6 LT-H5 LT-H4 LT-H3
// 8 MSBs of upper-bound threshold of out-of-range detection of Local-Temp. 3 LSBs are '0'. Default = +60C.

#define AMC6821_Local_Low_Temp_Limit 0x15
// 0x00 LT-L10 LT-L9 LT-L8 LT-L7 LT-L6 LT-L5 LT-L4 LT-L3
// 8 MSBs of lower-bound threshold of the out-of-range detection of Local-Temp. 3 LSBs are '0'. Default = 0C.

#define AMC6821_Local_THERM_Limit 0x16
// 0x46 LT-T10 LT-T9 LT-T8 LT-T7 LT-T6 LT-T5 LT-T4 LT-T3
// 8 MSBs of local THERM temperature limit.
// 3 LSBs are '0'. When local temperature is equal to or above this limit, L-THERM is detected. Default = +70C.

#define AMC6821_Remote_High_Temp_Limit 0x18
// 0x50 RT-H10 RT-H9 RT-H8 RT-H7 RT-H6 RT-H5 RT-H4 RT-H3
// The 8 MSBs of the upper-bound threshold of the out-of-range detection of Remote-Temp. 3 LSBs are '0'. Default = +80C.

#define AMC6821_Remote_Low_Temp_Limit 0x19
// 0x00 RT-L10 RT-L9 RT-L8 RT-L7 RT-L6 RT-L5 RT-L4 RT-L3
// The 8 MSBs of the lower-bound threshold of the out-of-range detection of Remote-Temp. 3 LSBs are '0'. Default = 0C.

#define AMC6821_Remote_THERM_Limit 0x1A
// 0x64 RT-T10 RT-T9 RT-T8 RT-T7 RT-T6 RT-T5 RT-T4 RT-T3
// 8 MSBs of Remote THERM temperature limit. 3 LSBs are '0'.
// When remote temperature is equal to or above this limit, R-THERM is detected. Default = +100C.

#define AMC6821_Local_Critical_Temp 0x1B
// 0x50 LT-C10 LT-C9 LT-C8 LT-C7 LT-C6 LT-C5 LT-C4 LT-C3
// The 8 MSBs of Local Critical temperature shutdown threshold.
// 3 LSBs are '0'. When the Local-Temp is equal to or above this limit, the LTC interrupt occurs and OVR goes low. Default = +80C.

#define AMC6821_PSV_Temp 0x1C
// 0x00 0 0 PSV8 PSV7 PSV6 PSV5 PSV4 PSV3
// Passive Cooling Temperature threshold.
// 3 LSBs and two MSBs are '0'. For details, refer to the passive cooling temperature limit in the Temperature Out-of-Range Detection section. Default = 0C.

#define AMC6821_Remote_Critical_Temp 0x1D
// 0x69 RT-C10 RT-C9 RT-C8 RT-C7 RT-C6 RT-C5 RT-C4 RT-C3
// The 8 MSBs of Remote Critical temperature shutdown threshold.
// 3 LSBs are '0'. When the Remote-Temp is equal to or above this limit, an RCRT interrupt occurs and OVR goes low. Default = +105C.

//PWM CONTROLLER
#define AMC6821_FAN_Characteristics 0x20
// 0x1D FSPD 0 PWM2 PWM1 PWM0 STIME2 STIME1 STIME0
// Spin Dis   PWM Frequency Setting   Spin-Up Time Setting

#define AMC6821_DCY_Low_Temp 0x21
// 0x55 L-DCY7 L-DCY6 L-DCY5 L-DCY4 L-DCY3 L-DCY2 L-DCY1 L-DCY0
// The duty cycle of PWM when the temperature is equal to or below Low-Temp in Auto Temp-Fan Control mode. Default = 0x55, 33.2%.

#define AMC6821_DCY_Duty_Cycle 0x22
// 0x55 DCY7 (MSB) DCY6 DCY5 DCY4 DCY3 DCY2 DCY1 DCY0
// Actual Duty cycle of PWM output.
// The duty cycle changes immediately after new data are written into this register. 8-bit, 0.39%/bit, range 0%-100%. Default = 33%.
// In read operation, the returned data are the actual DCY value driving the PWM-Out pin with two exceptions. Refer to the DCY Register section.
// In write operation, the data written are the actual DCY value driving the PWM-Out pin in Software-DCY control mode.
// In all other control modes, the data are not used to drive the PWM. Instead, they are stored in a temporary register, and used to control the PWM immediately after the control mode is changed to software-DCY control.

#define AMC6821_DCY_RAMP 0x23
// 0x52 RAMPE STEP1 STEP0 RATE2 RATE1 RATE0 THRE1 THRE0
// Ramp Enable DCY Adjustment Step in Auto Fan Control  DCY Update Rate in Auto Temp-Fan Control   Adjustment Threshold in Auto Temp-Fan Control

#define AMC6821_Local_Temp_Fan_Control 0x24
// 0x41 L-TEMP4 L-TEMP3 L-TEMP2 L-TEMP1 L-TEMP0 L-SLP2 L-SLP1 L-SLP0
// Low-Temp in Auto Local Temp-Fan control.     Slope in Auto Local Temp-Fan control.

#define AMC6821_Remote_Temp_Fan_Control 0x25
// 0x61 R-TEMP4 R-TEMP3 R-TEMP2 R-TEMP1 R-TEMP0 R-SLP2 R-SLP1 R-SLP0
// Low-Temp in Auto Remote Temp-Fan control.     Slope in Auto Remote Temp-Fan control.

//TACH (RPM) MEASUREMENT
#define AMC6821_TACH_DATA_LByte 0x08
// 0x00 TACH- DATA7 TACH- DATA6 TACH- DATA5 TACH- DATA4 TACH- DATA3 TACH- DATA2 TACH- DATA1 TACH- DATA0
// Low byte of TACH measurement.

#define AMC6821_TACH_DATA_HByte 0x09
// 0x00 TACH- DATA15 TACH- DATA14 TACH- DATA13 TACH- DATA12 TACH- DATA11 TACH- DATA10 TACH- DATA9 TACH- DATA8
// High byte of TACH measurement.

#define AMC6821_TACH_Low_Limit_LByte 0x10
// 0xFF TACH-Low- Limit7 TACH-Low- Limit6 TACH-Low- Limit5 TACH-Low- Limit4 TACH-Low- Limit3 TACH-Low- Limit2 TACH-Low- Limit1 TACH-Low- Limit0 "
// Low byte of TACH count limit corresponding to minimum allowed RPM.
// Since the TACH circuit counts between TACH pulses, a slow fan results in a larger measured value.
// When the measured value is larger than TACH-Low-Limit, the fan runs below the allowed minimum speed limit.

#define AMC6821_TACH_Low_Limit_HByte 0x11
// 0xFF TACH-Low- Limit15 TACH-Low- Limit14 TACH-Low- Limit13 TACH-Low- Limit12 TACH-Low- Limit11 TACH-Low- Limit10 TACH-Low- Limit9 TACH-Low- Limit8 "
// High byte of TACH Limit corresponding to minimum allowed RPM.

#define AMC6821_TACH_High_Limit_LByte 0x12
// 0x00 TACH-High- Limit7 TACH-High- Limit6 TACH-High- Limit5 TACH-High- Limit4 TACH-High- Limit3 TACH-High- Limit2 TACH-High- Limit1 TACH-High- Limit0
// Low byte of TACH count Limit corresponding to maximum allowed RPM.
// Since the TACH circuit counts between TACH pulses, a fast fan results in a small measured value.
// When the measurement is less than this limit, the fan runs above the allowed maximum speed limit.

#define AMC6821_TACH_High_Limit_HByte 0x13
// 0x00 TACH-High- Limit15 TACH-High- Limit14 TACH-High- Limit13 TACH-High- Limit12 TACH-High- Limit11 TACH-High- Limit10 TACH-High- Limit9 TACH-High- Limit8
// High byte of TACH limit corresponding to maximum allowed RPM.

#define AMC6821_TACH_SETTING_LByte 0x1E
// 0xFF TACH- SETTING7 TACH- SETTING6 TACH- SETTING5 TACH- SETTING4 TACH- SETTING3 TACH- SETTING2 TACH- SETTING1 TACH- SETTING0
// Low byte of TACH value corresponding to the predetermined target fan speed.
// TACH-SETTING must be not greater than the value corresponding to the RPM for 30% duty cycle when the TACH-MODE bit is cleared ('0').

#define AMC6821_TACH_SETTING_HByte 0x1F
// 0xFF TACH- SETTING15 TACH- SETTING14 TACH- SETTING13 TACH- SETTING12 TACH- SETTING11 TACH- SETTING10 TACH- SETTING9 TACH- SETTING8
// High byte of TACH value corresponding to the predetermined fan speed.
// TACH-SETTING must be not greater than the value corresponding to the RPM for 30% duty cycle when the TACH-MODE bit is cleared ('0').

uint8 I2CRead_AMC6821(i2c_Configuration *I2c_device,uint8 slave_rp,uint8 *recive_data, uint8 length);
uint8 I2CWrite_AMC6821(i2c_Configuration *I2c_device,uint8 slave_rp,uint8 *data,uint8 length);

#endif /* APPL_I2C_DEVICE_AMC6821_AMC6821_H_ */
