/*
 * File:   main.c
 * Author: Tiago Pereira
 *
 * Created on 5 de Maio de 2021, 10:45
 */

#include <xc.h>

// CONFIGURATIONS FUSES

#define _XTAL_FREQ = 4000000 // DEFINE CLOCK 4MHZ

                            // #pragma = DIRETIVAS DE COMPILAÇÃO, ESPECIFICA COMO O COMPILADOR OU MONTADOR DEVE COMPILAR O CÓDIGO FONTE
#pragma config FOSC = HS    // OSCILATOR SELECTION BITS (HS OSCILATOR)
                            // PIC 16F877A NÃO POSSUI CLOCK INTERNO, PORTANTO FUSE HS RECOMENDADO PARA CLOCKS ENTRE 4MHz ? 20Mhz CAPACITORES RECOMENDADOS 15pF ? 33pF
#pragma config WDTE = OFF   // WATCHDOG TIMER ENABLE BIT (WDT DISABLE)
#pragma config PWRTE = OFF  // POWER-UP RESET ENABLE BIT (PWRT DISABLE)
#pragma config LVP = OFF    // LOW-VOLTAGE (SINGLE-SUPPLY) IN CIRCUIT SERIAL PROGRAMMING ENABLE BIT (RB3 IS DIGITAL I/O, HV ON MCLR MUST BE USED FOR PROGRAMMING)
#pragma config CPD = OFF    // DATA EEPROM MEMORY CODE PROTECTION BIT (DATA EEPROM PROTECTION OFF)
#pragma config WRT = OFF    // FLASH PROGRAM MEMORY WRITE ENABLE BITS (WRITE PROTECTION OFF; ALL PROGRAM MEMORY MAY BY EECON CONTROL)
#pragma config CP = OFF     // FLASH PROGRAM MEMORY CODE PROTECTION BIT (CODE PROTECTION OFF)


void delay_ms(int n) { 
    
    while (n-- != 0) {} 
}
    
void main(void) {
    
    TRISA = 0b00000000; // SET PORTA BITS OUTPUT
    
    //EXAMPLE
    // TRISA=0x00;   // set all PORTC bits output
    // TRISA=0xFF;   // set all PORTC bits input
    
    // ACCESS INDIVIDUAL PORTS
    // TRISA0 = 0;  // set RAO pin as a output
    // TRISA1 = 0; //  set RA1 pin as a output
    
    // TRISAbits.TRISA5 = 1; // RA5 - entrada
    // TRISBbits.TRISB3 = 0; // RB3 - saída
    
    while(1) {
        
        PORTA = 0b00000000; // SET PORTA 0 COM VALOR DE TENSÃO 0V -> SET ALL PORTS 0V

        // EXEMPLOS
        // PORTA = 0xff;  // Make all PORTA pins HIGH.
        // PORTA = 0x00;  // Make all PORTA pins LOW. 
        
        delay_ms(500);  
                
        PORTA = 0b00000001; // SET PORTA 0 COM VALOR DE TENSÃO VCC (5V)

        delay_ms(500);
        
    }
    
    return;
}
