/*
 * TCA9548.h
 *
 *  Created on: 2022. 10. 21.
 *      Author: USER
 */

#ifndef APPL_I2C_DEVICE_TCA9548_TCA9548_H_
#define APPL_I2C_DEVICE_TCA9548_TCA9548_H_

#include "I2C_GPIO.h"


typedef enum
{
    TCA9548_Channel_0      = 1,
    TCA9548_Channel_1      = 2,
    TCA9548_Channel_2      = 4,
    TCA9548_Channel_3      = 8,
    TCA9548_Channel_4      = 16,
    TCA9548_Channel_5      = 32,
    TCA9548_Channel_6      = 64,
    TCA9548_Channel_7      = 128
} TCA9548_Channel_Mode;

uint8 I2CWrite_TCA9548(i2c_Configuration *I2c_device,uint8 slave_rp);
uint8 I2CRead_TCA9548(i2c_Configuration *I2c_device,uint8 *recive_data);
void TCA9548_Channel_Sel(i2c_Configuration *I2c_device, TCA9548_Channel_Mode TCA9548_ch);
#endif /* APPL_I2C_DEVICE_TCA9548_TCA9548_H_ */
