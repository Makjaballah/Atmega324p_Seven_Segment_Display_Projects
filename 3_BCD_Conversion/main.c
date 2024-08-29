/*
 * Project_Name    :   BCD_Conversion
 * File_Name       :   main.c
 * Author          :   Mohamed Akram JABALLAH
 * Target          :   Atmega324p
*/


#include <avr/io.h>
#include <util/delay.h>



unsigned char BCD_Conversion (unsigned char x);

int main (void) {

	unsigned char Num;
	DDRA = 0xFF;

	for (;;) {
		
		for (Num = 0; Num < 100; Num++) {

			PORTA = BCD_Conversion (Num);
			_delay_ms (100);
		}

		return 0;
	}
}


unsigned char BCD_Conversion (unsigned char x) {

	unsigned char lsd, msd,res;
	lsd = x % 10;
	msd = x / 10;
	res = (msd << 4)| lsd;
	return res;
}





