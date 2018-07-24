#include <iostream>

using namespace std;

void invertePalavra()
{
    char letra;

    cin >> letra;
    if (letra != '*')
    {
        invertePalavra();
        cout << letra;
    }

}

int main()
{
    invertePalavra();

    return 0;
}
