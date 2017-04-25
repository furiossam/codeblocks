#include <iostream>

using namespace std;

int main()
{
    int cont,paradas;
    double odometro,odometrofinal,gas,km,media,km_litro,media_km=0,media_gas=0;

    do
    {
        cout << "Digite o valor que esta no odometro:" << endl;
        cin >> odometro;

    }
    while (odometro < 0);
    do
    {
    cout << "Digite o numero de paradas:" << endl;
    cin >> paradas;
    }
    while (paradas <= 0);
    for (cont=1;cont<=paradas;cont++)
    {
        cout << "Digite o valor que esta no odometro quantidade de gasolina:" << endl;
        cin >> odometrofinal >> gas;
        km = odometrofinal - odometro;
        odometro = odometrofinal;
        media_km += km;
        media_gas += gas;
        km_litro = km/gas;
        cout << "O carro fez " << km_litro << " quilometros com um litro." << endl;

    }
    media = media_km/media_gas;
    cout << "A quilometragem media por litro de gasolina na viagem foi: " << media << endl;
}
