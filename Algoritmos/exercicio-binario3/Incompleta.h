#ifndef INCOMPLETA_H_INCLUDED
#define INCOMPLETA_H_INCLUDED
#include <cstring>
#include<fstream>
#include<iostream>
using namespace std;
class Incompleta
{
    string nome,corOlhos,dataNasc;
    float altura,peso;
public:
    Incompleta(string =" ",string =" ",string =" ",float=0.0,float=0.0);
    void setNome(string =" ");
    void setCorOlhos(string =" ");
    void setDataNasc(string =" ");
    void setAltura(float=0.0);
    void setPeso(float=0.0);
    string getNome();
    string getCorOlhos();
    string getDataNasc();
    float getAltura();
    float getPeso();
    void grava( ofstream & );

};

#endif // INCOMPLETA_H_INCLUDED
