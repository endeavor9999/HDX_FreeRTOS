/*
 * INA226.c
 *
 *  Created on: 2022. 12. 1.
 *      Author: USER
 */


#include "INA226.h"

uint8 I2CWrite_INA226(i2c_Configuration *I2c_device,uint8 slave_rp,uint8 *data,uint8 length)
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

uint8 I2CRead_INA226(i2c_Configuration *I2c_device,uint8 slave_rp,uint8 *recive_data, uint8 length)
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



uint8 Read_INA226_Current_Voltage(i2c_Configuration *INA226_device, INA226_Measure_Mode Action_ID,float32 *recive_data)
{



    uint8  rg;
    uint8  result;


    uint32 check_data;
    union TI_Data_type i2c_result;


    sint16 rx_data_2byte_sum;
    uint8  rx_data_2byte[2];

    rx_data_2byte[0] = 0;
    rx_data_2byte[1] = 0;
    rx_data_2byte_sum=0;
    i2c_result.type_float=0;
    i2c_result.type_uint32=0;

    if(Action_ID==INA226_Current)
    {
        rg=0x01;
    }
    else if(Action_ID==INA226_Voltage)
    {
        rg=0x02;
    }

    result=I2CRead_INA226(INA226_device,rg,&rx_data_2byte[0], length_2byte);
    if(result!=FALSE)
    {
        return FALSE;
    }
    else
    {
        rx_data_2byte_sum=rx_data_2byte[0]<<8;
        rx_data_2byte_sum=rx_data_2byte_sum|rx_data_2byte[1];
        check_data=rx_data_2byte_sum;

        i2c_result.type_uint32 =(sint32)rx_data_2byte_sum;

        if(Action_ID==INA226_Current)
        {
            i2c_result.type_float=(float)i2c_result.type_uint32;
            i2c_result.type_float=i2c_result.type_float*0.0025/6.8;
            *recive_data=i2c_result.type_float;
            return TRUE;

        }

        else if(Action_ID==INA226_Voltage){
            i2c_result.type_float=(float)i2c_result.type_uint32;
            i2c_result.type_float=i2c_result.type_float*0.00125;
            *recive_data=i2c_result.type_float;
            return TRUE;
        }
    }

    return FALSE;

}
