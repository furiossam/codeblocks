#include"Ingresso.h"
#ifndef VIP_H_INCLUDED
#define VIP_H_INCLUDED

class VIP : public Ingresso
{

public:
    VIP();
    float calculaValorIngresso();
    virtual void mostra() =0;

};

#endif // VIP_H_INCLUDED
