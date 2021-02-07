#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include "notes.h"

#define BUZZ 0

void setup(void) 
{
        wiringPiSetup(); 
        pinMode(BUZZ, OUTPUT);
        digitalWrite(BUZZ, LOW);
        delay(30); 
}
 
int main(void) 
{
        setup(); // init setup
	B4(.5);
	B3(.5);
	C4(.5);
	D4(.5);
	D3(.5);
	C4(.5);
	B4(.5);
	A4(.5);
	G4(.5);
	G3(.5);
	A4(.5);
	B4(.5);
	B3(.5);
	delay(250);
	A4(.5);
	A3(.5);
	delay(250);
	B4(.5);
	B3(.5);
	C4(.5);
	D4(.5);
	D3(.5);
	C4(.5);
	B4(.5);
	A4(.5);
	G4(.5);
	G3(.5);
	A4(.5);
	B4(.5);
	A4(.5);
	delay(250);
	G4(.5);
	G3(.5);
	delay(250);
	A4(.5);
	A3(.5);
	B4(.5);
	G4(.5);
	A4(.5);
	B4(.5);
	C4(.5);
	B4(.5);
	G4(.5);
	A4(.5);
	B4(.5);
	C4(.5);
	B4(.5);
	A4(.5);
	G4(.5);
	A4(.5);
	D4(.5);
	delay(250);
	B4(.5);
	B3(.5);
	C4(.5);
	D4(.5);
	D3(.5);
	C4(.5);
	B4(.5);
	A4(.5);
	G4(.5);
	G3(.5);
	A4(.5);
	B4(.5);
	A4(.5);
	delay(250);
	G4(.5);
	G3(.5);
	delay(250);

}
