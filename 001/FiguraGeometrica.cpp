#include"FiguraGeometrica.h"
using namespace std;

FiguraGeometrica::FiguraGeometrica(){}


string FiguraGeometrica::getNome(){
    return nome;
}

void FiguraGeometrica::setNome(string n){
    nome = n;
}

float FiguraGeometrica::calcularArea(){
    return 0;
}
