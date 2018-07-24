#include <iostream>
#include"Shape.h"
#include"Circulo.h"
#include"Quadrado.h"

using namespace std;

int main()
{
   float area;

   Shape *ptr_shape;

   ptr_shape = new Circulo();
   ptr_shape->calcularArea();
   delete ptr_shape;
}
