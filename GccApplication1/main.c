/*
 * GccApplication1.c
 *
 * Created: 9/8/2023 11:12:00 PM
 * Author : m2010
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL

#include "Dio_Int.h"
#include "AVR/delay.h"

int main(void)
{
	DIO_Init();
	Dio_SetPinMode(Pin_A1,OutPut_High);
	/*_delay_ms(500);
	DIO_WritePinVal(Pin_A1,LOW);
	_delay_ms(500);*/
    while(1)
	{
		DIO_WritePinVal(Pin_A6,HIGH);
		_delay_ms(5000);
		DIO_WritePinVal(Pin_A6,LOW);
		_delay_ms(5000);
	}
	return 0;
}

#endif
