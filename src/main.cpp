#include <Arduino.h>
#include <led.h>


Led ledRed(4);
Led ledYellow(6);
Led ledGreen(15);



void setup()
{
    ledRed.initLed();
    ledRed.turnOnBlink(1000);

    ledYellow.initLed();
    ledYellow.turnOnBlink(1000);

    ledGreen.initLed();
    ledGreen.turnOnBlink(2000);
}

void loop()
{
    ledRed.update();
    ledYellow.update();
    ledGreen.update();
}
