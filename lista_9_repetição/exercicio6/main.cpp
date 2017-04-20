#include <iostream>

using namespace std;

int main()
{
    int idade,idadetotal=0,contador=0;
    float media;
    char opcao;

    do
    {
        do
        {
            cout << "Digite a idade: " << endl;
            cin >> idade;
        }
        while (idade < 0);
        idadetotal = idadetotal + idade;
        contador++;
        do
        {
            cout << "Deseja continuar inserindo idades: sim(s) nao(n)" << endl;
            cin >> opcao;
        }
        while ((opcao != 's') && (opcao != 'n'));
    }
    while (opcao !='n');
    media = idadetotal/contador;
    cout << "A media de idades e: " << media;

}
