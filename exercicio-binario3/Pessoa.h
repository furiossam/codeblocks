#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <cstring>
#include<fstream>
#include<iostream>
using namespace std;
class Pessoa
{
    char nome[20],corOlhos[20],dataNasc[20],sexo;
    float altura,peso;
public:
    Pessoa(char* =" ",char* =" ",char* =" ",char='m',float=0.0,float=0.0);
    void setNome(char* =" ");
    void setCorOlhos(char* =" ");
    void setDataNasc(char* =" ");
    void setAltura(float=0.0);
    void setPeso(float=0.0);
    void setSexo(char='m');
    char* getNome();
    char* getCorOlhos();
    char* getDataNasc();
    float getAltura();
    float getPeso();
    char getSexo();
    void grava( ofstream & );

};
#endif // PESSOA_H_INCLUDED
