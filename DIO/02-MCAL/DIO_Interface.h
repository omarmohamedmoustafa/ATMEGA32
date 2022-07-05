/*
 * DIO_Interface.h
 *
 *  Created on: Jun 23, 2022
 *      Author: LEGION
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

void MDIO_voidSetPinVal(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8PinVal);
void MDIO_voidSetPinDir(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8PinDir);
void MDIO_voidSetPortDir(u8 Copy_u8PortId, u8 Copy_u8PortDir);
void MDIO_voidSetPortVal(u8 Copy_u8PortId, u8 Copy_u8PortVal);
u8 MDIO_u8GetPinVal(u8 Copy_u8PortId, u8 Copy_u8PinId);

#define DIO_HIGH	 	1
#define DIO_LOW 	 	0

#define DIO_INPUT 	 	0
#define DIO_OUTPUT	 	1

#define DIO_PORT_OUT 	0xFF
#define DIO_PORT_IN 	0x00

#define DIO_PORTA		0
#define DIO_PORTB		1
#define DIO_PORTC		2
#define DIO_PORTD 		3

#define DIO_PIN0		0
#define DIO_PIN1		1
#define DIO_PIN2		2
#define DIO_PIN3		3
#define DIO_PIN4 		4
#define DIO_PIN5 		5
#define DIO_PIN6 		6
#define DIO_PIN7		7


#endif /* DIO_INTERFACE_H_ */


