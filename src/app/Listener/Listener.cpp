#include "Listener.h"

Listener::Listener(Button *button, Controller *control, ClockCheck *clock)
{
    powerButton = button;
    controller = control;
    clockCheck = clock;
}

Listener::~Listener()
{
}

void Listener::checkEvent()
{
    if (powerButton->getState() == RELEASE_ACTIVE)
    {
        controller->updateEvent("modeButton");
    }
    //1초가 되면 이벤트 발생 -> controller로 넘어줌
    if (clockCheck -> isUpdate())
    {
        controller -> updateEvent("clockUpdate");
    }
}