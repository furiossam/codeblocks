#include"Nodo.h"
template <typename T>
    Nodo<T>::Nodo(T elemento){
        this->elemento = elemento;
        this->proximo = 0;
        this->anterior = 0;
    }
template <typename T>
    void Nodo<T>::setaElemento(T elemento){
        this->elemento = elemento;
    }
template <typename T>
    void Nodo<T>::setaProximo(Nodo<T>* nodo){
        this->proximo = nodo;
    }
template <typename T>
    void Nodo<T>::setaAnterior(Nodo<T>* nodo){
        this->anterior = nodo;
    }
template <typename T>
    T Nodo<T>::pegaElemento(){
        return this->elemento;
    }
template <typename T>
    Nodo<T>* Nodo<T>::pegaProximo(){
        return this->proximo;
    }
template <typename T>
    Nodo<T>* Nodo<T>::pegaAnterior(){
        return this->anterior;
    }
