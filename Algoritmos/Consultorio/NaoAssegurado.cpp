#include"NaoAssegurado.h"
#include<iostream>
NaoAssegurado::NaoAssegurado()
{
}
void NaoAssegurado::setBanco(int b)
{
    banco=b;
}
int NaoAssegurado::getBanco()
{
    return banco;
}
void NaoAssegurado::setCheque(int c)
{
    cheque=c;
}
int NaoAssegurado::getCheque()
{
    return cheque;
}
void NaoAssegurado::setValorConsulta(float v)
{
    valorConsulta=v;
}
float NaoAssegurado::getValorConsulta()
{
    return valorConsulta;
}
void NaoAssegurado::mostra()
{
cout << endl <<"Nome: " << getNome() << endl <<"Banco: "<< getBanco() << endl <<"Cheque: "<< getCheque() << endl <<"Valor da Consulta: "<< getValorConsulta() << endl << endl;;
}
