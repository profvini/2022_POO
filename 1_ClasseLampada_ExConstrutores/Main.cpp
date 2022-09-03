// Preciso incluir a classes que vou usar para criar objetos
#include"Lampada.h"

int main()
{
	/*
	  criar 3 objetos da classe lampada para 
	  representar a lampada da cozinha, a lampada do
	  abajur e a lampada do led-ring
	*/
	Lampada l1; // objeto l1 do tipo lampada
	Lampada lampCozinha;

	Lampada lampada(40); // usando construtor especifico

	//Abajur
	l1.potencia = 60;

	//Cozinha
	lampCozinha.potencia = 100;
	lampCozinha.acender();


	cout << "Abajur: ";
	l1.informarSituacao();

	cout << "\nCozinha: ";
	lampCozinha.informarSituacao();

	cout << "\nLed-Ring: ";
	lampada.informarSituacao();

	cout << "\n Potencia Lampada: ";
	lampada.informarPotencia();

	cout << "\n Potencia L1: ";
	l1.informarPotencia();

	return 0;
}