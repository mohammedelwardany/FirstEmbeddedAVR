/*
 * Program_KeyBad.c
 *
 * Created: 9/9/2023 12:54:53 PM
 *  Author: m2010
 */ 
#include "types.h"
#include "Configure_KeyBad.h"
#include "Interface_KeyBad.h"
#include "util/delay.h"



void KEYPAD_uint8Init(void)
{
	//Set rows as input
	Dio_SetPinMode(KEYPAD_COLUMN_1 , InPut_PullUp);
	Dio_SetPinMode(KEYPAD_COLUMN_2 , InPut_PullUp);
	Dio_SetPinMode(KEYPAD_COLUMN_3 , InPut_PullUp);
	Dio_SetPinMode(KEYPAD_COLUMN_4 , InPut_PullUp);

	//Set Columns as output
	//Deactivate for all columns by setting it to High
	Dio_SetPinMode(KEYPAD_ROW_1 , OutPut_High);
	Dio_SetPinMode(KEYPAD_ROW_2 , OutPut_High);
	Dio_SetPinMode(KEYPAD_ROW_3 , OutPut_High);
	Dio_SetPinMode(KEYPAD_ROW_4 , OutPut_High);
}


u8 KEYPAD_uint8GetPressedKey(void)
{
	u8 Local_uint8PressedSwitch = KEYPAD_NOT_PRESSED;
	u8 Local_uint8aKeyPadMap[KEYPAD_ROWS_NO][KEYPAD_COLUMNS_NO] = KYP_ARR;
	u8 Local_uint8CurrentCol,Local_uint8CurrentRow,Local_uint8CurrentColStatus;
	for (Local_uint8CurrentRow = 0;Local_uint8CurrentRow<KEYPAD_ROWS_NO;Local_uint8CurrentRow++)
	{
		DIO_WritePinVal(KEYBAD_ROWS_ARR[Local_uint8CurrentRow],LOW);
		for (Local_uint8CurrentCol = 0;Local_uint8CurrentCol<KEYPAD_COLUMNS_NO;Local_uint8CurrentCol++)
		{
			DIO_ReadPinVal(KEYBAD_COLS_ARR[Local_uint8CurrentCol],&Local_uint8CurrentColStatus);
			if (Local_uint8CurrentColStatus == LOW)
			{
				_delay_ms(25);
				DIO_ReadPinVal(KEYBAD_COLS_ARR[Local_uint8CurrentCol],&Local_uint8CurrentColStatus);
			if (Local_uint8CurrentColStatus == LOW)
			{
				Local_uint8PressedSwitch=Local_uint8aKeyPadMap[Local_uint8CurrentRow][Local_uint8CurrentCol];
			}
			} 

		}
	}
	
	return Local_uint8PressedSwitch;
}