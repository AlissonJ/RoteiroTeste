#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED
#include "FiguraGeometrica.h"
using namespace std;
class Circulo:public FiguraGeometrica{
    private:
        float pi;
        float raio;
    public:
        Circulo(float r,string n);
        float getRaio();
        void setRaio(float r);
        float calcularArea();
        float getPi();
};


#endif // CIRCULO_H_INCLUDED
