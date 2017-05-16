#include <iostream>

using namespace std;

int main()
{
    int V[15],n,i,maior,menor;

    do
    {
        cout << "Digite a quantidade de elementos:" << endl;
        cin >> n;
    }
    while ((n<0) || (n>15));
    for (i=0;i<n;i++)
    {
        cout << "Digite o elemento " << i+1 << endl;
        cin >> V[i];
    }
    maior=V[0];
    menor=V[0];
    for (i=1;i<n;i++)
    {
        if (V[i]>maior)
        {
            maior=V[i];
        }
        else
        {
            if (V[i]<menor)
            {
                menor=V[i];
            }
        }
    }
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
}
