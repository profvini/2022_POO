#include "Arara.h"
#include "Cascavel.h"
#include "Cachorro.h"

int main()
{

	Arara arara;
	Cascavel cascavel;
	Cachorro cao;

	arara.setNome("Arara Azul");
	cascavel.setNome("Cobra Cascavel");

	arara.EmitirSom();
	arara.Locomover();

	cascavel.EmitirSom();
	cascavel.Locomover();

	cao.setNome("Cachorro Toto");
	cao.Locomover();

	cao.EmitirSom();

	return 0;
}