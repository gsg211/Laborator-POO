#pragma once

#include "CEmployee.h"
#include "CProgrammer.h"
#include "CManager.h"
 //block size
#define COMPANY_SIZE 4


class CCompany
{
private:
    CEmployee **m_employees;
    int size;

public:
    CCompany();
    ~CCompany();


    int Hire(CEmployee *employee);

    int Fire(int uniqueID);

    void display();

    CEmployee* getEmployee(int uniqueID);
};