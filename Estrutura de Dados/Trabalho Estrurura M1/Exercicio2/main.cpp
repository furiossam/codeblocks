#include <iostream>
#include "Lista.h"
#include "Nodo.h"

using namespace std;

int main()
{
    Lista lista(3,3);
    lista.insere(4,1,1);
    lista.insere(3,2,2);
    lista.insere(6,3,2);
    lista.somarValor(1,-4);

    lista.mostra();

}
