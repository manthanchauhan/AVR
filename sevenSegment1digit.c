/*
 * sevenSegment1digit.c
 *
 * Created: 6/22/2018 3:09:55 PM
 *  Author: manth
 */ 


#include <avr/io.h>

int main(void)
{
	int x = 150;
	int y = 500;
	DDRA = 0xff;
	DDRB = 0xff;
	DDRD = 0xff;
    while(1)
    {
        for (int i = 0 ; i < 10 ; ++ i)
        {
			for (int j = 0 ; j < x ; ++ j)
			{
				PORTA = 0xFC;
				switch(i)
				{
					case 0: PORTD = 0x31;
							PORTB = 0x38;
							break;
					case 1: PORTD = 0x00;
							PORTB = 0x00;
							break;
					case 2: PORTD = 0x09;
							PORTB = 0x38;
							break;
					case 3: PORTD = 0x09;
							PORTB = 0x08;
							break;
					case 4: PORTD = 0x38;
							PORTB = 0x00;
							break;
					case 5: PORTD = 0x39;
							PORTB = 0x08;
							break;
					case 6: PORTD = 0x39;
							PORTB = 0x38;
							break;
					case 7: PORTD = 0x01;
							PORTB = 0x00;
							break;
					case 8: PORTD = 0x39;
							PORTB = 0x38;
							break;
					case 9: PORTD = 0x39;
							PORTB = 0x08;
							break;
				}				
				for(int k = 0 ; k < y; ++ k);
				PORTA = 0xF3;
				switch(i)
				{
					case 0: PORTD = 0x07;
							PORTB = 0x0E;
							break;
					case 1: PORTD = 0x06;
							PORTB = 0x06;
							break;
					case 2: PORTD = 0x0F;
							PORTB = 0x08;
							break;
					case 3: PORTD = 0x0F;
							PORTB = 0x0E;
							break;
					case 4: PORTD = 0x0E;
							PORTB = 0x06;
							break;
					case 5: PORTD = 0x09;
							PORTB = 0x0E;
							break;
					case 6: PORTD = 0x09;
							PORTB = 0x0E;
							break;
					case 7: PORTD = 0x07;
							PORTB = 0x06;
							break;
					case 8: PORTD = 0x0F;
							PORTB = 0x0E;
							break;
					case 9: PORTD = 0x0F;
							PORTB = 0x0E;
							break;
				}
				for(int k = 0 ; k < y; ++ k);
			}
        }
    }
}