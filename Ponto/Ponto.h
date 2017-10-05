#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

class Ponto
{
    int x,y;
public:
    Ponto(int a, int b);
    Ponto();
    void setX(int);
    int getX();
    void setY(int);
    int getY();
    Ponto operator+(Ponto &v);
    Ponto operator+(int);
    Ponto operator-(int);
    Ponto operator-(Ponto &v);
    void operator-();
    void operator+=(Ponto &v);
    void operator-=(Ponto &v);
    bool operator>(Ponto &v);
    bool operator<(Ponto &v);
    bool operator>=(Ponto &v);
    bool operator<=(Ponto &v);
    bool operator==(Ponto &v);
    bool operator!=(Ponto &v);
    void mostrar();


};

#endif // PONTO_H_INCLUDED
