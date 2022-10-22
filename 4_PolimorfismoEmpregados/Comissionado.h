#pragma once
#include "Empregado.h"
class Comissionado : public Empregado
{
public:
	void setTotalVendas(double totalVendas);
	void setTaxaComissao(double taxaComissao);
	void vencimento();

private:
	double totalVendas;
	double taxaComissao;
};

