#pragma once
#include "Empregado.h"
class Vendedor :
    public Empregado
{
    /*
    * A classe Vendedor deve herdar também da classe Empregado. 
    Deve possuir ainda um método denominado calcularSalario. 
    Esse método deve retornar um valor do tipo float, correspondente
    ao valor do salário acrescido do respectivo percentual de 
    comissão. 
    O construtor da classe deve receber por parâmetro, além das 
    informações da superclasse, a informação do percentual de 
    comissão do vendedor. 
    O método toString da classe deve apresentar as informações de 
    nome do empregado, salário sem comissão, salario com comissão 
    e percentual de comissão.  
    */

public:
    Vendedor(string nome, float salario, float percentualComissao);
    void setPercentualComissao(float percentualComissao);
    float getPercentualComissao();
    float calculaSalario();
    string toString();

private:
    float percentualComissao;
};

