#include <iostream>
#include "Grafo.h"
using namespace std;

int main()
{
    Grafo a(7);
    a.CriarAresta(1,2);
    a.CriarAresta(1,3);
    a.CriarAresta(1,6);
    a.CriarAresta(2,3);
    a.CriarAresta(2,4);
    a.CriarAresta(3,5);
    a.CriarAresta(3,4);
    a.CriarAresta(4,5);
    a.CriarAresta(5,7);
    a.CriarAresta(7,6);
    a.CriarAresta(3,6);
    a.MostraMatriz();
    a.DetectaVizinhos(7);
    if (a.DetectaSeEhVizinho(1,2))
        cout << "Eh vizinho" << endl;
    else
        cout << "Naum eh vizinho" << endl;
    a.MostraCaminho(1,5);


}
