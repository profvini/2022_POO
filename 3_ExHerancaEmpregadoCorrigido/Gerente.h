#pragma once
#include "Empregado.h"
class Gerente :
    public Empregado
{
    /*
    A classe Gerente deve herdar da classe Empregado. 
    Crie os m�todos get e set para a classe e o 
    m�todo toString. 
    O m�todo toString da classe Gerente deve incluir a
    informa��o do departamento, al�m dos dados da 
    superclasse. O construtor da classe deve receber 
    por par�metro, al�m as informa��es da superclasse,
    a informa��o do departamento.  */

public:
    Gerente(string nome, float salario, string departamento);
    void setDepartamento(string departamento);
    string getDepartamento();
    string toString();
private:
    string departamento;
};

