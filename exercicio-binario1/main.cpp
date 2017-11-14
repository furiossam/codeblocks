#include <iostream>
#include <fstream>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>
#include"Produtos.h"
#include<vector>
using namespace std;
int main()
{
    ofstream prod;
    ifstream read;
    int i,opc,opc2,quantidade;
    float preco;
    vector<Produtos> cadastros;
    char nome[20];
    prod.open("PRODUTOS.DAT", ios::binary);
    if(!prod)
    {
        cout << "Arquivo PRODUTOS.DAT não foi encontrado...\n";
        return 0;
    }

    do
    {
        system("cls");
        cout << "Digite o que deseja fazer?\n" << "1) Cadastrar novo produto:\n" << "2) Sair\n";
        cin >> opc;cin.ignore();
        switch(opc)
        {
        case 1:
            {

                system("cls");
                cout << "Digite o nome do Produto:\n";
                gets(nome);
                cout << "Digite o preco:\n";
                cin >> preco; cin.ignore();
                cout << "Digite a quantidade em estoque: \n";
                cin >> quantidade; cin.ignore();
                cout << "Produto Cadastrado...\n";
                Produtos novo_produto(nome, preco, quantidade);
                cadastros.push_back(novo_produto);
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
    while(opc != 2);

    for (i=0;i<cadastros.size();i++)
    {
        cadastros[i].grava(prod);
    }
    prod.close();
    read.open("PRODUTOS.DAT",ios::binary);
    if (!read)
    {
        cout << "Arquivo PRODUTOS.DAT não foi encontrado...\n";
        return 0;
    }
    for(i=0;i<cadastros.size();i++)
    {
        Produtos p;
        p.recupera(read);
        p.mostrar();
    }
    read.close();

}
