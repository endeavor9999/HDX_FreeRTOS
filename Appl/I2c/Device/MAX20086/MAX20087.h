/*
 * MAX20086.h
 *
 *  Created on: 2023. 2. 6.
 *      Author: USER
 */

#ifndef APPL_I2C_DEVICE_MAX20086_MAX20087_H_
#define APPL_I2C_DEVICE_MAX20086_MAX20087_H_


#include "I2C_GPIO.h"

#define MAX20087_REG_MASK      0x00
#define MAX20087_REG_CONFIG    0x01
#define MAX20087_REG_ID        0x02
#define MAX20087_REG_STAT1     0x03
#define MAX20087_REG_STAT2L    0x04
#define MAX20087_REG_STAT2H    0x05

#define MAX20087_PART_ID_MAX20089 0x0
#define MAX20087_PART_ID_MAX20088 0x1
#define MAX20087_PART_ID_MAX20087 0x2
#define MAX20076_PART_ID_MAX20086 0x3

uint8 I2CWrite_MAX20087(i2c_Configuration *I2c_device,uint8 slave_rp,uint8 *data,uint8 length);
uint8 I2CRead_MAX20087(i2c_Configuration *I2c_device,uint8 slave_rp,uint8 *recive_data, uint8 length);
#endif /* APPL_I2C_DEVICE_MAX20086_MAX20087_H_ */
