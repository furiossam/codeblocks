#include <iostream>

using namespace std;

int main()
{
    int contador,resto;
    contador = 0;
    do
    {
        contador = contador + 1;
        resto = contador % 2;
        if (resto > 0)
        {
            cout << contador << " impar" << "\n";
        }
        else
        {
            cout << contador << " par" << "\n";
        }
    }
    while (contador < 20);
}
