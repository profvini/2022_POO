#include <iostream>
#include <sstream>
using namespace std;


#pragma once
class Empregado
{
	/*A classe Empregado deve possuir dois atributos, nome e salário. 
	Salário deve ser do tipo protected. 
	Crie os métodos get e set para classes e o método toString que retorna um resumo do empregado, por exemplo: 
	“O salário de João é R$ 1000,00”.  */
public:
	void setNome(string nome);
	void setSalario(float salario);
	float getSalario();
	string getNome();
	string toString();
	

private:
	string nome;
protected:
	float salario;
};

