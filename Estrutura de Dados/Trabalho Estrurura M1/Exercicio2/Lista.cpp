#include "Lista.h"
#include "Nodo.h"
#include <iostream>

using namespace std;

        Lista::Lista(int linhaMax,int colunaMax){
            this->linhaMax=linhaMax;
            this->colunaMax=colunaMax;
            this->inicio=0;
            this->numeroElementos=0;
        }
        Lista::~Lista(){
            for(int i=linhaMax;i>=1;i--){
                for(int j=colunaMax;j>=1;j--){
                     delete pegaNodo(i,j);
                }
            }

        }
        int Lista::numeroDeElementos(){
            return this->numeroElementos;
        }
        int Lista::pegaLinhas(){
            return this->linhaMax;
        }
        int Lista::pegaColunas(){
            return this->colunaMax;
        }
        void Lista::mostra(){

            for(int i=1;i<=linhaMax;i++){
                for(int j=1;j<=colunaMax;j++){
                    if(existeNodo(i,j)){
                        cout << pegaNodo(i,j)->pegaValor() << " ";
                    }
                    else{
                        cout << 0 << " ";
                    }
                }
                cout << endl;
            }
        }
        void Lista::insere(int valor,int linha,int coluna){
            Nodo* nodo = new Nodo(valor,linha,coluna);
            Nodo* aux;

            if (numeroElementos==0){
                this->inicio=nodo;
            }
            else{
                aux=this->inicio;
                while(aux->pegaProximaLinha()&&aux->pegaProximaLinha()->pegaLinha()<=linha){
                    aux=aux->pegaProximaLinha();
                }
                if(aux->pegaLinha()==linha){
                    while(aux->pegaProximaColuna()&&aux->pegaProximaColuna()->pegaColuna()<=coluna){
                        aux=aux->pegaProximaColuna();
                    }
                    if(aux->pegaColuna()==coluna){
                        aux->setaValor(valor);
                    }
                    else{
                        if(aux->pegaColuna()>coluna){
                            nodo->setaProximaColuna(aux);
                            nodo->setaProximaLinha(aux->pegaProximaLinha());
                            aux->setaProximaLinha(NULL);
                            if (this->inicio->pegaLinha() == linha)
                                this->inicio=nodo;
                        }
                        else{
                            if(aux->pegaProximaColuna()){
                                nodo->setaProximaColuna(aux->pegaProximaColuna());
                            }
                            aux->setaProximaColuna(nodo);
                            }
                            for(int i=linha-1;i>=1;i--){
                                if(existeNodo(i,coluna)){
                                    pegaNodo(i,coluna)->setaProximaLinha(nodo);
                                    break;
                                }
                            }
                            for(int i=linha+1;i<=linhaMax;i++){
                                    if(existeNodo(i,coluna)){
                                        nodo->setaProximaLinha(pegaNodo(i,coluna));
                                        break;
                                    }
                            }

                        }
                    }
                else{
                    if(aux->pegaLinha()>linha){
                        this->inicio=nodo;
                        nodo->setaProximaLinha(aux);
                    }
                    else{
                        if(aux->pegaProximaLinha()){
                            nodo->setaProximaLinha(aux->pegaProximaLinha());
                            aux->setaProximaLinha(nodo);
                        }
                        else{
                            aux->setaProximaLinha(nodo);
                        }
                    }
                }
            }
            numeroElementos++;
        }
        bool Lista::existeNodo(int linha,int coluna){
            Nodo* aux;

            if(numeroElementos==0)
                return false;
            aux=this->inicio;
            while(aux->pegaProximaLinha()&&aux->pegaProximaLinha()->pegaLinha()<=linha){
                aux=aux->pegaProximaLinha();
            }
            if(aux->pegaLinha()==linha){
                while(aux->pegaProximaColuna()&&aux->pegaProximaColuna()->pegaColuna()<=coluna){
                        aux=aux->pegaProximaColuna();
                }
                if(aux->pegaColuna()==coluna){
                    return true;
                }
            }
            return false;
        }
        Nodo* Lista::pegaNodo(int linha,int coluna){
            if (existeNodo(linha,coluna)){
                Nodo* aux=this->inicio;
                while(aux->pegaProximaLinha()&&aux->pegaProximaLinha()->pegaLinha()<=linha){
                    aux=aux->pegaProximaLinha();
                }
                if(aux->pegaLinha()==linha){
                    while(aux->pegaProximaColuna()&&aux->pegaProximaColuna()->pegaColuna()<=coluna){
                        aux=aux->pegaProximaColuna();
                    }
                    if(aux->pegaColuna()==coluna){
                        return aux;
                    }
                }
            }
            return NULL;
        }
        void Lista::somarValor(int coluna,int valor){
            for(int i=1;i<=linhaMax;i++){
                if(existeNodo(i,coluna)){
                    pegaNodo(i,coluna)->setaValor(pegaNodo(i,coluna)->pegaValor()+valor);
                    if(pegaNodo(i,coluna)->pegaValor()==0)
                        retiraNodo(i,coluna);
                }
                else{
                    insere(valor,i,coluna);
                }

            }
        }
        void Lista::retiraNodo(int linha,int coluna){
            Nodo* nodo=this->inicio;
            Nodo* aux=pegaNodo(linha,coluna);
            if (numeroDeElementos()==1){
                delete nodo;
                numeroElementos--;
            }
            else{
                if(pegaNodo(linha,coluna)==this->inicio){
                    for(int i=linha;i<=linhaMax;i++){
                        for(int j=coluna;j<=colunaMax;j++){
                            if(existeNodo(i,j)){
                                this->inicio=pegaNodo(i,j);
                            }
                        }
                    }
                }
                else{
                    for(int i=1;i<=linha;i++){
                        for(int j=1;j<=coluna;j++){
                            if(pegaNodo(i,j)->pegaProximaLinha()&&pegaNodo(i,j)->pegaProximaLinha()==pegaNodo(linha,coluna)){
                                pegaNodo(i,j)->setaProximaLinha(pegaNodo(linha,coluna)->pegaProximaLinha());
                            }
                            else
                                pegaNodo(i,j)->setaProximaLinha(NULL);
                            if(pegaNodo(i,j)->pegaProximaColuna()&&pegaNodo(i,j)->pegaProximaColuna()==pegaNodo(linha,coluna)){
                                pegaNodo(i,j)->setaProximaColuna(pegaNodo(linha,coluna)->pegaProximaColuna());
                            }
                            else
                                pegaNodo(i,j)->setaProximaColuna(NULL);
                        }
                    }
                }

            }
            delete aux;
        }
