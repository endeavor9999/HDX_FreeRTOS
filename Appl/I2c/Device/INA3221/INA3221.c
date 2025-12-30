/*
 * INA3221.c
 *
 *  Created on: 2022. 10. 24.
 *      Author: USER
 */

#include "INA3221.h"

uint8 I2CWrite_INA3221(i2c_Configuration *I2c_device,uint8 slave_rp,uint8 *data,uint8 length)
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

uint8 I2CRead_INA3221(i2c_Configuration *I2c_device,uint8 slave_rp,uint8 *recive_data, uint8 length)
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





uint8 Read_INA3221_Current_Voltage(i2c_Configuration *INA3221_device,INA3221__Channel_Mode INA3221_Channel, INA3221_Measure_Mode Action_ID,float32 *recive_data)
{
    uint8  rx_data_2byte[2];
    uint16 rx_data_2byte_sum=0;


    uint8  rg;
    uint8  result;


    uint32 check_data;
    union TI_Data_type i2c_result;
    rx_data_2byte[0] = 0;
    rx_data_2byte[1] = 0;
    rx_data_2byte_sum=0;
    i2c_result.type_float=0;
    i2c_result.type_uint32=0;

    if(Action_ID==INA3221_Current)
    {
        rg=INA3221_Channel+1;
    }
    else if(Action_ID==INA3221_Voltage)
    {
        rg=INA3221_Channel+2;
    }

    result=I2CRead_INA3221(INA3221_device,rg,&rx_data_2byte[0],length_2byte);

    if(result!=FALSE)
    {
        return FALSE;
    }
    else
    {
        rx_data_2byte_sum=rx_data_2byte[0]<<5;
        rx_data_2byte_sum=rx_data_2byte_sum|rx_data_2byte[1]>>3;
        check_data=rx_data_2byte_sum;

        i2c_result.type_uint32 =(uint32)rx_data_2byte_sum;

        if(Action_ID==INA3221_Current)
        {
            i2c_result.type_float=(float)i2c_result.type_uint32;
            i2c_result.type_float=i2c_result.type_float*0.04/6.8;
            *recive_data=i2c_result.type_float;
            return TRUE;

        }

        else if(Action_ID==INA3221_Voltage){
            i2c_result.type_float=(float)i2c_result.type_uint32;
            i2c_result.type_float=i2c_result.type_float*0.008;
            *recive_data=i2c_result.type_float;
            return TRUE;
        }
    }

    return FALSE;

}



