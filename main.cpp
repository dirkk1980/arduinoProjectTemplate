/*
 * main.cpp
 *
 *  Created on: Mar 5, 2010
 *      Author: ssmethurst
 */
#include <Arduino.h>

int led = 12;

// The setup() method runs once, when the sketch starts
void setup() {
	// initialize the digital pin as an output:
	pinMode(led, OUTPUT);
}

// the loop() method runs over and over again,
// as long as the Arduino has power

void loop() {
	digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
	delay(1000);          // wait for a second               // wait for a second
	digitalWrite(led, LOW);   // turn the LED on (HIGH is the voltage level)
	delay(1000);          // wait for a second               // wait for a second
}

int main(void) {

	/* Must call init for arduino to work properly */
	init();
	setup();

	for (;;) {
		loop();
	} // end for
} // end main
