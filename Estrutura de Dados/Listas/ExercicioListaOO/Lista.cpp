#include "Lista.h"
#include "Nodo.h"
#include<iostream>

using namespace std;

        Lista::Lista(){
            this->numeroElementos = 0;
            this->inicio = 0;
        }

        Lista::~Lista(){
            Nodo* nodo;

            while(this->inicio != 0){
                nodo = this->inicio;
                this->inicio = this->inicio->pegaProximo();
                delete nodo;
            }
            this->numeroElementos = 0;
        }

        bool Lista::ehVazia(){
           return numeroDeElementos() == 0;
        }

        int Lista::numeroDeElementos(){
            return this->numeroElementos;
        }

        bool Lista::existeElemento(int elemento){
            Nodo* nodo = this->inicio;
            while (nodo != 0){
                if (nodo->pegaElemento() == elemento)
                    return true;
                nodo = nodo->pegaProximo();
            }
            return false;
        }

        int Lista::umElemento(int posicao){
            Nodo* nodo = this->inicio;
            int i = 1;

            while (i != posicao){
                nodo = nodo->pegaProximo();
                i++;
            }
            return nodo->pegaElemento();
        }

        int Lista::posicao(int elemento){
            Nodo* nodo = this->inicio;
            int i = 1;

            while (nodo->pegaElemento() != elemento){
                nodo = nodo->pegaProximo();
                i++;
            }
            return i;
        }

        void Lista::insere(int elemento, int posicao){
            Nodo* nodo = new Nodo(elemento);

            if (this->inicio == 0)
                this->inicio = nodo;
            else {
                if (posicao == 1){
                    nodo->setaProximo(this->inicio);
                    this->inicio = nodo;
                }
                else {
                    Nodo* nodoAnterior = this->inicio;
                    int i = 1;
                    while (i != posicao - 1){
                        nodoAnterior = nodoAnterior->pegaProximo();
                        i++;
                    }
                    nodo->setaProximo(nodoAnterior->pegaProximo());
                    nodoAnterior->setaProximo(nodo);
                }
            }
            this->numeroElementos++;
        }

        void Lista::retira(int posicao){
            Nodo* nodo = this->inicio;

            if (posicao == 1){
                this->inicio = this->inicio->pegaProximo();
            }
            else {
                Nodo* nodoAnterior = this->inicio;
                int i = 1;
                while (i != posicao - 1){
                    nodoAnterior = nodoAnterior->pegaProximo();
                    i++;
                }
                nodo = nodoAnterior->pegaProximo();
                nodoAnterior->setaProximo(nodo->pegaProximo());
            }
            delete nodo;
            this->numeroElementos--;
        }

        void Lista::mostra(){
            Nodo* nodo = this->inicio;

            while (nodo != 0){
                cout << nodo->pegaElemento() << " ";
                nodo = nodo->pegaProximo();
            }
        }
        void Lista::inverteLista(){
            Nodo* nodo = this->inicio;
            Nodo* nodoaux = 0;

            int aux=0,aux2=0,lim=this->numeroDeElementos();
            while(lim>this->numeroDeElementos()/2){
                nodo = this->inicio;
                nodoaux = NULL;
                for(int i=0;i<lim;i++){
                    if(nodo->pegaProximo()!=0){
                        aux=nodo->pegaElemento();
                        nodoaux=nodo->pegaProximo();
                        aux2=nodoaux->pegaElemento();
                        nodo->setaElemento(aux2);
                        nodoaux->setaElemento(aux);
                        nodo=nodo->pegaProximo();
                        cout << 1 << endl;
                    }

                }
                lim--;
            }
	    delete nodo;
        delete nodoaux;
        }
