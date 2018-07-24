#include"PistaVIP.h"
#include<iostream>
using namespace std;
void PistaVIP::setLocalizacao(char l)
{
    localizacao=l;
}
char PistaVIP::getLocalizacao()
{
    return localizacao;
}
void PistaVIP::mostra()
{
    cout << "\tIngresso na Pista VIP\n";
}
