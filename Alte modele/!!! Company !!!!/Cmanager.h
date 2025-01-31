#pragma once
#include "CEmployee.h"

class CManager: public CEmployee
{
private:
    char* m_szTask;
public:
    CManager();
    CManager(char* name,char* task,int position=JUNIOR,double salary=1400);
    CManager(const CManager &c);
    ~CManager();

    void changeTask(char* newTask);

    CManager& operator=(const CManager &c);

    void write();


};

