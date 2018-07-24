#include <iostream>

using namespace std;

int produtoEscalar(int X[], int Y[], int tamanho, int indice)
{
    if (indice==tamanho-1)
        return X[tamanho-1] * Y[tamanho-1];
    else
        return X[indice] * Y[indice] + produtoEscalar(X, Y, tamanho, indice+1);
}

int main()
{
    int X[10], Y[10], tamanho;

    cin >> tamanho;
    for (int i=1; i <= tamanho; i++)
        cin >> X[i-1];

    for (int i=1; i <= tamanho; i++)
        cin >> Y[i-1];

    cout << produtoEscalar(X, Y, tamanho, 0);

    return 0;
}
