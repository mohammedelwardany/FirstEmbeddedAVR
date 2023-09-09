/*
 * DIO_Cfg.h
 *
 * Created: 9/9/2023 2:08:02 AM
 *  Author: m2010
 */ 


#ifndef DIO_CFG_H_
#define DIO_CFG_H_

//---------------------macros--------------------------//


#define Port_A 'A'
#define Port_B 'B'
#define Port_C 'C'
#define Port_D 'D'

#define IN 0
#define OUT 1

#define LOW 0
#define HIGH 1
//----------------------------------------------------//




#define Dio_PinA0_init    InPut_PullUp
#define Dio_PinA1_init	  InPut_PullUp
#define Dio_PinA2_init	  InPut_PullUp
#define Dio_PinA3_init    InPut_PullUp
#define Dio_PinA4_init    InPut_PullUp
#define Dio_PinA5_init    InPut_PullUp
#define Dio_PinA6_init	  InPut_PullUp
#define Dio_PinA7_init    InPut_PullUp

#define Dio_PinB0_init    InPut_PullUp
#define Dio_PinB1_init    InPut_PullUp
#define Dio_PinB2_init    InPut_PullUp
#define Dio_PinB3_init    OutPut_Low
#define Dio_PinB4_init	  OutPut_Low
#define Dio_PinB5_init    OutPut_Low
#define Dio_PinB6_init    OutPut_Low
#define Dio_PinB7_init    OutPut_Low

#define Dio_PinC0_init    OutPut_Low
#define Dio_PinC1_init    OutPut_Low
#define Dio_PinC2_init    OutPut_Low
#define Dio_PinC3_init    InPut_Float
#define Dio_PinC4_init    InPut_Float
#define Dio_PinC5_init	  InPut_Float
#define Dio_PinC6_init	  InPut_Float
#define Dio_PinC7_init	  InPut_Float

#define Dio_PinD0_init	  InPut_Float
#define Dio_PinD1_init	  InPut_Float
#define Dio_PinD2_init	  InPut_Float
#define Dio_PinD3_init	  OutPut_High
#define Dio_PinD4_init	  OutPut_High
#define Dio_PinD5_init	  OutPut_High
#define Dio_PinD6_init	  OutPut_High
#define Dio_PinD7_init	  OutPut_High



//---------------------Fmacros--------------------------//

//------------------------=----------------------------//

typedef enum {
	Pin_A0  ,Pin_A1	,Pin_A2	,Pin_A3	,Pin_A4	,Pin_A5	, Pin_A6 ,Pin_A7 ,
	Pin_B0	,Pin_B1 ,Pin_B2 ,Pin_B3	,Pin_B4 ,Pin_B5	, Pin_B6 ,Pin_B7 ,
	Pin_C0	,Pin_C1	,Pin_C2	,Pin_C3	,Pin_C4	,Pin_C5	, Pin_C6 ,Pin_C7 ,
	Pin_D0	,Pin_D1	,Pin_D2	,Pin_D3	,Pin_D4	,Pin_D5	, Pin_D6 ,Pin_D7 ,
}Pin_Type;

typedef enum {
	OutPut_High , OutPut_Low,
	InPut_Float,InPut_PullUp
}PinMode_type;



//------------------------ARRAYS----------------------------//


//static u8 PortA,PortB,PortC,PortD;
/*****************************DIO_VoidInit***********************************/




#endif /* DIO_CFG_H_ */