#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main() {
	uLCD.printf("ID: 107000270");
	uLCD.line(5, 5, 10, 5, WHITE);
	wait(30);
}