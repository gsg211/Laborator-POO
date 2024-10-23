#pragma once

struct student
{
    private:
        char* nume;
        int nota;

    public:
        void setNota(int n);
        int getNota();

        void setNume(char* str);
        char* getNume();

        void print();
        void read();
        void erase();
};


int compNameAlph(student a, student b);
int compGrDesc(student a, student b);
int comNameLen(student a, student b);
// swap obiecte Student, pentru bubbleSort
void swapStudent(student &a, student &b);
