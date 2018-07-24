#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int plasma,led;
    double pplas,pled,salbruto,sal_liquido,inss,exced,totaldesc,desc;

    cout << "Digite o numero de televisores de plasma e led vendidos:" << endl;
    cin >> plasma >> led;
    if (plasma<=10)
    {
        pplas = 10.0*plasma;
    }
    else
    {
        pplas = 20.0*plasma;
    }
    if (led<=20)
    {
        pled = 15.0*led;
    }
    else
    {
        pled = 30.0*led;
    }
    salbruto = pplas + pled;
    inss = salbruto*0.1;
    if (salbruto<=1500)
    {
       sal_liquido = salbruto - inss;
       desc = 0;
    }
    else
    {

        if (salbruto<=2000)
        {
            exced = salbruto - 1500;
            desc = exced*0.1;
            sal_liquido = salbruto - inss - desc;
        }
        else
        {
            exced = salbruto - 1500;
            desc = exced*0.15;
            sal_liquido = salbruto - inss - desc;
        }
    }
    totaldesc = desc + inss;
    cout << "Sua comissao foi de: " << salbruto << endl;
    cout << "Descontos do inss: " << inss << endl;
    cout << "Descontos do imposto de renda: " << desc << endl;
    cout << "Descontos totais: " << totaldesc << endl;
    cout << "Salario Liquido: " << sal_liquido << endl;
}
