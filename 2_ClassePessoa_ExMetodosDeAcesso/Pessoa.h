#include <iostream>
using namespace std;

class Pessoa
{
public:
	Pessoa();
	Pessoa(string nome, int idade);

	void dizerONome();
	void dizerAIdade();
	void fazerAniversario();

	//M�todos de acesso a atributos (Gets e Sets)
	//M�todos set, definem valores para atributos
	void setIdade(int indade);
	void setNome(string nome);

	//Metodos get RETORNAM o valor armazenado no atributo
	int getIdade();
	string getNome();

private: 
	string nome;
	int idade;
};