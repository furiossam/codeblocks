#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED
#include<string>
using namespace std;
class Paciente
{
    static int qtdePacientes;
    string nome;
public:

    Paciente();
    void setNome(string);
    string getNome();
    static int getQtdePacientes();
    virtual void mostra()=0;

};

#endif // PACIENTE_H_INCLUDED
