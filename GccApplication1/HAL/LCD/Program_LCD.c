/*
 * Program_LCD.c
 *
 * Created: 9/10/2023 1:48:37 PM
 *  Author: m2010
 */ 
#include <util/delay.h>
#include "types.h"

#include "Interface_LCD.h"

#include "Configure_LCD.h"
#include "Private_LCD.h"
	


void LCD_init(void){
	_delay_ms(35);
	Private_LCDHalfPort(0b0010);
	DIO_WritePinVal(EN,HIGH);
	_delay_ms(1);
	DIO_WritePinVal(EN,LOW);
	LCD_SendCommend(0b00101000);//last2
	_delay_us(45);
	LCD_SendCommend(0b00001111);  // last3
	_delay_us(45);
	LCD_SendCommend(0b00000001);  //
	_delay_ms(2);
	LCD_SendCommend(0b00000110);  //last2


}






///////////////////////////////////prepare///////////////////////////////////////
static void Private_LCDHalfPort(u8 copy_u8value){
	DIO_WritePinVal(LCD_D4,GetBit(copy_u8value,0));
	DIO_WritePinVal(LCD_D5,GetBit(copy_u8value,1));
	DIO_WritePinVal(LCD_D6,GetBit(copy_u8value,2));
	DIO_WritePinVal(LCD_D7,GetBit(copy_u8value,3));
}





///////////////////////////////////SENDING///////////////////////////////////////

void LCD_SendData(u8 Val_u8){
			DIO_WritePinVal(RS,HIGH);
			Private_LCDHalfPort(Val_u8>>4);
			DIO_WritePinVal(EN,HIGH);
			_delay_us(30);
			DIO_WritePinVal(EN,LOW);
			Private_LCDHalfPort(Val_u8);
			DIO_WritePinVal(EN,HIGH);
			_delay_us(30);
			DIO_WritePinVal(EN,LOW);
}

void LCD_SendCommend(u8 Val_u8){
			DIO_WritePinVal(RS,LOW);
			Private_LCDHalfPort(Val_u8>>4);
			DIO_WritePinVal(EN,HIGH);
			_delay_us(30);
			DIO_WritePinVal(EN,LOW);
			Private_LCDHalfPort(Val_u8);
			DIO_WritePinVal(EN,HIGH);
			_delay_us(30);
			DIO_WritePinVal(EN,LOW);
}







void LCD_voidWriteString(u8* copy_pu8String){
	while(*copy_pu8String!='\0'){
			LCD_SendData(*copy_pu8String);  //last2
			(copy_pu8String++);
	}
}




void LCD_voidWriteNumber(u32 copy_u32Number){
 
}
	

void LCD_voidClear(void){
		LCD_SendCommend(0b00000001);  //
		_delay_ms(2);
}


void LCD_voidShift(DIRICTIONS copy_ShifttingDirection,ShiftingPlatform copy_ShifttingPlatform){
	switch (copy_ShifttingPlatform)
	{
	case Cursor:{
			switch (copy_ShifttingDirection)
			{
				case LEFT:{
					LCD_SendCommend(0b00010000);  //
					break;
				}
				case RIGHT:{
					LCD_SendCommend(0b00010100);  //
					break;
				}
			}
	break;
	}
	case Screen:{
		
			switch (copy_ShifttingDirection)
			{
				case LEFT:{
					LCD_SendCommend(0b00011000);  //
					break;
				}
				case RIGHT:{
					LCD_SendCommend(0b00011100);  //
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