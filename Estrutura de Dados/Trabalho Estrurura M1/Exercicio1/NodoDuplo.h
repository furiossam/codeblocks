#ifndef NODODUPLO_H_INCLUDED
#define NODODUPLO_H_INCLUDED

template <typename T>
class NodoDuplo{
private:
    T elemento;
    NodoDuplo<T>* proximo,*anterior;
public:
    NodoDuplo(T elemento);
    void setaElemento(T elemento);
    void setaProximo(NodoDuplo<T>* nodo);
    void setaAnterior(NodoDuplo<T>* nodo);
    T pegaElemento();
    NodoDuplo<T>* pegaProximo();
    NodoDuplo<T>* pegaAnterior();
};

#endif // NODODUPLO_H_INCLUDED
