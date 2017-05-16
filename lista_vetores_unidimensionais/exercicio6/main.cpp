#include <iostream>

using namespace std;

int main()
{
    int X[10],n,i,j,auxiliar;

    do
    {
       cout << "Digite o numero de elementos: " << endl;
       cin >> n;
    }
    while ((n<1) || (n>10));
    j=n-1;
    for (i=0;i<n;i++)
    {
        cout << "Digite o elemento " << i+1 << endl;
        cin >> (X[i]);
    }
    for (i=0;i<(n/2);i++)
    {
        auxiliar=X[i];
        X[i]=X[j];
        X[j]=auxiliar;
        j--;
    }
    for (i=0;i<n;i++)
    {
        cout <<" "<< X[i];
    }
}
