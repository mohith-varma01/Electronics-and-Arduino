#include "Arduino.h"
#include "something.h"

something::something(int pin)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
}
void something :: light(){

digitalWrite(_pin, HIGH);
delay(800);

digitalWrite(_pin, HIGH);
delay(1000);

digitalWrite(_pin, HIGH);
delay(100);

digitalWrite(_pin, HIGH);
delay(500);

digitalWrite(_pin, HIGH);
delay(2000);
}