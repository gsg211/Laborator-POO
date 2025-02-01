#pragma once

class DateandTime
{
private:
    char strTime[64];
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
public:
    DateandTime(/* args */);
    void getSytemDateandTime();
    void reset();
    const char* toString();
};

