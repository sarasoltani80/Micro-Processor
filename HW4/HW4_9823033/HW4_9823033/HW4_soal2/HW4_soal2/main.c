
#include <avr/io.h>


int main(void)
{
	void delay100ms(void)
	{
		unsigned int i;
		for(i=0 ; i<42150 ; i++);
	}
	
	DDRB = 0xFF;
    while (1) 
    {
		PORTB = PORTB | 0b00010000;
		delay100ms();
		PORTB = PORTB & 0b11101111;
		delay100ms();
    }
	return 0;
}

