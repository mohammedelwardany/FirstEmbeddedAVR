/*
 * Dio_Int.h
 *
 * Created: 9/9/2023 1:49:23 AM
 *  Author: m2010
 */ 


#ifndef DIO_INT_H_
#define DIO_INT_H_

#include "types.h"

#include "bitMath.h"

#include "DIO_Cfg.h"
#include "DIO_prv.h"






void DIO_Init(void);
void Dio_SetPinMode(Pin_Type Pin_ID , PinMode_type Mode);
void DIO_ReadPinVal(Pin_Type Pin_ID ,u8 * ReadBufferPTR );
void DIO_WritePinVal(Pin_Type Pin_ID ,u8 VALUE );


//void DIO_init (u8 PinNumber,u8 PortNum,u8 Dirction);

//void DIO_Write (u8 PinNumber,u8 PortNum,u8 Value);

//void DIO_Toggle (u8 PinNumber,u8 PortNum);

//void DIO_Read (u8 PinNumber,u8 PortNum,u8 *Value);


//void Dio_SetPinChMode(u8 P_ID,u8 Mode);

//void Dio_WritePinChannel(u8 P_ID,u8 Value);

//void Dio_WritePortChannel(u8 P_ID,u8 Value);

//void Dio_ReadPinChannel(u8 P_ID,u8* Buffer_Ptr);

//void Dio_ReadPortChannel(u8 P_ID,u8* Buffer_Ptr);
 



#endif /* DIO_INT_H_ */