#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED
#include"Shape.h"

class Circulo : public Shape
{
    float raio,area;
public:
    Circulo(float =1.0);
    ~Circulo();
    float getRaio();
    void getType();
    float calcularArea();

};


#endif // CIRCULO_H_INCLUDED
