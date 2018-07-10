#include <stdlib.h>
#include <avr/io.h>



int main(void)
{
DDRB=0xFF;      //Ausgang oder Einagang//
PORTB=0b01010101;    //LED ein oder aus//

uint8_t var=0;
uint16_t x=0;

DDRC=0b11000000

	
	while(1)
	{ 
		var++;
		PORTB=var;
		for(x=0; x<60000; x++);
		
	} //end while
}//end of main




