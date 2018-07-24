#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
#include <string>
class Orientacao;
using namespace std;
class Aluno{
    string nome;
    string curso;
    long matricula;
    Orientacao* orientacao; // esta ou nao sendo orientado
    public:
        Aluno(string nome = "", string curso = "", long matricula = 0);
        ~Aluno();
        string getNome();
        string getCurso();
        long getMatricula();
        void setOrientacao(Orientacao&);
        void mostra();
};
#endif /* ALUNO_H */

