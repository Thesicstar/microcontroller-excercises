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
	PORTA = 0b0000001;
	
    while (1) 
    {
		for (int i = 0; i < 7; i++)
		{
			_delay_ms(250);
			PORTA |= PORTA << 1;
		}
    }
}

