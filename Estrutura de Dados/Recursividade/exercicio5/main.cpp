#include <iostream>

using namespace std;

int exercicio5(int n)
{
    if (n==1)
        return 1;
    else if ((n%2)==0)
    {
        exercicio5(n-1);
        return n*n;
    }
    else if ((n%2)!=0)
    {
        exercicio5(n-1);
        return n;
    }
}
int main()
{
    for (int i=1;i<11;i++)
    {
        cout <<" "<< exercicio5(i);
    }

}
