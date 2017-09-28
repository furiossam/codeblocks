#ifndef ASSEGURADO_H_INCLUDED
#define ASSEGURADO_H_INCLUDED
#include<string>
#include"Paciente.h"
using namespace std;
class Assegurado : public Paciente
{
    string seguradora;
    int numSeguro;
public:
    Assegurado();
    void mostra();
    void setSeguradora(string);
    string getSeguradora();
    void setNumSeguro(int);
    int getNumSeguro();
};
#endif // ASSEGURADO_H_INCLUDED
