/*
 * LED.h
 *
 * Created: 7/5/2011 0:04:32
 *  Author: MMM
 */ 


#ifndef LED_H_
#define LED_H_
// Output Port pin LED_O
#define LED      PORTB
#define LED_ON      PORTB=0xFF
#define LED_OFF      PORTB=0x00
#define LED_DIR       DDRB

void vCPU_Port_Init(void);
void vLEDToggle(void);



#endif /* LED_H_ */