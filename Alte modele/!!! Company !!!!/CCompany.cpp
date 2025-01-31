#include "CCompany.h"
#include <stdio.h>
CCompany::CCompany()
{   
    m_employees=new CEmployee*[COMPANY_SIZE];
    size=COMPANY_SIZE;
    for(int i=0;i<COMPANY_SIZE;i++)
    {
        m_employees[i]=nullptr;
    }
}

CCompany::~CCompany()
{   
    for(int i=0;i<size;i++)
    {
        if(m_employees[i]!=nullptr)
        {
            delete m_employees[i];
        }
    }
    delete []m_employees;
}

int CCompany::Hire(CEmployee *employee)
{
    for(int i=0;i<size;i++)
    {
        if(m_employees[i]==nullptr)
        {
            m_employees[i]=employee;
            return employee->getID();
        }
    }

    CEmployee **temp=new CEmployee*[size+COMPANY_SIZE];
    for(int i=0;i<size;i++)
    {
        temp[i]=m_employees[i];
    }
    for(int i=size;i<size+COMPANY_SIZE;i++)
    {
        temp[i]=nullptr;
    }
    free(m_employees); //fara destructor
    m_employees=temp;
    size=COMPANY_SIZE+size;

    return -1;

}


int CCompany::Fire(int uniqueID)
{
    for(int i=0;i<size;i++)
    {
        if(m_employees[i]!=nullptr)
        {
            if(m_employees[i]->getID()==uniqueID)
            {
                delete m_employees[i];
                m_employees[i]=nullptr;
                return 0;
            }
        }
        
    }
    return -1;
}


void CCompany::display()
{
    for(int i=0;i<size;i++)
    {
        if(m_employees[i]!=nullptr)
        {
            m_employees[i]->write();
        }
        
    }
}


CEmployee* CCompany::getEmployee(int uniqueID)
{
    for(int i=0;i<size;i++)
    {
        if(m_employees[i]!=nullptr)
        {
            if(m_employees[i]->getID()==uniqueID)
            {
                return m_employees[i];
            }
        }
        
    }
    return nullptr;
}
