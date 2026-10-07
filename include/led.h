// ! include/led.h

#ifndef LED_H
#define LED_H

#include <Arduino.h>

class Led
{
    private:
    uint8_t pinLed;
    bool stateLed = false;
    bool isBlink = false;

    public: 
    unsigned int lastBlinkTimeInMilliSeconds = 0;
    unsigned int timeToNextBlinkInMilleSeconds = 0;
    

    Led(uint8_t pin);
    Led(uint8_t pinLed,bool stateLed);

    void initLed();
    void update();

    void TurnOn();
    void TurnOff();

    void turnOnBlink(uint32_t timeToNextBlinkInMilleSeconds);
    void turnOffBlink();
    
    void changeState();

    uint8_t getPinLed();
    

    //TODO TurnOffBlink
    
};




#endif