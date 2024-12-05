#pragma once
#include <iostream>
#include <cstring>

namespace electrocasnice
{
    class cuptor
    {
        private:
        char* marca;
        int temperaturaMaxima;

        public:
        cuptor(char * marca=nullptr,int temperatura=180);
        cuptor(const cuptor &c);
        ~cuptor();

        //op aritmetici
        cuptor& operator=(const cuptor &c);
        friend cuptor& operator+=( cuptor &c,int temp);
        friend cuptor& operator++(cuptor &c);
        friend cuptor operator++(cuptor &c,int dummy);

        //IO
        friend std::istream& operator>>(std::istream &input,cuptor &c);
        friend std::ostream& operator<<(std::ostream &output,cuptor &c);

        void afisare();
        void citire();
    };
    
    class CuptorCuInductie:public cuptor
    {
        private:
        float consum;
        public:
        CuptorCuInductie(char* marca,int temperatura,float consum);
        CuptorCuInductie(const CuptorCuInductie &c);
        ~CuptorCuInductie();
        void afisare();
        void citire();

    };
    //aveam crezand ca nu puteam sa folosesc membrii dar merge si fara
    // cuptor& operator+=( cuptor &c,int temp);
    // cuptor& operator++(cuptor &c);
    // cuptor operator++(cuptor &c,int dummy);
    // std::istream& operator>>(std::istream &input,cuptor &c);
    // std::ostream& operator<<(std::ostream &output,cuptor &c);

}