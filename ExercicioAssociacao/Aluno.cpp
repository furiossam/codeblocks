#include "Aluno.h"
Aluno::Aluno(string nome, string curso, long matricula){
    this->nome = nome;
    this->curso = curso;
    this->matricula = matricula;
    orientacao = NULL;
}
Aluno::~Aluno(){
    // como fazer ??? Excluir Aluno pode afetar outras classes
}
string Aluno::getNome(){
    return this->nome;
}
string Aluno::getCurso(){
    return this->curso;
}
long Aluno::getMatricula(){
    return this->matricula;
}
void Aluno::setOrientacao(Orientacao& o){
    orientacao = &o;
}
void Aluno::mostra(){
    cout << "\n---------------------------------";
    cout << "\nAluno: " << getNome();
    cout << "\nMatricula: " << getMatricula();
    cout << "\nCurso: " << getCurso();
    cout << "\n---------------------------------";
}
