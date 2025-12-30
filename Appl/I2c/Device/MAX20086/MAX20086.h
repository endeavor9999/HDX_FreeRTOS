/*
 * MAX20086.h
 *
 *  Created on: 2023. 2. 6.
 *      Author: USER
 */

#ifndef APPL_I2C_DEVICE_MAX20086_MAX20086_H_
#define APPL_I2C_DEVICE_MAX20086_MAX20086_H_


#include "I2C_GPIO.h"

uint8 I2CWrite_MAX20086(i2c_Configuration *I2c_device,uint8 slave_rp,uint8 *data,uint8 length);
uint8 I2CRead_MAX20086(i2c_Configuration *I2c_device,uint8 slave_rp,uint8 *recive_data, uint8 length);
#endif /* APPL_I2C_DEVICE_MAX20086_MAX20086_H_ */
