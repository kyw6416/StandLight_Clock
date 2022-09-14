#ifndef CLOCKCHECK_H
#define CLOCKCHECK_H

#include <time.h>

class ClockCheck
{
private:
    time_t prevSec; //과거시간

public:
    ClockCheck();
    ~ClockCheck();
    bool isUpdate();    //업데이트 되었는지 아닌지 확인

};

#endif