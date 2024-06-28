
#include <avr/io.h>

int main(void)
{
    DDRB = 0x00;
	DDRC = 0xFF;
	DDRD = 0xFF;
	unsigned char temp;
	
    while (1) 
    {
		temp = PINB % 2;
		
		if(temp == 0)
			PORTC = 'E';
		else
			PORTD = 'O';
    }
	return 0;
}

