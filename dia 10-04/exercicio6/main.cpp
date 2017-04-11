#include <iostream>

using namespace std;

int main()
{
    string nome;
    int idade,alunos,qtdade;

    alunos = 0;
    qtdade = 0;
    do
    {
        cout << "Digite seu nome: \n";
        cin >> nome;
        do
        {
             cout << "Escreva sua idade:\n";
             cin >> idade;
        }
        while (idade <=0);
        if (idade ==18)
        {
            cout << "\t\t" << nome << " tem 18 anos \n";
        }
        else
        {
            if (idade > 20)
            {
                qtdade = qtdade + 1;
            }
        }
    alunos = alunos + 1;
    }
    while (alunos < 50);
    cout << "\t\t" << "Quantidade de alunos com idade > 20 anos: " << qtdade << "\t";
}
