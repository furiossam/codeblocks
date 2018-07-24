#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

template<class T>
class Nodo
{
public:
    Nodo(T elemento);
    T retornaElemento();
    Nodo<T>* retornaSubArvoreEsquerda();
    Nodo<T>* retornaSubArvoreDireita();
    void setaSubArvoreEsquerda(Nodo<T>* subArvoreEsquerda);
    void setaSubArvoreDireita(Nodo<T>* subArvoreDireita);
    void setaElemento(T elemento);
private:
    T elemento;
    Nodo<T> *subArvoreEsquerda, *subArvoreDireita;
};

#endif // NODO_H_INCLUDED
