#include <iostream>
using namespace std;

int main() {
    int opcao, n1, n2, n3;

    cout << "Digite 3 numeros: \n";
    cin >> n1 >> n2 >> n3;
    cout << "Digite sua opcao: \n";
    cin >> opcao;
    switch (opcao) {
    case 1 : cout << (n1);
                break;
    case 2 : cout << (n2);
                break;
    case 3 : cout << (n3);
                break;
    default:   cout << "Opção Inválida..." ;
                break;
    }
}
