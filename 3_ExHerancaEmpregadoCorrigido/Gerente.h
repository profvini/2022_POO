#pragma once
#include "Empregado.h"
class Gerente :
    public Empregado
{
    /*
    A classe Gerente deve herdar da classe Empregado. 
    Crie os métodos get e set para a classe e o 
    método toString. 
    O método toString da classe Gerente deve incluir a
    informação do departamento, além dos dados da 
    superclasse. O construtor da classe deve receber 
    por parâmetro, além as informações da superclasse,
    a informação do departamento.  */

public:
    Gerente(string nome, float salario, string departamento);
    void setDepartamento(string departamento);
    string getDepartamento();
    string toString();
private:
    string departamento;
};

