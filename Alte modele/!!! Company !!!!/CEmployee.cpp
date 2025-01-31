#include "CEmployee.h"



CEmployee::CEmployee(/* args */)
{
    m_szName=nullptr;
    m_iEmploymentCount++;
    m_iUniqueID=m_iEmploymentCount;
    m_iPosition=UNKNOWN;
    m_dbSalary=0;
}

CEmployee::~CEmployee()
{
    if(m_szName!=nullptr)
    {
        delete []m_szName;
        m_szName=nullptr;
    }
    m_iPosition=UNKNOWN;
    m_dbSalary=0;
}

CEmployee::CEmployee(char* name,int position,double salary)
{
    if(name!=nullptr)
    {
        m_szName=new char[strlen(name)+1];
        strcpy_s(m_szName,strlen(name)+1,name);
    }
    else
    {
        m_szName=nullptr;
    }
    m_iPosition=position;
    m_dbSalary=salary;

    m_iEmploymentCount++;
    m_iUniqueID=m_iEmploymentCount;
}
CEmployee::CEmployee(const CEmployee& c)
{
    if(c.m_szName!=nullptr)
    {
        m_szName=new char[strlen(c.m_szName)+1];
        strcpy_s(m_szName,strlen(c.m_szName)+1,c.m_szName);
    }
    else
    {
        m_szName=nullptr;
    }
    m_iPosition=c.m_iPosition;
    m_dbSalary=c.m_dbSalary;

    m_iEmploymentCount++;
    m_iUniqueID=m_iEmploymentCount;

}
void CEmployee::write()
{
}
void CEmployee::changePosition(int newPos)
{
    m_iPosition=newPos;
}
int CEmployee::getPosition()
{
    return m_iPosition;
}

char* CEmployee::getName()
{
    return m_szName;
}
void CEmployee::setName(char* newName)
{
    if(m_szName!=nullptr)
    {
        delete[] m_szName;
    }

    m_szName=new char[strlen(newName)+1];
    strcpy_s(m_szName,strlen(newName)+1,newName);
}


double CEmployee::getSalary()
{
    return m_dbSalary;
}
void CEmployee::setSalary(double newSalary)
{
    m_dbSalary=newSalary;
}

CEmployee& CEmployee::operator=(const CEmployee & c)
{
    if(this==&c)//prevents self assigment
    {
        return *this;
    }

    if(this->m_szName!=nullptr)
    {
        delete[] m_szName;
    }

    if(c.m_szName!=nullptr)
    {
        m_szName=new char[strlen(c.m_szName)+1];
        strcpy_s(m_szName,strlen(c.m_szName)+1,c.m_szName);
    }
    else
    {
        m_szName=nullptr;
    }
    m_iPosition=c.m_iPosition;
    m_dbSalary=c.m_dbSalary;

    return *this;
}

void CEmployee::print()
{
    

    if(m_szName!=nullptr)
    {
        cout<<"Name: "<<m_szName<<"\n";
    }
    else
    {
        cout<<"Name: UNAVAILABLE {NULLPTR}\n";
    }
    
    cout<<"Salary:"<<m_dbSalary<<"\n";
    cout<<"ID:"<<m_iUniqueID<<"\n";
    cout<<"Position:"<<m_iPosition<<"\n";
}

int CEmployee::getID()
{
    return m_iUniqueID;
}
