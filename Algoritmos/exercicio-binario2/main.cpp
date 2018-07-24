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
    ifstream leitura;
    vector<Produtos> cadastros;


    leitura.open("C:\\Users\\Leonardo\\Desktop\\PortableGit\\codeblocks\\exercicio-binario1\\PRODUTOS.DAT",ios::binary);
    if (!leitura)
    {
        cout << "Arquivo PRODUTOS.DAT não foi encontrado...\n";
        return 0;
    }
    Produtos p;
    while(leitura.read(reinterpret_cast<char*>(&p),sizeof(Produtos)))
    {
        cadastros.push_back(p);
        if (p.CalculaValorEstoque()>1000.0)
            p.mostrar();
    }
    leitura.close();
}

