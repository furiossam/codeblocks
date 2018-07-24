#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream codigo;
    string nomearq,linha;

    cout << "\nNome do arquivo a ser aberto: ";
    getline(cin,nomearq);
    codigo.open(nomearq.c_str());
    if (!codigo)
    {
        cout << "Nao foi possivel abrir o arquivo de entrada."; cin.get();
        return 0;
    }
    for (int i=1;getline(codigo,linha); i++)
    {
        cout << setw(2) << linha << endl;
        if (i%20==0)
        {
            cin.get();
        }


    }
}
