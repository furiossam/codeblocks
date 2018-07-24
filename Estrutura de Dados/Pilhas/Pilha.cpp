#include <iostream>
#include "Pilha.h"

using namespace std;

template<class T>
Pilha<T>::Pilha ()
{
    numeroElementos = 0;
    topo = tamanho - 1;
    base = tamanho - 1;
}

template<class T>
Pilha<T>::~Pilha ()
{
    numeroElementos = 0;
    topo = tamanho - 1;
    base = tamanho - 1;
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
    int contador = 1;
    int posicao = topo;
    while (contador <= numeroDeElementos())
    {
        posicao++;
        if (posicao > (tamanho - 1))
            posicao = 0;
        if (elementos[posicao] == elemento)
            return true;
        contador++;
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
    if ((topo + posicao) <= (tamanho - 1))
        return elementos[topo + posicao];
    else
        return elementos[posicao - tamanho + topo];
}

template<class T>
T Pilha<T>::primeiro()
{
    if (topo < (tamanho - 1))
        return elementos[topo + 1];
    else
        return elementos[0];
}

template<class T>
T Pilha<T>::ultimo()
{
    return elementos[base];
}

template<class T>
int Pilha<T>::posicao(T elemento)
{
    int contador = 1;
    int posicao = topo;
    while (contador <= numeroDeElementos())
    {
        posicao++;
        if (posicao > (tamanho - 1))
            posicao = 0;
        if (elementos[posicao] == elemento)
            return contador;
        contador++;
    }
}

template<class T>
void Pilha<T>::insere(T elemento)
{
    topo++;
    if (topo > (tamanho - 1))
        topo = 0;
    elementos[topo] = elemento;
    numeroElementos++;
}

template<class T>
void Pilha<T>::retira()
{
    topo++;
    if (topo > (tamanho - 1))
        topo = 0;
    numeroElementos--;
}

template<class T>
void Pilha<T>::mostra()
{
    int contador = 1;
    int posicao = topo;
    while (contador <= numeroDeElementos())
    {
        posicao++;
        if (posicao > (tamanho - 1))
            posicao = 0;
        cout << elementos[posicao] << " ";
        contador++;
    }
}
 template<class T>
 bool Pilha<T>::ehIgual(Pilha<T> &elementos2){
    int contador = 1;
    int posicao = topo;
    while (contador <= numeroDeElementos())
    {
        posicao++;
        if (posicao > (tamanho - 1))
            posicao = 0;
        if (!elementos2.existeElemento(elementos[posicao]))
            return false;
        contador++;
    }
    return true;

 }


