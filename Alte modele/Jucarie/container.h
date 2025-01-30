#pragma once
#include <cstdio>
using namespace std;


template <class T>
class container
{
private:

    size_t max_size;
    size_t size;
    const size_t mem_block=5;

    T *data;

public:
    class iterator
    {
    private:
        T* p;
    public:
        iterator(/* args */);
        iterator(T *x);
        iterator(const iterator &c);
        ~iterator();

        iterator& operator++(); //prefix
        iterator operator++(int); //postfix

        bool operator ==(const iterator& right);
        bool operator !=(const iterator& right);
        T& operator*();
    };


    container(/* args */);
    ~container();

    size_t get_size();

    T getItem(int item_location);
    void PushBack(T item);
    T PopBack(void);

    void display();
    iterator begin();
    iterator end();



};

