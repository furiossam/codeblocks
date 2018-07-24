#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <math.h>
#include "Pilha.cpp"
#include "Fila.cpp"

using namespace std;


int prioridade(string simbolo){
    if(simbolo=="pi")
        return 0;
    if(simbolo=="lambda")
        return 1;
    if(simbolo=="("||simbolo==")")
        return 2;
    if(simbolo=="+"||simbolo=="-")
        return 3;
    if(simbolo=="*"||simbolo=="/")
        return 4;
    if(simbolo=="^")
        return 5;
    return 6;

}
void calculaPosfixada(Fila<string> &filaPosfixada){
    Pilha<float> pilhaCalculo;
    float a,b;
    while(!filaPosfixada.ehVazia()){
        if(prioridade(filaPosfixada.primeiro())==6){
            pilhaCalculo.empilha(atof(filaPosfixada.primeiro().c_str()));
            filaPosfixada.retira();
        }
        else{
            a=pilhaCalculo.getTopo();
            pilhaCalculo.desempilha();
            b=pilhaCalculo.getTopo();
            pilhaCalculo.desempilha();
            if(filaPosfixada.primeiro()=="+"){
                pilhaCalculo.empilha(b+a);
                filaPosfixada.retira();
            }
            if(filaPosfixada.primeiro()=="-"){
                pilhaCalculo.empilha(b-a);
                filaPosfixada.retira();
            }
            if(filaPosfixada.primeiro()=="*"){
                pilhaCalculo.empilha(b*a);
                filaPosfixada.retira();
            }
            if(filaPosfixada.primeiro()=="/"){
                pilhaCalculo.empilha(b/a);
                filaPosfixada.retira();
            }
            if(filaPosfixada.primeiro()=="^"){
                pilhaCalculo.empilha(pow(b,a));
                filaPosfixada.retira();
            }
        }
    }
    cout << endl << "Resultado: "<< endl;
    pilhaCalculo.mostra();
}
bool verificaParenteses(Fila<string> filaInfixada){
    Pilha<int> pilhaAbre,pilhaFecha;

    while(!filaInfixada.ehVazia()){
        if(filaInfixada.primeiro()=="(")
            pilhaAbre.empilha(1);
        if(filaInfixada.primeiro()==")"&&(pilhaAbre.numeroDeElementos()>pilhaFecha.numeroDeElementos())){
            pilhaFecha.empilha(1);
        }
        filaInfixada.retira();
    }
    return (pilhaAbre.numeroDeElementos()==pilhaFecha.numeroDeElementos());
}
void infixadaParaPosfixada(string &expressao){
    Fila<string> filaInfixada,filaPosfixada;
    Pilha<string> pilhaTrab;
    string X,Y;

    string entrada="";
    for(int i=0;i<expressao.length();i++){
        if(expressao.at(i)==' '&&entrada!=""){
            filaInfixada.insere(entrada);
            entrada="";
        }
        else{
            entrada+=expressao.at(i);
        }
    }
    if(verificaParenteses(filaInfixada)){
        cout << endl << "Balanceamento de parenteses ... OK" << endl;
    }
    else{
        cout << endl << "Balanceamento de parenteses ... ERRO" << endl;
        return ;
    }
    filaInfixada.insere(entrada);
    cout << "Expressao: " << endl;
    filaInfixada.mostra();
    filaInfixada.insere("lambda");
    pilhaTrab.empilha("pi");

    do{
        X=filaInfixada.primeiro();
        filaInfixada.retira();
        if(prioridade(X)==6){
            filaPosfixada.insere(X);
        }
        else{
            if(X=="("){
                pilhaTrab.empilha(X);
            }
            else{
                if(X==")"){
                    Y = pilhaTrab.getTopo();
                    pilhaTrab.desempilha();
                    while(Y!="("){
                        filaPosfixada.insere(Y);
                        Y = pilhaTrab.getTopo();
                        pilhaTrab.desempilha();
                    }
                }
                else{
                    while(prioridade(X)<=prioridade(pilhaTrab.getTopo())){
                        Y=pilhaTrab.getTopo();
                        pilhaTrab.desempilha();
                        filaPosfixada.insere(Y);
                    }
                    pilhaTrab.empilha(X);
                }
            }
        }

    }while(X!="lambda");
    cout << endl << "Expressao na notacao Infixada: " << endl;
    filaPosfixada.mostra();
    calculaPosfixada(filaPosfixada);
}


int main()
{
    string expressao="5 * 6 + ( 10 - ( 4 / 2 ) ) + 2 ^ 3";

    infixadaParaPosfixada(expressao);

}
