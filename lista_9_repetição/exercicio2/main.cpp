#include <iostream>

using namespace std;

int main()
{
    int contador=0;
    double altura,total=0,media;

    do
    {
        cout << "Digite sua altura: " << endl;
        cin >> altura;
        total += altura;
        contador++;
    }
    while (contador != 20);
    media = contador/20;
    cout << "A media aritmetica é: " << media;
}
