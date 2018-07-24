#include "Produtos.h"
int Produtos::cod=-1;
Produtos::Produtos(char* n,float p,int q)
{
    cod++; preco=p; quant=q;
    strcpy(nome,n);
}

void Produtos::setNome(char* n)
{
    strcpy(nome,n);
}
void Produtos::setPreco(float p)
{
    preco=p;
}
void Produtos::setQuantidade(int q)
{
    quant=q;
}
int Produtos::getCodigo()
{
    return cod;
}
char* Produtos::getNome()
{
    return nome;
}
float Produtos::getPreco()
{
    return preco;
}
int Produtos::getQuantidade()
{
    return quant;
}
float Produtos::CalculaValorEstoque()
{
    return (getPreco()*getQuantidade());
}
void Produtos::mostrar()
{
    cout << endl << getNome() <<endl << getPreco() << endl << getQuantidade() << endl;
}

