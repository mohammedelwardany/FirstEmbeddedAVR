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
#include "Ex_Interups_Interface.h"
#include "G_Interups_Interface.h"


int main(void)
{
	DIO_Init();
	LCD_init();
// 	
// 	GINTERUPTS_voidEnable();
// 	EXInterupts_voidEnable(EX_INT1,EX_LOW_LEVEL);
	LCD_SendData('A');
	LCD_SendData('B');
	

	/*_delay_ms(500);
	DIO_WritePinVal(Pin_A1,LOW);
	_delay_ms(500);*/
    while(1)
	{
		
		//_delay_ms(5000);
		//_delay_ms(5000);
	}
	return 0;
}

// 
// 
// void __vector_2(void) __attribute__((signal));
// void __vector_2(void){
// 	  static u8 flag=0;
// 	  if (flag==1)
// 	  {
// 		  DIO_WritePinVal(Pin_A4,HIGH); 
// 		  flag =0 ;
// 	  }
// 	  else{
// 		  DIO_WritePinVal(Pin_A4,LOW);
// 		  flag =1 ;
// 	  }
// }


#endif
