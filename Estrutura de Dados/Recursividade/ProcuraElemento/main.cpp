#include <iostream>

using namespace std;

void procuraElemento(int X[], int y, int inicio, int n, bool &existe)
{
    if (X[inicio] == y)
        existe = true;
    else if (inicio == n-1)
        existe = false;
    else
        procuraElemento(X, y, inicio+1, n, existe);
}

int main()
{
    int X[10] = {3, 4, 6, 7, -1, 0, 12, 9, 15, 2};
    int n = 10, y;
    int inicio = 0;
    bool existe = false;

    cin >> y;

    procuraElemento(X, y, inicio, n, existe);
    cout << existe;

    return 0;
}
