#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double a, b, c, med;

    cout << "Digite as notas a,b,c: \n";
    cin >> a >> b >> c;
        if (a>b && a>c) {
                med = (a*0.25 + b*0.5 + c*0.25);
        }
        else {
            med = (a*0.25 + b*0.25 + c*0.5);
        }
    cout << "\n" << med;
    }
