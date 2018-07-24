#include"Paciente.h"
int Paciente::qtdePacientes=0;
Paciente::Paciente()
{
    qtdePacientes++;
}
void Paciente::setNome(string n)
{
    nome=n;
}
string Paciente::getNome()
{
    return nome;
}
int Paciente::getQtdePacientes()
{
    return qtdePacientes;
}
void Paciente::mostra()
{

}
