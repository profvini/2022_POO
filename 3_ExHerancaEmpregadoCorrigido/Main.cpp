#include "Vendedor.h"
#include "Gerente.h"

int main()
{
	Empregado e1;
	Vendedor v1("Pedro", 1000, 10);
	Gerente g1("Joaquina", 9876, "RH");

	e1.setNome("Vini");
	e1.setSalario(38000);

	string resposta = e1.toString();
	cout << "Retorno do metodo: " << resposta;

	cout << g1.toString();

	cout << v1.toString();





	return 0;
}