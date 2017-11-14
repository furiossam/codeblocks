#include <iostream>
#include <vector>
#include <cstring>
#include<stdlib.h>
#include<fstream>
#include"Cadastro.h"
#include"Movimento.h"

using namespace std;

int main()
{
    ofstream movimentoOut,cadastroOut;
    ifstream movimentoIn,cadastroIn;
    char nconta[20],nome[20],endereco[20],tipoOp;
    int dataVenc,opc,opc2,i;
    float lim,saldo,valor;
    vector<Cadastro> cadastros,cadastrosAtualizados;
    vector<Movimento> movimentos;
do
    {
        system("cls");
        cout << "Digite o que deseja fazer?\n" << "1) Cadastrar novo cliente:\n" << "2) Deposito:\n" << "3)Saldo:\n" << "4)Sair:\n";
        cin >> opc;cin.ignore();
        switch(opc)
        {
        case 1:
            {

                system("cls");
                cout << "Digite o numero da conta:\n";
                gets(nconta);
                cout << "Nome do cliente:\n";
                gets(nome);
                cout << "Digite o endereço:\n";
                gets(endereco);
                cout << "Digite o limite:\n";
                cin >> lim;cin.ignore();
                cout << "Digite a data de vencimento do cheque especial:\n";
                cin >> dataVenc;cin.ignore();
                cout << "Digite o Saldo:";
                cin >> saldo;cin.ignore();


                Cadastro novo_cliente(nconta, nome, endereco, lim, dataVenc, saldo);
                cadastros.push_back(novo_cliente);
                do
                {
                    system("cls");
                    cout << "1) Voltar ao menu principal...\n";
                    cin >> opc2; cin.ignore();
                }
                while (opc2 != 1);
                break;
            }
        case 2:
            {
                system("cls");
                cout << "Digite o numero da conta:\n";
                gets(nconta);
                do
                {
                    cout << "Digite o tipo de Operacao:d(deposito) s(retirada)\n";
                    cin >> tipoOp;cin.ignore();
                }
                while(tipoOp!='d'||tipoOp!='D'||tipoOp!='s'||tipoOp!='S');
                do
                {
                    cout << "Digite o valor da operacao:\n";
                    cin >> valor;cin.ignore();
                }
                while(valor<0);
                if (tipoOp=='s'||tipoOp=='S')
                {
                    for (i=0;i<cadastros.size();i++)
                    {
                        if (cadastros[i].getSaldo()<valor||cadastros[i].getLimite()<valor)
                        {
                            valor=0;
                        }
                    }
                }

                Movimento novo_movimento(nconta,tipoOp,valor);
                movimentos.push_back(novo_movimento);
                do
                {
                    system("cls");
                    cout << "1) Voltar ao menu principal...\n";
                    cin >> opc2; cin.ignore();
                }
                while (opc2 != 1);
                break;
            }
        }
    }
    while(opc != 4);
    movimentoOut.open("MOVIMENTOS.DAT",ios::binary);
    for (i=0;i<movimentos.size();i++)
    {
        movimentoOut.write(reinterpret_cast<char*>(&movimentos[i]),sizeof(Movimento));
    }
    movimentoOut.close();
    cadastroOut.open("CADASTROS.DAT",ios::binary);
    for (i=0;i<cadastros.size();i++)
    {
        cadastroOut.write(reinterpret_cast<char*>(&cadastros[i]),sizeof(Movimento));
    }
    cadastroOut.close();


}
