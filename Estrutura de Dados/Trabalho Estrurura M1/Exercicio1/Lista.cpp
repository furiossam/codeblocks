#include"Lista.h"
#include "NodoDuplo.cpp"
#include<iostream>

using namespace std;
template <typename T>
        Lista<T>::Lista(){
            this->numeroElementos=0;
            this->inicio=NULL;
            this->fim=NULL;
        }
template <typename T>
        Lista<T>::~Lista(){
            NodoDuplo<T>* nodo;

            while(this->inicio != NULL){
                nodo = this->inicio;
                this->inicio = this->inicio->pegaProximo();
                delete nodo;
            }
            this->numeroElementos = 0;
        }
template <typename T>
        bool Lista<T>::ehVazia(){
           return numeroDeElementos() == 0;
        }
template <typename T>
        int Lista<T>::numeroDeElementos(){
            return this->numeroElementos;
        }
template <typename T>
        bool Lista<T>::existeElemento(T elemento){
            NodoDuplo<T>* nodo = this->inicio;
            while(nodo != NULL){
                if(nodo->pegaElemento()==elemento)
                    return true;
                nodo = nodo->pegaProximo();
            }
            return false;
        }
template <typename T>
        T Lista<T>::umElemento(int posicao){
                NodoDuplo<T>* nodo = this->inicio;
                int i = 1;
                while (i != posicao){
                    nodo = nodo->pegaProximo();
                    i++;
                }
                return nodo->pegaElemento();
        }
template <typename T>
        void Lista<T>::insereNoInicio(T elemento){
            NodoDuplo<T>* nodo = new NodoDuplo<T>(elemento);
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
        void Lista<T>::insereNoFinal(T elemento){
            NodoDuplo<T>* nodo = new NodoDuplo<T>(elemento);
            if(ehVazia()){
                inicio=nodo;
                fim=nodo;
            }
            else{
                this->fim->setaProximo(nodo);
                nodo->setaAnterior(this->fim);
                this->fim=nodo;
            }
            numeroElementos++;
        }
template <typename T>
        void Lista<T>::retiraDoInicio(){
            NodoDuplo<T>* nodo=this->inicio;
            this->inicio->pegaProximo()->setaAnterior(NULL);
            this->inicio=nodo->pegaProximo();
            numeroElementos--;
            delete nodo;
        }
template <typename T>
        void Lista<T>::retiraDoFinal(){
            NodoDuplo<T>* nodo=this->fim;
            this->fim->pegaAnterior()->setaProximo(NULL);
            this->fim=nodo->pegaAnterior();
            numeroElementos--;
            delete nodo;
        }
template <typename T>
        void Lista<T>::retiraElemento(T elemento){
            NodoDuplo<T>* nodo = this->inicio;
            int i = 1;
            while(nodo!=NULL&&nodo->pegaElemento()!=elemento){
                nodo=nodo->pegaProximo();
                i++;
            }
            if(i==1)
                retiraDoInicio();
            else{
                if(i==numeroDeElementos())
                    retiraDoFinal();
                else{
                    nodo->pegaAnterior()->setaProximo(nodo->pegaProximo());
                    nodo->pegaProximo()->setaAnterior(nodo->pegaAnterior());
                    numeroElementos--;
                }
            }
            delete nodo;

        }
template <typename T>
        void Lista<T>::mostra(){
            NodoDuplo<T>* nodo = this->inicio;
            while (nodo != NULL){
                cout << nodo->pegaElemento() << " ";
                nodo = nodo->pegaProximo();
            }

        }
