#include "Aluno.h"

void Aluno::setCurso(string curso)
{
	this->curso = curso;
}

string Aluno::getCurso()
{
	return curso;
}

void Aluno::imprimirDetalhes()
{
	cout << nome << " eh aluno do curso " << curso << endl;
}