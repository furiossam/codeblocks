#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

template <typename T>
class Nodo{
private:
    T elemento;
    Nodo<T>* proximo,*anterior;
public:
    Nodo(T elemento);
    void setaElemento(T elemento);
    void setaProximo(Nodo<T>* nodo);
    void setaAnterior(Nodo<T>* nodo);
    T pegaElemento();
    Nodo<T>* pegaProximo();
    Nodo<T>* pegaAnterior();
};

#endif // NODO_H_INCLUDED
