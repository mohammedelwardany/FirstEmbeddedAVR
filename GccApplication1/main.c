/*
 * GccApplication1.c
 *
 * Created: 9/8/2023 11:12:00 PM
 * Author : m2010
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL

#include <util/delay.h>


#include "Dio_Int.h"
#include "Interface_LCD.h"
#include "Interface_KeyBad.h"
#include "ADC_Interface.h"
#include "Calculator_LCD_KEYS_interface.h"
#include "Ex_Interups_Interface.h"
#include "G_Interups_Interface.h"


u8 KeyBad_Retrive;

int main(void)
{
	//DIO_Init();
 	LCD_init();
	ADC_init();
//	GINTERUPTS_voidEnable();
// 	KEYPAD_uint8Init();
// 	
//u16 BUFFF [4];
//Ssegmintinit();
//ADC_Scan_Sync_Group(ScanGroup1 , &BUFFF );

// 	EXInterupts_voidEnable(EX_INT1,EX_LOW_LEVEL);
// 	CharToNumber('2');
// CharToNumber('3');
// CharToNumber('6');

	//LCD_voidWriteString("hello world");

// LCD_SendData('2');
	/*_delay_ms(500);
	DIO_WritePinVal(Pin_A1,LOW);
	_delay_ms(500);*/
	//int x = 0;


    while(1)
	{
		u32 X = ADC_Scan_Single(0);
LCD_voidWriteNumber(X); 

_delay_ms(500);
	//SevenSegment_Value(5480);
// 		u8 KYP_Data = KEYPAD_uint8GetPressedKey();
// 					
// 		if (KYP_Data!='N')
// 		{
// 			if(KYP_Data == 'C'){
// 				LCD_voidClear();
// 				continue;
// 			}
// 			LCD_SendData(KYP_Data);
// 		}
		
		
		
		
		
		

		
		//_delay_ms(50);
		//_delay_ms(5000);
	}
	return 0;
}

// 
// 
void __vector_16(void) __attribute__((signal));
void __vector_16(void){
	  static u8 flag=0;
	  if (flag==1)
	  {
		  DIO_WritePinVal(Pin_A4,HIGH); 
		  flag =0 ;
	  }
	  else{
		  DIO_WritePinVal(Pin_A4,LOW);
		  flag =1 ;
	  }
}


#endif
