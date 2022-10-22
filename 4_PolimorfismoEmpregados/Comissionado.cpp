#include "Comissionado.h"

void Comissionado::setTotalVendas(double totalVendas)
{
	this->totalVendas = totalVendas;
}
void Comissionado::setTaxaComissao(double taxaComissao)
{
	this->taxaComissao = taxaComissao;
}

void Comissionado::vencimento()
{
	double vencimento = totalVendas * taxaComissao;

	cout << nome << " eh comissionado. Seu vencimento eh: " << vencimento << endl;
}