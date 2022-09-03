#include "Lampada.h"

Lampada::Lampada()
{
	acesa = false;
	potencia = 0;
}

Lampada::Lampada(int potencia)
{
	acesa = false;
	this->potencia = potencia; 
}

void Lampada::acender()
{
	 acesa = true;
}

void Lampada::apagar()
{
	acesa = false;
}

void Lampada::informarSituacao()
{
	if(acesa) //if(acesa==true) 
		cout << "A lampada esta acesa!"; 
	else 
		cout << "A lampada esta apagada!";
}

void Lampada::informarPotencia()
{
	cout << "Potencia: " << potencia;
}