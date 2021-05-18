/*
 * File:   main.c
 * Author: tiago
 *
 * Created on 18 de Maio de 2021, 11:35
 */


#include <xc.h>

// CONFIG 
#pragma config WDTE = OFF
#pragma config CP = OFF
#pragma config MCLRE = OFF

#define _XTAL_FREQ = 4000000

void main(void) {
    
    // Initialisation
    TRIS = 0b111000;            // configure GP2 (only) as an output

    // Main loop
    for (;;)
    {
        GPIO = 0b000100;        // turn on LED on GP2 (bit 1)
        __delay_ms(250);        // stay on for 200 ms
        GPIO = 0b000110;        // turn on LED on GP2 (bit 1)
        __delay_ms(250);        // stay on for 200 ms
        GPIO = 0b000111;        // turn on LED on GP2 (bit 1)
        __delay_ms(250);        // stay on for 200 ms
        GPIO = 0b000000;        // turn on LED on GP2 (bit 1)
        __delay_ms(250);
    }                           // repeat forever

    return;
}
