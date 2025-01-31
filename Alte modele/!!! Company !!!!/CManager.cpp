#include "CManager.h"

CManager::CManager(/* args */):CEmployee()
{
    m_szTask=nullptr;
}

CManager::CManager(char* name,char* task,int position,double salary):CEmployee(name,position,salary)
{
    if(task!=nullptr)
    {
        m_szTask=new char[strlen(task)+1];
        strcpy_s(m_szTask,strlen(task)+1,task);
    }
    else
    {
        this->m_szTask=nullptr;
    }
}
CManager::CManager(const CManager &c):CEmployee(c)
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
CManager::~CManager()
{
    if(m_szTask!=nullptr)
    {
        delete [] m_szTask;
        m_szTask=nullptr;
    }
}
void CManager::changeTask(char* newTask)
{

    if(m_szTask!=nullptr)
    {
        delete [] m_szTask;
    }
    if(newTask!=nullptr)
    {
        m_szTask=new char[strlen(newTask)+1];
        strcpy_s(m_szTask,strlen(newTask)+1,newTask);
    }
    else
    {
        this->m_szTask=nullptr;
    }
}
CManager& CManager::operator=(const CManager &c)
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
void CManager::write()
{
    cout<<"\n<---Printing Manager--->\n";
    CEmployee::print();
    if(m_szTask!=nullptr)
    {
        cout<<"Task: "<<m_szTask<<"\n";
    }
    else
    {
        cout<<"Task: UNAVAILABLE {NULLPTR}\n";
    }
}