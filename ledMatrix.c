/*
 * ledMatrix.c
 *
 * Created: 6/20/2018 5:10:58 PM
 *  Author: manth
 */ 


#include <avr/io.h>

int main(void)
{
	DDRC = 0xff;
	DDRD = 0xff;
	int A[7] = {14, 31, 27, 31, 31, 27, 27};
	long long int x = 500;
    while(1)
    {
		int mask = 1;
        for (int i = 0; i < 7; ++ i)
        {
			PORTC = ~mask;
			mask = mask << 1;
			PORTD = A[i];
			for (long long int j = 0; j < x; ++ j);
        }
    }
	return 1;
}