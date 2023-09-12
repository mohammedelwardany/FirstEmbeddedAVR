/*
 * Configure_KeyBad.h
 *
 * Created: 9/9/2023 12:54:29 PM
 *  Author: m2010
 */ 


#ifndef CONFIGURE_KEYBAD_H_
#define CONFIGURE_KEYBAD_H_
#include "Dio_Int.h"


#define KEYPAD_ROW_1         Pin_C5
#define KEYPAD_ROW_2         Pin_C4
#define KEYPAD_ROW_3         Pin_C3
#define KEYPAD_ROW_4         Pin_C2


#define KEYPAD_COLUMN_1      Pin_D7
#define KEYPAD_COLUMN_2      Pin_D6
#define KEYPAD_COLUMN_3      Pin_D5
#define KEYPAD_COLUMN_4      Pin_D3


#define KYP_ARR {{'7','8','9','+'}, {'4','5','6','-'}, {'1','2','3','/'}, {'0','0','0','*'}}


#define KEYPAD_ROWS_NO       (u8)4
#define KEYPAD_COLUMNS_NO    (u8)4

#define KEYPAD_NOT_PRESSED   (u8)255


u8 KEYBAD_ROWS_ARR[KEYPAD_ROWS_NO]= {KEYPAD_ROW_1,KEYPAD_ROW_2,KEYPAD_ROW_3,KEYPAD_ROW_4};
u8 KEYBAD_COLS_ARR[KEYPAD_COLUMNS_NO]= {KEYPAD_COLUMN_1,KEYPAD_COLUMN_2,KEYPAD_COLUMN_3,KEYPAD_COLUMN_4};
	
#define KEYPAD_COLUMN_START KEYPAD_COLUMN_1
#define KEYPAD_COLUMN_END   KEYPAD_COLUMN_4

#define KEYPAD_ROW_START KEYPAD_ROW_1
#define KEYPAD_ROW_END   KEYPAD_ROW_4
	
#endif /* CONFIGURE_KEYBAD_H_ */