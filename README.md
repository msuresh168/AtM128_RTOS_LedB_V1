# AtM128_RTOS_LedB_V1
LEDBlinking_AtMega128 by using FreeRTOS

  Hi viewers i created this sample code for entry level people who need to run his micro controller by using RTOS .This sample code very useful for them.Here i have controlled two tasks by FreeRTOS. This two tasks switched over by co-operative scheduling.I am just toggling PORTB pins for every 1 sec.When you biased your AtMega128 controller ,Initially the all pins of the PORTB should be high by task-1.After that 1 sec delay,the kernel switched to task-2.Here the all pins of the PORTB should be LOW by task-2.After that 1 sec delay,again it goes to task-1.This two tasks swapped continuously by kernel.

RTOS: FreeRTOS   

Controller:AtMega128

IDE-Atmel Studio 6.1.2730 - Service back 2.

Simulation-Proteus simulation version 8 SP0.

