#include "Orientacao.h"
int main(){
    Professor professor1("Eduardo", "Dr.", 15151); //nome,titulacao,matricula
    Aluno aluno("Ana", "Computacao", 201713333); //nome,curso,matricula
    Orientacao orientacao(professor1, aluno, "TCC 2017-2");
    professor1.addOrientacao(orientacao);
    aluno.setOrientacao(orientacao);
    professor1.mostra();
    cout << endl;
    aluno.mostra();
    cout << endl;
    orientacao.mostra();
    professor1.delOrientacao(aluno);
    orientacao.mostra();
    return 0;
}
