#include <iostream>

using namespace std;

int main()
{
    string descali,descbebi,descsobre;
    int opcao1,opcao2,opcao3;
    double palim,pbebi,psobre,total;

    cout << "Digite o alimento da sua preferencia: " << endl;
    cout << "1) hamburger" << endl;
    cout << "2) chessburger" << endl;
    cout << "3) cachorro quente" << endl;
    cout << "4) sanduiche" << endl;
    cin >> opcao1;
    cout << "Digite sua opcao de bebida: " << endl;
    cout << "5) refrigerante" << endl;
    cout << "6) suco de laranja" << endl;
    cin  >> opcao2;
    cout << "Digite sua opcao de sobremesa:" << endl;
    cout << "7) milk shake" << endl;
    cout << "8) sundae" << endl;
    cout << "9) casquinha" << endl;
    cin >> opcao3;
    switch (opcao1)
    {
        case 1 :
            palim = 4.5;
            descali = "Hamburger $4,50";
            break;
        case 2 :
            palim = 5.5;
            descali = "Chessburger $5,50";
            break;
        case 3 :
            palim = 4;
            descali = "Cachorro quente $4,00";
            break;
        case 4 :
            palim = 3.5;
            descali = "Sanduiche $3,50";
            break;
        default :
            cout << "Opcao Invalida...";
            break;
    }
    switch (opcao2)
    {
        case 5 :
            pbebi = 1.0;
            descbebi = "refrigerante $1,00";
            break;
        case 6 :
            pbebi = 2.0;
            descbebi = "suco de laranja $2,00";
            break;
        default :
            cout << "Opcao Invalida...";
            break;
    }
    switch (opcao3)
    {
        case 7 :
            psobre = 1.5;
            descsobre = "milk shake $1,50";
            break;
        case 8 :
            psobre = 3.0;
            descsobre = "sundae $3,00";
            break;
        case 9 :
            psobre = 1.0;
            descsobre = "casquinha $1,00";
            break;
        default :
            cout << "Opcao Invalida...";
            break;
    }
    total = palim+pbebi+psobre;
    cout << descali << " , " << descbebi << " , " << descsobre << " Total = " << total;
}
