/*
 * Project_Name    :   Three_Digits_BCD_conversion
 * File_Name       :   main.c
 * Author          :   Mohamed Akram JABALLAH
 * Target          :   Atmega324p
*/


#include <avr/io.h>
#include <util/delay.h>



unsigned char BCD_8bits (unsigned int number);
unsigned char  Get_Hundreds (unsigned int number);


int main (void) {

	unsigned int cnt;
	DDRA  = 0xFF;
	DDRC  = 0xFF;

	for (;;) {
		
		for (cnt = 0; cnt < 1000; cnt++) {
			PORTA = BCD_8bits (cnt);
			PORTC = Get_Hundreds (cnt);
			_delay_ms (500);
		}
	}

	return 0;
}


unsigned char BCD_8bits (unsigned int number) {

	unsigned char Tens, Units;
	Units = number % 10;
	Tens  = number / 10;
	Tens  = Tens % 10;
	return (Tens << 4) | Units;
}

unsigned char  Get_Hundreds (unsigned int number) {

	unsigned char Hund;
	Hund = number /100;
	return Hund;
}




