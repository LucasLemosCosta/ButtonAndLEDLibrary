#include <Arduino.h>
#include <led.h>
#include <button.h>



Led ledRed(4);
Led ledYellow(6);
Led ledGreen(15);

Button buttonBoot(0);





void setup()
{
    Serial.begin(115200);

    buttonBoot.init();

    ledRed.initLed();
    ledRed.turnOnBlink(1000);

    ledYellow.initLed();
    ledYellow.turnOnBlink(1000);

    ledGreen.initLed();
    ledGreen.turnOnBlink(2000);

}

void loop()
{
    buttonBoot.update();

    ledRed.update();
    ledYellow.update();
    ledGreen.update();

    if(buttonBoot.pressed())
    {
        Serial.print("Pressed");
    }
    if(buttonBoot.release())
    {
        Serial.print("Release");
    }
}
