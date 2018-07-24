#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

class Nodo{
    private:
        int valor,coluna,linha;
        Nodo* proxlin,*proxcol;
    public:
        Nodo(int valor,int linha,int coluna);
        void setaValor(int valor);
        void setaProximaLinha(Nodo* nodo);
        void setaProximaColuna(Nodo* nodo);
        int pegaValor();
        int pegaLinha();
        int pegaColuna();
        Nodo* pegaProximaLinha();
        Nodo* pegaProximaColuna();

};

#endif // NODO_H_INCLUDED
