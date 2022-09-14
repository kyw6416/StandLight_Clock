#ifndef CLOCKSERVICE_H
#define CLOCKSERVICE_H

#include <time.h>
#include "ClockView.h"

class ClockService
{
private:
    time_t curTime;
    ClockView * clockView;

public:
    ClockService(ClockView * View);
    ~ClockService();
    void updateEvent();     //1초 간격으로 clockView



};

#endif