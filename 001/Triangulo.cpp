#include "FiguraGeometrica.h"
#include "Triangulo.h"
using namespace std;

Triangulo::Triangulo(float b,float a,string n){
     base = b;
     altura = a;
     FiguraGeometrica::setNome(n);
}

float Triangulo::getBase(){
    return base;
}

void Triangulo::setBase(float b){
    base = b;
}

float Triangulo::getAltura(){
    return altura;
}

void Triangulo::setAltura(float a){
    altura = a;
}

float Triangulo::calcularArea(){
    float area = (getBase() * getAltura()) / 2;
    return area;
}
