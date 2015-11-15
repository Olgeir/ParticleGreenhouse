#include "application.h"
#ifndef __PARTICLECONTROLLER_H__
#define __PARTICLECONTROLLER_H__

class ParticleController
{
public:
	ParticleController();
	~ParticleController();
	void on();
	void off();
	void blinkLed(int time);
	
};

#endif