#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double salario;
    cout << "Digite seu sal�rio para o calculo de sua bonifica��o: ";
    cin >> salario;
    if (salario <= 700) {
        salario = 1.12*salario;
    }
    else {
        if (salario <= 1000) {
            salario = 1.1*salario;
        }
        else {
                if (salario <= 1500) {
                    salario = 1.07*salario;
                }
                else {
                    if (salario <= 2000) {
                        salario = 1.04*salario;
                    }
                }
        }
    }




    cout << "Seu sal�rio �: " << salario;

}
