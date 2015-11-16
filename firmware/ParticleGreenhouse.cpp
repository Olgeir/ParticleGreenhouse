#include "ParticleGreenhouse.h"
#include "math.h"

// First, define the pins we are going to use.
uint8_t STATUS_LED = 5;
uint8_t BUTTON = 3;
uint8_t BLUE_LED = 7; 	// This one is the little blue LED on your board. On the Photon it is next to D7, and on the Core it is next to the USB jack.
uint8_t D_MOIST = 2;  	// Digital input from moisture sensor.
uint8_t A_MOIST = 2;  	// Analog input from moisture sensor.	(A2)
uint8_t POTENTION = 1; 	// Analog potentionmeter.				(A1)
uint8_t PUMP = 6;		// Control signal for external motor.	(A6)
uint8_t RELAY = 5;		// Control signal for relay.			(A5)


ParticleGreenhouse::ParticleGreenhouse(){

}
void ParticleGreenhouse::begin(){
	pinMode(STATUS_LED, OUTPUT);
	pinMode(BUTTON, INPUT);
	pinMode(BLUE_LED, OUTPUT);
	pinMode(PUMP, OUTPUT);
	pinMode(RELAY, OUTPUT);
	pinMode(D_MOIST, INPUT);
	pinMode(A_MOIST, INPUT);
	pinMode(POTENTION, INPUT);	
}

ParticleGreenhouse::~ParticleGreenhouse(){
	// Nothing to destruct
}

void ParticleGreenhouse::on(bool ledType){
	if (ledType == TRUE)
	{
		digitalWrite(STATUS_LED, HIGH);
	}
	if (ledType == FALSE)
	{
		digitalWrite(BLUE_LED, HIGH);
	}
	
}

void ParticleGreenhouse::off(bool ledType){
	if (ledType == TRUE)
	{
		digitalWrite(STATUS_LED, LOW);
	}
	if (ledType == FALSE)
	{
		digitalWrite(BLUE_LED, LOW);
	}
}

void ParticleGreenhouse::blinkLed(int time, int rep){
	for (int i = 0; i < rep; ++i)
	{
		on(TRUE);
		delay(time/2);
		off(TRUE);
		delay(time/2);
	}

}

double ParticleGreenhouse::getAnalogMoisture(){
	double A_moisture = analogRead(A_MOIST);
	return A_moisture;
}

int ParticleGreenhouse::getDigitalMoisture(){
	int D_moisture = digitalRead(D_MOIST);
	return D_moisture;
}

int ParticleGreenhouse::getPotMeter(){
	int potMeter = analogRead(POTENTION);
	return potMeter;
}

void ParticleGreenhouse::blinkBlueLed(int time, int rep){
	for (int i = 0; i < rep; ++i)
	{
		on(FALSE);
		delay(time/2);
		off(FALSE);
		delay(time/2);
	}
}

bool ParticleGreenhouse::buttonCheck(){
	bool state = digitalRead(BUTTON);
	return state;
}

void ParticleGreenhouse::usePump(int time, int duty){
	analogWrite(PUMP,duty);
	delay(time);
	analogWrite(PUMP,0);
}
void ParticleGreenhouse::useRelay(int time){
	digitalWrite(RELAY,HIGH);
	delay(time);
	digitalWrite(RELAY,LOW);
}





