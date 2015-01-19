/*
 * AtM128_RTOS_LedB_V1.c
 *
 * Created: 16-Jan-15 11:49:15 AM
 *  Author: Suresh
 */ 


#include <avr/io.h>
#include <util/delay.h>

#include "FreeRTOS.h"
#include "task.h"
#include "LEDBlinkV1.h"





void LedOnTask( void *pvParameters )   // Task -1
{
	
	
	for( ;; )
	{
		LED_ON;_delay_ms(1000);
		taskYIELD();
		//vTaskDelayUntil(&OnLastWakeTime,OnFrequency);
	}
	
}

void LedOffTask( void *pvParameters )  //Task-2
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
	xTaskCreate( LedOnTask, ( signed char * ) "LON", configMINIMAL_STACK_SIZE, NULL, 1, NULL ); //Task creation for task-1
	xTaskCreate( LedOffTask, ( signed char * ) "LOFF", configMINIMAL_STACK_SIZE, NULL,2, NULL );//Task creation for task-2
	
	vTaskStartScheduler();//start scheduler
	//you should never get here
	while(1)
	{
		
	}
	return 0;
}
