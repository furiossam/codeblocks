#ifndef FRACAO_H_INCLUDED
#define FRACAO_H_INCLUDED

class Fracao
{
    int numerador,denominador;
public:
    Fracao();
    Fracao(int num=1,int den=1);
    void setNumerador(int);
    void setDenominador(int);
    int getNumerador();
    int getDenominador();
    Fracao operator+(Fracao &v);
    Fracao operator-(Fracao &v);
    Fracao operator * (Fracao &v);
    Fracao operator / (Fracao &v);
    void mostra();

};
#endif // FRACAO_H_INCLUDED
