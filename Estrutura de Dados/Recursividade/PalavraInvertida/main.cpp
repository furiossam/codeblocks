#include <iostream>

using namespace std;

string invertePalavra(string palavra)
{
    if (palavra.length() > 0)
        return palavra.at(palavra.length()-1) + invertePalavra(palavra.substr(0,palavra.length()-1));
    else
        return "";
}

int main()
{
    string palavra;

    cout << "Digite a palavra = " << endl;
    cin >> palavra;
    cout << invertePalavra(palavra) << endl;

    return 0;
}
