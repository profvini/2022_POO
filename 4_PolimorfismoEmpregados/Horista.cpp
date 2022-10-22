#include "Horista.h"

void Horista::setPrecoHora(double precoHora)
{
	this->precoHora = precoHora;
}

void Horista::setHorasTrabalhadas(double horasTrabalhadas)
{
	this->horasTrabalhadas = horasTrabalhadas;
}

void Horista::vencimento()
{
	double vencimento = horasTrabalhadas * precoHora;

	cout << nome << " eh horista. Seu vencimento eh: " << vencimento << endl;

}