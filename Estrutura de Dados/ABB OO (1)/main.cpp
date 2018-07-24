#include <iostream>
#include <ctime>
#include <cstdlib>
#include "ABB.cpp"

using namespace std;

int main()
{
    /*ABB<int> arvoreInt;

    arvoreInt.insere(10);
    arvoreInt.mostra();
    cout << endl;
    arvoreInt.insere(15);
    arvoreInt.mostra();
    cout << endl;
    arvoreInt.insere(5);
    arvoreInt.retira(5);
    arvoreInt.mostra();
    cout << endl;
    if (arvoreInt.existeElemento(5))
        cout << "Elemento existe" << endl;
    else
        cout << "Elemento nao existe" << endl;

    ABB<char> arvoreChar;

    arvoreChar.insere('A');
    arvoreChar.insere('B');
    arvoreChar.insere('C');
    arvoreChar.insere('D');
    arvoreChar.retira('C');
    arvoreChar.mostra();*/

    ABB<int> arvorePares;
    ABB<int> arvoreImpares;
    int num;

    srand(time(NULL));

    for (int i=0;i<20;i++){
        num=((rand()%70)+10);
        if(num%2==0&&!arvorePares.existeElemento(num))
            arvorePares.insere(num);
        else if(!arvoreImpares.existeElemento(num))
            arvoreImpares.insere(num);
    }
    cout << "Elementos Pares: \n";
    arvorePares.mostra();
    cout << "\nElementos Impares: \n";
    arvoreImpares.mostra();

    return 0;
}
