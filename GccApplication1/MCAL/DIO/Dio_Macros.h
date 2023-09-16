/*
 * Dio_Macros.h
 *
 * Created: 9/9/2023 2:03:12 AM
 *  Author: m2010
 */ 


#ifndef DIO_MACROS_H_
#define DIO_MACROS_H_



//---------------------macros--------------------------//
#define SetBit(R,N) ((R)|=(1<<N))
#define ClrBit(R,N) ((R)&=~(1<<N))
#define ToggleBit(R,N) ((R)^=(1<<N))
#define GetBit(R,N) (((R)&=(1<<N))<<N)
//----------------------------------------------------//





#endif /* DIO_MACROS_H_ */