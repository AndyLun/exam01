#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main() {
	uLCD.printf("ID: 107000270");
	uLCD.line(25, 25, 100, 25, WHITE);
	uLCD.line(100, 25, 100, 100, WHITE);
	uLCD.line(25, 25, 25, 100, WHITE);
	uLCD.line(25, 100, 100, 100, WHITE);
	wait(30);
}