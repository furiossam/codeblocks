#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int MA=0,MB=0,MC=0,VA=0,VB=0,VC=0,NA=0,NB=0,NC=0,Atotal,Btotal,Ctotal,cont;
    double porcMA,porcMB,porcMC,porcVA,porcVB,porcVC,porcNA,porcNB,porcNC,totalperiodoM=1,totalperiodoV=1,totalperiodoN=1;
    char opcao,opcao2;
    string maisfrequentado,periodo,totalperiodo;

    for (cont=1;cont<=50;cont++)
    {
        do
            {
            cout << "Digite o elevador que voce usa com mais frequencia: A,B ou C" << endl;
            cin >> (opcao);
            }
        while ((opcao!='A') && (opcao!='B') && (opcao!='C'));
        switch (opcao)
        {
        case 'A':
            do
            {
                cout << "Em que periodo? M para Matutino, V para Vespertino e N para Noturno." << endl;
                cin >> (opcao2);
            }
            while ((opcao2!='M') && (opcao2!='V') && (opcao2!='N'));
            switch (opcao2)
            {
            case 'M':
                MA++;
                break;
            case 'V':
                VA++;
                break;
            case 'N':
                NA++;
                break;
            }
        break;
        case 'B':
            do
            {
                cout << "Em que periodo? M para Matutino, V para Vespertino e N para Noturno." << endl;
                cin >> (opcao2);
            }
            while ((opcao2!='M') && (opcao2!='V') && (opcao2!='N'));
            switch (opcao2)
            {
            case 'M':
                MB++;
                break;
            case 'V':
                VB++;
                break;
            case 'N':
                NB++;
                break;
            }
        break;
        case 'C':
            do
            {
                cout << "Em que periodo? M para Matutino, V para Vespertino e N para Noturno." << endl;
                cin >> opcao2;
            }
            while ((opcao2!='M') && (opcao2!='V') && (opcao2!='N'));
            switch (opcao2)
            {
            case 'M':
                MC++;
                break;
            case 'V':
                VC++;
                break;
            case 'N':
                NC++;
                break;
            }
        break;

        }
    }
    Atotal = MA+VA+NA;
    Btotal = MB+VB+NB;
    Ctotal = MC+VC+NC;
    if (Atotal > Btotal)
    {
       if (Atotal > Ctotal)
       {
           maisfrequentado = "A";
           if (MA>VA)
           {
               if (MA>NA)
               {
                   periodo = "Matutino";
               }
               else
               {
                   periodo = "Noturno";
               }
           }
           else
           {
               if (VA>NA)
               {
                   periodo = "Vespertino";
               }
               else
               {
                   periodo = "Noturno";
               }
           }
       }
       else
       {
           maisfrequentado = "C";
           if (MC>VC)
           {
               if (MC>NC)
               {
                   periodo = "Matutino";
               }
               else
               {
                   periodo = "Noturno";
               }
           }
           else
           {
               if (VC>NC)
               {
                   periodo = "Vespertino";
               }
               else
               {
                   periodo = "Noturno";
               }
           }
       }
    }
    else
    {
        if (Btotal>Ctotal)
        {
            maisfrequentado = "B";
            if (MB>VB)
            {
                if (MB>NB)
                {
                    periodo = "Matutino";
                }
                else
                {
                    periodo = "Noturno";
                }
            }
            else
            {
                if (VB>NB)
                {
                    periodo = "Vespertino";
                }
                else
                {
                    periodo = "Noturno";
                }
            }
        }
        else
        {
            maisfrequentado = "C";
            if (MC>VC)
            {
                if (MC>NC)
                {
                    periodo = "Matutino";
                }
                else
                {
                    periodo = "Noturno";
                }
            }
            else
            {
                if (VC>NC)
                {
                    periodo = "Vespertino";
                }
                else
                {
                    periodo = "Noturno";
                }
            }
        }
    }
    totalperiodoM = MA+MB+MC;
    totalperiodoV = VA+VB+VC;
    totalperiodoN = NA+NB+NC;
    if (totalperiodoM>totalperiodoV)
    {
        if (totalperiodoM>totalperiodoN)
        {
            totalperiodo = "Matutino";
        }
        else
        {
            totalperiodo = "Noturno";
        }
    }
    else
    {
        if (totalperiodoV>totalperiodoN)
        {
            totalperiodo = "Vespertino";
        }
        else
        {
            totalperiodo = "Noturno";
        }
    }
    porcMA = MA/totalperiodoM*100;
    porcMB = MB/totalperiodoM*100;
    porcMC = MC/totalperiodoM*100;
    porcVA = VA/totalperiodoV*100;
    porcVB = VB/totalperiodoV*100;
    porcVC = VC/totalperiodoV*100;
    porcNA = NA/totalperiodoN*100;
    porcNB = NB/totalperiodoN*100;
    porcNC = NC/totalperiodoN*100;
    cout << "O elevador mais frequentado e: " << maisfrequentado << endl;
    cout << "No periodo " << periodo << " recebe seu maior fluxo." << endl;
    cout << "Os elevadores são mais utilizados no período: " << totalperiodo << endl;
    cout << "A porcentagem de uso dos elevadores no período Matutino são: " << endl;
    cout << "A: " << porcMA << " B: " << porcMB << " C: " << porcMC << endl;
    cout << "A porcentagem de uso dos elevadores no período Vespertino são: " << endl;
    cout << "A: " << porcVA << " B: " << porcVB << " C: " << porcVC << endl;
    cout << "A porcentagem de uso dos elevadores no período Noturno são: " << endl;
    cout << "A: " << porcNA << " B: " << porcNB << " C: " << porcNC << endl;

}
