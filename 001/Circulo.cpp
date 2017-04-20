#include "FiguraGeometrica.h"
#include "Circulo.h"
using namespace std;

Circulo::Circulo(float r,string n){
    pi = 3.14;
    raio = r;
    FiguraGeometrica::setNome(n);
}

float Circulo::getRaio(){
    return raio;
}

void Circulo::setRaio(float r){
    raio = r;
}
float Circulo::getPi(){
    return pi;
}
float Circulo::calcularArea(){
    float area = getPi() * (getRaio() * getRaio());
    return area;
}
