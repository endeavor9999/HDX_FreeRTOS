/*
 * ADS7138.c
 *
 *  Created on: 2022. 10. 24.
 *      Author: USER
 */


#include "ADS7138.h"
#include "Bsp.h"

void delay_ms_ADS7138(uint8 ms)
{
    Ifx_TickTime g_ticksFor1ms;
    g_ticksFor1ms = IfxStm_getTicksFromMilliseconds(&MODULE_STM0, 1);
    waitTime(ms * g_ticksFor1ms); //10MS
}

uint8 ads7138_crc8(uint8 data)
{

    uint8 crc = 0x00;
    crc ^=data;
    for (uint8 bit = 8; bit > 0; --bit)
    {
        if (crc & 0x80)
        {
            crc = (crc << 1) ^ 0x07;
        }
        else
        {
            crc = (crc << 1);
        }
    }

  return crc;
}

void ads7138_inits(i2c_Configuration *I2c_device){
     int ret;

     int32_t status;
     uint8 rx_data;
     // Software reset //
         ret = ads7138_write_reg(I2c_device, ADS7138_REG_GENERAL_CFG, ADS7138_GENERAL_CFG_RST);
         delay_ms_ADS7138(10);

         // Get system status //
         status = ads7138_read_reg(I2c_device, ADS7138_REG_SYSTEM_STATUS, &rx_data);

         //dev_dbg(dev, "ads7138 status 0x%x\n", status);

         // Set chipindex configuration (enable channel id field) //
         ret = ads7138_write_reg(I2c_device, ADS7138_REG_DATA_CFG, ADS7138_DATA_CFG_CH_ID);

         // Configure all channels as analog input //
         ret = ads7138_write_reg(I2c_device, ADS7138_REG_PIN_CFG, 0);

         // Manual mode, conversions are initiated by host //
         ret = ads7138_write_reg(I2c_device, ADS7138_REG_OPMODE_CFG, 0);

         // Manual sequence mode //
         ret = ads7138_write_reg(I2c_device, ADS7138_REG_SEQUENCE_CFG, 0);

 }

uint8 Read_ADS7138_Voltage(i2c_Configuration *I2c_device, uint8 Channel_Sel,uint8* Return_Channel,float32 *recive_data)
{

    int result;
    uint8_t uint8_data[2];
    memset(uint8_data, 0x00, 2);
    result=ads7138_in_show(I2c_device,Channel_Sel,&uint8_data[0],length_2byte);
    uint16 rx_buf16;
    if(result==FALSE)
    {
        return FALSE;
    }

    else
    {
        *Return_Channel=uint8_data[1]&0x0f;
        rx_buf16=(uint8_data[0]<<4)|(uint8_data[1]>>4);

        *recive_data=(float)rx_buf16*0.000976563;

        return TRUE;
    }
}

uint32_t ads7138_read_reg(i2c_Configuration *I2c_device, uint8 reg ,uint8* rx_data)
{
    uint8 ret;
        //ret = i2c_smbus_write_byte_data(data->client, ADS7138_OPCODE_READ, reg);

    //Write_I2C_ADS7138_device(chipindex, ADS7138_OPCODE_WRITE, 0x0b, &tx_data_1byte, 1);
    ret=I2CRead_ADS7138(I2c_device, ADS7138_OPCODE_READ, reg, rx_data, 1);
    return ret;
}

int32_t ads7138_write_reg(i2c_Configuration *I2c_device, uint8 reg, uint8 data)
{
    int ret;
    uint8 tx_data_1byte=data;
    //uint16 svalue = reg | (value << 8);
    //ret = i2c_smbus_write_word_data(data->client, ADS7138_OPCODE_WRITE, svalue);
    ret=I2CWrite_ADS7138(I2c_device, ADS7138_OPCODE_WRITE, reg, &tx_data_1byte, 1);
    return ret;
}

