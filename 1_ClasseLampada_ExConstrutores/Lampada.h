#include <iostream>
using namespace std;

class Lampada //usar nome da classe com letra maiuscula
{

public: 
	//atributos
	bool acesa;
	int potencia;

	//metodo construtor tem o mesmo nome da classe
	Lampada(); // construtor padr�o
	Lampada(int potencia);

	// outro m�todos
	void acender();
	void apagar();
	void informarSituacao();
	void informarPotencia();

}; //a declara��o da classe termina com ponto-e-virgula
