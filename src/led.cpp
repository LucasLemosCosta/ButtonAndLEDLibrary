//! src/led.cpp
#include <led.h>

Led::Led(uint8_t pinLed)
{
    this->pinLed = pinLed;
}

Led::Led(uint8_t pinLed, bool stateLed)
{
    this->pinLed = pinLed;
    this->stateLed = stateLed;
}

void Led::initLed()
{
    pinMode(pinLed, OUTPUT);
    digitalWrite(pinLed, stateLed);
    lastBlinkTimeInMilliSeconds = millis();
}

void Led::update()
{
    digitalWrite(pinLed, stateLed);
    if (millis() >= lastBlinkTimeInMilliSeconds + timeToNextBlinkInMilleSeconds && isBlink)
    {
        lastBlinkTimeInMilliSeconds = millis();
        changeState();
    }
}

void Led::TurnOn()
{
    stateLed = HIGH;
}

void Led::TurnOff()
{
    stateLed = LOW;
}

void Led::changeState()
{
    stateLed = !stateLed;
}

void Led::turnOnBlink(uint32_t timeToNextBlinkInMilleSeconds)
{
    isBlink = true;
    this->timeToNextBlinkInMilleSeconds = timeToNextBlinkInMilleSeconds;
}

void Led::turnOffBlink()
{
    isBlink = false;
    stateLed = false;
}

uint8_t Led::getPinLed()
{
    return pinLed;
}
