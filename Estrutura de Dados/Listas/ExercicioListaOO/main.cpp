#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
    Lista L;

    L.insere(10, 1);
    L.mostra();
    cout << endl;

    L.insere(20, 1);
    L.mostra();
    cout << endl;

    L.insere(12, 1);
    L.mostra();
    cout << endl;

    L.insere(14, 1);
    L.mostra();
    cout << endl;

    //L.inverteLista();
    L.mostra();
}
