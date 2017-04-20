#include <iostream>

using namespace std;

int main()
{
    int opcao,encerradas=0;
    double diarias,taxa,total;
    string nome;

    do
    {
        do
        {
            cout << "Digite sua opcao: " << endl;
            cout << "(1) Encerrar a conta de um hospede;" << endl;
            cout << "(2) Verificar o numero de contas encerradas;" << endl;
            cout << "(3) Finalizar a execucao;" << endl;
            cin >> opcao;
        }
        while ((opcao < 1) || (opcao > 3));
        switch (opcao)
        {
        case 1:
            cout << "Digite seu nome:" << endl;
            cin >> nome;
            cout << "Digite o numero de diarias: " << endl;
            cin >> diarias;
            if (diarias < 15)
            {
                taxa = 7.5;
            }
            else
            {
                if (diarias == 15)
                {
                    taxa = 6.5;
                }
                else
                {
                    taxa = 5;
                }
            }
            total = (diarias*50) + (diarias*taxa);
            cout << "Nome : " << nome << endl;
            cout << "Total a pagar: " << total << endl;
            encerradas++;
            break;
        case 2:
            cout << "Um total de " << encerradas << " contas foram encerradas;" << endl;
            break;
        case 3:
            cout << "Fim da execucao..." << endl;
        }

    }
    while (opcao != 3);

}
