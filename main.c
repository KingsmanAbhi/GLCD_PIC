/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F1789
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include "GLCD.h"
#include "GLCD_8x8.h"
/*
                         Main application
 */


void GLCD_Init(void);

 

void main(void)
{
    
    TRISBbits.TRISB0 = 0;
    TRISBbits.TRISB1 = 0;
    TRISBbits.TRISB2 = 0;
    TRISBbits.TRISB5 = 0;
    TRISBbits.TRISB7 = 0;
    
    // initialize the device
    SYSTEM_Initialize();
    
    if(1 ==SPI_Open(SPI_DEFAULT) )
    {
        GLCD_Init();
        LCD_CLEAR();
        
        while(1)
        {
//            GLCD_WriteCMD(0xA5);
            LCD_SET_PAGE(PAGE1 + 2 , COL1);
            __delay_ms(1);
            
             lcd_display_char(0x41);
            
              __delay_ms(1000);      
//            printCharacter(10,10,0x41);
//            __delay_ms(100);
//            printCharacter(10,10,0x42);
//            __delay_ms(100);
//            printCharacter(10,10,0x43);
//            __delay_ms(100);
//            printCharacter(10,10,0x44);
//            __delay_ms(100);
//            printCharacter(10,10,0x45);
//            __delay_ms(100);
//            printCharacter(10,10,0x46);
//            __delay_ms(100);
//            printCharacter(10,10,0x47);
//            __delay_ms(100);
        }
    }
    
      // Your code goes here
}



















/**
 End of File
*/