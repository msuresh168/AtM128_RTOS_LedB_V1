/*
 * mytasks.c
 *
 * Created: 7/5/2011 23:45:23
 *  Author: MMM
 */ 
#include "FreeRTOS.h"
#include "task.h"
#include "LED.h"
#include "mytasks.h"

void LEDFlashTask( void *pvParameters )
{
vLEDInit();
portTickType xLastWakeTime;
const portTickType xFrequency = 1000;
xLastWakeTime=xTaskGetTickCount();
	for( ;; )
	{
		vLEDToggle();
		vTaskDelayUntil(&xLastWakeTime,xFrequency);		
	}
	
}