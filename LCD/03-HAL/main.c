/*
 * main.c
 *
 *  Created on: Jul 5, 2022
 *      Author: Omar_
 */



#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "avr/delay.h"
#include"DIO_Interface.h"
#include"LCD_Interface.h"




int main (void)
{
	MDIO_voidSetPortDir(DIO_PORTC,DIO_PORT_OUT);
	MDIO_voidSetPortDir(DIO_PORTA,DIO_PORT_OUT);

	LCD_voidInit();
	LCD_voidSendCommand(LCD_CLR);
	LCD_voidSendCommand(0x80);
	LCD_voidWriteString("aha");
	while(1){

	}


}
