// Podemos usar a diretiva pragma once
// quando trabalhando no windos
// nos demais casos usamos a diretiva ifndef
//#pragma once

#include <iostream>
using namespace std;

#ifndef PESSOA_H
#define PESSOA_H

class Pessoa
{
public:
	Pessoa();
	Pessoa(string nome, int idade);

	void dizerONome();
	void dizerAIdade();
	void fazerAniversario();

	//Métodos de acesso a atributos (Gets e Sets)
	//Métodos set, definem valores para atributos
	void setIdade(int indade);
	void setNome(string nome);

	//Metodos get RETORNAM o valor armazenado no atributo
	int getIdade();
	string getNome();

protected:
	string nome;
	int idade;
};


#endif //PESSOA_H



