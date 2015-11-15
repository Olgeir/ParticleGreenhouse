#include "application.h"
#ifndef __PARTICLEGREENHOUSE_H__
#define __PARTICLEGREENHOUSE_H__

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