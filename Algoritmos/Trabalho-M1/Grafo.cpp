#include"Grafo.h"
Grafo::Grafo(int n)
{
        if (n>=2)
        {
            vertices=n;
            a = new int*[vertices];
            for (int i=0; i<vertices; i++)
            {
                a[i] = new int[vertices];
                for (int j=0; j<vertices; j++)
                {
                    a[i][j]=0;
                }
            }
        }
        else
        {
            vertices=2;
            a = new int*[vertices];
            for (int i=0; i<vertices; i++)
            {
                a[i] = new int[vertices];
                for (int j=0; j<vertices; j++)
                {
                    a[i][j]=0;
                }
            }
        }
}

Grafo::~Grafo()
{
    for (int i=0;i<getVertices();i++)
        delete [] a[i];
    delete [] distancia;
}
int Grafo::getVertices()
{
    return vertices;
}

void Grafo::CriarAresta(int i,int j)
{
    if ((i<=getVertices())&&(i>0)&&(j<=getVertices())&&(j>0)&&(i!=j))
    {
        a[i-1][j-1]=1;
        a[j-1][i-1]=1;
    }
    else
    {
        cout << "Aresta Invalida..." << endl;
    }

}
void Grafo::DetectaVizinhos(int d)
{
    if ((d<=getVertices())&&(d>0))
    {
        bool naotem=true;
        cout << "Vizinhos: ";
        for (int i=0;i<getVertices();i++)
        {
            if(a[d-1][i])
            {
                cout << i+1 << " ";
                naotem=false;
            }

        }
        if (naotem)
        {
            cout << "Nao ha vizinhos" << endl;
        }
    cout << endl;
    }
    else
    {
        cout << "Entrada Invalida" << endl;
    }

}
bool Grafo::DetectaSeEhVizinho(int i,int j)
{
    if ((i>getVertices())||(j>getVertices()))
        return false;
    if (a[i-1][j-1])
        return true;
    else
        return false;
}
void Grafo::ExcluirAresta(int i, int j)
{
    a[i-1][j-1]=0;
    a[j-1][i-1]=0;
}
void Grafo::MostraCaminho(int origem, int destino)
{
    bool inverter=false;
    int aux,it=0;
    distancia=new int[getVertices()];
    if ((origem>getVertices())||(destino>getVertices()))
    {
        cout << "Esse vertice não existe..." << endl;
        return;
    }
    if (origem>destino)
    {
        aux=origem;
        origem=destino;
        destino=aux;
        inverter=true;
    }
    else
    {
        if (origem==destino)
        {
            cout << "Origem e Destino iguais..." << endl;
            return;
        }
    }
    for (int i=origem-1;i<getVertices();i++)
    {
        if (a[i][destino-1]==1)
        {
            distancia[it]=i+1;
            distancia[it+1]=destino;
            it++;
            break;
        }
        else
        {
            distancia[it]=i+1;
            if (a[i][i+1]==0)
            {
                i++;
            }
        }
        it++;
    }
    if (inverter)
    {
        cout << "Caminho de " << destino << " ate " << origem << endl;
        for (int i=it;i>=0;i--)
        {
            cout << " " << distancia[i];
        }
    }
    else
    {
        cout << "Caminho de " << origem << " ate " << destino << endl;
        for (int i=0;i<=it;i++)
        {
            cout << " " << distancia[i];

        }
    }

}
void Grafo::MostraMatriz()
{
    for (int i=0;i<getVertices();i++)
    {
        for (int j=0;j<getVertices();j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}

