#include"Pessoa.h"
Pessoa::Pessoa(string n,string c,string d,char s,float a,float p)
{
    nome=n;
    corOlhos=c;
    dataNasc=d;
    sexo=s;
    altura=a;
    peso=p;
}
void Pessoa::setNome(string n)
{
    nome=n;
}
void Pessoa::setCorOlhos(string c)
{
    corOlhos=c;
}
void Pessoa::setDataNasc(string d)
{
    dataNasc =d;
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
string Pessoa::getNome()
{
    return nome;
}
string Pessoa::getCorOlhos()
{
    return corOlhos;
}
string Pessoa::getDataNasc()
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
