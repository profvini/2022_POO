#include "Vendedor.h"

Vendedor::Vendedor(string nome, float salario, float percentualComissao)
{
	setNome(nome);
	this->salario = salario;
	this->percentualComissao = percentualComissao;
}
void Vendedor::setPercentualComissao(float percentualComissao)
{
	this->percentualComissao = percentualComissao;
}
float Vendedor::getPercentualComissao()
{
	return percentualComissao;
}
float Vendedor::calculaSalario()
{
	return salario + (salario * percentualComissao / 100);
}
string Vendedor::toString()
{
	/*   O método toString da classe deve apresentar as informações de
	nome do empregado, salário sem comissão, salario com comissão
		e percentual de comissão.*/

	stringstream frase;

	frase << Empregado::toString(); // vai pegar o resultado do metodo da classe base
	frase << "Percentual de comissao: " << percentualComissao << endl;
	frase << "Salario final, com comissao: " << calculaSalario();

	return frase.str();
}