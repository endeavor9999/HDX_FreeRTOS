/*
 * MAX20086.c
 *
 *  Created on: 2023. 2. 6.
 *      Author: USER
 */


#include "MAX20086.h"

uint8 I2CWrite_MAX20086(i2c_Configuration *I2c_device,uint8 slave_rp,uint8 *data,uint8 length)
{
    uint8 result_tx=0;
    length++;
    uint8 i2cTxBuffer[length];
    i2cTxBuffer[0]=slave_rp;

    for(uint8 i=1;i<length;i++)
    {
        i2cTxBuffer[i]= data[i-1];
    }

#ifdef GPIO_I2C_Enable
    result_tx=GpioI2c_I2c_write(I2c_device, &i2cTxBuffer[0], length);
#else
    result_tx=IfxI2c_I2c_write(I2c_device->Device, &i2cTxBuffer[0], length);
#endif


    return result_tx;
}

uint8 I2CRead_MAX20086(i2c_Configuration *I2c_device,uint8 slave_rp,uint8 *recive_data, uint8 length)
{

    uint8 result_tx=0;
    uint8 result_rx=0;
    uint8 result=0;
    uint8 i2cTxBuffer[1] = {slave_rp};

#ifdef GPIO_I2C_Enable
    result_tx=GpioI2c_I2c_write(I2c_device, &i2cTxBuffer[0], 1);
    /* Read the unique MAC address */
    result_rx=GpioI2c_I2c_read(I2c_device, &recive_data[0], length);
#else
    result_tx=IfxI2c_I2c_write(I2c_device->Device, &i2cTxBuffer[0], 1);
    /* Read the unique MAC address */
    result_rx=IfxI2c_I2c_read(I2c_device->Device, &recive_data[0], length);
#endif


    result=result_tx<<4|result_rx;

    return result;
}


