#include <Arduino.h>

#define FAN_OFF 0
#define FAN_ON 1

class Fan {
  private:
    int pin;
    byte state;

  public:
    Fan(int pin);
    void init();
    void on();
    void off();
    byte getState();
};
