#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);
PwmOut pwm(D6);
Timer timSweep;
float duty = 0.0;
int increasing = 1;

int main() {
	uLCD.printf("ID: 107000270");
	uLCD.line(25, 25, 100, 25, WHITE);
	uLCD.line(100, 25, 100, 100, WHITE);
	uLCD.line(25, 25, 25, 100, WHITE);
	uLCD.line(25, 100, 100, 100, WHITE);
	
	pwm.period(0.001);
	timSweep.start();

	while(true) {
		pwm = duty;
		if(timSweep > 0.1) {
			timSweep.reset();

			if(increasing) {
				duty += 0.1;
				if(duty == 1) increasing = 0;
			} else {
				duty -= 0.1;
				if(duty == 0) increasing = 1;
			}
		}

		
	}
}