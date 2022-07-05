/*
 * main.c

 *
 *  Created on: Jun 23, 2022
 *      Author: LEGION
 */
#include "LIB/types.h"
#include "DIO_Interface.h"

void main (void){
DIO_vidSetPortDir(DIO_PORTD,DIO_INPUT);
	while(1){
		DIO_vidSetPinVal(DIO_PORTD,DIO_PIN0,DIO_HIGH);
		DIO_vidSetPinVal(DIO_PORTD,DIO_PIN1,DIO_LOW);
		DIO_vidSetPinVal(DIO_PORTD,DIO_PIN2,DIO_HIGH);
		DIO_vidSetPinVal(DIO_PORTD,DIO_PIN3,DIO_LOW);
		DIO_vidSetPinVal(DIO_PORTD,DIO_PIN4,DIO_HIGH);
		DIO_vidSetPinVal(DIO_PORTD,DIO_PIN5,DIO_LOW);
		DIO_vidSetPinVal(DIO_PORTD,DIO_PIN6,DIO_HIGH);
		DIO_vidSetPinVal(DIO_PORTD,DIO_PIN7,DIO_LOW);


	}

}
