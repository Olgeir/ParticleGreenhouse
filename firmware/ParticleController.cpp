#include "ParticleController.h"
#include "math.h"

// First, define the pins we are going to use.
uint8_t STATUS_LED = 5;
uint8_t BUTTON = 3;
uint8_t BLUE_LED = 7; 	// This one is the little blue LED on your board. On the Photon it is next to D7, and on the Core it is next to the USB jack.
uint8_t D_MOIST = 2;  	// Digital input from moisture sensor.
uint8_t A_MOIST = A2;  	// Analog input from moisture sensor.
uint8_t POTENTION = A1; 	// Analog potentionmeter.
uint8_t EXT_TEMP = A0; 	// External temperature measurements.
uint8_t ON_TEMP = 4;	// Onboard temperature measurements.
uint8_t MOTOR = A6;		// Control signal for external motor.
uint8_t RELAY = A5;		// Control signal for relay.
uint8_t SERVO = A4;		// Control signal for servo.

ParticleController::ParticleController(){
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

ParticleController::ParticleController(){
	// Nothing to destruct
}

void ParticleController::on(){
	digitalWrite(STATUS_LED, HIGH);
}

void ParticleController::off(){
	digitalWrite(STATUS_LED, LOW);
}

void ParticleController::blinkLed(int time){
	on();
	delay(time/2);
	off();
	delay(time/2);
}













