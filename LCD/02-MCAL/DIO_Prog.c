/*
 * DIO_Prog.c
 *
 *  Created on: Jun 23, 2022
 *      Author: LEGION
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Interface.h"
#include "DIO_Priv.h"
#include "DIO_Config.h"
void MDIO_voidSetPinVal(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8PinVal)
{
	if((Copy_u8PortId <= DIO_PORTD) && (Copy_u8PinId <= DIO_PIN7))
	{
		if(Copy_u8PinVal == DIO_HIGH)
		{
			switch (Copy_u8PortId)
			{
				case DIO_PORTA: SET_BIT(PORTA_REG,Copy_u8PinId) ;break;
				case DIO_PORTB: SET_BIT(PORTB_REG,Copy_u8PinId) ;break;
				case DIO_PORTC: SET_BIT(PORTC_REG,Copy_u8PinId) ;break;
				case DIO_PORTD: SET_BIT(PORTD_REG,Copy_u8PinId) ;break;
			}
		}
		else if(Copy_u8PinVal == DIO_LOW)
		{
			switch (Copy_u8PortId)
			{
				case DIO_PORTA: CLR_BIT(PORTA_REG,Copy_u8PinId) ;break;
				case DIO_PORTB: CLR_BIT(PORTB_REG,Copy_u8PinId) ;break;
				case DIO_PORTC: CLR_BIT(PORTC_REG,Copy_u8PinId) ;break;
				case DIO_PORTD: CLR_BIT(PORTD_REG,Copy_u8PinId) ;break;
			}
		}
	}
	else
	{

	}
}
void MDIO_voidSetPinDir(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8PinDir)
{
	if((Copy_u8PortId <= DIO_PORTD) && (Copy_u8PinId <= DIO_PIN7))
	{
		if(Copy_u8PinDir == DIO_OUTPUT)
		{
			switch (Copy_u8PortId)
			{
				case DIO_PORTA: SET_BIT(DDRA_REG,Copy_u8PinId) ;break;
				case DIO_PORTB: SET_BIT(DDRB_REG,Copy_u8PinId) ;break;
				case DIO_PORTC: SET_BIT(DDRC_REG,Copy_u8PinId) ;break;
				case DIO_PORTD: SET_BIT(DDRD_REG,Copy_u8PinId) ;break;
			}
		}
		else if(Copy_u8PinDir == DIO_INPUT)
		{
			switch (Copy_u8PortId)
			{
				case DIO_PORTA: CLR_BIT(DDRA_REG,Copy_u8PinId) ;break;
				case DIO_PORTB: CLR_BIT(DDRB_REG,Copy_u8PinId) ;break;
				case DIO_PORTC: CLR_BIT(DDRC_REG,Copy_u8PinId) ;break;
				case DIO_PORTD: CLR_BIT(DDRD_REG,Copy_u8PinId) ;break;
			}
		}
	}
	else
	{

	}
}

void MDIO_voidSetPortDir(u8 Copy_u8PortId, u8 Copy_u8PortDir)
{
	if(Copy_u8PortId <= DIO_PORTD)
	{
		switch(Copy_u8PortId)
		{
			case DIO_PORTA : DDRA_REG = Copy_u8PortDir	;break;
			case DIO_PORTB : DDRB_REG = Copy_u8PortDir	;break;
			case DIO_PORTC : DDRC_REG = Copy_u8PortDir	;break;
			case DIO_PORTD : DDRD_REG = Copy_u8PortDir	;break;
		}
	}
}
void MDIO_voidSetPortVal(u8 Copy_u8PortId, u8 Copy_u8PortVal)
{
	if(Copy_u8PortId <= DIO_PORTD)
	{
		switch(Copy_u8PortId)
		{
			case DIO_PORTA : PORTA_REG = Copy_u8PortVal	;break;
			case DIO_PORTB : PORTB_REG = Copy_u8PortVal	;break;
			case DIO_PORTC : PORTC_REG = Copy_u8PortVal	;break;
			case DIO_PORTD : PORTD_REG = Copy_u8PortVal	;break;
		}
	}

}
u8 MDIO_u8GetPinVal(u8 Copy_u8PortId, u8 Copy_u8PinId)
{
	u8 LOC_u8ReturnVal;
	if((Copy_u8PortId <= DIO_PORTD) && (Copy_u8PinId <= DIO_PIN7))
	{
		switch (Copy_u8PortId)
		{
			case DIO_PORTA: LOC_u8ReturnVal =  GET_BIT(PINA_REG,Copy_u8PinId)  ;break;
			case DIO_PORTB: LOC_u8ReturnVal =  GET_BIT(PINB_REG,Copy_u8PinId)  ;break;
			case DIO_PORTC: LOC_u8ReturnVal =  GET_BIT(PINC_REG,Copy_u8PinId)  ;break;
			case DIO_PORTD: LOC_u8ReturnVal =  GET_BIT(PIND_REG,Copy_u8PinId)  ;break;
		}


	}
	else
	{

	}
	return LOC_u8ReturnVal;
}

