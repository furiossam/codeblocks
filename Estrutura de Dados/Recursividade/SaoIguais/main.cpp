#include <iostream>

using namespace std;

bool saoIguais(int X[10], int Y[10], int n)
{
    if (n==1)
        return X[0]==Y[0];
    else
        return (X[n-1]==Y[n-1])&& saoIguais(X,Y,n-1);
}

int main()
{
    int X[10], Y[10], n;

    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> X[i-1];
    for (int i=1; i<=n; i++)
        cin >> Y[i-1];

    cout << saoIguais(X, Y, n);

    return 0;
}
