#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED
#include <iostream>
using namespace std;
    class Grafo
    {
        int vertices;
        int** a;
        int* distancia;
    public:
        Grafo(int=2);
        ~Grafo();
        int getVertices();
        void CriarAresta(int,int);
        void ExcluirAresta(int,int);
        void DetectaVizinhos(int);
        bool DetectaSeEhVizinho(int,int);
        void MostraCaminho(int,int);
        void MostraMatriz();

    };

#endif // GRAFO_H_INCLUDED
