#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

class Shape
{

public:
    virtual float calcularArea();
    virtual void getType();
    Shape();
    ~Shape();
};

#endif // SHAPE_H_INCLUDED
