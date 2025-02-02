#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class container
{
private:
    size_t total_size;
    size_t size;
    const size_t mem_block=4;
    int *v;
public:
    container(/* args */);
    ~container();

    void push(int Data);
    int pop();

    int operator[](int i);
    int operator*();

    void display();

    class iterator

    {
    private:
        int* ptr;
    public:
        iterator(int* p);
        iterator(const iterator &i);
        ~iterator();

        iterator& operator=(const iterator &i);

        iterator& operator++();
        iterator operator++(int);


        bool operator==(const iterator &right);
        bool operator!=(const iterator &right);

        int operator*();

    };
    
    iterator begin();
    iterator end();

};

