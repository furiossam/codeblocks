#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "Nodo.h"

class Lista {
    private:
        int numeroElementos,linhaMax,colunaMax;
        Nodo* inicio;
    public:

        Lista(int linhaMax,int colunaMax);
        ~Lista();
        int numeroDeElementos();
        int pegaLinhas();
        int pegaColunas();
        bool existeNodo(int linha,int coluna);
        void somarValor(int coluna,int valor);
        void mostra();
        void insere(int valor,int linha,int coluna);
        Nodo* pegaNodo(int linha,int coluna);
        void retiraNodo(int linha,int coluna);


};
#endif // LISTA_H_INCLUDED
