/*
 * it-labor.c
 *
 * Created: 3/4/2020 2:12:38 PM
 * Author : thesicstar
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <inttypes.h>



int main(void)
{
	DDRA = 0xff;
	PORTA = 0x00;
	
	uint8_t c1 = 0;
	uint16_t c2 = 0;
	
	
	
    while (1) 
    {
		PORTA = c1;
		c2++;
		if(c2 == 65535) {
			c1++;
		}
		
    }
}

