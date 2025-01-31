#pragma once
#include "CEmployee.h"

class CProgrammer: public CEmployee
{
private:
    char* m_szTask;
public:
    CProgrammer();
    CProgrammer(char* name,char* language,int position=JUNIOR,double salary=1400);
    CProgrammer(const CProgrammer &c);
    ~CProgrammer();

    void changeTask(char* newLanguage);

    CProgrammer& operator=(const CProgrammer &c);

    void write();


};

