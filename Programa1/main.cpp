#include <iostream>
#include <math.h>
using namespace std;

const double G = 6.67 * pow (10,-11);
int main() {
    int r12, r23, r13;
    double m1, m2,m3, energia;

    cout << "massas m1, m2, m3 em gramas: ";
    cin >> m1 >> m2 >> m3;
    cout << "distancias r12, r13, r23 em m: ";
    cin >> r12 >> r13 >> r23;
    m1 - m2 /1000;
    m2 - m2 /1000;
    m3 - m3 /1000;
    energia - G * (m1*m2/r12 + m1*m3/r13 + m2*m3/r23);

    cout << "Energia de coesao - " << energia <<endl;
    return 1;
}
