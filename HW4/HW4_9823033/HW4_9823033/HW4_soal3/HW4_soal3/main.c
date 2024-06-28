
#include <util/delay.h>
#include <avr/io.h>


int main(void)
{
int d;
	void delay_ms(int d)
	{
		_delay_ms(d);	
	}
	
   	DDRB = 0xFF;
   	while (1)
   	{
	   	PORTB = PORTB | 0b00010000;
	   	delay_ms(100);
	   	PORTB = PORTB & 0b11101111;
	   	delay_ms(100);
   	}
   	return 0;
}

