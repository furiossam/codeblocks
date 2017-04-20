#include <iostream>
using namespace std;

int main()
{
    int cont,n;
    double altura_mulheres=0,media_altura=0,altura,homens=0,mulheres=0;
    char sexo;

    do
    {
        cout << "Digite o numero de pessoas para o caluculo da media: " << endl;
        cin >> cont;
        n = cont;

    }
    while (cont < 1 );
    do
    {
        cout << "Digite sua altura: " << endl;
        cin >> altura;
        do
        {
            cout << "Digite seu sexo" << endl;
            cin >> sexo;
        }
        while ((sexo!='f') && (sexo!='m') && (sexo!='F') && (sexo!='M'));
        if ((sexo = 'F') || (sexo = 'f'))
        {
            mulheres++;
            cont--;
            altura_mulheres += altura;
            media_altura += altura;
        }
        else
        {
            cont--;
            media_altura+= altura;
        }
    }
    while (cont!=0);
    media_altura = media_altura / n;
    if (mulheres > 0 )
    {
        altura_mulheres = altura_mulheres / mulheres;
    }
    else
    {
        altura_mulheres = 0;
    }
    cout << "As medias de altura sao:" << endl;
    cout << "Mulheres : " << altura_mulheres << endl;
    cout << "Media Total : " << media_altura;
}
