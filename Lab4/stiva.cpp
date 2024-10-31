#include "stiva.h"
#include <iostream>

Stiva::Stiva()
{
    head=nullptr;
    int data=0;
}


void Stiva::push(int nr)
{   
    Stiva * s=new Stiva;
    s->data=nr;
    s->head=head;
    head=s;
}

int Stiva::pop()
{   
    int ret;
    Stiva * s=head;
    head=head->head;
    ret=s->data;
    delete s;
    return ret;
}

int Stiva::top()
{
    if(head!=nullptr)
    {
        return head->data;
    }
    return 0;
}

void Stiva::print()
{   
    while(head!=nullptr)
    {
        std::cout<<head->data<<" ";
        head=head->head;
    }
    std::cout<<"\n";
}

Stiva::~Stiva()
{
    
}
