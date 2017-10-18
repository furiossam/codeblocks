#ifndef INGRESSO_H_INCLUDED
#define INGRESSO_H_INCLUDED

class Ingresso
{
    static int qtdeVendidos;
    float valorEmReais=80;
    public:

        virtual float calculaValorIngresso();
        virtual void mostra();
        Ingresso();
};

#endif // INGRESSO_H_INCLUDED
