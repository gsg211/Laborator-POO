#pragma once

#include <iostream>
#include <cstring>

#define buffer_size 100
using namespace std;

class jucarie
{
protected:
    char* material;
    int varsta;
    double pret;
    static int contor;
public:
    jucarie();
    jucarie(char* mat, int varsta, double pret);
    jucarie(const jucarie &c);
    ~jucarie();

    void citire();
    void afisare();

    void setMaterial(char* mat);
    char* getMaterial();

    void setVarsta(int varsta);
    int getVarsta();

    void setPret(double pret);
    double getPret();

    static int getContor();

    jucarie& operator=(const jucarie &c);

    friend istream& operator>>(istream &input, jucarie &c);
    friend ostream& operator<<(ostream &output,const jucarie &c);

    bool operator< (const jucarie &j2);
    bool operator> (const jucarie &j2);
    
    int operator+ (const jucarie &j2);
    
    friend jucarie& operator++(jucarie &c);
    friend jucarie operator++(jucarie &c,int dummy);
};

