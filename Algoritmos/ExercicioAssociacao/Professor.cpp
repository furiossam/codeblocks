#include "Orientacao.h"
#include "Professor.h"

Professor::Professor(string nome, string titulacao, long matricula){
    this->nome = nome;
    this->titulacao = titulacao;
    this->matricula = matricula;
}
Professor::~Professor(){
    // como fazer ??? Excluir Professor pode afetar outras classes
}
string Professor::getNome(){
    return this->nome;
}
string Professor::getTitulacao(){
    return this->titulacao;
}
long Professor::getMatricula(){
    return this->matricula;
}
void Professor::addOrientacao(Orientacao& o){
    orientacoes.push_back(&o);
}
void Professor::delOrientacao(Aluno& a){
    for (int i=0;i<orientacoes.size();i++)
    {
        if (orientacoes[i]->getOrientando().getMatricula()==a.getMatricula())
        {
            cout << "Deletando orientacao...\n";
            delete (orientacoes[i]);
            //orientacoes[i]->getOrientando().setOrientacao(a);
        }
    }
    // como tirar esta orientacao do vetor ???
}
void Professor::mostra(){
    cout << "\n---------------------------------";
    cout << "\nProfessor: " << getNome();
    cout << "\nTitulacao: " << getTitulacao();
    cout << "\nMatricula: " << getMatricula();
    cout << "\n---------------------------------";
}
