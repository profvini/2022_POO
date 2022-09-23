#pragma once
#include "Equipamento.h"

//TV eh um equipamento
class TV : public Equipamento
{

public:
	void setPolegadas(int polegadas);

private:
	int polegadas;

};

