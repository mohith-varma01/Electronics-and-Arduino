#ifndef something_h
#define something_h

#include "Arduino.h"

class something{
public:
	something(int pin);
	void light();
private:
	int _pin;
};
#endif