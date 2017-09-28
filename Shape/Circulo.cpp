#include"Circulo.h"
#include<iostream>
using namespace std;

Circulo::Circulo(float r)
{
    raio=r;
    cout << "Construindo Circulo...\n" ;
}
Circulo::~Circulo()
{
    cout << "Destruindo Circulo..." << endl;
}
float Circulo::getRaio()
{
    return raio;
}
void Circulo::getType()
{
    cout << "Circulo\n" << endl;
}
float Circulo::calcularArea()
{
    area=getRaio()*6.28;
    return area;
}
