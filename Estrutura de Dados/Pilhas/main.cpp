#include <iostream>
#include "Pilha.cpp"

using namespace std;

int main()
{
    Pilha<int> pilhaTeste;

    pilhaTeste.insere(4);
    pilhaTeste.insere(2);
    //pilhaTeste.insere(3);
    //pilhaTeste.insere(5);
    pilhaTeste.retira();

    pilhaTeste.mostra();
}
