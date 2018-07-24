#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include "Nodo.h"

template <typename T>
class Pilha
{
    private:
        int numeroElementos;
        Nodo<T>* inicio, *fim;
    public:
         Pilha();
         ~Pilha();
         bool ehVazia();
         int numeroDeElementos();
         bool existeElemento(T elemento);
         T getTopo();
         void empilha(T elemento);
         void desempilha();
         void mostra();
};

#endif // PILHA_H_INCLUDED
