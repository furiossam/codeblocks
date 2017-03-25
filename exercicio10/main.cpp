#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float ht, he, hrfalta,grat;

    cout << "Digite suas horas extras e horas falta: ";
    cin >> he >> hrfalta;
    ht = he - 2*hrfalta/3;
    if (ht > 40) {
        grat = 1000;
    }
    else {
        if (ht > 30) {
            grat = 800;
        }
        else {
            if (ht > 20) {
                grat = 600;
            }
            else {
                grat = 200;
            }
        }
    }
    cout << "Sua gratificação é: " << grat;
}
