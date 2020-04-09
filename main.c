/*
 * File:   main.c
 * Author: nagay
 *
 * Created on April 10, 2020, 12:44 AM
 */


#include <avr/io.h>
#define LED2 3 //PD3
#define LED1 7 //PC7
#define LED0 2 //PC2

int main(void) {
    
    DDRD |= (1 << LED2);     //0000 0001 <<3 // set bit3 to be output
    DDRC = 0xFF; //set portC as o/p
    PORTD |= (1 << LED2);    //set bit 3 in portD HIGH
    PORTC |= (1 << LED1);    //set bit 7 in portC HIGH
    PORTC |= (1 << LED0);    //set bit 2 in portC HIGH

    while (1) {
    }
}
