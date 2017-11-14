#include"Cadastro.h"
Cadastro::Cadastro(char* nc, char* n, char* e, float l, int d, float s)
{
    strcpy(nconta,nc);
    strcpy(nome,n);
    strcpy(endereco,e);
    lim=l;
    dataVenc=d;
    saldo=s;
}
void Cadastro::setNconta(char* nc)
{
    strcpy(nconta,nc);
}
void Cadastro::setNome(char* n)
{
    strcpy(nome,n);
}
void Cadastro::setEndereco(char* e)
{
    strcpy(endereco,e);
}
void Cadastro::setLimite(float l)
{
    lim=l;
}
void Cadastro::setDataVenc(int d)
{
    dataVenc=d;
}
void Cadastro::setSaldo(float s)
{
    saldo=s;
}
char* Cadastro::getNconta()
{
    return nconta;
}
char* Cadastro::getNome()
{
    return nome;
}
char* Cadastro::getEndereco()
{
    return endereco;
}
float Cadastro::getLimite()
{
    return lim;
}
float Cadastro::getSaldo()
{
    return saldo;
}
int Cadastro::getDataVenc()
{
    return dataVenc;
}

