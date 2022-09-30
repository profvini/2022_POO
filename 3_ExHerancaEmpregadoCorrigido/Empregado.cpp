#include "Empregado.h"

void Empregado::setNome(string nome)
{
	this->nome = nome;
}
void Empregado::setSalario(float salario)
{
	this->salario = salario;
}
float Empregado::getSalario()
{
	return salario;
}
string Empregado::getNome()
{
	return nome;
}
string Empregado::toString()
{
	stringstream frase;

	frase << "O salario de " << nome << " eh " << salario << endl;
	
	return frase.str();
}