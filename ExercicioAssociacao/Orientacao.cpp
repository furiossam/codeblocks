#include "Orientacao.h"
Orientacao::Orientacao(Professor& p, Aluno& a, string tituloTrabalho){
    this->tituloTrabalho = tituloTrabalho;
    orientador = &p;
    orientando = &a;
}
Orientacao::~Orientacao(){
    // como fazer ??? Excluir orientacao afeta Professor e Aluno !!!!
    //cout << "Deletando orientação...";
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
    (*orientando).mostra(); // pega obj Orientando (Aluno) e ativa o mostra dele
    (getOrientador()).mostra(); // pega obj Orientador (Professor) e ativa o mostra dele
    cout << "\n---------------------------------\n";
}
void Orientacao::trocaOrientador(Professor& p){
    (*orientador).delOrientacao(*orientando);
    orientador = &p;
    p.addOrientacao(*this);
}
