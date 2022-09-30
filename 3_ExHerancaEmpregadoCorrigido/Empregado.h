#include <iostream>
#include <sstream>
using namespace std;


#pragma once
class Empregado
{
	/*A classe Empregado deve possuir dois atributos, nome e sal�rio. 
	Sal�rio deve ser do tipo protected. 
	Crie os m�todos get e set para classes e o m�todo toString que retorna um resumo do empregado, por exemplo: 
	�O sal�rio de Jo�o � R$ 1000,00�.  */
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

