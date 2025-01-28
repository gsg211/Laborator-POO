#pragma once

namespace FlyingObjects
{
    class CAircraftType
    {
    public:
        static const int AIRPLANE=1;
        static const int GLIDER=2;

        static char * getTypeName(int typeNr);
        
    };
    
    class CpropulsionType
    {
    public:
        static const int NONE=0;
        static const int JET=1;
        static const int PROPELLER=2;

        static char * getTypeName(int typeNr);
        

    };

    class CGliderType
    {
    public:
        static const int CLUB=0;
        static const int STANDARD=1;
        static const int DUAL_SEATS=3;
        static const int OPEN=4;

        static char * getTypeName(int typeNr);
    };
    

    


}