/*
 * DIO_Priv.h
 *
 *  Created on: Jun 23, 2022
 *      Author: LEGION
 */

#ifndef DIO_PRIV_H_
#define DIO_PRIV_H_

/*	ana hena b7ot adresses el Portat
 * 	3ndi l koll wa7ed PORT - DDR - PIN
 *
 *
 *
 *  */
#define PORTA_REG	 *((volatile u8*) 0x3B)
#define DDRA_REG 	 *((volatile u8*) 0x3A)
#define PINA_REG 	 *((volatile u8*) 0x39)

#define PORTB_REG  	 *((volatile u8*) 0x38)
#define DDRB_REG  	 *((volatile u8*) 0x37)
#define PINB_REG     *((volatile u8*) 0x36)

#define PORTC_REG  	 *((volatile u8*) 0x35)
#define DDRC_REG  	 *((volatile u8*) 0x34)
#define PINC_REG  	 *((volatile u8*) 0x33)

#define PORTD_REG  	 *((volatile u8*) 0x32)
#define DDRD_REG  	 *((volatile u8*) 0x31)
#define PIND_REG  	 *((volatile u8*) 0x30)
#endif /* DIO_PRIV_H_ */

