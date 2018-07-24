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

    L.retira(1);
    L.mostra();
    cout << endl;

    L.retira(1);
    L.mostra();
    cout << endl;

    return 0;
}
