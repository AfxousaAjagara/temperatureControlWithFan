#include "Fan.h"

Fan::Fan(int pin) {
  // Use 'this->' to make the difference between the
  // 'pin' attribute of the class and the 
  // local variable 'pin' created from the parameter.
  this->pin = pin;
  init();
}
void Fan::init() {
  pinMode(pin, OUTPUT);
  // Always try to avoid duplicate code.
  // Instead of writing digitalWrite(pin, LOW) here,
  // call the function off() which already does that
  off();
  state = FAN_OFF;
}
void Fan::on() {
  digitalWrite(pin, HIGH);
  state = FAN_ON;
}
void Fan::off() {
  digitalWrite(pin, LOW);
  state = FAN_OFF;
}

byte Fan::getState() {
  return state;
}
