#include "ClockView.h"

ClockView::ClockView(LCD *lcd)
{
    this -> lcd = lcd;
}

ClockView::~ClockView()
{

}

void ClockView::updateTime(struct tm *timeData)
{
    char buff2[30];
    sprintf(buff2, "time : %02d:%02d:%02d", 
    timeData -> tm_hour,
    timeData -> tm_min,
    timeData -> tm_sec
    );
    lcd -> WriteStringXY(1,0,buff2);
}
