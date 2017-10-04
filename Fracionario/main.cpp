#include <iostream>
#include"Fracao.h"

using namespace std;

int main()
{

    Fracao n1(3,2),n2(2,3),t;
    t = n1 * n2;
    t.mostra();
}
