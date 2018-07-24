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
tipoLista* criaListaDosPares (tipoLista* lista,tipoLista* lista2){
    tipoLista *p;
    p = lista;
    int cont = 1;
    while (p != NULL)
    {
        if ((cont%2)==0)
            lista2=insereNoInicio(lista2,p->valor);
        p = p->proximo;
        cont++;
    }
    return lista2;
}

int main()
{
    tipoLista *umaLista,*segundaLista;
    int valor;

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

    //cout << endl;
    //cout << "Valor a ser excluido = ";
    //cin >> valor;

    //umaLista = excluiElemento(umaLista, valor);

    segundaLista=cria();
    segundaLista=criaListaDosPares(umaLista,segundaLista);

    exibe(umaLista);
    exibe(segundaLista);

    destroi(umaLista);
    destroi(segundaLista);

    return 0;
}
