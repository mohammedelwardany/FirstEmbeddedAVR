/*
 * GccApplication1.c
 *
 * Created: 9/8/2023 11:12:00 PM
 * Author : m2010
 */ 

#include "Dio_Int.h"

int main(void)
{
	DIO_Init();
	Dio_SetPinMode(Pin_A1,OutPut_High);
    while (1) 
    {
		DIO_WritePinVal(Pin_D4,HIGH);
		//DIO_WritePinVal(Pin_D4,LOW);
    }
}

