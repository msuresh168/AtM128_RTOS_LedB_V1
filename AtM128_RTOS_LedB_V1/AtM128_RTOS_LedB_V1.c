/*
 * AtM128_RTOS_LedB_V1.c
 *
 * Created: 16-Jan-15 11:49:15 AM
 *  Author: Suresh
 */ 


#include <avr/io.h>
#include <avr/delay.h>

#include "FreeRTOS.h"
#include "task.h"
#include "LEDBlinkV1.h"

/* Priority definitions for most of the tasks in the demo application.  Some
tasks just use the idle priority. */
#define mainLED_TASK_PRIORITY			( tskIDLE_PRIORITY )



void LedOnTask( void *pvParameters )
{
	
	
	for( ;; )
	{
		LED_ON;_delay_ms(1000);
		taskYIELD();
		//vTaskDelayUntil(&OnLastWakeTime,OnFrequency);
	}
	
}

void LedOffTask( void *pvParameters )
{
	
	
	for( ;; )
	{
		LED_OFF;_delay_ms(1000);
		taskYIELD();
		//vTaskDelayUntil(&OffLastWakeTime,OffFrequency);
	}
	
}

portSHORT main(void)
{
	vCPU_Port_Init();
	xTaskCreate( LedOnTask, ( signed char * ) "LON", configMINIMAL_STACK_SIZE, NULL, 1, NULL );
	xTaskCreate( LedOffTask, ( signed char * ) "LOFF", configMINIMAL_STACK_SIZE, NULL,2, NULL );
	//start scheduler
	vTaskStartScheduler();
	//you should never get here
	while(1)
	{
		
	}
	return 0;
}
