/*
 * Program_KeyBad.c
 *
 * Created: 9/9/2023 12:54:53 PM
 *  Author: m2010
 */

 #include "types.h"
 #include "Configure_KeyBad.h"

 #include "Dio_Int.h"
 #include"util/delay.h"

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
	 
	 
	 
	 
	 
	 
	 
	 
	 u8 Local_uint8PressedSwitch = 'N';
	 u8 Local_uint8CurrentCol;
	 u8 Local_uint8CurrentRow;
	 u8 Local_uint8CurrentColStatus;

	 for (Local_uint8CurrentRow = 0;
	 Local_uint8CurrentRow < KEYPAD_ROWS_NO ;
	 Local_uint8CurrentRow++)
	 {
		 /*activate the current column*/
		 DIO_WritePinVal(ROW_ARR[Local_uint8CurrentRow],LOW);
				 _delay_ms(35);

		 for (Local_uint8CurrentCol = 0 ;
		 Local_uint8CurrentCol < KEYPAD_COLUMNS_NO ;
		 Local_uint8CurrentCol++)
		 {
			 /*Get Row Value*/
			 DIO_ReadPinVal(COL_ARR[Local_uint8CurrentCol] , &Local_uint8CurrentColStatus);
			 /*If Switch is pressed */
			 if (Local_uint8CurrentColStatus == LOW) //34an e7na pull up
			 {
				 _delay_ms(35);
				 /*Wait For Debouncing*/
				 /*If Switch is pressed */

				 DIO_ReadPinVal(COL_ARR[Local_uint8CurrentCol] , &Local_uint8CurrentColStatus);

				 if (Local_uint8CurrentColStatus == LOW) //34an e7na pull up
				 {
					 Local_uint8PressedSwitch = KYP_ARR[Local_uint8CurrentRow][Local_uint8CurrentCol];
				 }
				 /* the switch which is in this row and that column is pressed*/
				 
			 }

		 }
		 /*Deactivate the column*/
		 DIO_WritePinVal(ROW_ARR[Local_uint8CurrentRow],HIGH);
		// _delay_ms(25);

	 }

	 return Local_uint8PressedSwitch ;
 }

