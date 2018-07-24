#include"NodoDuplo.h"
template <typename T>
    NodoDuplo<T>::NodoDuplo(T elemento){
        this->elemento = elemento;
        this->proximo = 0;
        this->anterior = 0;
    }
template <typename T>
    void NodoDuplo<T>::setaElemento(T elemento){
        this->elemento = elemento;
    }
template <typename T>
    void NodoDuplo<T>::setaProximo(NodoDuplo<T>* nodo){
        this->proximo = nodo;
    }
template <typename T>
    void NodoDuplo<T>::setaAnterior(NodoDuplo<T>* nodo){
        this->anterior = nodo;
    }
template <typename T>
    T NodoDuplo<T>::pegaElemento(){
        return this->elemento;
    }
template <typename T>
    NodoDuplo<T>* NodoDuplo<T>::pegaProximo(){
        return this->proximo;
    }
template <typename T>
    NodoDuplo<T>* NodoDuplo<T>::pegaAnterior(){
        return this->anterior;
    }
