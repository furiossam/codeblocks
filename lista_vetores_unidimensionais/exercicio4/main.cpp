#include <iostream>

using namespace std;

int main()
{
    float V[15],W[15],ortogonal=0,mult;
    int i,n;
    do
    {
        cout << "Digite a quantidade de elemento dos vetores:" << endl;
        cin >> n;
    }
    while ((n<1) || (n>15));
    cout << "Primeiro Vetor:" << endl;
    for (i=0;i<n;i++)
    {
        cout << "Digite o elemento " << i+1 << endl;
        cin >> V[i];
    }
    cout << "Segundo Vetor:" << endl;
    for (i=0;i<n;i++)
    {
        cout << "Digite o elemento " << i+1 << endl;
        cin >> W[i];
    }
    cout << "Soma dos elementos do Vetor 1 e 2:" << endl;
    for (i=0;i<n;i++)
    {
        cout << " " << V[i]+W[i];
    }
    cout << endl <<"Subtracao dos elementos do Vetor 1 e 2:" << endl;
    for (i=0;i<n;i++)
    {
        cout << " " << V[i]-W[i];
    }
    cout << endl << "Multiplicação dos elementos do Vetor 1 e 2:" << endl;
    for (i=0;i<n;i++)
    {
        mult=V[i]*W[i];
        cout << " " << mult;
        ortogonal+=mult;
    }
    cout << endl <<"Divisao dos elementos do Vetor 1 e 2:" << endl;
    for (i=0;i<n;i++)
    {
        cout << " " << V[i]/W[i];
    }
    cout << endl <<"O resultado da Ortogonal e: " << ortogonal;
}
