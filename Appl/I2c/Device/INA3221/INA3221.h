/*
 * INA3221.h
 *
 *  Created on: 2022. 10. 24.
 *      Author: USER
 */

#ifndef APPL_I2C_DEVICE_INA3221_INA3221_H_
#define APPL_I2C_DEVICE_INA3221_INA3221_H_

#include "I2C_GPIO.h"

/********* INA3221 Action List **********/

/****************************************/

typedef enum
{
    INA3221_Channel_1      = 0,
    INA3221_Channel_2      = 2,
    INA3221_Channel_3      = 4
} INA3221__Channel_Mode;

typedef enum
{
    INA3221_Current      = 0,
    INA3221_Voltage      = 1
} INA3221_Measure_Mode;

uint8 I2CWrite_INA3221(i2c_Configuration *I2c_device,uint8 slave_rp,uint8 *data,uint8 length);
uint8 I2CRead_INA3221(i2c_Configuration *I2c_device,uint8 slave_rp,uint8 *recive_data, uint8 length);
uint8 Read_INA3221_Current_Voltage(i2c_Configuration *INA3221_device,INA3221__Channel_Mode INA3221_Channel, INA3221_Measure_Mode Action_ID,float32 *recive_data);

#endif /* APPL_I2C_DEVICE_INA3221_INA3221_H_ */
