#include <iostream>

using namespace std;

int main()
{
    int calculo=8,calculo1,termos,cont=1;

    cout << "Quantos termos:" << endl;
    cin >> termos;
    cout << calculo;
    do
    {
        cont++;
        if (cont % 2 == 0)
        {
            calculo1 = calculo + 2;
            cout << "," << calculo1;
        }
        else
        {
            calculo = calculo*2;
            cout << "," << calculo;
        }
    }
    while (cont != termos);
}
