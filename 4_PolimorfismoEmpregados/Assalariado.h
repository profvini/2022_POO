#pragma once
#include "Empregado.h"
class Assalariado : public Empregado
{
public:
	void setSalario(double salario);
	void vencimento();

private:
	double salario;
};

