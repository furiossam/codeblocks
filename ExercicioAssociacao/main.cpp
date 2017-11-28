#include "Orientacao.h"
#include "Professor.h"
#include "Aluno.h"
int main(){
    Professor professor1("Eduardo", "Dr.", 15151);//nome,titulacao,matricula
    Professor professor2("Alberto", "Dr.", 27341);
    Aluno aluno("Ana", "Computacao", 201713333); //nome,curso,matricula
    Aluno aluno2("Leon", "Computacao", 201714153);
    Orientacao orientacao(professor1, aluno, "TCC 2017-2");
    Orientacao orientacao2(professor1, aluno2, "TCC As Mariposas");
    professor1.addOrientacao(orientacao);
    aluno.setOrientacao(orientacao);
    professor1.addOrientacao(orientacao2);
    aluno2.setOrientacao(orientacao2);
    professor1.mostra();
    cout << endl;
    aluno.mostra();
    cout << endl;
    orientacao2.trocaOrientador(professor2);
    orientacao.mostra();
    orientacao2.mostra();
    professor2.delOrientacao(aluno2);
    return 0;
}

