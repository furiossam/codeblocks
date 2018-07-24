#include <iostream>
#include "Lista.cpp"

using namespace std;

int main()
{
    Lista<float> L;

    //cout << L.ehVazia() << endl;
    L.insereNoFinal(1.2);
    L.insereNoInicio(1.5);
    L.insereNoFinal(2.0);
    L.retiraElemento(1.5);
    L.mostra();
    cout << endl<< L.existeElemento(1.5);
    cout << "\nNumero de Elementos: "<< L.numeroDeElementos() << endl;

}
