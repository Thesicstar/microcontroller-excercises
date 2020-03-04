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
	PORTA = 0b00000010;
	_delay_ms(250);
	PORTA |= 0b00000100;
	
    while (1) 
    {
    }
}

