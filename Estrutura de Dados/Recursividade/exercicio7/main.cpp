#include <iostream>

using namespace std;

int produtoEscalar(int Y[],int X[],int n)
{

    if (n==0)
    {
        return Y[n]*X[n];
    }
    else
    {
        return (Y[n]*X[n])+(produtoEscalar(Y,X,n-1));
    }
}
int main()
{
    int Y[10]={2,4,3,1,5,5,6,3,3,11},X[10]={2,1,5,1,7,5,8,3,3,12};
    cout << produtoEscalar(Y,X,9);
}
