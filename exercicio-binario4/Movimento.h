#ifndef MOVIMENTO_H_INCLUDED
#define MOVIMENTO_H_INCLUDED
#include <cstring>
#include<fstream>
#include<iostream>
using namespace std;
class Movimento
{
    char nconta[20],tipoOp;
    float valor;
public:
    Movimento(char* =" ",char ='d',float=0);
    void setNconta(char* =" ");
    void setTipoOp(char ='d');
    void setValor(float =0);
    char* getNconta();
    char getTipoOp();
    float getValor();

};
#endif // MOVIMENTO_H_INCLUDED
