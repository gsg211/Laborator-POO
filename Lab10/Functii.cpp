#include "Functii.h"
#include <iostream>

template <typename T>

T maxim(T a,T b)
{
    return (a>b)? a:b;
}

template <typename T>
T aduna(T a,T b)
{
    return a + b;
}

template <typename T>
void sortare(T* a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                T aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
}

template double aduna(double,double);
//template Multime aduna(Multime,Multime);

template int maxim(int,int);
template double maxim(double,double);
template float maxim(float,float);

template void sortare(int*,int );
template void sortare(double*,int n);
template void sortare(float*,int n);

template <class T>
Multime<T>::Multime()
{
    this->elem=nullptr;
    this->dim=0;
    this->n=0;
}

template <class T>
Multime<T>::Multime(T* lista_elem, int dimens, int nr)
{
    this->elem=new T[dimens];
    this->dim=dimens;
    this->n=nr;

    for(int i=0;i<n;i++)
    {
        this->elem[i]=lista_elem[i];
    }
}

template <class T>
Multime<T>::Multime(const Multime& m)
{
    this->elem=new T[m.dim];
    this->dim=m.dim;
    this->n=m.n;

    for(int i=0;i<n;i++)
    {
        this->elem[i]=m.elem[i];
    }
}

template <class T>
Multime<T>::~Multime()
{
    if(elem!=nullptr)
    {
        delete [] elem;
    }
    dim=0;
    n=0;
}

template <class T> 
void Multime<T>::afisare()
{
    std::cout<<"{";
    for(int i=0;i<n;i++)
    {
        std::cout<<elem[i];
        if(i==n-1)
        {
            std::cout<<"}";
        }
        else
        {
            std::cout<<", ";
        }
    }
}
template <class T>
T Multime<T>::operator!()
{
    T max=this->elem[0];
    for(int i=1;i<n;i++)
    {
        if(max<this->elem[i])
        {
            max=this->elem[i];
        }
    }
    return max;
}
template <class T>
Multime<T> Multime<T>::operator+(const Multime& m)
{
    Multime m_ret;
    m_ret.dim=maxim(m.dim,this->dim);
    m_ret.n=maxim(m.n,this->n);
    m_ret.elem=new T[m_ret.dim];

    for(int i=0;i<m_ret.n;i++)
    {
        if(i<this->n && i<m.n)
        {
            m_ret.elem[i]=m.elem[i]+this->elem[i];
        }
        else if(i>this->n && i<m.n)
        {
            m_ret.elem[i]=m.elem[i];
        }
        else
        {
            m_ret.elem[i]=this->elem[i];
        }
    }
    return m_ret;
}

template Multime<float> aduna(Multime<float>,Multime<float>);