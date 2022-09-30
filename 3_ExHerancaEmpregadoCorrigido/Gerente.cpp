#include "Gerente.h"

Gerente::Gerente(string nome, float salario, string departamento)
{
	setNome(nome);
	this->salario = salario;
	this->departamento = departamento;
}

void Gerente::setDepartamento(string departamento)
{
	this->departamento = departamento;
}
string Gerente::getDepartamento()
{
	return departamento;
}
string Gerente::toString()
{
	stringstream frase;

	frase << getNome() << " trabalha no deparatamento " << departamento << " e tem salario de " << salario << endl;

	return frase.str(); 
 }