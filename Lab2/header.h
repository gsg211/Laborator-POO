#ifndef HEADER_H
#define HEADER_H

struct student
{
    int nrMat;
    char *nume;
    char gen;

    void Read();
    void Write();
};

struct catalog
{
    int studentNumber=0;
    char **students;

    void Create(int studentCount);
    void Delete();

    void Read();
    void Write();

    void sortName(); //sort alphabetically 
    void sortLen();  //sort by lenght

};

#endif 