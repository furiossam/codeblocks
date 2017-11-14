#include"Incompleta.h"
Incompleta::Incompleta(char* n,char* c,char* d,float a,float p)
{
    strcpy(nome,n);
    strcpy(corOlhos,c);
    strcpy(dataNasc,d);
    altura=a;
    peso=p;
}
void Incompleta::setNome(char* n)
{
    strcpy(nome,n);
}
void Incompleta::setCorOlhos(char* c)
{
    strcpy(corOlhos,c);
}
void Incompleta::setDataNasc(char* d)
{
    strcpy(dataNasc,d);
}

void Incompleta::setAltura(float a)
{
    altura=a;
}
void Incompleta::setPeso(float p)
{
    peso=p;
}
char* Incompleta::getNome()
{
    return nome;
}
char* Incompleta::getCorOlhos()
{
    return corOlhos;
}
char* Incompleta::getDataNasc()
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
