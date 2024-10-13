#ifndef HEADER2_H
#define HEADER2_H

typedef struct student_
{
    int nrMat;
    char *nume;
    char gen;
    float nota;

    void (*Read)(struct student_* s);
    void (*Write)(struct student_* s);
}student;

void ReadData(student *s);
void WriteData(student *s);

#endif 