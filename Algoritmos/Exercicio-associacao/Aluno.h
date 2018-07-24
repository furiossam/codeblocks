#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED

class Orientacao;

class Aluno
{
    Orientacao *NovaOrientacao;
    string nome;
    int cod;
public:
    Aluno(string =" ",int=0);
    string getNome();
    int getCod();
};
#endif // ALUNO_H_INCLUDED
