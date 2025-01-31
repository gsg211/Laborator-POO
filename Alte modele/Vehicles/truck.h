#pragma once
#include "cargo_vehicle.h"

namespace cars
{
    

    class truck: public cargo_vehicle
    {   
    public: 
        enum type{tank,flat_bed,box,UNKNOWN};
    private:
        type truck_type;
        truck(char *brand_name, double cargo_load,int passagers,type truck_type);
    public:
        truck();
        
        truck(const truck &t);
        ~truck();

        truck& operator=(const truck& t);

        char* get_type();

        char* get_object_type();

        void print() override;
        void read() override;

        static vehicle* buildObj(char *brand_name, double cargo_load,int passagers,type truck_type);
    };
    
    
    
}