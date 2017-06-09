#include <iostream>

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
int combinacao()
{
    int n,r,res;
    //res=fatorial(n)/fatorial(r)*fatorial(n-r);
    return res;
}
int main()
{
    int n,r,res;

    cout << "Digite o valor de N:";
    leianuminteiropositivo(n);
    cout << "Digite o valor de R:";
    leianuminteiropositivo(r);
    cout << ;
}
