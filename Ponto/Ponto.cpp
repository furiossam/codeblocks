#include"Ponto.h"
#include<iostream>
using namespace std;
Ponto::Ponto(int a,int b)
{
    x=a;
    y=b;
}

void Ponto::setX(int a)
{
    x=a;
}
void Ponto::setY(int b)
{
    y=b;
}
int Ponto::getX()
{
    return x;
}
int Ponto::getY()
{
    return y;
}
bool Ponto::operator!=(Ponto &v)
{
    int xy,xy2;

    xy=getX()+getY();
    xy2=v.getX()+v.getY();
    if (xy!=xy2)
        return true;
    else
        return false;
}
bool Ponto::operator==(Ponto &v)
{
    int xy,xy2;

    xy=getX()+getY();
    xy2=v.getX()+v.getY();
    if (xy==xy2)
        return true;
    else
        return false;
}
bool Ponto::operator<=(Ponto &v)
{
    int xy,xy2;

    xy=getX()+getY();
    xy2=v.getX()+v.getY();
    if (xy<=xy2)
        return true;
    else
        return false;
}
bool Ponto::operator>=(Ponto &v)
{
    int xy,xy2;

    xy=getX()+getY();
    xy2=v.getX()+v.getY();
    if (xy>=xy2)
        return true;
    else
        return false;
}
bool Ponto::operator<(Ponto &v)
{
    int xy,xy2;

    xy=getX()+getY();
    xy2=v.getX()+v.getY();
    if (xy<xy2)
        return true;
    else
        return false;
}
bool Ponto::operator>(Ponto &v)
{
    int xy,xy2;

    xy=getX()+getY();
    xy2=v.getX()+v.getY();
    if (xy>xy2)
        return true;
    else
        return false;
}
void Ponto::operator-=(Ponto &v)
{
    x-=v.getX();
    y-=v.getY();
}
void Ponto::operator+=(Ponto &v)
{
    x+=v.getX();
    y+=v.getY();
}
void Ponto::operator-()
{
    x=x*-1;
    y=y*-1;
}
const Ponto Ponto::operator-(Ponto &v)
{
    int a,b;
    a=getX()-v.getX();
    b=getY()-v.getY();
    return (Ponto(a,b));
}
const Ponto Ponto::operator-(int a)
{
    int x,y;
    x=getX()-a;
    y=getY()-a;
    return (Ponto(x,y));
}
const Ponto Ponto::operator+(int a)
{
    int x,y;
    x=getX()+a;
    y=getY()+a;
    return (Ponto(x,y));
}
const Ponto Ponto::operator+(Ponto &v)
{
    int a,b;
    a=getX()+v.getX();
    b=getY()+v.getY();
    return (Ponto(a,b));
}
void Ponto::mostrar()
{
    cout << "X= " << getX() << endl <<"Y= " << getY() << endl;
}