int32_t ads7138_read_word(i2c_Configuration *I2c_device,uint8* rx_data,uint8 length)
{
    //char rxbuf[2];
    int ret;
    /*
    struct i2c_msg msgs[] = {
        {
            .addr = data->client->addr,
            .flags = I2C_M_RD,
            .len = 2,
            .buf = rxbuf,
        },
    };
    */
    /* We can't use SMBus here because we need to read 2 bytes with no address write */
    ret=I2CRead_ADS7138_Without_Writing(I2c_device, rx_data, length);
    //ret = i2c_transfer(data->client->adapter, msgs, 1);
    return ret;

    //return rxbuf[1] | (rxbuf[0] << 8);
}

/* Sysfs callback function */


int ads7138_in_show(i2c_Configuration *I2c_device,uint8 data, uint8 *rx_buf, uint8 length)
{
    int ret;
    int ch;
    int value;
    /* Select ADC channel and read the data */
    ret = ads7138_write_reg(I2c_device, ADS7138_REG_CHANNEL_SEL, data);
    if (ret > 0){
        Ifx_Console_printAlign("Failed to select channel");

    }
        //dev_err(dev, "Failed to select channel %d\n", attr->index);
    else
    {
        ret = ads7138_read_word(I2c_device,rx_buf,length);
        if (ret > 0){
            Ifx_Console_printAlign("Failed to select channel");
            //dev_err(dev, "Failed to read from channel %d\n", attr->index);
        }

    }
    /* Get channel id and sample value */
    ch = ret & 0xf;

    value = (*rx_buf >> 4) & 0xfff;

    //dev_dbg(dev, "ADC data 0x%x ch %d value 0x%x\n", ret, ch, value);

    /* Verify channel id */
    if (ch != data) {

        //dev_err(dev, "Channel id mismatch, requested %d received %d\n", attr->index, ch);
        return 0xff;
    }

    return value;
    /* Convert to mV and print out */
//  return sprintf(buf, "%d\n", DIV_ROUND_CLOSEST(value * data->lsb, 1000));
}






uint8 I2CRead_ADS7138_CRC(i2c_Configuration *I2c_device,uint8 opcode,uint8 slave_rp,uint8 *recive_data, uint8 length)
{
    /* Address of 6-byte EUI-48 MAC address location */

    uint8 result_tx=0;
    uint8 result_rx=0;
    uint8 result=0;
    uint8 i2cTxBuffer[4] = { opcode, ads7138_crc8(opcode), slave_rp, ads7138_crc8(slave_rp) };

    /* Communication via I2C starts by transmitting the address of the specific I2C slave until the slave
     * is ready and confirms the reception via the acknowledge bit (IfxI2c_I2c_Status_nak = not acknowledge).
     * This procedure is done for both the write and read process.
     */
    /* Write data to device */

#ifdef GPIO_I2C_Enable
    result_tx=GpioI2c_I2c_write(I2c_device, &i2cTxBuffer[0], 4);
    /* Read the address */
    result_rx=GpioI2c_I2c_read(I2c_device, &recive_data[0], length);

#else
    result_tx=IfxI2c_I2c_write(I2c_device->Device, &i2cTxBuffer[0], 4);
    /* Read the address */
    result_rx=IfxI2c_I2c_read(I2c_device->Device, &recive_data[0], length);

#endif

    result=result_tx<<4|result_rx;

    return result;


}


