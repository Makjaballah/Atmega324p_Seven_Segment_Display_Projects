/*
 * Project_Name    :   Seven_Segment_Display
 * File_Name       :   main.c
 * Author          :   Mohamed Akram JABALLAH
 * Target          :   Atmega324p
*/


#include <avr/io.h>
#include <util/delay.h>



int main (void) {

	DDRB  = 0x00;
	PORTB = 0xFF;
	DDRD  = 0xFF;
	PORTD = 0x00;

	while (1) {

		switch (PINB){

		case 1: PORTD = 1; break;
		case 2: PORTD = 2; break;
		case 3: PORTD = 3; break;
		case 4: PORTD = 4; break;
		case 5: PORTD = 5; break;
		case 6: PORTD = 6; break;
		case 7: PORTD = 7; break;
		case 8: PORTD = 8; break;
		case 9: PORTD = 9; break;
		default: PORTD = 0;
		}
		_delay_ms (250);
	}

	return 0;
}
