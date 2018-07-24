#include"Ingresso.h"
#include <iostream>
using namespace std;

int Ingresso::qtdeVendidos=0;

float Ingresso::calculaValorIngresso()
{

}
float Ingresso::getValorEmReais()
{
    return valorEmReais;
}
Ingresso::Ingresso()
{
    qtdeVendidos++;
}
void Ingresso::mostra()
{
    cout << "\tIngresso Normal\n";
}

