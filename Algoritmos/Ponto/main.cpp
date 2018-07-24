#include <iostream>
#include"Ponto.h"

using namespace std;

int main()
{
    Ponto p1(1,1),p2(2,2),pt;
    pt=p1+2;
    pt.mostrar();
    p1.mostrar();

}
