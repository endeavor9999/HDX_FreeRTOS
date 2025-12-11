/*
 * User_RTOS.h
 *
 *  Created on: 2024. 6. 14.
 *      Author: Roh
 */

#ifndef FUNC_USER_RTOS_H_
#define FUNC_USER_RTOS_H_

#include "Ifx_Types.h"
#include "FreeRTOS.h"
#include "task.h"
#include "FreeRTOSConfig.h"

typedef TaskHandle_t sys_thread_t;
#define portBASE_TYPE     long

typedef enum
{
    Locked,
    Unlocked
} Lock_Type;

typedef enum
{
    AP1,
    TCC
} AP_Type;

typedef enum {
    CLI_TYPE = 0,
    STS_TYPE,
    LOD_TYPE,
    FTM_TYPE
} FrameType_t;



void vApplicationStackOverflowHook( TaskHandle_t xTask, char *pcTaskName );
void vApplicationMallocFailedHook(void) ;
void vChangeTaskPriority(void *pvTaskHandle, uint32 newPriority);
sys_thread_t sys_thread_new(const char *pcName, void (*pxThread)(void *pvParameters), void *pvArg, int iStackSize, int iPriority);







#endif /* FUNC_USER_RTOS_H_ */
