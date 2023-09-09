/*
 * Configure_KeyBad.h
 *
 * Created: 9/9/2023 12:54:29 PM
 *  Author: m2010
 */ 


#ifndef CONFIGURE_KEYBAD_H_
#define CONFIGURE_KEYBAD_H_
#include "Dio_Int.h"

u8 const Rows[4] = {Pin_C5,Pin_C4,Pin_C3,Pin_C2}; //OUT 1 1 1 1
u8 const Cols[4] = {Pin_D7,Pin_D6,Pin_D5,Pin_D4}; // INPU
typedef enum {KEY1 , KEY2 ,KEY3 ,KEY4 ,
	KEY5 , KEY6 ,KEY7 ,KEY8 ,
	KEY9 , KEY10 ,KEY11 ,KEY12 ,
	KEY13 , KEY14 ,KEY15 ,KEY416 	
	}KeyBad_KeysNames;
void init(void){
	for (int i = 0 ; i<4 ; i++)
	{
	Dio_SetPinMode(Rows[i],InPut_Float)
	Dio_SetPinMode(Cols[i],OutPut_Low)
	}
}

u8 Keybad_KeyGet(){
	u8 *RowValue ; 
	u8 *ColValue ;
	KeyBad_KeysNames Value; 
	for (int i = 0 ; i<4 ; i++)
	{
		
			DIO_ReadPinVal(Cols[i],ColValue)
			if (*ColValue==1)
			{
				//delay(30)
				if (*ColValue==1)
				{
					for (int j = 0 ; j<4 ; j++){
					DIO_ReadPinVal(Rows[i],RowValue)
					if (*RowValue==1)
					{
						//delay(30)
						if (*RowValue==1)
						{
							Value = i*j;
						}
					}
					}
					
					
				}
			}
		
	}

return Value ;
}
	

	
#endif /* CONFIGURE_KEYBAD_H_ */