#include "container.h"


container::container(/* args */)
{  
    total_size=4;
    size=0;
    v=new int[mem_block];
}
container::~container()
{
    delete[] v;
    total_size=-1;
    size=-1;
}

void container::push(int Data)
{
    if(size==total_size)
    {
        int *temp= new int[size+mem_block];
        if(v!=nullptr)
        {
            memcpy(temp,v,size*sizeof(int));
        }
        temp[size]=Data;
        size++;
        total_size+=mem_block;
        free(v);
        v=temp;

    }
    else
    {
        v[size]=Data;
        size++;
    }

}
int container::pop()
{
    size--;
    return v[size+1];
}

int container::operator[](int i)
{
    return v[i];
}

int container::operator*()
{
    return *v;
}

void container::display()
{
    cout<<"\n";
    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

//iterators

container::iterator::iterator(int* p)
{
    ptr=p;
}

container::iterator::iterator(const iterator &i)
{
    ptr=i.ptr;
}
container::iterator::~iterator()
{
    ptr=nullptr;
}
container::iterator& container::iterator::operator=(const iterator &i)
{   
    if(this==&i)
    {
        return *this;
    }
    ptr=i.ptr;
    return*this;
}
container::iterator& container::iterator::operator++()//prefix
{
    ptr++;
    return *this;
}
container::iterator container::iterator::operator++(int) //postfix
{
    container::iterator temp(*this);
    ptr++;
    return temp;
}

bool container::iterator::operator==(const container::iterator &right)
{
    return ptr==right.ptr;
}
bool container::iterator::operator!=(const container::iterator &right)
{
    return ptr!=right.ptr;
}
int container::iterator::operator*()
{
    return *ptr;
}


container::iterator container::begin()
{
    return container::iterator(v);
}
container::iterator container::end()
{
    return container::iterator(v+size);
}