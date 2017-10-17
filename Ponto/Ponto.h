#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

class Ponto
{
    int x,y;
public:
    Ponto(int =0, int =0);
    void setX(int);
    int getX();
    void setY(int);
    int getY();
    const Ponto operator+(Ponto &v);
    const Ponto operator+(int);
    const Ponto operator-(int);
    const Ponto operator-(Ponto &v);
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
