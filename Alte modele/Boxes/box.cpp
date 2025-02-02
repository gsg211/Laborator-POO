#include "box.h"
#include <stack>



box::~box()
{
    no=0;
}

box::box(const char* bx):object(bx)
{
    no=0;
}

int box::addEntity(Entity* ent)
{
    if(no<M)
    {
        k[no]=ent;
        no++;
        return no-1;
    }
    return -1;///i guess 
}
Entity* box::getEntity(const char* entOwner)
{
    for(int i=0;i<M;i++)
    {
        if(k[i]!=nullptr)
        {
            if(strcmp(k[i]->GetOwner(),entOwner)==0)
            {
                return k[i];
            }
        }
    }
    return nullptr;
}
void box::visit()const 
{
    //trb un fel de afisare identata nu am reusit sa pun indenturile cum trb


    
    if(level==0)
    {
        cout<<"\n";
    }
    for(int i=0;i<level;i++)
    {
        cout<<"\n    ";
    }
    cout<<GetOwner();
    for(int i=0;i<no;i++)
    {
        if(k[i]!=nullptr)
        {
            level++;
            k[i]->visit();
            level--;
        }
    }
  
    
}
void box::WriteInfo()
{
    object::WriteInfo();
}