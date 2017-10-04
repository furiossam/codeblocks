#include"Fracao.h"
#include<iostream>
using namespace std;
Fracao::Fracao(int num,int den)
{
    denominador=den;
    numerador=num;
}
Fracao::Fracao()
{

}
Fracao Fracao::operator+(Fracao &v)
{
    int aux,aux2,aux3;
    if (denominador==v.denominador)
    {
        aux=denominador;
        aux2=numerador+v.numerador;
    }
    else
    {
        aux=denominador*v.denominador;
        aux2=numerador*(aux/denominador);
        aux3=v.numerador*(aux/v.denominador);
        aux2+=aux3;
    }
    return Fracao(aux2,aux);
}
Fracao Fracao::operator-(Fracao &v)
{
    int aux,aux2,aux3;
    if (denominador==v.denominador)
    {
        aux=denominador;
        aux2=numerador-v.numerador;
    }
    else
    {
        aux=denominador*v.denominador;
        aux2=numerador*(aux/denominador);
        aux3=v.numerador*(aux/v.denominador);
        aux2-=aux3;
    }
    return Fracao(aux2,aux);

}
Fracao Fracao::operator*(Fracao &v)
{
    int aux,aux2;
    aux=numerador*v.numerador;
    aux2=denominador*v.denominador;
    return Fracao(aux,aux2);
}
Fracao Fracao::operator/(Fracao &v)
{
    int aux,aux2;
    aux=numerador*v.denominador;
    aux2=denominador*v.numerador;
    return Fracao(aux,aux2);
}
void Fracao::setNumerador(int num)
{
    numerador=num;
}
void Fracao::setDenominador(int den)
{
    denominador=den;
}
int Fracao::getNumerador()
{
    return numerador;
}
int Fracao::getDenominador()
{
    return denominador;
}
void Fracao::mostra()
{
    cout << getNumerador() << "/" << getDenominador() << endl;

}
