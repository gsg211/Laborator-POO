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
     year=timeinfo->tm_year+1900;
     month=timeinfo->tm_mon;
     day=timeinfo->tm_mday;
     hour=timeinfo->tm_hour;
     minute=timeinfo->tm_min;
     second=timeinfo->tm_sec;
}
void DateandTime::reset()
{
     year=0;
     month=0;
     day=0;
     hour=0;
     minute=0;
     second=0; 
}
const char* DateandTime::toString()
{
    sprintf(strTime,"%02d.%02d.%04d %02d.%02d.%02d",day,month,year,hour,minute,second);
    return strTime;
}