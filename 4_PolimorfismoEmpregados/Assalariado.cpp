#include "Assalariado.h"

void Assalariado::setSalario(double salario)
{
	this->salario = salario;
}

void Assalariado::vencimento()
{
	cout << nome << " eh assalariado. Seu salario eh: " << salario << endl;

}