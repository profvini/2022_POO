#include "Arara.h"

void Arara::EmitirSom()
{
	cout << "Arara esta fazendo barulho\n";
}

void Arara::Locomover()
{
	//Animal::Locomover(); -> Posso acessar o metodo "padrao" implementado na classe base quando necessario
	cout << nome << " esta se locomendo voando!\n";
}