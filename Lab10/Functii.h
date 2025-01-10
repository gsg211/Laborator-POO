#pragma once

template <typename T>
T maxim(T a,T b);

template <typename T>
T aduna(T a,T b);

template <typename T>
void sortare(T* a,int n);

template <class T>
class Multime
{
    private:
        T* elem;
        int dim;
        int n;    
    public:
        Multime();
        Multime(T* lista_elem, int dimens, int nr);
        Multime(const Multime& m);
        ~Multime();

        void afisare();
        T operator!();
        Multime operator+(const Multime& m);
};


template class Multime<int>;
template class Multime<float>;
template class Multime<double>;
