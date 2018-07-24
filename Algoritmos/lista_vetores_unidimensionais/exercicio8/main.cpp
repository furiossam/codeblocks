#include <iostream>

using namespace std;

int main()
{
    int V[15],n,i,j,auxiliar,posicao;

    do
    {
        cout << "Digite a quantidade de elementos do vetor: " << endl;
        cin >> n;
    }
    while ((n<1) || (n>15));
    for (i=0;i<n;i++)
    {
        cout << "Digite o elemento " << i+1 << endl;
        cin >> V[i];
    }
    for (i=0;i<n-1;i++)
    {
        posicao = i;
        for (j=i+1;j<n;j++)
        {
            if (V[j]<V[posicao])
            {
                posicao=j;
            }
        }
        auxiliar=V[posicao];
        V[posicao]=V[i];
        V[i]=auxiliar;
    }
    cout << "Vetor em ordem crescente: " << endl << endl;
    for (i=0;i<n;i++)
    {
        cout << V[i] << " ";
    }

}
