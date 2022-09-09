#include "Pessoa.h"

Pessoa::Pessoa()
{

}

Pessoa::Pessoa(string nome, int idade)
{
	this->nome = nome;
	this->idade = idade;
}
void Pessoa::dizerONome()
{
	cout << "Olah, meu nome eh " << nome << endl;
}
void Pessoa::dizerAIdade()
{
	cout << "Olah, tenho " << idade << " anos\n";
}

void Pessoa::fazerAniversario()
{
	idade++;
}

void Pessoa::setIdade(int idade)
{
	this->idade = idade;
}

void Pessoa::setNome(string nome)
{
	this->nome = nome;
}

int Pessoa::getIdade()
{
	return idade;
}

string Pessoa::getNome()
{
	return nome;
}