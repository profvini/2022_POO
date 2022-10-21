#include "Animal.h"

void Animal::setNome(string nome)
{
	this->nome = nome; 
}

void Animal::Locomover()
{
	cout << nome << " esta se locomovendo\n";
}

