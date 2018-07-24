#include <iostream>
#include "Pilha.h"

using namespace std;

template<class T>
Pilha<T>::Pilha ()
{
    numeroElementos = 0;
}

template<class T>
Pilha<T>::~Pilha ()
{
    numeroElementos = 0;
}

template<class T>
bool Pilha<T>::ehVazia()
{
    return numeroDeElementos() == 0;
}

template<class T>
bool Pilha<T>::temEspaco()
{
    return numeroDeElementos() != tamanho;
}

template<class T>
int Pilha<T>::numeroDeElementos()
{
    return numeroElementos;
}

template<class T>
bool Pilha<T>::existeElemento(T elemento)
{
    int i = 0;
    while (i < numeroDeElementos())
    {
        if (elementos[i] == elemento)
            return true;
        i++;
    }
    return false;
}

template<class T>
bool Pilha<T>::existePosicao(int posicao)
{
    return ((posicao >= 1) && (posicao <= numeroDeElementos()));
}

template<class T>
T Pilha<T>::umElemento(int posicao)
{
    return elementos[numeroDeElementos() - posicao];
}

template<class T>
T Pilha<T>::Pilha::topo()
{
    return elementos[numeroDeElementos() - 1];
}

template<class T>
int Pilha<T>::posicao(T elemento)
{
    int i = numeroDeElementos() - 1;
    while (elementos[i] != elemento)
        i--;
    return numeroDeElementos() - i;
}

template<class T>
void Pilha<T>::empilha(T elemento)
{
    elementos[numeroDeElementos()] = elemento;
    numeroElementos++;
}

template<class T>
void Pilha<T>::desempilha()
{
    numeroElementos--;
}

template<class T>
void Pilha<T>::mostra()
{
    for (int i = 0; i < numeroDeElementos(); i++)
        cout << elementos[i] << "  ";
}



