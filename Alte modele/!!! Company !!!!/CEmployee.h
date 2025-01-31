#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class CEmployee
{
public:
    enum PositionId{UNKNOWN=0,ENTRY_LEVEL,JUNIOR,TEAM_LEADER,REGIONAL,CEO};

private:
    char* m_szName;
    double m_dbSalary;
    int m_iUniqueID;
    static int m_iEmploymentCount;

public:
    int m_iPosition;
    void print();

public:
    CEmployee(/* args */);
    CEmployee(char* name,int position=JUNIOR,double salary=1400);
    CEmployee(const CEmployee& c);

    virtual ~CEmployee();

    virtual void write()=0;;

    void changePosition(int newPos);
    int getPosition();

    char* getName();
    void setName(char* newName);

    double getSalary();
    void setSalary(double newSalary);

    int getID();


    CEmployee& operator=(const CEmployee & c);


};

