/*
 * User_RTOS.c
 *
 *  Created on: 2024. 6. 14.
 *      Author: Roh
 */

#include "User_RTOS.h"

void vApplicationStackOverflowHook( TaskHandle_t xTask, char *pcTaskName ) {

	//printf("Stack overflow detected in task: %s\n", pcTaskName);

	for(;;);
}


void vApplicationMallocFailedHook(void) {

    //printf("Error: Memory allocation failed!\n");


    taskDISABLE_INTERRUPTS();
    for(;;);
}


sys_thread_t sys_thread_new(
    const char *pcName, void (*pxThread)(void *pvParameters), void *pvArg, int iStackSize, int iPriority)
{
    TaskHandle_t xCreatedTask;
    portBASE_TYPE xResult;
    sys_thread_t xReturn;

    //printf("invalid stacksize", iStackSize > 0);

    xResult = xTaskCreate(pxThread, pcName, (configSTACK_DEPTH_TYPE)iStackSize, pvArg, iPriority, &xCreatedTask);
    //printf("task creation failed", xResult == pdPASS);

    if (xResult == pdPASS)
    {
        xReturn = xCreatedTask;
    }
    else
    {
        xReturn = NULL;
    }

    return xReturn;
}

void vChangeTaskPriority(void *pvTaskHandle, uint32 newPriority)
{
    vTaskPrioritySet((TaskHandle_t)pvTaskHandle, (UBaseType_t)newPriority);
}

