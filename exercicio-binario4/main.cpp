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
    int dataVenc,opc,opc2,i,j;
    float lim,saldo,valor,aux;
    vector<Cadastro> cadastros;
    vector<Movimento> movimentos;
do
    {
        system("cls");
        cout << "Digite o que deseja fazer?\n" << "1) Cadastrar novo cliente:\n" << "2) Deposito:\n" << "3) Saque:\n" << "4) Saldo:\n" << "5) Sair:\n";
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
                cout << "Digite o Saldo:\n";
                cin >> saldo;cin.ignore();


                Cadastro novo_cliente(nconta, nome, endereco, lim, dataVenc, saldo);
                cadastros.push_back(novo_cliente);
                cout << cadastros.size();
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
                    cin >> tipoOp;
                }
                while((tipoOp!='d')&&(tipoOp!='D')&&(tipoOp!='s')&&(tipoOp!='S'));
                do
                {
                    cout << "Digite o valor da operacao:\n";
                    cin >> valor;cin.ignore();
                }
                while(valor<0);


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
        case 3:
            {

            }
        case 4:
            {
                system("cls");
                cout << "Digite o numero da conta:\n";
                gets(nconta);
                for (i=0;i<cadastros.size();i++)
                    {
                        if ((cadastros[i].getNconta())==(nconta))
                        {
                            cout << "Valor em conta: " << cadastros[i].getSaldo() << endl ;
                            cin.get();
                        }
                        else
                        {
                            cout << "Falha";
                            cin.get();
                        }

                    }
            }
        }
    }
    while(opc != 5);
    movimentoOut.open("MOVIMENTOS.DAT",ios::binary);
    for (i=0;i<movimentos.size();i++)
    {
        movimentoOut.write(reinterpret_cast<char*>(&movimentos[i]),sizeof(Movimento));
    }
    movimentoOut.close();
    cadastroOut.open("CADASTROS.DAT",ios::binary);
    for (i=0;i<cadastros.size();i++)
    {
        cadastroOut.write(reinterpret_cast<char*>(&cadastros[i]),sizeof(Cadastro));
    }
    cadastroOut.close();
    if (!cadastroIn)
    {
        cout << "Arquivo CADASTRO.DAT nao foi encontrado:\n";
        return 0;
    }
    if (!movimentoIn)
    {
        cout << "Arquivo MOVIMENTOS.DAT nao foi encontrado:\n";
        return 0;
    }
cadastroIn.open("CADASTRO.DAT",ios::binary);
movimentoIn.open("MOVIMENTOS.DAT",ios::binary);
for (i=0;i<cadastros.size();i++)
{
    cadastroIn.read(reinterpret_cast<char*>(&cadastros[i]),sizeof(Cadastro));
    for (j=0;j<movimentos.size();j++)
    {
        movimentoIn.read(reinterpret_cast<char*>(&movimentos[j]),sizeof(Movimento));
        if (movimentos[j].getNconta()==cadastros[i].getNconta())
        {
                if (movimentos[j].getTipoOp()=='d'||movimentos[j].getTipoOp()=='D')
                {
                    aux=movimentos[j].getValor()+cadastros[i].getSaldo();
                    cadastros[i].setSaldo(aux);
                }
                else
                {
                    aux=movimentos[j].getValor()-cadastros[i].getSaldo();
                    cadastros[i].setSaldo(aux);
                }
        }
    }
}
cadastroIn.close();
movimentoIn.close();

}
