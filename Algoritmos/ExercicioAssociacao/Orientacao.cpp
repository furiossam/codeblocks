#include "Orientacao.h"
Orientacao::Orientacao(Professor& p, Aluno& a, string tituloTrabalho){
    this->tituloTrabalho = tituloTrabalho;
    orientador = &p;
    orientando = &a;
}
Orientacao::~Orientacao(){
    orientador = NULL;
    orientando = NULL;
    // como fazer ??? Excluir orientacao afeta Professor e Aluno !!!!
}
string Orientacao::getTituloTrabalho(){
    return tituloTrabalho;
}
Aluno Orientacao::getOrientando(){
    return *orientando;
}
Professor Orientacao::getOrientador(){
    return *orientador;
}
void Orientacao::setTituloTrabalho(string tituloTrabalho){
    this->tituloTrabalho = tituloTrabalho;
}
void Orientacao::setOrientador(Professor& p){
    orientador = &p;
}
void Orientacao::setOrientando(Aluno& a){
    orientando = &a;
}
void Orientacao::mostra(){
    cout << "\n---------------------------------";
    cout << "\nOrientacao";
    cout << "\nTitulo do trabalho: " << getTituloTrabalho();
    if ((*orientando).getNome()!="")
    {
        (*orientando).mostra(); // pega obj Orientando (Aluno) e ativa o mostra dele
    }

    if ((*orientador).getNome()!="")
    {
        (getOrientador()).mostra(); // pega obj Orientador (Professor) e ativa o mostra dele
    }

    cout << "\n---------------------------------\n";
}
void Orientacao::trocaOrientador(Professor& p){
    // como fazer ????
}

