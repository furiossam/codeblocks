#include"VIP.h"
#ifndef PISTAVIP_H_INCLUDED
#define PISTAVIP_H_INCLUDED

class PistaVIP : public VIP
{
    char localizacao;
public:
    void setLocalizacao(char);
    char getLocalizacao();
    void mostra();
};

#endif // PISTAVIP_H_INCLUDED
