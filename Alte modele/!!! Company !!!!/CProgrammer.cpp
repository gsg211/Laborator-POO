#include "Cprogrammer.h"

CProgrammer::CProgrammer(/* args */):CEmployee()
{
    m_szTask=nullptr;
}

CProgrammer::CProgrammer(char* name,char* language,int position,double salary):CEmployee(name,position,salary)
{
    if(language!=nullptr)
    {
        m_szTask=new char[strlen(language)+1];
        strcpy_s(m_szTask,strlen(language)+1,language);
    }
    else
    {
        this->m_szTask=nullptr;
    }
}
CProgrammer::CProgrammer(const CProgrammer &c):CEmployee(c)
{
    if(c.m_szTask!=nullptr)
    {
        m_szTask=new char[strlen(c.m_szTask)+1];
        strcpy_s(m_szTask,strlen(c.m_szTask)+1,c.m_szTask);
    }
    else
    {
        this->m_szTask=nullptr;
    }
}
CProgrammer::~CProgrammer()
{
    if(m_szTask!=nullptr)
    {
        delete [] m_szTask;
        m_szTask=nullptr;
    }
}
void CProgrammer::changeTask(char* newLanguage)
{

    if(m_szTask!=nullptr)
    {
        delete [] m_szTask;
    }
    if(newLanguage!=nullptr)
    {
        m_szTask=new char[strlen(newLanguage)+1];
        strcpy_s(m_szTask,strlen(newLanguage)+1,newLanguage);
    }
    else
    {
        this->m_szTask=nullptr;
    }
}
CProgrammer& CProgrammer::operator=(const CProgrammer &c)
{
    if(this==&c)
    {
        return *this;
    }
    CEmployee::operator=(c);

    if(m_szTask!=nullptr)
    {
        delete [] m_szTask;
    }

    if(c.m_szTask!=nullptr)
    {
        m_szTask=new char[strlen(c.m_szTask)+1];
        strcpy_s(m_szTask,strlen(c.m_szTask)+1,c.m_szTask);
    }
    else
    {
        this->m_szTask=nullptr;
    }
    return *this;
}
void CProgrammer::write()
{
    cout<<"\n<---Printing Programmer--->\n";
    CEmployee::print();
    if(m_szTask!=nullptr)
    {
        cout<<"Language: "<<m_szTask<<"\n";
    }
    else
    {
        cout<<"Language: UNAVAILABLE {NULLPTR}\n";
    }
}