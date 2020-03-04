/*
 * it-labor.c
 *
 * Created: 3/4/2020 2:12:38 PM
 * Author : thesicstar
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
	DDRA = 0xff;
	PORTA = 0x00;
	
	PORTA |= 1<<4;
	PORTA |= 1<<5;
	
    while (1) 
    {
		
    }
}

