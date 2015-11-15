// This #include statement was automatically added by the Particle IDE.
#include "ParticleGreenhouse/ParticleGreenhouse.h"



ParticleGreenhouse control;
//Servo myServo;

//int SERVOPIN = A4;		// Control signal for servo.
void setup() {

}

void loop() {
    if(1000 > control.getPotMeter()){
        if(control.buttonCheck()){
            control.blinkLed(2000,1);
        }
    }
 }