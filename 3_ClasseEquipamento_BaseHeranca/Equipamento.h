#include <iostream>
using namespace std;

//Classe Base, que ser� herdada
class Equipamento
{
public:
	void setNome(string nome);
	void setVoltagem(int voltagem);
	string getNome();
	int getVoltagem();

protected:
	string nome;
	int voltagem;
};
