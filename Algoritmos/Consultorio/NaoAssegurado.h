#ifndef NAOASSEGURADO_H_INCLUDED
#define NAOASSEGURADO_H_INCLUDED
#include"Paciente.h"
class NaoAssegurado : public Paciente
{
    float valorConsulta;
    int banco,cheque;
public:
    NaoAssegurado();
    void mostra();
    void setValorConsulta(float);
    float getValorConsulta();
    void setBanco(int);
    int getBanco();
    void setCheque(int);
    int getCheque();

};
#endif // NAOASSEGURADO_H_INCLUDED
