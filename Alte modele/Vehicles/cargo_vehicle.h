#pragma once

#include "vehicle.h"
namespace cars
{
    class cargo_vehicle: public vehicle
    {
    private:
        char* brand;
        double load;
        int passager_count;
    public:
    
        inline cargo_vehicle()
        {
            brand=nullptr;
            load=-1;
            passager_count=-1;
        }

        inline cargo_vehicle(char *brand_name, double cargo_load,int passagers)
        {
            if(brand_name!=nullptr)
            {
                brand=new char[strlen(brand_name)+1];
                strcpy_s(brand,strlen(brand_name)+1,brand_name);
            }
            else
            {
                brand=nullptr;
            }
            load=cargo_load;
            passager_count=passagers;
        }

        inline virtual ~cargo_vehicle()
        {
            if(brand!=nullptr)
            {
                delete[] brand;
                brand=nullptr;
            }
            load=-1;
            passager_count=-1;
        }

        inline char* get_brand()
        {
            return brand;
        }
        inline void set_brand(char* brand_name)
        {
            if(brand!=nullptr)
            {
                delete []brand;
            }
            brand=new char[strlen(brand_name)+1];
            strcpy_s(brand,strlen(brand_name)+1,brand_name);
        }
        
        inline double get_load()
        {
            return load;
        }
        inline void set_load(double new_load)
        {
            load=new_load;
        }

        inline int get_passagers()
        {
            return passager_count;
        }
        inline void set_passagers(int passagers)
        {
            passager_count=passagers;
        }

        inline void print()
        {
            cout<<"\n<----Print---->\n";
            cout<<"Brand: "<<brand<<" \n";
            cout<<"Load: "<<load<<" kilograms \n";
            cout<<"Number of passagers: "<<passager_count<<" people \n";
        }

        //a zis + funct virtuala dar nu a zis ce funcite asa ca am inventat
        virtual char* get_object_type()=0;

        virtual inline void read()
        {
            cout<<"\n<---Reading data--->\n";
            cout<<"Brand: ";
            char buffer[256]="\0";
            cin.getline(buffer,256);
            if(brand!=nullptr)
            {
                delete[] brand;
            }
            brand=new char[strlen(buffer)+1];
            strcpy_s(brand,strlen(buffer)+1,buffer);

            cout<<"Cargo Load:";
            
            cin>>load;
            cin.ignore(1,'\n');
            cout<<"Passager number:";
            
            cin>>passager_count;
            cin.ignore(1,'\n');

        }

    };
    
    
}