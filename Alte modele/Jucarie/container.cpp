#include "container.h"
#include "cstring"
#include <stdlib.h>
#include <iostream>
#include "jucarie.h"
#include "minge.h"


using namespace std;

template <typename T>
container<T>::container(/* args */)
{
    max_size=0;
    size=0;
    data=nullptr;
}
template <typename T>
container<T>::~container()
{
    if(data!=nullptr)
    {
        delete [] data;
        data=nullptr;
    }
    max_size=0;
    size=0;
}

template <typename T>
size_t container<T>::get_size()
{
    return size;
}
template <typename T>
T container<T>::getItem(int item_location)
{
    return data[item_location];
}
template <typename T>
void container<T>::PushBack(T item)
{
    if(size==max_size)
    {
        T *temp=new T[size+mem_block];
        if(data!=nullptr)
        {
            memcpy(temp,data,size*sizeof(T));
        }
        temp[size]=item;
        max_size+=mem_block;
        size++;
        free( data);
        data=temp;
    }
    else
    {
        data[size]=item;
        size++;
    }
}
template <typename T>
T container<T>::PopBack(void)
{
    if(size>0)
    {
        return data[size--];
    }
    return T();
}

template <typename T>
void container<T>::display()
{
    for(int i=0;i<size;i++)
    {
        cout<<data[i]<<"\n";
    }
}


//cod iterator:
template <typename T>
container<T>::iterator::iterator()
{
    p=nullptr;
}
template <typename T>
container<T>::iterator::iterator(T *x)
{
    p=x;
}
template <typename T>
container<T>::iterator::iterator(const iterator &c)
{
    p=c.p;
}
template <typename T>
container<T>::iterator::~iterator()
{
    p=nullptr;
}   

template <typename T>
typename container<T>::iterator& container<T>::iterator::operator++()
{
    p++;
    return *this;
}
template <typename T>
typename container<T>::iterator container<T>::iterator::operator++(int)
{
    container<T>::iterator temp(*this);
    operator++();
    return temp;
} 

template <typename T>
bool container<T>::iterator::operator==(const container<T>::iterator& right)
{
    return this->p == right.p;
}

template <typename T>
bool container<T>::iterator::operator!=(const container<T>::iterator& right)
{
    return this->p != right.p;
}


template <typename T>
T& container<T>::iterator::operator*()
{
    return *p;
}

template <typename T>
typename container<T>::iterator  container<T>::begin()
{
    return container<T>::iterator(data);
}

template <typename T>
typename container<T>::iterator container<T>::end()
{
    return container<T>::iterator(data+size);
}


template class container<int>;
template class container<double>;
template class container<jucarie>;
template class container<minge>;