#include <iostream>
using namespace std;

class Lampada //usar nome da classe com letra maiuscula
{

public: 
	//atributos
	bool acesa;
	int potencia;

	//metodo construtor tem o mesmo nome da classe
	Lampada(); // construtor padrão
	Lampada(int potencia);

	// outro métodos
	void acender();
	void apagar();
	void informarSituacao();
	void informarPotencia();

}; //a declaração da classe termina com ponto-e-virgula
