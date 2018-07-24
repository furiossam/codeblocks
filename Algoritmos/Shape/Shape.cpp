#include"Shape.h"
#include<iostream>
using namespace std;
Shape::Shape()
{
    cout << "Construindo Shape...\n";
}
Shape::~Shape()
{
    cout << "Destruindo Shape...\n";
}
void Shape::getType()
{
    cout << "Shape\n" << endl;
}
float Shape::calcularArea()
{

}
