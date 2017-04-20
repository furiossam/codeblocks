#include <iostream>

using namespace std;

int main()
{
    double altura,base,lado,area;
    char opcao;

    do
    {
      cout << "Digite sua opcao para calculo de area: " << endl << "(T) Triangulo;" << endl <<"(Q) Quadrado;" << endl << "(R) Retangulo;" << endl << "(Z) Finalizar execucao;" << endl;
      cin >> opcao;
    }
    while ((opcao != 'T' ) && (opcao != 'Q' ) && (opcao != 'R' ) && (opcao != 'Z' ));
    switch (opcao)
    {
        case 'T':
            cout << "Digite a base e a altura do triangulo:" << endl;
            cin >> base >> altura;
            area = altura*base/2;
            cout << "A area do quadrado e: " << area << endl;
            break;
        case 'Q':
            cout << "Digite o lado do quadrado:" << endl;
            cin >> lado;
            area = lado*lado;
            cout << "A area do quadrado e : " << area << endl;
            break;
        case 'R':
            cout << "Digite a base e a altura do retangulo: " << endl;
            cin >> base >> altura;
            cout << "A area do retangulo e : " << area << endl;
            break;
        case 'Z':
            cout << "Fim da execucao..." << endl;
    }


}
