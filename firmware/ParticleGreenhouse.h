#include "application.h"
#ifndef __PARTICLEGREENHOUSE_H__
#define __PARTICLEGREENHOUSE_H__

class ParticleGreenhouse
{
public:
	ParticleGreenhouse();
	~ParticleGreenhouse();
	void begin(void);
	void on(bool ledType);
	void off(bool ledType);
	void blinkLed(int time, int rep);
	double getAnalogMoisture();
	int getDigitalMoisture();
	int getPotMeter();
	void blinkBlueLed(int time, int rep);
	bool buttonCheck();
	void usePump(int time, int duty);
	void useRelay(float temp, int low, int high);
	
};

#endif