#include <avr/io.h>

int main(void)
{
	DDRA = 0xff;
	DDRB = 0xff;
	DDRC = 0xff;
	DDRD = 0xff;
	short int name[67] = { 3, 127, 0, 123, 119 , 111,  0, 127, 126, 126, 0 ,126,  126, 127, 0, 119, 119, 119, 0, 127, 3, 117, 118, 117,  3, 127, 0, 123, 119, 111, 0, 127, 127, 127 ,127, 127, 127, 127, 127, 127 ,127, 127, 127, 127, 127, 127, 127, 127, 127, 127};
	int x = 100;
	int y = 50;
	
	while(1){
    
	for (int j = 0 ; j < 35; ++ j)
    {
	    for (int k = 0 ; k < x ; ++ k)
	    {
		PORTA = 0b00010000;
		PORTD = name[j];
		for (int i = 0 ; i < y ; ++ i);
		PORTA = 0b00001000;
		PORTD = name[j + 1];
		for (int i = 0 ; i < y ; ++ i);
		PORTA = 0b00000100;
		PORTD = name[j + 2];
		for (int i = 0 ; i < y ; ++ i);
		PORTA = 0b00000010;
		PORTD = name[j + 3];
		for (int i = 0 ; i < y ; ++ i);
		PORTA = 0b00000001;
		PORTD = name[j + 4];
		for (int i = 0 ; i < y ; ++ i);
		PORTB = 0b00010000;
		PORTC = name[j + 5];
		for (int i = 0 ; i < y ; ++ i);
		PORTB = 0b00001000;
		PORTC = name[j + 6];
		for (int i = 0 ; i < y ; ++ i);
		PORTB = 0b00000100;
		PORTC = name[j + 7];
		for (int i = 0 ; i < y ; ++ i);
		PORTB = 0b00000010;
		PORTC = name[j + 8];
		for (int i = 0 ; i < y ; ++ i);
		PORTB = 0b00000001;
		PORTC = name[j + 9];
		for (int i = 0 ; i < y ; ++ i);
		}	
	}
}		
	return 1;
} 
   