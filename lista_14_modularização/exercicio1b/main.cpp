#include <iostream>
#include <math.h>

using namespace std;

int leianuminteiropositivo()
{
    int n;
    do
    {
        cin>>n;
        cin.ignore();
    }while (n<=0);
    return n;
}
int nomedodia(int d,int m,int ano)
{
    int a,s,valor,dia;

    if ((m==1)||(m==2))
    {
        m+=10;
    }
    else
    {
        m-=2;
    }
    a=ano%100;
    s=ano/100;
    valor = (2.6*m-0.2) + d + a + a/4 + s/4 -2*s;
    dia=valor%7;
    return dia;
}
int mostradia(int dia)
    {

        switch (dia)
        {
        case 0:
            cout << "Domingo" << endl;
            break;
        case 1:
            cout << "Segunda" << endl;
            break;
        case 2:
            cout << "Terca" << endl;
            break;
        case 3:
            cout << "Quarta" << endl;
            break;
        case 4:
            cout << "Quinta" << endl;
            break;
        case 5:
            cout << "Sexta" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        }
    }

int main()
{
    int d,m,ano,dia;
    char opcao;

    do
    {
        cout << "Digite o dia, mês e ano" << endl;
        d=leianuminteiropositivo();
        m=leianuminteiropositivo();
        ano=leianuminteiropositivo();
        dia=nomedodia(d,m,ano);
        mostradia(dia);
        cout << "Caso deseje fazer mais uma entrada digite s: " << endl;
        cin >> opcao;
    }
    while (opcao==toupper('s'));
}
