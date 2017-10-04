#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

class Ponto
{
    int x,y;
public:
    Ponto(int a=0, int b=0);
    Ponto operator+(Ponto &v);
    Ponto operator+(int a);
    Ponto operator-(int a);
    Ponto operator-(Ponto &v);
    Ponto operator-();
    Ponto operator+=(Ponto &v);
    Ponto operator-=(Ponto &v);
    Ponto operator>(Ponto &v);
    Ponto operator<(Ponto &v);
    Ponto operator>=(Ponto &v);
    Ponto operator<=(Ponto &v);
    Ponto operator==(Ponto &v);
    Ponto operator!=(Ponto &v)


};

#endif // PONTO_H_INCLUDED
