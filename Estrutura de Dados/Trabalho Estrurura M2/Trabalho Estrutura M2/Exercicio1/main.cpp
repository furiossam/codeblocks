#include <iostream>
#include <fstream>
#include <iomanip>
#include "Pilha.cpp"

using namespace std;
void primeiraInversao(string nomearq,ofstream &saida){
    ifstream teste;
    string word;
    char ch;
    Pilha<string> pilhaString;
    teste.open(nomearq.c_str());

    while(teste.get(ch))
    {
        if(ch==' ' && word!=""){
            pilhaString.empilha(word);
            word="";
        }
        else{
            if(ch=='\n'){
                if(word!=""){
                    pilhaString.empilha(word);
                    word="";
                }
                while(!pilhaString.ehVazia()){
                    saida << pilhaString.getTopo();
                    if(pilhaString.numeroDeElementos()!=1)
                        saida << " ";
                    pilhaString.desempilha();
                }
                saida<<endl;
            }
            else{
                word+=ch;
            }
        }
    }
    pilhaString.empilha(word);
    while(!pilhaString.ehVazia()){
        saida << pilhaString.getTopo();
        if(pilhaString.numeroDeElementos()!=1)
            saida << " ";
        pilhaString.desempilha();
    }
}
void segundaInversao(string nomearq,ofstream &saida){
    ifstream teste;
    string word;
    char ch;
    Pilha<string> pilhaString;
    Pilha<char> pilhaChar;
    teste.open(nomearq.c_str());

    while(teste.get(ch))
    {
        if(ch==' '&&pilhaChar.numeroDeElementos()!=0){
            while(pilhaChar.numeroDeElementos()!=0){
                saida<<pilhaChar.getTopo();
                pilhaChar.desempilha();
            }
            saida<<" ";
        }
        else{
            if(ch=='\n'){
                if(pilhaChar.numeroDeElementos()!=0){
                    while(pilhaChar.numeroDeElementos()!=0){
                        saida<<pilhaChar.getTopo();
                        pilhaChar.desempilha();
                    }
                }
                saida<<endl;
            }
            else{
                pilhaChar.empilha(ch);
            }
        }
    }
    while(pilhaChar.numeroDeElementos()!=0){
                saida<<pilhaChar.getTopo();
                pilhaChar.desempilha();
    }

}
void terceiraInversao(string nomearq,ofstream &saida){
    char ch;
    int linhas;
    Pilha<char> pilhachar[50];
    ifstream teste;
    teste.open(nomearq.c_str());
    if (!teste)
    {
        cout << "Nao foi possivel abrir o arquivo de entrada."; cin.get();
        return ;
    }
    int j=0;
    while(teste.get(ch))
    {
        if(ch=='\n'){
            j++;
        }
        else{
            pilhachar[j].empilha(ch);
        }

    }
    linhas=j;
    teste.close();
    for(int j=0;j<=linhas;j++){
        while(!(pilhachar[j].ehVazia())){
            saida << pilhachar[j].getTopo();
            pilhachar[j].desempilha();
        }
        saida << '\n';
    }
    saida << '\n';
}
int main()
{
    ifstream teste;
    ofstream saida;
    string word,nomearq,nomesaida="saida.txt";


    cout << "\nNome do arquivo a ser aberto: ";
    getline(cin,nomearq);
    saida.open(nomesaida.c_str());
    teste.open(nomearq.c_str());

    primeiraInversao(nomearq, saida);
    saida << endl;
    segundaInversao(nomearq, saida);
    saida << endl;
    terceiraInversao(nomearq, saida);


    saida.close();
    teste.close();

}
