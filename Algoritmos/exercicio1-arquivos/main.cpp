#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream entrada;
    ofstream saida;
    int i=0;
    string nomearq,linha;

    cout << "\nNome do arquivo a ser aberto: ";
    getline(cin,nomearq);
    entrada.open(nomearq.c_str());
    if (!entrada)
    {
        cout << "Nao foi possivel abrir o arquivo de entrada."; cin.get();
        return 0;
    }
    saida.open("saida.txt");
    while (getline(entrada,linha))
    {
        cout << setw(1) << ++i << " " << linha << endl;
        saida << setw(1) << i << " " << linha << endl;
    }
    entrada.close();
    saida.close();
}
