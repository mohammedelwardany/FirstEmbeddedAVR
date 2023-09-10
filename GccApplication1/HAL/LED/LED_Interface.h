/*
 * LED_Interface.h
 *
 * Created: 9/10/2023 9:09:13 PM
 *  Author: m2010
 */ 


#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_


void LED_Init(void);
void LED_State(u8 pinId,u8 State);
void LED_Toggle(u8 pinId);



#endif /* LED_INTERFACE_H_ */