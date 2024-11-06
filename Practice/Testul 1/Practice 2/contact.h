#pragma once

class Contact
{
private:
    char *nume,*prenume;
    char *telefon,*mail;
public:
    Contact();
    Contact(char* nume,char* prenume,char* telefon,char *mail);
    Contact(Contact &c);
    ~Contact();

    void citire();
    void afisare();

    char *getNume();
    char *getPrenume();
    char *getTel();
    char *getMail();

};


class ListaContacte
{
    private:
        Contact *date;
        int n,dim;
    public:
        ListaContacte();
        ListaContacte(int dim);
        void adauga();
        void stergere();
        void sortare();
        void afisare();

};


