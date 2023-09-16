/*
 * Calculator_LCD_KEYS_Program.c
 *
 * Created: 9/14/2023 11:56:18 AM
 *  Author: m2010
 */ 
#include "types.h"

static u8 i = 0 ;
u8 op ;
u8 GARR[20] ;
u8 NUM1[20] ;
u8 NUM2[20] ;
u8 NUMBER1 ;
u8 NUMBER2 ;


u32 add(u16 a , u16 b){
	return a+b;
}
u32 sub(u16 a , u16 b){
	return a-b;
}
u32 multuply(u16 a , u16 b){
	return a*b;
}
u32 division(u16 a , u16 b){
	return a/b;
}
u16 CalcOperation(op){

switch (op)
{
case '+':{
return add(NUMBER1 , NUMBER2);
break;
}
case '-':{
return sub(NUMBER1 , NUMBER2);
	break;
}
case '/':{
return division(NUMBER1 , NUMBER2);
	break;
}
case '*':{
return multuply(NUMBER1 , NUMBER2);
	break;
}	
}
}

void CharToNumber(){

for(u8 NUM1_Iter=0;NUM1[NUM1_Iter]!='/0';NUM1_Iter++){
	NUMBER1 = (NUM1[NUM1_Iter] - 48)*(10*NUM1_Iter);
}
for(u8 NUM2_Iter=0;NUM2[NUM2_Iter]!='/0';NUM2_Iter++){
	NUMBER2 = (NUM2[NUM2_Iter] - 48)*(10*NUM2_Iter);
}
	
}

void Save_to_ARR(u8 myChar){
	GARR[i] = myChar;
	i++;
}


void Save_to_Num_ARR(){
	int j;
	for (j = 0 ;GARR[j] != '=';j++){
		int l = 0;
		if (GARR[j] == '+' ||GARR[j] == '-' ||GARR[j] == '*' ||GARR[j] == '/' )
		{
			op = GARR[j];
			l = 1;
			NUM1[j] = '/0';
			continue;
		} 
		switch (l)
		{
		case 0:{
			NUM1[j] = GARR[j];
			break;
		}
		case 1:{
			NUM2[j] = GARR[j];
			break;
		}
			
		}
		
		
	}
	NUM2[j] = '/0';
	
}



