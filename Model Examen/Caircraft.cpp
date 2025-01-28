#include "Caircraft.h"
#include <cstring>
#include <iostream>

using namespace std;

CAircraft::CAircraft(/* args */)
{
    m_type=0;
    m_owner=nullptr;
    m_counter++;
}
CAircraft::CAircraft(char* owner, int type)
{
    m_counter++;    
    if(owner!=nullptr)
    {
        this->m_owner=new char[strlen(owner)+1];
        strcpy_s(this->m_owner,strlen(owner)+1,owner);
    }
    else
    {
        this->m_owner=nullptr;
    }
    this->m_type=type;
}
CAircraft::~CAircraft()
{
    cout<<"\nbase destructor called\n";
    m_counter--;
    if(m_owner!=nullptr)
    {
        delete [] m_owner;
        m_owner=nullptr;
    }
    m_type=0;
}
CAircraft::CAircraft(const CAircraft& c)
{
    m_counter++;    
    if(c.m_owner!=nullptr)
    {
        this->m_owner=new char[strlen(c.m_owner)+1];
        strcpy_s(this->m_owner,strlen(c.m_owner)+1,c.m_owner);
    }
    else
    {
        this->m_owner=nullptr;
    }
    this->m_type=c.m_type;
}

void CAircraft::Read()
{
    cout<<"\n\nOwner: ";
    
    char buffer[100];
    
    cin.get(buffer,100);
    

    if(this->m_owner!=nullptr)
    {
        delete[ ] m_owner;
    }
    m_owner=new char[strlen(buffer)+1];
    strcpy_s(m_owner,strlen(buffer)+1,buffer);

    cout<<"Type: ";
    cin>>m_type;
    cin.ignore(1,'\n');
}

void CAircraft::Write()
{
    if(m_owner==nullptr)
    {
        cout<<"\n\nOwner: N/A\n";
    }
    else
    {
        cout<<"\n\nOwner: "<<m_owner<<"\n";
    }
    
    cout<<"Type: "<<m_type;
}

int CAircraft::getCounter()
{
    return m_counter;
}

CAircraft& CAircraft::operator=(const CAircraft &c)
{
    if(this!=&c)
    {
        if(this->m_owner!=nullptr)
        {
            delete[] this->m_owner;
        }
        if(c.m_owner!= nullptr)
        {
            int len=strlen(c.m_owner)+1;
            this->m_owner=new char[len];
            strcpy_s(this->m_owner,len,c.m_owner);
        }
        else
        {
            this->m_owner=nullptr;
        }
        this->m_type=c.m_type;
    }
    return *this;
}
