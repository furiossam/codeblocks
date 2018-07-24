#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "Fila.cpp"

using namespace std;

int main()
{
    // Exercicio 1(exemplo)
    /*Fila<int> filaCinema;
    int i, j, numeroDePessoas, pessoasQueVieramAssistirOFilme;

    srand(time(NULL));

    for (i = 1; i <= 12; i++)
        filaCinema.insere(1);

    pessoasQueVieramAssistirOFilme = 12;

    for (i = 1; i <= 45 * 60; i++)
    {
        if (i % 60 == 0)
        {
            numeroDePessoas = rand()%3 + 2;
            pessoasQueVieramAssistirOFilme += numeroDePessoas;

            for (j = 1; j <= numeroDePessoas; j++)
                filaCinema.insere(1);
        }
        if (i % 30 == 0)
            if (!filaCinema.ehVazia())
                filaCinema.retira();
    }

    cout << "pessoas que vieram assistir o filme = " <<
         pessoasQueVieramAssistirOFilme  << endl;
    cout << "quantidade de pessoas na fila quando o filme comecou = " <<
         filaCinema.numeroDeElementos();*/

    //Exercicio 1
    /*Fila<int> fila1,fila2;

    fila1.insere(1);
    fila1.insere(1);
    fila1.insere(3);

    fila2.insere(1);
    fila2.insere(3);
    fila2.insere(3);

    cout << fila1.ehIgual(fila2);*/

    //Exercicio 2
    /*Fila<int> filaTaxis,filaPassageiros;
    int tempoDeEspera=0,tempoDeEsperaTotal=0,quantidadeTaxis=0,numeroTaxis,numeroPassageiros;
    srand(time(NULL));

    for (int i = 1;i<=600;i++){
        if(i % 5 == 0){
            numeroTaxis = rand()%4;
            for(int j=1;j<=numeroTaxis;j++){
                filaTaxis.insere(1);
            }

        }
        if(i % 3 == 0){
            numeroPassageiros = rand()%3;
            for(int  k = 1;k<=numeroPassageiros;k++){
                filaPassageiros.insere(1);
            }
        }
        if(!filaTaxis.ehVazia()&&!filaPassageiros.ehVazia()){
            quantidadeTaxis++;
            tempoDeEsperaTotal+=tempoDeEspera;
            tempoDeEspera=0;
            filaPassageiros.retira();
            filaTaxis.retira();
        }
        else{
            if(filaTaxis.ehVazia()&&!filaPassageiros.ehVazia()){
                tempoDeEspera++;
            }
        }
    }
    cout << "Quantidade de corridas feitas: " << quantidadeTaxis << endl;
    cout << "Tempo Medio de Espera: " << tempoDeEsperaTotal/quantidadeTaxis;*/

    //Exercicio 3
    /*Fila<int> filaA,filaB,filaC;
    int N,processosClasseA=0,processosClasseB=0,processosClasseC=0;
    srand(time(NULL));

    for(int i=1;i<=100;i++){
        N = rand()%101;
        if(N>=0&&N<=49){
            if(N>=0&&N<=25){
                filaA.insere(1);
            }
            if(N>=26&&N<=39){
                filaB.insere(1);
            }
            if(N>=40&&N<=49){
                filaC.insere(1);
            }
        }
        else{
            if(N>=50&&N<=75&&!filaA.ehVazia()){
                filaA.retira();
                processosClasseA++;
            }
            if(N>=76&&N<=89&&!filaB.ehVazia()){
                filaB.retira();
                processosClasseB++;
            }
            if(N>=90&&N<=100&&!filaC.ehVazia()){
                filaC.retira();
                processosClasseC++;
            }
        }
        if(i % 5 == 0){
            cout << "Processos em fila na Classe A: " << filaA.numeroDeElementos() << endl;
            cout << "Processos em fila na Classe B: " << filaB.numeroDeElementos() << endl;
            cout << "Processos em fila na Classe C: " << filaC.numeroDeElementos() << endl;
            cout << "Processos executados da Classe A: " << processosClasseA << endl;
            cout << "Processos executados da Classe B: " << processosClasseB << endl;
            cout << "Processos executados da Classe C: " << processosClasseC << endl;
        }

    }*/

    //Exercicio 4

    Fila<int> caixa1,caixa2,caixa3,caixa4;
    int volume;

    srand(time(NULL));

    for(int i=1;i<=4;i++){
        caixa1.insere(1);
    }
    for(int i=1;i<=3;i++){
        caixa2.insere(1);
    }
    for(int i=1;i<=2;i++){
        caixa3.insere(1);
    }
    for(int i=1;i<=4;i++){
        caixa4.insere(1);
    }

    for(int i=1;i<=300;i++){
        volume = rand()%50+1;
        if(i%4==0&&!caixa1.ehVazia())
            caixa1.retira();
        if(i%5==0&&!caixa2.ehVazia())
            caixa2.retira();
        if(i%7==0&&!caixa3.ehVazia())
            caixa3.retira();
        if(i%2==0&&!caixa1.ehVazia())
            caixa1.retira();
        if(caixa1.numeroDeElementos()<=caixa2.numeroDeElementos()){
            if(caixa1.numeroDeElementos()<=caixa3.numeroDeElementos()){
                if(caixa1.numeroDeElementos()<caixa4.numeroDeElementos()||volume>6)
                    caixa1.insere(1);
                else{
                    caixa4.insere(1);
                }
            }
            else{
                if(caixa3.numeroDeElementos()<caixa4.numeroDeElementos()||volume>6){
                    caixa3.insere(1);
                }
            }
        }
        else{
            if(caixa2.numeroDeElementos()<=caixa3.numeroDeElementos()){
                if(caixa2.numeroDeElementos()<caixa4.numeroDeElementos()||volume>6){
                    caixa2.insere(1);
                }
                else{
                    caixa4.insere(1);
                }
            }
            else{
                if(caixa3.numeroDeElementos()<caixa4.numeroDeElementos()||volume>6){
                    caixa3.insere(1);
                }
                else{
                    caixa4.insere(1);
                }
            }
        }
    }
    cout << caixa1.numeroDeElementos() << endl;
    cout << caixa2.numeroDeElementos() << endl;
    cout << caixa3.numeroDeElementos() << endl;
    cout << caixa4.numeroDeElementos() << endl;

    return 0;
}
