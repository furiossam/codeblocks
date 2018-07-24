#include <iostream>

using namespace std;

void geraSerie(int n)
{
    if (n!=0)
    {
        geraSerie(n-1);
        if (n%2==0)
            cout << n*n << " ";
        else
            cout << n << " ";
    }
}

int main()
{
    int n;

    cout << "qual o termo da série? ";
    cin >> n;
    geraSerie(n);
    return 0;
}
