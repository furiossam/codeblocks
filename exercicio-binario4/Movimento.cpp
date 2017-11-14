#include"Movimento.h"
Movimento::Movimento(char* nc, char t,float v)
{
    strcpy(nconta,nc);
    tipoOp=t;
    valor=v;
}
void Movimento::setNconta(char* nc)
{
    strcpy(nconta,nc);
}
void Movimento::setTipoOp(char t)
{
    tipoOp=t;
}
void Movimento::setValor(float v)
{
    valor=v;
}
char* Movimento::getNconta()
{
    return nconta;
}
char Movimento::getTipoOp()
{
    return tipoOp;
}
float Movimento::getValor()
{
    return valor;
}

