#include <iostream>
#include <math.h>

using namespace std;

float calculaPolinomio(float x, float A[], int n)
{
    if (n==0)
        return A[0];
    else
        return A[n] * pow(x, n) + calculaPolinomio(x, A, n-1);
}

int main()
{
    int n;
    float x, A[10];

    cin >> n;
    for (int i=n; i>=0; i--)
        cin >> A[i];
    cin >> x;
    cout << calculaPolinomio(x, A, n);
    return 0;
}
