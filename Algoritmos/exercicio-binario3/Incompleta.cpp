#include"Incompleta.h"
Incompleta::Incompleta(string n,string c,string d,float a,float p)
{
    nome=n;
    corOlhos=c;
    dataNasc=d;
    altura=a;
    peso=p;
}
void Incompleta::setNome(string n)
{
    nome=n;
}
void Incompleta::setCorOlhos(string c)
{
    corOlhos=c;;
}
void Incompleta::setDataNasc(string d)
{
    dataNasc=d;
}

void Incompleta::setAltura(float a)
{
    altura=a;
}
void Incompleta::setPeso(float p)
{
    peso=p;
}
string Incompleta::getNome()
{
    return nome;
}
string Incompleta::getCorOlhos()
{
    return corOlhos;
}
string Incompleta::getDataNasc()
{
    return dataNasc;
}

float Incompleta::getAltura()
{
    return altura;
}
float Incompleta::getPeso()
{
    return peso;
}
void Incompleta::grava(ofstream &escrita)
{
    escrita.write((char *)this, sizeof(Incompleta));
}
