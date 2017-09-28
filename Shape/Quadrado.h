#ifndef QUADRADO_H_INCLUDED
#define QUADRADO_H_INCLUDED
#include"Shape.h"

class Quadrado : public Shape
{
    float lado,area;
public:
    Quadrado(float =1.0);
    ~Quadrado();
    float getLado();
    void getType();
    float calcularArea();
};


#endif // QUADRADO_H_INCLUDED
