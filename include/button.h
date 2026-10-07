#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

class Button
{

    private:
    uint8_t pinButton;
    bool stateButton;
    bool lastButton;


    public:

    Button(uint8_t pinButton);
    void init();
    void update();
    bool pressed();
    bool release();

    


};




#endif