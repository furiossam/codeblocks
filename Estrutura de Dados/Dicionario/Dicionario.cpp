#include <iostream>
#include "Dicionario.h"

template<class T1, class T2>
Dicionario<T1, T2>::Dicionario(int tamanho, funcaoHash* hash)
{
    this->numeroElementos = 0;
    this->tamanho = tamanho;
    this->hash = hash;
    this->tabela = new Lista[tamanho];
}

template<class T1, class T2>
Dicionario<T1, T2>::~Dicionario()
{
    for (int i = 0; i < this->tamanho; i++)
        if (!this->tabela[i].empty())
            this->tabela[i].clear();
    this->numeroElementos = 0;
}

template<class T1, class T2>
int Dicionario<T1, T2>::numeroDeElementos()
{
    return this->numeroElementos;
}

template<class T1, class T2>
bool Dicionario<T1, T2>::ehVazio()
{
    return this->numeroElementos == 0;
}

template<class T1, class T2>
int Dicionario<T1, T2>::posicao(T1 chave)
{
    return this->hash(chave);
}

template<class T1, class T2>
bool Dicionario<T1, T2>::existeElemento(T1 chave)
{
    for (typename Lista::iterator it = this->tabela[hash(chave)].begin(); it != this->tabela[hash(chave)].end(); ++it)
        if ((*it).pegaChave() == chave) return true;
    return false;
}

template<class T1, class T2>
void Dicionario<T1, T2>::insere(T1 chave, T2 informacao)
{
    Associacao<T1, T2> associacao(chave, informacao);
    this->tabela[this->hash(chave)].push_back(associacao);
    this->numeroElementos++;
}

template<class T1, class T2>
void Dicionario<T1, T2>::retira(T1 chave)
{
    for (typename Lista::iterator it = this->tabela[hash(chave)].begin(); it != this->tabela[hash(chave)].end(); ++it)
        if ((*it).pegaChave() == chave)
        {
            it = this->tabela[this->hash(chave)].erase(it);
            this->numeroElementos--;
            break;
        }
}
template<class T1, class T2>
void Dicionario<T1, T2>::alteraChave(T1 chave,T1 novaChave)
{
    for (typename Lista::iterator it = this->tabela[hash(chave)].begin(); it != this->tabela[hash(chave)].end(); ++it)
        if ((*it).pegaChave() == chave)
        {
            T2 informacao = (*it).pegaInformacao();
            retira(chave);
            insere(novaChave,informacao);
            break;
        }
}

template<class T1, class T2>
void Dicionario<T1, T2>::mostraSinonimos(T1 chave)
{
    if(existeElemento(chave)){
        for (typename Lista::iterator it = this->tabela[hash(chave)].begin(); it != this->tabela[hash(chave)].end(); ++it)
        if ((*it).pegaChave() != chave)
        {
            cout << (*it).pegaChave() << "  " << (*it).pegaInformacao() << "  ";
        }
        cout << endl;
    }

}

template<class T1, class T2>
void Dicionario<T1, T2>::mostra()
{
    for (int i = 0; i < this->tamanho; i++)
        if (!this->tabela[i].empty())
        {
            cout << i << " -> ";
            for (typename Lista::iterator it = this->tabela[i].begin(); it != this->tabela[i].end(); ++it)
                cout << (*it).pegaChave() << "  " << (*it).pegaInformacao() << "  ";
            cout << endl;
        }
}
template<class T1, class T2>
void Dicionario<T1, T2>::mostraMaiorMenorDensidade()
{
    int maiorDensidade=this->tabela[0].size(),menorDensidade=this->tabela[0].size(),maisDenso=0,menosDenso=0;
    for (int i = 1; i < this->tamanho; i++)
        if (!this->tabela[i].empty())
        {
            if(this->tabela[i].size()>maiorDensidade){
                maiorDensidade=tabela[i].size();
                maisDenso=i;
            }
            if(this->tabela[i].size()<menorDensidade){
                menorDensidade=tabela[i].size();
                menosDenso=i;
            }
        }

        cout << maisDenso << " -> " << "Maior Densidade" << endl;
        cout << menosDenso << " -> " << "Menor Densidade" << endl;
}
