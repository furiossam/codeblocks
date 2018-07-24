#include <iostream>

using namespace std;

int soma(int n)
{
    if (n == 0)
        return 0;
    else
        return n + soma(n-5);
}

int main()
{
    cout << soma(1000);
    return 0;
}
