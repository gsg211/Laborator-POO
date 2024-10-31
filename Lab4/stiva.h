#pragma once

class Stiva
{
    private:
        int data;
        Stiva *head;
    public:
        Stiva();
        ~Stiva();
        void push(int nr);
        int pop();
        int top();
        void print();
};