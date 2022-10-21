#include <iostream>
using namespace std;
#pragma once
class Animal
{
public:
	void setNome(string nome);

	virtual void EmitirSom()=0; //metodo virtual puro. Ele sera implementado apenas nas classes derivadas
	virtual void Locomover(); // metodo apenas virtual


protected:
	string nome;
};

