/****************************************************************/
/*	Author	:	Omar										    */
/*	Date	:	29 JUNE	2022								    */
/*	Version	:	01											    */
/****************************************************************/

#ifndef	LCD_INTERFACE_H
#define	LCD_INTERFACE_H
	
	/*Defining Public macros for the Commands */
#define LCD_CLR					0x01	/*write on the whole lcd (ascii of space = 0x40) 7 return cursor to original position*/
/*the LCD_CLR automatically sets the I/D to be 1 "automatic incrementing display"*/
#define	LCD_HOME				0x02	/*return cursor to original place*/
#define	LCD_ENTRYMODE			0x06
#define	LCD_DISPOFF				0x08
#define	LCD_DISPON_CURSON		0x0E
#define	LCD_FUNCRESET			0x30
#define	LCD_FUNCSET_8BIT		0x38
#define	LCD_SETCURS				0xB0
#define	LCD_DISPON_CURSBLINK	0x0F
#define	LCD_DISPON_CURSOFF		0x0C

void LCD_voidInit(void);
void LCD_voidSendChar(u8 Copy_u8Char);
void LCD_voidSendCommand(u8 Copy_u8Command);
void LCD_voidWriteString(u8* Copy_pu8command);



#endif
