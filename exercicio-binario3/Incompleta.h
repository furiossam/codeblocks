#ifndef INCOMPLETA_H_INCLUDED
#define INCOMPLETA_H_INCLUDED
#include <cstring>
#include<fstream>
#include<iostream>
using namespace std;
class Incompleta
{
    char nome[20],corOlhos[20],dataNasc[20];
    float altura,peso;
public:
    Incompleta(char* =" ",char* =" ",char* =" ",float=0.0,float=0.0);
    void setNome(char* =" ");
    void setCorOlhos(char* =" ");
    void setDataNasc(char* =" ");
    void setAltura(float=0.0);
    void setPeso(float=0.0);
    char* getNome();
    char* getCorOlhos();
    char* getDataNasc();
    float getAltura();
    float getPeso();
    void grava( ofstream & );

};

#endif // INCOMPLETA_H_INCLUDED
