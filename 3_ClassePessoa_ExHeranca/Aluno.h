#include "Pessoa.h"

//Aluno � uma pessoa -> Aluno herda de pessoa, de forma publica
class Aluno : public Pessoa 
{
public:
	void setCurso(string curso);
	string getCurso();
	void imprimirDetalhes();

private:
	string curso;
};
