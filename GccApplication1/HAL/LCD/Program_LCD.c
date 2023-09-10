/*
 * Program_LCD.c
 *
 * Created: 9/10/2023 1:48:37 PM
 *  Author: m2010
 */ 

#include "Interface_LCD.h"
typedef enum{
	D0,D1,D2,D3,D4,D5,D6,D7
	}LCDPins;
	
typedef enum{
	type8bit,type4bit
}Bitlvl;

typedef enum{
	Commend,Data
}MODE;

void init(void){
		for(u8 LCDPins=D0;LCDPins<=D7;LCDPins++){
			Dio_SetPinMode(LCDPins,OutPut_High);
		}
		Dio_SetPinMode(EN,OutPut_High);
		Dio_SetPinMode(RS,OutPut_High);
}
void LCD_SendCmdDataCommend(u8 Cvalue,u8 MODE,u8 Bitlvl){
	if (MODE == Data)
	{
		DIO_WritePinVal(RS,HIGH);
	}
	else if(MODE == Commend){
		DIO_WritePinVal(RS,LOW);
	}
	else{
		//unknown RS value
	}
	
	switch (Bitlvl)
	{
	case type8bit:{
		
		
	break;
	
	}
		
	case type4bit:{
		
		
		break;
	}
	
		
	}
}
