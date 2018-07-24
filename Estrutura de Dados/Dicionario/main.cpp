#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Associacao.cpp"
#include "Dicionario.cpp"

using namespace std;

int h1(int chave)
{
    return chave % 10;
}

int h2(int chave)
{
    return chave % 4;
}
using namespace std;

int main()
{
    Dicionario<int, string> dicionarioString(10, h1);

    int chave;
    /*string informacao;

    cin >> chave;
    while (chave != -1)
    {
        if (!dicionarioString.existeElemento(chave))
        {
            cin >> informacao;
            dicionarioString.insere(chave, informacao);
            cout << "Dicionario " << endl;
            dicionarioString.mostra();
        }
        else
            cout << "Chave ja esta no dicionario" << endl;
        cin >> chave;
    }

    cout << "Chave da associacao a ser excluida = ";
    cin >> chave;
    if (!dicionarioString.existeElemento(chave))
        cout << "Chave nao esta no dicionario";
    else
        dicionarioString.retira(chave);

    cout << endl;

    dicionarioString.mostra();

    cout << endl;*/

    srand(time(NULL));

    //Exerc�cio 1
    Dicionario<int, char> dicionarioChar(4, h2);

    for (int i = 1; i <= 40; i++)
    {
        chave = rand() % 100 + 1;
        if (!dicionarioChar.existeElemento(chave))
            dicionarioChar.insere(chave, (char) (rand() % 26 + 65));
    }
    //dicionarioChar.insere(22,'A');
    //dicionarioChar.alteraChave(22,33);
    dicionarioChar.mostra();
    dicionarioChar.mostraMaiorMenorDensidade();
    dicionarioChar.mostraSinonimos(22);

    return 0;
}
