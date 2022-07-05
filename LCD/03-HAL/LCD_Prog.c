/****************************************************************/
/*	Author	:	Omar										    */
/*	Date	:	29 JUNE	2022								    */
/*	Version	:	01											    */
/****************************************************************/


#include "STD_TYPES.h"
#include "BIT_MATH.h"
#define F_CPU 8000000
#include "avr/delay.h"
#include "DIO_Interface.h"
#include "LCD_interface.h"
#include "LCD_Config.h"

void LCD_voidInit(void)
{
	/*delay 30 ms to ensure LCD uC initialization */
	_delay_ms(30);
	/*Function Set 8bit*/
	LCD_voidSendCommand(LCD_FUNCSET_8BIT);
	_delay_ms(1);
	/*Display On/Off*/
	LCD_voidSendCommand(LCD_DISPON_CURSON);
	_delay_ms(15);

	/*ReturnHome*/
	LCD_voidSendCommand(LCD_HOME);
	_delay_ms(15);

	/*Entry mode set*/
	LCD_voidSendCommand(LCD_ENTRYMODE);
	_delay_ms(2);

}

void LCD_voidSendChar(u8 Copy_u8Char)
{
	 /*Set RS pin*/
	MDIO_voidSetPinVal(LCD_CONTROL_PORT,LCD_RS_PIN,DIO_HIGH);
	/*Clear RW pin*/
	MDIO_voidSetPinVal(LCD_CONTROL_PORT,LCD_RW_PIN,DIO_LOW);
	/*Set enable pin*/
	MDIO_voidSetPinVal(LCD_CONTROL_PORT,LCD_E_PIN,DIO_HIGH);

	/*Send  Character on data pins*/
	MDIO_voidSetPortVal(LCD_DATA_PORT,Copy_u8Char);
	/*Clear enable pin*/
	MDIO_voidSetPinVal(LCD_CONTROL_PORT,LCD_E_PIN,DIO_LOW);

	/*delay*/
	_delay_ms(5);
	MDIO_voidSetPinVal(LCD_CONTROL_PORT,LCD_E_PIN,DIO_HIGH);
	_delay_ms(10);

}

void LCD_voidSendCommand(u8 Copy_u8Command)
{
	 /*CLR RS pin*/
	MDIO_voidSetPinVal(LCD_CONTROL_PORT,LCD_RS_PIN,DIO_LOW);
	/*Clear RW pin*/
	MDIO_voidSetPinVal(LCD_CONTROL_PORT,LCD_RW_PIN,DIO_LOW);
	/*Set enable pin*/
	MDIO_voidSetPinVal(LCD_CONTROL_PORT,LCD_E_PIN,DIO_HIGH);
	/*Send Instruction on data pins*/
	MDIO_voidSetPortVal(LCD_DATA_PORT,Copy_u8Command);
	/*Clear enable pin*/
	MDIO_voidSetPinVal(LCD_CONTROL_PORT,LCD_E_PIN,DIO_LOW);
	/*delay*/
	_delay_ms(5);
	MDIO_voidSetPinVal(LCD_CONTROL_PORT,LCD_E_PIN,DIO_HIGH);
	_delay_ms(10);
}

void LCD_voidWriteString(u8* Copy_pu8str)
{
	/*ana hb3t array of characters*/
	/*ay array of characters a5erha NULL TERMINATOR (0)*/
	/*hstfad mn kda b eny h3ml while loop a5rha el 0 da w htb3 el array character by character*/
	u8 i = 0 ;
	while (Copy_pu8str[i] != 0)
	{
		LCD_voidSendChar(Copy_pu8str[i++]);

	}
}


