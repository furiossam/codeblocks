#ifndef CADASTRO_H_INCLUDED
#define CADASTRO_H_INCLUDED
#include <cstring>
#include<fstream>
#include<iostream>
using namespace std;
class Cadastro
{
    char nconta[20],nome[20],endereco[20];
    int dataVenc,opc,opc2;
    float lim,saldo;
public:
    Cadastro(char* =" ",char* =" ",char* =" ",float =1000,int =10,float =0);
    void setNconta(char* =" ");
    void setNome(char* =" ");
    void setEndereco(char* =" ");
    void setLimite(float =0);
    void setDataVenc(int =10);
    void setSaldo(float =0);
    char* getNconta();
    char* getNome();
    char* getEndereco();
    float getLimite();
    int getDataVenc();
    float getSaldo();



};
#endif // CADASTRO_H_INCLUDED
