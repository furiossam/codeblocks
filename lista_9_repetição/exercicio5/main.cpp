#include <iostream>

using namespace std;

int main()
{
    string nome,endereco;
    double valor,total;

    do
    {
        cout << "Digite seu nome e endereco: " << endl;
        cin >> nome >> endereco;
        cout << "Digite o valor de sua compra:" << endl;
        cin >> valor;
        if (valor > 500)
        {
            total = valor*0.8;
        }
        else
        {
            total = valor*0.85;
        }
        cout << "Nome: " << nome << " Endereco: " << endereco << endl;
        cout << "Total a pagar: " << total << endl;
    }
    while (nome != "ULTIMO");
    cout << "Fim";

}
