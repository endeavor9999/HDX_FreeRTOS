/*
 * TCA9548.c
 *
 *  Created on: 2022. 10. 21.
 *      Author: USER
 */

#include "TCA9548.h"

uint8 I2CWrite_TCA9548(i2c_Configuration *I2c_device,uint8 slave_rp)
{
    uint8 result_tx=0;
    uint8 i2cTxBuffer[1];

    i2cTxBuffer[0]=slave_rp;

#ifdef GPIO_I2C_Enable
    result_tx=GpioI2c_I2c_write(I2c_device, &i2cTxBuffer[0], 1);
#else
    result_tx=IfxI2c_I2c_write(I2c_device->Device, &i2cTxBuffer[0], 1);
#endif

    return result_tx;
}

uint8 I2CRead_TCA9548(i2c_Configuration *I2c_device,uint8 *recive_data)
{
    uint8 result_rx=0;

#ifdef GPIO_I2C_Enable
    result_rx=GpioI2c_I2c_read(I2c_device, &recive_data[0], 1);
#else
    result_rx=IfxI2c_I2c_read(I2c_device->Device, &recive_data[0], 1);
#endif
    return result_rx;
}

void TCA9548_Channel_Sel(i2c_Configuration *I2c_device, TCA9548_Channel_Mode TCA9548_ch){

    I2CWrite_TCA9548(I2c_device,TCA9548_ch);

}
