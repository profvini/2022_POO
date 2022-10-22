#include "Assalariado.h"
#include "Comissionado.h"
#include "Horista.h"

int main()
{
	Assalariado a;
	Comissionado c;
	Horista h;

	a.setNome("Huguinho");
	a.setSalario(1500);

	c.setNome("Zezinho");
	c.setTotalVendas(30000);
	c.setTaxaComissao(0.10); //10% de comissao

	h.setNome("Luizinho");
	h.setPrecoHora(20);
	h.setHorasTrabalhadas(160);

	a.vencimento();
	c.vencimento();
	h.vencimento();


	return 0;
}