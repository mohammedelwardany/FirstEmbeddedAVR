/*
 * Program_LCD.c
 *
 * Created: 9/10/2023 1:48:37 PM
 *  Author: m2010
 */ 
#include <string.h>


#include "Interface_LCD.h"

	


void init(void){
	_delay_ms(20);
	DIO_WritePinVal(RS,LOW);
	Private_LCDHalfPort(0b0010);
	DIO_WritePinVal(EN,HIGH);
	_delay_ms(1);
	DIO_WritePinVal(EN,LOW);
	LCD_SendCmdDataCommend(0b00101000,Commend,type4bit);//last2
	_delay_us(45);
	LCD_SendCmdDataCommend(0b00001111,Commend,type4bit);  // last3
	_delay_us(45);
	LCD_SendCmdDataCommend(0b00000001,Commend,type4bit);  //
	_delay_ms(2);
	LCD_SendCmdDataCommend(0b00000111,Commend,type4bit);  //last2
	_delay_us(45);

	

}

///////////////////////////////////prepare///////////////////////////////////////
static void Private_LCDHalfPort(u8 copy_u8value){
	DIO_WritePinVal(LCD_D4,GetBit(copy_u8value,0));
	DIO_WritePinVal(LCD_D4,GetBit(copy_u8value,1));
	DIO_WritePinVal(LCD_D4,GetBit(copy_u8value,2));
	DIO_WritePinVal(LCD_D4,GetBit(copy_u8value,3));
}





///////////////////////////////////SENDING///////////////////////////////////////


void LCD_SendCmdDataCommend(u8 Val_u8,MODE LCD_INPUTMODE,Bitlvl LCD_BITLVL){
	if (LCD_INPUTMODE == Data)
	{
		DIO_WritePinVal(RS,HIGH);
	}
	else if(LCD_INPUTMODE == Commend){
		DIO_WritePinVal(RS,LOW);
	}
	else{
		//unknown RS value
	}
	
	switch (LCD_BITLVL)
	{
	case type8bit:{
		DIO_WritePinVal(LCD_D4,GetBit(Val_u8,0));
		DIO_WritePinVal(LCD_D4,GetBit(Val_u8,1));
		DIO_WritePinVal(LCD_D4,GetBit(Val_u8,2));
		DIO_WritePinVal(LCD_D4,GetBit(Val_u8,3));
		DIO_WritePinVal(LCD_D4,GetBit(Val_u8,4));
		DIO_WritePinVal(LCD_D4,GetBit(Val_u8,5));
		DIO_WritePinVal(LCD_D4,GetBit(Val_u8,6));
		DIO_WritePinVal(LCD_D4,GetBit(Val_u8,7));
		DIO_WritePinVal(EN,HIGH);
		_delay_ms(1);
		DIO_WritePinVal(EN,LOW);
	break;
	
	}
		
	case type4bit:{
		Private_LCDHalfPort(Val_u8>>4);
		DIO_WritePinVal(EN,HIGH);
		_delay_ms(1);
		DIO_WritePinVal(EN,LOW);
		Private_LCDHalfPort(Val_u8);
		DIO_WritePinVal(EN,HIGH);
		_delay_ms(1);
		DIO_WritePinVal(EN,LOW);
		break;
	}
	
		
	}
}




void LCD_voidWriteString(u8* copy_pu8String){
	while(*copy_pu8String!='\0'){
			LCD_SendCmdDataCommend(*copy_pu8String,Data,type4bit);  //last2
			(copy_pu8String++);
	}
}




void LCD_voidWriteNumber(u32 copy_u32Number){
	char buffer[NUM_BUFFER];
	 itoa(copy_u32Number,buffer,10);
	 
}
	

void LCD_voidClear(void){
		LCD_SendCmdDataCommend(0b00000001,Commend,type4bit);  //
		_delay_ms(2);
}


void LCD_voidShift(DIRICTIONS copy_ShifttingDirection,ShiftingPlatform copy_ShifttingPlatform){
	switch (copy_ShifttingPlatform)
	{
	case Cursor:{
			switch (copy_ShifttingDirection)
			{
				case LEFT:{
					LCD_SendCmdDataCommend(0b00010000,Commend,type4bit);  //
					break;
				}
				case RIGHT:{
					LCD_SendCmdDataCommend(0b00010100,Commend,type4bit);  //
					break;
				}
			}
	break;
	}
	case Screen:{
		
			switch (copy_ShifttingDirection)
			{
				case LEFT:{
					LCD_SendCmdDataCommend(0b00011000,Commend,type4bit);  //
					break;
				}
				case RIGHT:{
					LCD_SendCmdDataCommend(0b00011100,Commend,type4bit);  //
					break;
				}
			}
			
			break;
	}	
	}
_delay_us(45);

}
void LCD_voidGoToSpecificPosition(u8 copy_u8LineNumber, u8 copy_u8Position){
	
}