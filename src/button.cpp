#include <button.h>

Button::Button(uint8_t pinButton)
{
    this->pinButton = pinButton;
}

void Button::init()
{
    pinMode(pinButton, INPUT_PULLUP);

    currentStateButton = digitalRead(pinButton);
    lastStateButton = currentStateButton;
    lastAction = currentStateButton;

}

void Button::update()
{
    isPressed = false;
    isRelease = false;

    currentStateButton = digitalRead(pinButton);

    if(currentStateButton != lastStateButton)
    {
        lastStateButton = currentStateButton;
        timeOfLastChange = millis();
    }

    const uint32_t timeAfterChange = millis() - timeOfLastChange;
    if(timeAfterChange > timeDebounceMs)
    {
        if(lastAction != currentStateButton)
        {
            lastAction = currentStateButton;

            const bool botaoPressionado = !currentStateButton;

            botaoPressionado?  isPressed = true : isRelease = true;
        }
    }
}

bool Button::pressed()
{
  return isPressed;
}

bool Button::release()
{
  return isRelease;
}