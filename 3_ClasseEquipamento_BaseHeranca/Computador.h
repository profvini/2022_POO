#pragma once
#include "Equipamento.h"

//Computador eh um equipamento
class Computador : public Equipamento
{
public:
	void setMemoria(int memoria);

private:
	int memoria;
	float processador;
};

