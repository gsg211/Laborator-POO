#define _CRT_SECURE_NO_WARNINGS 1
#include "calendarDate.h"
#include <ostream>
#include <ctime>
DateandTime::DateandTime(/* args */)
{
    reset();
}

void DateandTime::getSytemDateandTime()
{
    time_t timestamp;
    time(&timestamp);
    struct tm* timeinfo;
    timeinfo=localtime(&timestamp);
    int year=timeinfo->tm_year+1900;
    int month=timeinfo->tm_mon;
    int day=timeinfo->tm_mday;
    int hour=timeinfo->tm_hour;
    int minute=timeinfo->tm_min;
    int second=timeinfo->tm_sec;
}
void DateandTime::reset()
{
    int year=0;
    int month=0;
    int day=0;
    int hour=0;
    int minute=0;
    int second=0; 
}
const char* DateandTime::toString()
{
    sprintf(strTime,"%02d.%02d.%04d %02d.%02d.%02d",day,month,year,hour,minute,second);
    return strTime;
}