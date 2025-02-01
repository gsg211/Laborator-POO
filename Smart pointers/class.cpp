#include "class.h"
#include <iostream>

using namespace std;

template<class T>
SmartPointer<T>::SmartPointer(): ptr(nullptr),ref(nullptr)
{
    ref=new Refcounter();
    ref->Addref();
}


template <class T>
SmartPointer<T>::SmartPointer(T *p): ptr(p),ref(nullptr)
{
    ref=new Refcounter();
    ref->Addref();
}

template <class T>
SmartPointer<T>::SmartPointer(const SmartPointer<T> & sp): ptr(sp.ptr), ref(sp.ref)
{
    ref->Addref();
}

template <class T>
SmartPointer<T>::~SmartPointer()
{
    if(ref->Release()==0)
    {
        cout<<"Distrus\n";
        delete ptr;
        delete ref;
    }
}
template <class T>
SmartPointer<T>& SmartPointer<T>::operator=(const SmartPointer<T> sp)
{
    if(this==&sp)
    {
        return *this;
    }

    if(ref->Release()==0)
    {
        delete ptr;
        delete ref;
    }

    ptr=sp.ptr;
    ref=sp.ref;

    ref->Addref();
    
    return *this;
}

template <class T>
T&  SmartPointer<T>::operator*()
{
    return *ptr;
}

void Refcounter::Addref()
{
    count++;
}

int Refcounter::Release()
{
    return --count;
}

template <class T>
T*  SmartPointer<T>::operator->()
{
    return ptr;
}