#include <iostream>

using namespace std;

int main()
{
    int altura[100],inscricao[100],insmaior,insmenor,n,maior,menor,i;
    float alturas=0,media;

    do
    {
        cout << "Digite o numero de entradas: " << endl;
        cin >> n;
    }
    while ((n<1) || (n>100));
    for (i=0;i<n;i++)
    {
        do
        {
            cout << "Digite o n de inscricao e altura(cm) do atleta " << i+1 << endl;
            cin >> inscricao[i] >> altura[i];
        }
        while (altura<1);
        alturas+=altura[i];
    }
    maior=altura[0];
    menor=altura[0];
    insmaior=inscricao[0];
    insmenor=inscricao[0];
    for (i=1;i<n;i++)
    {

    }
}
