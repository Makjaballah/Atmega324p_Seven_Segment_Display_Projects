/*
 * Project_Name    :   Two_Seven_Segment_Display
 * File_Name       :   main.c
 * Author          :   Mohamed Akram JABALLAH
 * Target          :   Atmega324p
*/


#include <avr/io.h>
#include <avr/delay.h>



int main (void) {

	DDRB  = 0x00;
	PORTB = 0xFF;
	DDRD  = 0xFF;
	PORTD = 0x00;

	uint8_t DataPort;

	while (1) {

		DataPort = PINB;
		if ((DataPort & 0x0F) > 0x09) DataPort &= 0xF0;
		if ((DataPort & 0xF0) > 0x90) DataPort &= 0x0F;

		PORTD = DataPort;
		_delay_ms (250);
	}

	return 0;
}
