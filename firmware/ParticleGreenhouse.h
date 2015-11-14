#ifndef __PARTICLEGREENHOUSE_H__
#define __PARTICLEGREENHOUSE_H__ 

#include "Arduino.h"

class ParticleGreenhouse
{
public:
	ParticleGreenhouse();
	~ParticleGreenhouse();
	void on();
	void off();
	void blinkLed(int time);
	
};

#endif