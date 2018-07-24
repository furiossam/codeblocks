#include <iostream>

using namespace std;

int soma(int n)
{
    if (n == 1)
        return 1;
    else
        return soma(n-1) + n;
}

int main()
{
    int n;

    cout << "n = ";
    cin >> n;
    cout << soma(n);
    return 0;
}

