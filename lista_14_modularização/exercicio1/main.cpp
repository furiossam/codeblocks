#include <iostream>

using namespace std;

int leianuminteiropositivo()
{
    int n;
    cout << "Valor: ";
    do
    {
        cin>>n;
    }while (n<=0);
    return n;
}
int fatorial()
{
    int i,n,result;
    if ((n==0) || (n==1))
    {
        return 1;
    }
    result=1;
    for (i=2;i<=n;i++)
    {
        result*=i;
    }
    return result;
}

int main()
{
    int result;

    leianuminteiropositivo();
    result=fatorial();
    cout << result ;
}

