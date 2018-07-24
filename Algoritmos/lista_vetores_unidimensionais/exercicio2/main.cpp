#include <iostream>

using namespace std;

int main()
{
    int n,posi;
    float V[10],VS[10];

    do
    {
        cout <<"Digite a quantidade de entradas:"<<endl;
        cin >> n;
    }
    while ((n<1) || (n>10));
    for (posi=0;posi<n;posi++)
    {
        cout << "Digite o numero" << endl;
        cin >> V[posi];
    }
    VS[0] = V[0];
    for (posi=1;posi<n-1;posi++)
    {
        VS[posi]= (V[posi-1]+V[posi]+V[posi+1])/3;
    }
    VS[n-1]=V[n-1];
    cout << "Novo Vetor" << endl;
    for (posi=0;posi<n;posi++)
    {
        cout << VS[posi] << " ";
    }
}
