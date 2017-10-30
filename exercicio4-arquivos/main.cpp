#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    /*string ex="//", s="Voce esta perdido //alguma coisa";
    size_t found = s.rfind(ex);
    if (found!=std::string::npos)
    {
        s.erase(s.rfind(ex),'/n');
    }
    cout << s;*/
    ifstream codigo;
    ofstream xxx;
    string nomesaida,nomearq,linha,ex="//",ext=".xxx";
    cout << "\nNome do arquivo a ser aberto: ";
    getline(cin,nomearq);
    nomesaida=nomearq+ext;
    codigo.open(nomearq.c_str());
    xxx.open(nomesaida.c_str());
    if (!codigo)
    {
        cout << "Nao foi possivel abrir o arquivo de entrada."; cin.get();
        return 0;
    }
    while(getline(codigo,linha))
    {
            if (linha.rfind(ex)!=string::npos)
            {
                linha=linha.erase(linha.rfind(ex),'/n');

            }
            xxx << linha;
    }
    codigo.close();
    xxx.close();


}
