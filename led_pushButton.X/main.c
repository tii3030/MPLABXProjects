/*
 * File:   main.c
 * Author: tiago
 *
 * Created on 6 de Maio de 2021, 10:34
 */


#include <xc.h>
#define _XTAL_FREQ = 4000000 // DEFINE FREQUENCY OSCILATOR 4MHZ

// BEGIN CONFIG FUSE
#pragma config FOSC = HS // BETWEEN CLOCK 4MHZ E 20MHZ
#pragma config WDTE = OFF
#pragma config PWRTE = OFF
#pragma config BOREN = OFF 
#pragma config LVP = OFF
#pragma config WRT = OFF
#pragma config CP = OFF
// END CONFIG FUSE

void main(void) {
    
    TRISA = 0b00000001; // DEFINE FIRST BIT TRISA LIKE INPUT
    return;
}
