#include <iostream>

using namespace std;

int somaMultiplosde5(int n)
    {
        if(n==5)
        {
            return n;
        }
        else
        {
            return n+(somaMultiplosde5(n-5));
        }
    }
int main()
{
    int n =1000;


    cout << somaMultiplosde5(n);
}
