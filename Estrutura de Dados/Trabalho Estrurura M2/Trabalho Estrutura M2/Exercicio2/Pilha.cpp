#include"Pilha.h"
#include "Nodo.cpp"
#include<iostream>

using namespace std;
template <typename T>
        Pilha<T>::Pilha(){
            this->numeroElementos=0;
            this->inicio=NULL;
            this->fim=NULL;
        }
template <typename T>
        Pilha<T>::~Pilha(){
            Nodo<T>* nodo;

            while(this->inicio != NULL){
                nodo = this->inicio;
                this->inicio = this->inicio->pegaProximo();
                delete nodo;
            }
            this->numeroElementos = 0;
        }
template <typename T>
        bool Pilha<T>::ehVazia(){
           return numeroDeElementos() == 0;
        }
template <typename T>
        int Pilha<T>::numeroDeElementos(){
            return this->numeroElementos;
        }
template <typename T>
        bool Pilha<T>::existeElemento(T elemento){
            Nodo<T>* nodo = this->inicio;
            while(nodo != NULL){
                if(nodo->pegaElemento()==elemento)
                    return true;
                nodo = nodo->pegaProximo();
            }
            return false;
        }
template <typename T>
        T Pilha<T>::getTopo(){
                Nodo<T>* nodo = this->inicio;
                return nodo->pegaElemento();
        }
template <typename T>
        void Pilha<T>::empilha(T elemento){
            Nodo<T>* nodo = new Nodo<T>(elemento);
            if (ehVazia())
            {
                inicio=nodo;
                fim=nodo;
            }
            else{
                this->inicio->setaAnterior(nodo);
                nodo->setaProximo(this->inicio);
                this->inicio=nodo;;
            }
            numeroElementos++;

        }

template <typename T>
        void Pilha<T>::desempilha(){
            Nodo<T>* nodo=this->inicio;
            if (numeroDeElementos()==1){
                numeroElementos--;
                delete nodo;
                this->inicio=NULL;
            }
            else{
                this->inicio->pegaProximo()->setaAnterior(NULL);
                this->inicio=nodo->pegaProximo();
                numeroElementos--;
                delete nodo;
            }

        }


template <typename T>
        void Pilha<T>::mostra(){
            Nodo<T>* nodo = this->inicio;
            while (nodo != NULL){
                cout << nodo->pegaElemento() << " ";
                nodo = nodo->pegaProximo();
            }

        }
