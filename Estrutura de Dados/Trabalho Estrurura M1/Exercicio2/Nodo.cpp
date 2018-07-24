#include "Nodo.h"
#include <iostream>


        Nodo::Nodo(int valor,int linha,int coluna){
            this->valor = valor;
            this->linha = linha;
            this->coluna = coluna;
            this->proxlin = NULL;
            this->proxcol = NULL;
        }
        void Nodo::setaValor(int valor){
            this->valor=valor;
        }
        void Nodo::setaProximaLinha(Nodo* nodo){
            this->proxlin = nodo;
        }
        void Nodo::setaProximaColuna(Nodo* nodo){
            this->proxcol = nodo;
        }
        int Nodo::pegaValor(){
            return this->valor;
        }
        int Nodo::pegaLinha(){
            return this->linha;
        }
        int Nodo::pegaColuna(){
            return this->coluna;
        }
        Nodo* Nodo::pegaProximaColuna(){
            return this->proxcol;
        }
        Nodo* Nodo::pegaProximaLinha(){
            return this->proxlin;
        }

