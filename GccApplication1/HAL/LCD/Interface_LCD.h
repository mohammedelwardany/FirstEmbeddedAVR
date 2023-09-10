/*
 * Interface_LCD.h
 *
 * Created: 9/10/2023 1:48:58 PM
 *  Author: m2010
 */ 


#ifndef INTERFACE_LCD_H_
#define INTERFACE_LCD_H_

#include "types.h"

#include "bitMath.h"

#include "Dio_Int.h"

#include "Configure_LCD.h"
#include "Private_LCD.h"

void init(void);
void LCD_SendCmdDataCommend(u8 Cvalue,u8 MODE,u8 Bitlvl);


#endif /* INTERFACE_LCD_H_ */