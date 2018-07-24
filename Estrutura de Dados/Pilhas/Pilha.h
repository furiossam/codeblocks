#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

const int tamanho = 100;

template<class T>
class Pilha
{
private:
    int numeroElementos, topo, base;
    T elementos[tamanho];
public :
    Pilha ();
    ~Pilha ();
    bool ehVazia();
    bool temEspaco();
    int numeroDeElementos();
    bool existeElemento(T elemento);
    bool existePosicao(int posicao);
    T umElemento(int posicao);
    T primeiro();
    T ultimo();
    int posicao(T elemento);
    void insere(T elemento);
    void retira();
    void mostra();
    bool ehIgual(Pilha<T>& elementos2);
};

#endif // PILHA_H_INCLUDED
