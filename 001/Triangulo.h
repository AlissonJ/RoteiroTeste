#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED
#include "FiguraGeometrica.h"

class Triangulo:public FiguraGeometrica{

    private:
        float base;
        float altura;
    public:
        Triangulo(float b,float a,string n);
        float getBase();
        void setBase(float b);
        float getAltura();
        void setAltura(float a);
        float calcularArea();
};


#endif // TRIANGULO_H_INCLUDED
