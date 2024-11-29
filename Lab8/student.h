#pragma once
#include "persoana.h"

class StudentAC : public PersoanaAC
{
    int m_ianStudiu;
    int m_inotaP2;
public:
    StudentAC();
    StudentAC(string cnp, string nume, string adresa, int anStudiu, int notaP2);
    ~StudentAC();
    void inscriereAnStudiu(int anStudiuNou); //setter

    int getAn();
    int getNota(); 
    void AfisareProfil();

    StudentAC* comparaStudent(StudentAC *s);
};


class StudentMaster :public StudentAC
{
    private:
        string m_sNumeDizertatie;
    public:
        StudentMaster();
        StudentMaster(string cnp, string nume, string adresa, int anStudiu, int notaP2,
        string numeDizertatie);
        ~StudentMaster();
};