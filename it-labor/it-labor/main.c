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
	DDRB = 0xFF;
	PORTA = 0x00;
	PORTB = 0x00;
	
	uint8_t d = 0;
	
	
	
    while (1) 
    {
		__delay_ms(100)
		if (d == 0 && PORTA == 0b10000000) d = 1;
		
		if (d == 1 && PORTA == 0b00000001) {
			PORTA = 0b00000000;
			PORTB = 0b10000000;
			continue;
		}

		if(d == 1 && PORTB == 0b01000000) d = 0;

		if(d == 0 && PORTB == 0b10000000) {
			PORTA = 0b00000001;
			PORTB = 0b00000000;
			continue;
		}

		if(PORTA != 0b00000000){
			if (d == 0) {
				PORTA = PORTA << 1;
			} else {
				PORTA = PORTA >> 1;
			}
		}
		if(PORTB != 0b00000000){
			if (d == 0) {
				PORTB = PORTB << 1;
			} else {
				PORTB = PORTB >> 1;
			}
		}
    }
}

