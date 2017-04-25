#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int cont,vendas=0,quantidade,produtos;
    double comissao,preco,total;
    char opcao;
    string nome;

    do
    {
        cout << "Deseja digitar os dados de mais um vendedor s/n?" << endl;
        cin  >> opcao;

    }
    while ((opcao != 's') && (opcao != 'n'));
    while (opcao == 's')
    {
        cout << "Digite seu nome:" << endl;
        cin >> nome;
        cout << "Digite os tipos de produtos vendidos" << endl;
        cin >> produtos;
        for (cont=1;cont<=produtos;cont++)
        {
            cout << "Digite o preco do produto e a quantidade:" << endl;
            cin >> preco >> quantidade;
            total = preco*quantidade*0.3;
            comissao += total;
            vendas += quantidade;
        }
        cout << nome << " teve um total de " << vendas << " vendas" << endl;
        cout << "Sua comissao foi de " << comissao << " reais" << endl;
        do
        {
        cout << "Deseja digitar os dados de mais um vendedor s/n?" << endl;
        cin >> opcao;

        }
        while ((opcao != 's') && (opcao != 'n'));
    }
}
