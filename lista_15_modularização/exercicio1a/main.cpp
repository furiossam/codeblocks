#include <iostream>
#include <math.h>

using namespace std;

int leianuminteiropositivo()
{
    int n;

    do
    {
        cin>>n;
    }while (n<=0);
    return n;
}
float raizquadrada(int a)
{
    int i;
    float x;

    x=a/2;
    for (i=1;i<20;i++)
    {
        x=((pow(x,2)+a)/(2*x));
    }
    cout << "A raiz quadrada e: " << x << endl;
}
int main()
{
    int numero,n,i;

    cout << "Digite o numero de entradas:" << endl;
    n=leianuminteiropositivo();
    for (i=0;i<n;i++)
    {
        cout << "Digite o número a ser calculado" << endl;
        numero=leianuminteiropositivo();
        raizquadrada(numero);
    }

}
