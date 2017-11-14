#include"Pessoa.h"
Pessoa::Pessoa(char* n,char* c,char* d,char s,float a,float p)
{
    strcpy(nome,n);
    strcpy(corOlhos,c);
    strcpy(dataNasc,d);
    sexo=s;
    altura=a;
    peso=p;
}
void Pessoa::setNome(char* n)
{
    strcpy(nome,n);
}
void Pessoa::setCorOlhos(char* c)
{
    strcpy(corOlhos,c);
}
void Pessoa::setDataNasc(char* d)
{
    strcpy(dataNasc,d);
}
void Pessoa::setSexo(char s)
{
    sexo=s;
}
void Pessoa::setAltura(float a)
{
    altura=a;
}
void Pessoa::setPeso(float p)
{
    peso=p;
}
char* Pessoa::getNome()
{
    return nome;
}
char* Pessoa::getCorOlhos()
{
    return corOlhos;
}
char* Pessoa::getDataNasc()
{
    return dataNasc;
}
char Pessoa::getSexo()
{
    return sexo;
}
float Pessoa::getAltura()
{
    return altura;
}
float Pessoa::getPeso()
{
    return peso;
}
void Pessoa::grava(ofstream &escrita)
{
    escrita.write((char *)this, sizeof(Pessoa));
}
