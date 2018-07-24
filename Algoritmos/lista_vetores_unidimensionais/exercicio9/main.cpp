#include <iostream>

using namespace std;

int main()
{
    string nome[30],pesquisado;
    float nota[30];
    int posicao,n,i;
    bool achou;
    char continua;

    do
    {
        cout << "Digite a quantidade de entradas: " << endl;
        cin >> n;
    }
    while ((n<1)||(n>30));
    for (i=0;i<n;i++)
    {
        do
        {
            cin.ignore();
            cout << "Nome e nota do aluno "<<i+1<<""<< endl;
            getline(cin,nome[i]);
            cin>> nota[i];
        }
        while ((nota[i]<0)||(nota[i]>10));
    }
    do
    {
        cout << "Digite o nome a ser buscado" << endl;
        cin >> pesquisado;
        achou = false;
        posicao=0;
        while ((posicao<=n)&&(!achou))
        {
            if (nome[posicao]==pesquisado)
            {
                achou=true;
            }
            else
            {
                posicao++;
            }
        }
        cout << "Aluno: " << nome[posicao] << " Nota: " << nota[posicao] << endl;
        do
        {
            cout << "Deseja continuar pesquisando? s ou n" << endl;
            cin >> continua;
        }
        while ((continua!='s') && (continua!='n'));
    }
    while (continua!='n');
}
