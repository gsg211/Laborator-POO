#pragma once

class Refcounter
{
    private:
    int count;
    public:
        void Addref();
        int Release();
};



template <class T>
class SmartPointer
{
private:
    T* ptr;

    Refcounter* ref;
public:
    SmartPointer();
    explicit SmartPointer(T *p = nullptr);
    ~SmartPointer();
    SmartPointer(const SmartPointer<T> & sp);


    T* operator->();
    T& operator*();

    SmartPointer<T>& operator=(const SmartPointer<T> sp);
};

template class SmartPointer<int>;
template class SmartPointer<float>;