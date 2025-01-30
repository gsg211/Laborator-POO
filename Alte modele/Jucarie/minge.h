#pragma once
#include "jucarie.h"
class minge: public jucarie
{
public:
    enum tip {fotball, volley,tenis, bowling,NONE};
    enum conditie {umflata,dezumflata, sparta,UNKNOWN};
private:
    int diametru;
    tip type;
    conditie condition;
public:
    minge();
    minge(char* mat, int varsta, double pret,int diametru, tip tip_minge=fotball, conditie cond_minge=umflata);
    minge(const minge &c);
    ~minge();

    jucarie& operator=(const minge &c);

    void citire();
    void afisare();

    friend istream& operator>>(istream &input, minge &c);
    friend ostream& operator<<(ostream &output,const minge &c);
};
