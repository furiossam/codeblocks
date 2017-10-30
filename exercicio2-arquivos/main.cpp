#include <iostream>
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int chaveEsquerda=0,chaveDireita=0;
    ifstream codigo;
    string nomearq;
    char ch;

    cout << "\nNome do arquivo a ser aberto: ";
    getline(cin,nomearq);
    codigo.open(nomearq.c_str());
    if (!codigo)
    {
        cout << "Nao foi possivel abrir o arquivo de entrada."; cin.get();
        return 0;
    }
    for (int i=0;codigo.get(ch); i++)
    {
        if (ch=='{')
        {
            chaveEsquerda++;
        }
        if (ch=='}')
        {
            chaveDireita++;
        }
    }
    if (chaveDireita==chaveEsquerda)
    {
        cout << "O Numero de chaves está igual.";
    }
    else
    {
        cout << "O numero de chaves não está igual.";
    }
    codigo.close();
}
