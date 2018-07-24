#include <iostream>

using namespace std;

typedef struct nodo
{
    int valor;
    struct nodo *proximo;
} tipoLista;

tipoLista* cria()
{
    return NULL;
}

void destroi(tipoLista* lista)
{
    tipoLista *p;
    while (lista != NULL)
    {
        p = lista;
        lista = lista->proximo;
        delete p;
    }
}

void exibe(tipoLista* lista)
{
    tipoLista *p;
    p = lista;
    cout <<"Valores = ";
    while (p != NULL)
    {
        cout << p->valor << "  ";
        p = p->proximo;
    }
}

tipoLista* insereNoInicio(tipoLista* lista, int valor)
{
    tipoLista *p;

    p = new tipoLista;

    p->valor = valor;
    p->proximo = lista;
    return p;
}

tipoLista* insereNoFinal(tipoLista* lista, int valor)
{
    tipoLista *p, *pant;

    p = new tipoLista;

    p->valor = valor;
    p->proximo = NULL;
    if (lista == NULL)
        return p;
    else
    {
        pant = lista;
        while (pant->proximo != NULL)
            pant = pant->proximo;
        pant->proximo = p;
    }
    return lista;
}

tipoLista* excluiElemento (tipoLista* lista, int elemento)
{
    tipoLista *p, *pant = NULL;

    p = lista;
    if (p == NULL)
        return p;
    else if (p->valor == elemento)
    {
        lista = p->proximo;
        delete p;
    }
    else
    {
        pant = lista;
        p = p->proximo;
        while (p != NULL && p->valor != elemento)
        {
            pant = p;
            p=p->proximo;
        }
        if (p != NULL)
        {
            pant->proximo = p->proximo;
            delete p;
        }
    }
    return lista;
}
void excluiOcorrencia(tipoLista* lista,int valor)
{
    tipoLista *p;
    p = lista;
    while (p != NULL)
    {
        if ((p->valor)==valor)
            lista=excluiElemento(lista,valor);
        p = p->proximo;
    }
}


int main()
{
    tipoLista *umaLista;
    int valor,valor2;

    umaLista = cria();

    cout << "Valor (-1 para sair) = ";
    cin >> valor;
    while (valor != -1)
    {
        umaLista = insereNoInicio(umaLista, valor);
        cout << "Valor (-1 para sair) = ";
        cin >> valor;
    }
    exibe(umaLista);

    cout << endl;
    cout << "Valor a ser excluido = ";
    cin >> valor;

   excluiOcorrencia(umaLista, valor);

    exibe(umaLista);

    destroi(umaLista);

    return 0;
}

