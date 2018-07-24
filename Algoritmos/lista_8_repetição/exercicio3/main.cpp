#include <iostream>

using namespace std;

int main()
{
    int soma,contador;
    soma = 0;
    contador = 1;
    do
    {
        soma = soma + contador;
        contador = contador + 1;
    }
    while (contador <= 100);
        cout << (soma);
}
