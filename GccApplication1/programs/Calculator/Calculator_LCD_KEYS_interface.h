/*
 * Calculator_LCD_KEYS_interface.h
 *
 * Created: 9/14/2023 11:55:37 AM
 *  Author: m2010
 */ 


#ifndef CALCULATOR_LCD_KEYS_INTERFACE_H_
#define CALCULATOR_LCD_KEYS_INTERFACE_H_


u32 add(u16 a , u16 b);
u32 sub(u16 a , u16 b);
u32 multuply(u16 a , u16 b);
u32 division(u16 a , u16 b);
u16 CalcOperation(u8);
void CharToNumber(void);
void Save_to_ARR(u8 myChar);
void Save_to_Num_ARR(void);



#endif /* CALCULATOR_LCD_KEYS_INTERFACE_H_ */