#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

const int tamanho = 100;

template<class T>
class Fila
{
private:
    int numeroElementos, inicio, fim;
    T elementos[tamanho];
public :
    Fila ();
    ~Fila ();
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
    bool ehIgual(Fila<T>& elementos2);
};

#endif // FILA_H_INCLUDED
