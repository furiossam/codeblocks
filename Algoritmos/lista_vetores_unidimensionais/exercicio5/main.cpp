#include <iostream>

using namespace std;

int main()
{
    int praia[42]={0},i,n,c;
    float renda[42]={0},r;

    do
    {
        cout << "Digite o numero de turistas entrevistados:" << endl;
        cin >> n;
    }
    while ((n<1) || (n>3001));
    for (i=0;i<n;i++)
    {
        do
        {
            cout << "Qual sua praia favorita:" << endl;
            cin >> c;
        }
        while ((c<1)||(c>42));
        praia[c-1]++;
        do
        {
            cout << "Digite sua renda" << endl;
            cin >> r;
        }
        while (r<0);
        renda[c-1]+=r;
    }
    for (i=0;i<42;i++)
    {
        if (praia[i] > 1)
        {
            renda[i]=renda[i]/praia[i];
        }
        cout << "Praia: " << i+1 << " Quantidade de turistas: " << praia[i] << " Renda media: " << renda[i] << endl;
    }
}
