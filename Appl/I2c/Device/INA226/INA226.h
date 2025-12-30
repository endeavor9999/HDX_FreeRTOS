/*
 * INA226.h
 *
 *  Created on: 2022. 12. 1.
 *      Author: USER
 */

#ifndef APPL_I2C_DEVICE_INA226_INA226_H_
#define APPL_I2C_DEVICE_INA226_INA226_H_

#include "I2C_GPIO.h"

typedef enum
{
    INA226_Current      = 0,
    INA226_Voltage      = 1
} INA226_Measure_Mode;

uint8 I2CWrite_INA226(i2c_Configuration *I2c_device,uint8 slave_rp,uint8 *data,uint8 length);
uint8 I2CRead_INA226(i2c_Configuration *I2c_device,uint8 slave_rp,uint8 *recive_data, uint8 length);
uint8 Read_INA226_Current_Voltage(i2c_Configuration *INA226_device, INA226_Measure_Mode Action_ID,float32 *recive_data);
#endif /* APPL_I2C_DEVICE_INA226_INA226_H_ */
