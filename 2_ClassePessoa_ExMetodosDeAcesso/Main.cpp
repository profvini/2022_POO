#include "Pessoa.h"

//Recebe duas pessoas e descobre a pessoa mais velha
void descobreMaisVelho(Pessoa p1, Pessoa p2)
{
	if (p1.getIdade() > p2.getIdade()) {
		cout << p1.getNome() << " e mais velho que " << p2.getNome();
	}
	else if (p1.getIdade() < p2.getIdade())
	{
		cout << p2.getNome() << " e mais velho que " << p1.getNome();
	}
	else
		cout << p1.getNome() << " e " << p2.getNome() << " tem a mesma idade";
}

int main()
{
	Pessoa p;
	Pessoa c("Cristiane", 21);

	p.setNome("Vini");
	p.setIdade(20);

	p.dizerONome();
	p.fazerAniversario();
	p.dizerAIdade();

	c.dizerONome();
	c.dizerAIdade();

	descobreMaisVelho(p, c);

}
