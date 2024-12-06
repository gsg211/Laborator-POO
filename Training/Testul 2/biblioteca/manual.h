#include "carte.h"

namespace biblioteca
{
    class manual:public carte
    {
        private:
            int clasa;
         public:
         manual(char * titlu=nullptr, int clasa=0);
         manual(const manual &m);
         ~manual();
         manual& operator=(const manual &m);

         void citire();
         void afisare();
    };
}