#include"Assegurado.h"
#include<iostream>
#include<string>
using namespace std;

Assegurado::Assegurado()
{

}
void Assegurado::setSeguradora(string s)
{
    seguradora=s;
}
string Assegurado::getSeguradora()
{
    return seguradora;
}
void Assegurado::setNumSeguro(int n)
{
    numSeguro=n;
}
int Assegurado::getNumSeguro()
{
    return numSeguro;
}
void Assegurado::mostra()
{
    cout << endl << "Nome: " << getNome() << endl << "Seguradora: " << getSeguradora() << endl << "Numero do Seguro: " <<  getNumSeguro() << endl << endl ;
}
