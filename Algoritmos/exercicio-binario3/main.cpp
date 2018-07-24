#include <iostream>
#include"Pessoa.h"
#include"Incompleta.h"
#include<fstream>
#include<vector>
#include<stdlib.h>
#include <cstring>
using namespace std;

int main()
{
    ofstream outfile,outfile2,outfile3;
    ifstream infile;
    vector<Pessoa> cadastrosP;
    vector<Incompleta> cadastrosF;
    vector<Incompleta> cadastrosM;
    int opc,opc2,i;
    string nome,corOlhos,dataNasc;
    char sexo;
    float altura,peso;

    outfile.open("CADASTRO.DAT",ios::binary);
    do
    {
        system("cls");
        cout << "Digite o que deseja fazer?\n" << "1) Cadastrar novo cliente:\n" << "2) Sair\n";
        cin >> opc;cin.ignore();
        switch(opc)
        {
        case 1:
            {

                system("cls");
                cout << "Digite o nome do Cliente:\n";
                getline(cin,nome);cin.ignore();
                cout << "Cor dos olhos:\n";
                getline(cin,corOlhos);cin.ignore();
                cout << "Digite a Data de Nascimento:\n";
                getline(cin,dataNasc);cin.ignore();
                cout << "Digite o sexo do Cliente:\n";
                cin >> sexo;cin.ignore();
                cout << "Digite a altura:\n";
                cin >> altura;cin.ignore();
                cout << "Digite o peso:\n";
                cin >> peso;cin.ignore();

                Pessoa nova_pessoa(nome, corOlhos, dataNasc, sexo, altura, peso);
                cadastrosP.push_back(nova_pessoa);
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
    for (i=0;i<cadastrosP.size();i++)
    {
        cadastrosP[i].grava(outfile);
    }

    outfile.close();
    if (!infile)
    {
        cout << "Arquivo CADASTRO.DAT não foi encontrado...\n";
        return 0;
    }
    infile.open("CADASTRO.DAT",ios::binary);
    Pessoa p;
    while(infile.read(reinterpret_cast<char*>(&p),sizeof(Pessoa)))
    {
        if (p.getSexo()=='m' || p.getSexo()=='M')
            {

                altura=p.getAltura();
                peso=p.getPeso();
                Incompleta m(p.getNome(),p.getCorOlhos(),p.getDataNasc(),altura,peso);
                cadastrosM.push_back(m);
            }
        if (p.getSexo()=='f' || p.getSexo()=='F')
            {

                altura=p.getAltura();
                peso=p.getPeso();
                Incompleta f(p.getNome(),p.getCorOlhos(),p.getDataNasc(),altura,peso);
                cadastrosF.push_back(f);
            }

    }
    infile.close();
    outfile2.open("HOMENS.BIN",ios::binary);
    for (i=0;i<cadastrosM.size();i++)
    {
        cadastrosM[i].grava(outfile2);
    }
    outfile2.close();
    outfile3.open("MULHERES.BIN",ios::binary);
    for (i=0;i<cadastrosF.size();i++)
    {
        cadastrosF[i].grava(outfile3);
    }
    outfile3.close();
}
