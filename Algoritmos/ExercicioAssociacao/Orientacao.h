#ifndef ORIENTACAO_H
#define ORIENTACAO_H
#include "Professor.h"
#include "Aluno.h"
class Orientacao{
    Professor *orientador;
    Aluno *orientando;
    string tituloTrabalho;
    public:
        Orientacao(Professor&, Aluno&, string);
        ~Orientacao();
        string getTituloTrabalho();
        Professor getOrientador();
        Aluno getOrientando();
        void setTituloTrabalho(string);
        void setOrientador(Professor&);
        void setOrientando(Aluno&);
        void mostra();
        void trocaOrientador(Professor&);
};
#endif /* ORIENTACAO_H */

