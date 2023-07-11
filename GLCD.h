#include <xc.h>

#ifndef GLCD_H
#define	GLCD_H

#define PAGE1	0xB0
#define COL1	0
#define HIGH	1		
#define	LOW		0

#define CS_Pin  LATBbits.LATB0
#define RES_Pin LATBbits.LATB1
#define A0_Pin  LATBbits.LATB2


#define CMD_DISPLAY_OFF   0xAE
#define CMD_DISPLAY_ON    0xAF

#define CMD_SET_DISP_START_LINE  0x40
#define CMD_SET_PAGE  0xB0

#define CMD_SET_COLUMN_UPPER  0x10
#define CMD_SET_COLUMN_LOWER  0x00

#define CMD_SET_ADC_NORMAL  0xA0
#define CMD_SET_ADC_REVERSE 0xA1

#define CMD_SET_DISP_NORMAL 0xA6
#define CMD_SET_DISP_REVERSE 0xA7

#define CMD_SET_ALLPTS_NORMAL 0xA4
#define CMD_SET_ALLPTS_ON  0xA5
#define CMD_SET_BIAS_9 0xA2 
#define CMD_SET_BIAS_7 0xA3
#define CMD_RMW  0xE0
#define CMD_RMW_CLEAR 0xEE
#define CMD_INTERNAL_RESET  0xE2
#define CMD_SET_COM_NORMAL  0xC0
#define CMD_SET_COM_REVERSE  0xC8
#define CMD_SET_POWER_CONTROL  0x2F
#define CMD_SET_RESISTOR_RATIO  0x22
#define CMD_SET_VOLUME_FIRST  0x81
#define  CMD_SET_VOLUME_SECOND  0
#define CMD_SET_STATIC_OFF  0xAC
#define  CMD_SET_STATIC_ON  0xAD
#define CMD_SET_STATIC_REG  0x0
#define CMD_SET_BOOSTER_FIRST  0xF8
#define CMD_SET_BOOSTER_234  0
#define  CMD_SET_BOOSTER_5  1
#define  CMD_SET_BOOSTER_6  3
#define CMD_NOP  0xE3
#define CMD_TEST  0xF0

typedef unsigned char		U8;	
typedef unsigned short int	U16;	
typedef unsigned int		U32;	


void GLCD_Init(void);
void GLCD_WriteCMD(uint8_t cmd);
void GLCD_WriteData(uint8_t data);
void LCD_SET_PAGE(unsigned char page,unsigned char col);
void LCD_CLEAR(void);
void lcd_display_char(U8 charecter);
void lcd_display_string(U8 *str);
U8 get_width_of_char(U8 character);
U8 get_data_from_data_table(U8 character, U8 index);
void printCharacter(uint8_t x, uint8_t y, uint8_t character);


#endif	/* GLCD_H */

