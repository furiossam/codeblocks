#include <iostream>

using namespace std;

int main()
{
    int X[100],Y[100],i,n,j,k=0;
    bool primo;

    do
    {
        cout << "Digite a quantidade de elementos do vetor:" << endl;
        cin >> n;
    }
    while ((n<1)||(n>100));
    for (i=0;i<n;i++)
    {
        cout << "Digite o numero " << i+1 << endl;
        cin >> X[i];
    }
    for (i=0;i<n;i++)
    {
        primo=true;
        for (j=1;j=X[i]/2;j++)
        {
            if (X[i]%j==0)
            {
                primo=false;
                break;
            }
        }
        if (primo==true)
        {
            k++;
            Y[k]=X[i];
        }
    }
    cout << "Primos:" << endl << endl;
    for (i=0;i<k;i++)
    {
        cout << Y[i] << " ";
    }
}
