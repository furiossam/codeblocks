#include <iostream>

using namespace std;

int main()
{
    string nomes[20];
    float notas[20]={0.0},media=0;
    int n,pos,contAbaixoMedia=0;
    do
    {
        cout<<"Qtde alunos: ";
        cin>>n;
    }
    while (n<=0 || n>20);
    for(pos=0;pos<n;pos++)
    {
        cin.ignore();
        cout<<"Nome e nota do aluno "<<pos+1<<""<< endl;
        getline(cin,nomes[pos]);
        cin>>notas[pos];
    }
    for(pos=0;pos<n;pos++)
    {
        media+=notas[pos];
    }
    media/=n;
    cout<<"\n\n Relatorio-Alunos aprovados"<<endl;
    for(pos=0;pos<n;pos++)
    {
        if(notas[pos]>=media)
        {
            cout<<nomes[pos]<<endl;
        }
        else
        {
            contAbaixoMedia++;
        }
    }
    cout<<"\n\nQtde abaixo da media"<<contAbaixoMedia;
    return 1;
}
