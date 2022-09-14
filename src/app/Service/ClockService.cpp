#include "ClockService.h"

ClockService::ClockService(ClockView * View)
{
    curTime = 0;
    clockView = View;
}

ClockService::~ClockService()
{

}

void ClockService::updateEvent()
{
    curTime = time(NULL);   //리눅스 시간 받아옴
    struct tm *timeDate = localtime(&curTime);
    clockView -> updateTime(timeDate); //ClockView 넘기기
}