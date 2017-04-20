#include <iostream>

using namespace std;

int main()
{
    double soma,contador;
    soma = 0;
    contador = 1;
    do
    {
        soma = soma + (1/contador);
        contador = contador + 1;
    }
    while (contador <= 100);
        cout << soma;
}