uint8 I2CRead_ADS7138(i2c_Configuration *I2c_device,uint8 opcode,uint8 slave_rp,uint8 *recive_data, uint8 length)
{
    /* Address of 6-byte EUI-48 MAC address location */

    uint8 result_tx=0;
    uint8 result_rx=0;
    uint8 result=0;
    uint8 i2cTxBuffer[2] = {opcode,slave_rp};


    /* Communication via I2C starts by transmitting the address of the specific I2C slave until the slave
     * is ready and confirms the reception via the acknowledge bit (IfxI2c_I2c_Status_nak = not acknowledge).
     * This procedure is done for both the write and read process.
     */
#ifdef GPIO_I2C_Enable
    /* Write data to device */
    result_tx=GpioI2c_I2c_write(I2c_device, &i2cTxBuffer[0], 2);
    /* Read the address */
    result_rx=GpioI2c_I2c_read(I2c_device, &recive_data[0], length);
#else
    /* Write data to device */
    result_tx=IfxI2c_I2c_write(I2c_device->Device, &i2cTxBuffer[0], 2);
    /* Read the address */
    result_rx=IfxI2c_I2c_read(I2c_device->Device, &recive_data[0], length);
#endif



    result=result_tx<<4|result_rx;

    return result;

}

uint8 I2CRead_ADS7138_Without_Writing(i2c_Configuration *I2c_device,uint8 *recive_data, uint8 length)
{
    /* Address of 6-byte EUI-48 MAC address location */
    uint8 result_rx=0;

    /* Communication via I2C starts by transmitting the address of the specific I2C slave until the slave
     * is ready and confirms the reception via the acknowledge bit (IfxI2c_I2c_Status_nak = not acknowledge).
     * This procedure is done for both the write and read process.
     */
#ifdef GPIO_I2C_Enable
    result_rx=GpioI2c_I2c_read(I2c_device, &recive_data[0], length);
#else
    result_rx=IfxI2c_I2c_read(I2c_device->Device, &recive_data[0], length);
#endif


    return result_rx;
}


uint8 I2CWrite_ADS7138(i2c_Configuration *I2c_device,uint8 opcode,uint8 slave_rp,uint8 *data,uint8 length)
{
        uint8 result_tx=0;
        length=length+2;

        uint8 i2cTxBuffer[length];
        i2cTxBuffer[0]=opcode;
        i2cTxBuffer[1]=slave_rp;

        for(uint8 i=2;i<length;i++)
        {
           i2cTxBuffer[i]= data[i-2];
        }

        /* Communication via I2C starts by transmitting the address of the specific I2C slave until the slave
         * is ready and confirms the reception via the acknowledge bit (IfxI2c_I2c_Status_nak = not acknowledge).
         * This procedure is done for both the write and read process.
         */
#ifdef GPIO_I2C_Enable
        result_tx=GpioI2c_I2c_write(I2c_device, &i2cTxBuffer[0], length);
#else
        result_tx=IfxI2c_I2c_write(I2c_device->Device, &i2cTxBuffer[0], length);
#endif


        return result_tx<<4;

}

uint8 I2CWrite_ADS7138_CRC(i2c_Configuration *I2c_device,uint8 opcode,uint8 slave_rp,uint8 *data,uint8 length)
{
        uint8 result_tx=0;
        uint8 tx_length=(length*2)+4;

        uint8 i2cTxBuffer[tx_length];
        i2cTxBuffer[0]= opcode;
        i2cTxBuffer[1]= ads7138_crc8(opcode);
        i2cTxBuffer[2]= slave_rp;
        i2cTxBuffer[3]= ads7138_crc8(slave_rp);

        for(uint8 i=1;i<=length;i++){
            i2cTxBuffer[i+2+i]= data[i-1];
            i2cTxBuffer[i+3+i]= ads7138_crc8(data[i-1]);
        }

        /* Communication via I2C starts by transmitting the address of the specific I2C slave until the slave
         * is ready and confirms the reception via the acknowledge bit (IfxI2c_I2c_Status_nak = not acknowledge).
         * This procedure is done for both the write and read process.
         */
#ifdef GPIO_I2C_Enable
        result_tx=GpioI2c_I2c_write(I2c_device, &i2cTxBuffer[0], tx_length);
#else
        result_tx=IfxI2c_I2c_write(I2c_device->Device, &i2cTxBuffer[0], tx_length);
#endif


        return result_tx<<4;

}
