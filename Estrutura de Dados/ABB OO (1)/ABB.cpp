#include "Nodo.cpp"
#include "ABB.h"

using namespace std;

template<class T>
ABB<T>::ABB()
{
    this->raiz = NULL;
}

template<class T>
ABB<T>::~ABB()
{
    destroi(this->raiz);
}

template<class T>
void ABB<T>::destroi(Nodo<T>* raiz)
{
    if (raiz != NULL)
    {
        destroi(raiz->retornaSubArvoreEsquerda());
        destroi(raiz->retornaSubArvoreDireita());
        delete raiz;
        raiz = NULL;
    }
}

template<class T>
bool ABB<T>::ehVazia()
{
    return this->raiz == NULL;
}

template<class T>
bool ABB<T>::existeElemento(T elemento)
{
    Nodo<T>* nodo = this->raiz;
    while (nodo != NULL)
        if (nodo->retornaElemento() == elemento)
            return true;
        else
        {
            if (elemento < nodo->retornaElemento())
                nodo = nodo->retornaSubArvoreEsquerda();
            else
                nodo = nodo->retornaSubArvoreDireita();
        }
    return false;
}

template<class T>
void ABB<T>::insere(T elemento)
{

    Nodo<T>* novoNodo = new Nodo<T>(elemento);

    if (this->raiz == NULL)
        this->raiz = novoNodo;
    else
    {
        Nodo<T>* nodoAnterior;
        Nodo<T>* nodoAtual = this->raiz;
        while (nodoAtual != NULL)
        {
            nodoAnterior = nodoAtual;
            if (elemento < nodoAtual->retornaElemento())
            {
                nodoAtual = nodoAtual->retornaSubArvoreEsquerda();
                if (nodoAtual == NULL)
                {
                    nodoAnterior->setaSubArvoreEsquerda(novoNodo);
                    return;
                }
            }
            else
            {
                nodoAtual = nodoAtual->retornaSubArvoreDireita();
                if (nodoAtual == NULL)
                {
                    nodoAnterior->setaSubArvoreDireita(novoNodo);
                    return;
                }
            }
        }
    }
}

template<class T>
void ABB<T>::retira(T elemento)
{
    Nodo<T>* nodoAnterior;
    Nodo<T>* nodoAtual=raiz;
    Nodo<T>* nodoAux;

    do{
        nodoAnterior=nodoAtual;
        if(elemento<nodoAtual->retornaElemento()){
            nodoAtual=nodoAtual->retornaSubArvoreEsquerda();
        }
        else{
            if(elemento>nodoAtual->retornaElemento()){
                nodoAtual=nodoAtual->retornaSubArvoreDireita();
            }
        }

    }while(nodoAtual!=NULL && nodoAtual->retornaElemento()!=elemento);
    if(nodoAtual!=NULL){
        if(nodoAtual->retornaSubArvoreEsquerda()!=NULL && nodoAtual->retornaSubArvoreDireita()!=NULL){
            nodoAux=nodoAtual;
            nodoAnterior=nodoAtual;
            nodoAtual=nodoAtual->retornaSubArvoreDireita();
            while(nodoAtual->retornaSubArvoreEsquerda()!=NULL){
                nodoAnterior=nodoAtual;
                nodoAtual=nodoAtual->retornaSubArvoreEsquerda();
            }
            nodoAux->setaElemento(nodoAtual->retornaElemento());
        }
        if(nodoAtual->retornaSubArvoreEsquerda()!=NULL && nodoAtual->retornaSubArvoreDireita()==NULL){
            if(nodoAnterior->retornaSubArvoreEsquerda()==nodoAtual){
                nodoAnterior->setaSubArvoreEsquerda(nodoAtual->retornaSubArvoreEsquerda());
            }
            else{
                nodoAnterior->setaSubArvoreDireita(nodoAtual->retornaSubArvoreEsquerda());
            }
        }
        else{
            if(nodoAtual->retornaSubArvoreEsquerda()==NULL && nodoAtual->retornaSubArvoreDireita()!=NULL){
                if(nodoAnterior->retornaSubArvoreEsquerda()==nodoAtual)
                    nodoAnterior->setaSubArvoreEsquerda(nodoAtual->retornaSubArvoreDireita());
                else
                    nodoAnterior->setaSubArvoreDireita(nodoAtual->retornaSubArvoreDireita());
            }
            else{
                if(nodoAnterior->retornaSubArvoreEsquerda()==nodoAtual)
                    nodoAnterior->setaSubArvoreEsquerda(NULL);
                else
                    nodoAnterior->setaSubArvoreDireita(NULL);
            }
        }
    }
    delete nodoAtual;

}

template<class T>
void ABB<T>::retira(Nodo<T>* raiz, T elemento)
{

}

template<class T>
void ABB<T>::mostra()
{
    mostra(this->raiz);
}

template<class T>
void ABB<T>::mostra(Nodo<T>* raiz)
{
    if (raiz != NULL)
    {
        mostra(raiz->retornaSubArvoreEsquerda());
        cout << raiz->retornaElemento() << "  ";
        mostra(raiz->retornaSubArvoreDireita());
    }
}
