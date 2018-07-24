#include <iostream>

using namespace std;

int main()
{
    int n=0,par=0,impar=0;

    do
    {
        n++;
        if (n % 2==0)
        {
            par += n;
        }
        else
        {
            impar += n;
        }
    }
    while (n != 100);
    cout << "A soma dos pares: " << par << endl;
    cout << "A soma dos impares: " << impar;
}
