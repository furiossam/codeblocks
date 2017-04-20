#include <iostream>

using namespace std;

int main()
{
    int tempo=0;
    double massa;

    cout << "Digite a massa do material em kilos:" << endl;
    cin >> massa;
    massa = massa*1000;
    do
    {
        massa = massa*0.5;
        tempo += 50;
    }
    while (massa >= 0.5);
    cout << "O tempo necessario e: " << tempo << " segundos" << endl;

}
