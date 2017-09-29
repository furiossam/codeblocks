#include <iostream>
#include"Paciente.h"
#include"Assegurado.h"
#include"NaoAssegurado.h"

using namespace std;

int main()
{
    int i,opcao,opcao2,banco,cheque,numSeguro;
    string nome,seguradora;
    float valorConsulta;
    Paciente *cadastros[10];


    while (Paciente::getQtdePacientes()<10)
    {
        cout << "O que deseja fazer?\n" << "1 Cadastro;\n" << "2 Relatorio;\n" << "3 Sair;\n" << endl;
        cin >> opcao;
        cin.ignore();
        switch (opcao)
        {
        case 1:
            cout << "Digite se eh ou nao asseguarado:\n" << "1 Assegurado\n" << "2 Nao Assegurado\n" << endl;
            cin >> opcao2;
            cin.ignore();
            switch (opcao2)
            {
            case 1:
                cout << "Digite o nome:\n";
                getline(cin, nome);
                cout << "Digite a seguradora:\n";
                getline(cin, seguradora);
                cout << "Digite o numero do seguro:\n";
                cin >> numSeguro;
                cin.ignore();
                cadastros[Paciente::getQtdePacientes()]=new Assegurado();
                cadastros[Paciente::getQtdePacientes()]->setNome(nome);
                ((Assegurado*)cadastros[Paciente::getQtdePacientes()])->setSeguradora(seguradora);
                ((Assegurado*)cadastros[Paciente::getQtdePacientes()])->setNumSeguro(numSeguro);
                break;
            case 2:
                cout << "Digite o nome:\n";
                getline(cin, nome);
                cout << "Digite o numero do banco e do cheque:\n";
                cin >> banco >> cheque;
                cin.ignore();
                cout << "Digite o valor da consulta:\n";
                cin >> valorConsulta;
                cin.ignore();
                cadastros[Paciente::getQtdePacientes()]=new NaoAssegurado();
                cadastros[Paciente::getQtdePacientes()]->setNome(nome);
                ((NaoAssegurado*)cadastros[Paciente::getQtdePacientes()])->setBanco(banco);
                ((NaoAssegurado*)cadastros[Paciente::getQtdePacientes()])->setCheque(cheque);
                ((NaoAssegurado*)cadastros[Paciente::getQtdePacientes()])->setValorConsulta(valorConsulta);
                break;
            }
            break;
        case 2:
            if (Paciente::getQtdePacientes()<1)
                {
                    cout << "Não há cadastros..\n";
                    break;
                }
            for (i=1;i<=Paciente::getQtdePacientes();i++)
            {
                cadastros[i]->mostra();
            }
            break;
        case 3:
            delete [] cadastros;
            return 0;
        }
    }
    delete [] cadastros;


}
