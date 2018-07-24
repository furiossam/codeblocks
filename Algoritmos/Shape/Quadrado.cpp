#include<iostream>
#include"Quadrado.h"
using namespace std;
Quadrado::Quadrado(float r)
{
    lado=r;
}
float Quadrado::getLado()
{
    return lado;
}
void Quadrado::getType()
{
    cout << "Quadrado\n" << endl;
}
float Quadrado::calcularArea()
{
    area=getLado()*getLado();
    return area;
}
