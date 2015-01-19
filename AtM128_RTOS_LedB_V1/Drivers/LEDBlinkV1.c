/*
 * LED.c
 *
 * Created: 7/5/2011 0:04:45
 *  Author: MMM
 */ 

#include <avr/io.h>
#include "LEDBlinkV1.h"
void vCPU_Port_Init(void)
{

    LED_DIR=0xFF;// Set LED port  as output pin
}
void vLEDToggle(void)
{
   
   LED =~ LED;//Toggle LED	
}
