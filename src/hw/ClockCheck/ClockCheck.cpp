#include "ClockCheck.h"

ClockCheck::ClockCheck()
{
    prevSec = 0;    //초기화
}

ClockCheck::~ClockCheck()
{

}

bool ClockCheck::isUpdate()
{
    time_t curSec = time(NULL); //현재시간 읽어옴
    if (curSec == prevSec)
    {
        return false;
    }
    else
    {
        prevSec = curSec; //없으면 계속 true
        return true;
    }
    return false;
}