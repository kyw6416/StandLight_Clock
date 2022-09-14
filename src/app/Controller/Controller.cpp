#include "Controller.h"

Controller::Controller(Service *serv, ClockService *clockServ)
{
    service = serv;
    clockService = clockServ;
    lightState = LIGHT_OFF;
}

Controller::~Controller()
{
}

void Controller::updateEvent(std::string strBtn)
{
    //버튼의 종류
    if (strBtn == "modeButton")
    {
        service -> updateState("modeButton");
    }

    //clock이벤트가 오면 clock sevice에 분배
    if (strBtn == "clockUpdate")
    {
        clockService -> updateEvent();
    }

}