#include "ParticleGreenhouse.h"
// First, define the pins we are going to use.
const uint8_t STATUS_LED = D5;
const uint8_t BUTTON = D3;
const uint8_t BLUE_LED = D7; 	// This one is the little blue LED on your board. On the Photon it is next to D7, and on the Core it is next to the USB jack.
const uint8_t D_MOIST = D2;  	// Digital input from moisture sensor.
const uint8_t A_MOIST = A2;  	// Analog input from moisture sensor.
const uint8_t POTENTION = A1; 	// Analog potentionmeter.
const uint8_t EXT_TEMP = A0; 	// External temperature measurements.
const uint8_t ON_TEMP = D4;	// Onboard temperature measurements.
const uint8_t MOTOR = A6;		// Control signal for external motor.
const uint8_t RELAY = A5;		// Control signal for relay.
const uint8_t SERVO = A4;		// Control signal for servo.

ParticleGreenhouse::ParticleGreenhouse(){
	pinMode(STATUS_LED, OUTPUT);
	pinMode(BUTTON, OUTPUT);
	pinMode(BLUE_LED, OUTPUT);
	pinMode(MOTOR, OUTPUT);
	pinMode(RELAY, OUTPUT);
	pinMode(SERVO, OUTPUT);
	pinMode(D_MOIST, INPUT);
	pinMode(A_MOIST, INPUT);
	pinMode(POTENTION, INPUT);
	pinMode(EXT_TEMP, INPUT);
	pinMode(ON_TEMP, INPUT);

}

ParticleGreenhouse::~ParticleGreenhouse(){
	// Nothing to destruct
}

void ParticleGreenhouse::on(){
	digitalWrite(STATUS_LED, HIGH);
}

void ParticleGreenhouse::off(){
	digitalWrite(STATUS_LED, LOW);
}

void ParticleGreenhouse::blinkLed(int time){
	on();
	delay(time/2);
	off();
	delay(time/2);
}













