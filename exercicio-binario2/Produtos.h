#ifndef PRODUTOS_H_INCLUDED
#define PRODUTOS_H_INCLUDED
#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;
class Produtos
{
    static int cod;
    int quant;
    float preco;
    char nome[20];
public:
    Produtos(char* =" ",float=0.0,int=0);
    float CalculaValorEstoque();
    void setQuantidade(int);
    void setPreco(float);
    void setNome(char*);
    static int getCodigo();
    int getQuantidade();
    float getPreco();
    char* getNome();
    void mostrar();


};

#endif // PRODUTOS_H_INCLUDED

