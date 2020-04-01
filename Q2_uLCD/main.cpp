#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main() {
	uLCD.printf("ID: 107000270");
	uLCD.line(15, 15, 60, 15, WHITE);
	uLCD.line(60, 15, 60, 60, WHITE);
	uLCD.line(15, 15, 15, 60, WHITE);
	uLCD.line(15, 60, 60, 60, WHITE);
	wait(30);
}