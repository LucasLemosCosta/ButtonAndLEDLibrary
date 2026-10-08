#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

class Button
{

    private:
    uint8_t pinButton;

    bool currentStateButton;
    bool lastStateButton = true;
    bool isRelease = false;
    bool isPressed = false;

    bool lastAction = true;

    uint32_t timeOfLastChange = 0;
    uint32_t timeDebounceMs = 20;




    public:

    Button(uint8_t pinButton);
    void init();
    void update();
    bool pressed();
    bool release();

    


};




#endif