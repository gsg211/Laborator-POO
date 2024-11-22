#pragma once
#define BUFFERSIZE 100
namespace Transporturi
{
    class cisterna
    {
    private:
        bool transportAvizat;
        char* continut;
        float cantitate;
    public:
        cisterna();
        cisterna(char* continut,float cantitate,bool transportAvizat=false);
        ~cisterna();

        void afisare();
        void citire();
        void citire(float cantitate);

         char* getContinut();
         void setContinut(char *continut);

         float getCantitate();
         void setCantitate(float cantitate=25.8);
    };
}