/*
 * blinkLED.c
 *
 * Created: 6/20/2018 12:57:18 PM
 *  Author: manth
 */ 


#include <avr/io.h>

int main(void)
{
	DDRB = 0xFF;
	int x = 20000;
    while(1)
    {
		PORTB = 0xff;
		for (int i = 0; i < x ; ++ i);
		PORTB = 0x00;
		for (int i = 0; i < x ; ++ i);
    }
}