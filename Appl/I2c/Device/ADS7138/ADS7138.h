/*
 * ADS7138.h
 *
 *  Created on: 2022. 10. 24.
 *      Author: USER
 */

#ifndef APPL_I2C_DEVICE_ADS7138_ADS7138_H_
#define APPL_I2C_DEVICE_ADS7138_ADS7138_H_

#include "I2C_GPIO.h"
#include "stdint.h"
#include <stdint.h>
//#include "UART_cfg.h"

/* ADS7138 opcodes */
#define ADS7138_OPCODE_READ     0x10
#define ADS7138_OPCODE_WRITE    0x08

/* ADS7138 registers */
#define ADS7138_REG_SYSTEM_STATUS   0x00
#define ADS7138_REG_GENERAL_CFG     0x01
#define ADS7138_REG_DATA_CFG        0x02
#define ADS7138_REG_OSR_CFG         0x03
#define ADS7138_REG_OPMODE_CFG      0x04
#define ADS7138_REG_PIN_CFG         0x05
#define ADS7138_REG_SEQUENCE_CFG    0x10
#define ADS7138_REG_CHANNEL_SEL     0x11

/* GENERAL_CFG Register Fields */
#define ADS7138_GENERAL_CFG_RST     0x1

/* DATA_CFG Register Fields */
#define ADS7138_DATA_CFG_FIX_PAT    0x80
#define ADS7138_DATA_CFG_CH_ID      0x10

/* OSR_CFG Register Fields */
#define ADS7138_OSR_CFG_NO_AVG      0x0
#define ADS7138_OSR_CFG_2           0x1

/* AVDD (VREF) operating range */
#define ADS7138_VREF_MV_MIN 2350
#define ADS7138_VREF_MV_MAX 5500


void delay_ms_ADS7138(uint8 ms);

uint8 ads7138_crc8(uint8 data);

void ads7138_inits(i2c_Configuration *I2c_device);

uint32_t ads7138_read_reg(i2c_Configuration *I2c_device, uint8 reg ,uint8* rx_data);
int32_t ads7138_write_reg(i2c_Configuration *I2c_device, uint8 reg, uint8 data);
int32_t ads7138_read_word(i2c_Configuration *I2c_device,uint8* rx_data,uint8 length);

int ads7138_in_show(i2c_Configuration *I2c_device,uint8 data, uint8 *rx_buf, uint8 length);

uint8 Read_ADS7138_Voltage(i2c_Configuration *I2c_device, uint8 Channel_Sel,uint8* Return_Channel,float32 *recive_data);
uint8 I2CRead_ADS7138_CRC(i2c_Configuration *I2c_device,uint8 opcode,uint8 slave_rp,uint8 *recive_data, uint8 length);
uint8 I2CRead_ADS7138(i2c_Configuration *I2c_device,uint8 opcode,uint8 slave_rp,uint8 *recive_data, uint8 length);
uint8 I2CRead_ADS7138_Without_Writing(i2c_Configuration *I2c_device,uint8 *recive_data, uint8 length);
uint8 I2CWrite_ADS7138(i2c_Configuration *I2c_device,uint8 opcode,uint8 slave_rp,uint8 *data,uint8 length);
uint8 I2CWrite_ADS7138_CRC(i2c_Configuration *I2c_device,uint8 opcode,uint8 slave_rp,uint8 *data,uint8 length);

#endif /* APPL_I2C_DEVICE_ADS7138_ADS7138_H_ */
