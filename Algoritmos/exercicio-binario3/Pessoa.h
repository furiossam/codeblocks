#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <cstring>
#include<fstream>
#include<iostream>
using namespace std;
class Pessoa
{
    string nome,corOlhos,dataNasc;
    char sexo;
    float altura,peso;
public:
    Pessoa(string =" ",string =" ",string =" ",char='m',float=0.0,float=0.0);
    void setNome(string =" ");
    void setCorOlhos(string =" ");
    void setDataNasc(string =" ");
    void setAltura(float=0.0);
    void setPeso(float=0.0);
    void setSexo(char='m');
    string getNome();
    string getCorOlhos();
    string getDataNasc();
    float getAltura();
    float getPeso();
    char getSexo();
    void grava( ofstream & );

};
#endif // PESSOA_H_INCLUDED
