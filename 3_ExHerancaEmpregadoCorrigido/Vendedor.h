#pragma once
#include "Empregado.h"
class Vendedor :
    public Empregado
{
    /*
    * A classe Vendedor deve herdar tamb�m da classe Empregado. 
    Deve possuir ainda um m�todo denominado calcularSalario. 
    Esse m�todo deve retornar um valor do tipo float, correspondente
    ao valor do sal�rio acrescido do respectivo percentual de 
    comiss�o. 
    O construtor da classe deve receber por par�metro, al�m das 
    informa��es da superclasse, a informa��o do percentual de 
    comiss�o do vendedor. 
    O m�todo toString da classe deve apresentar as informa��es de 
    nome do empregado, sal�rio sem comiss�o, salario com comiss�o 
    e percentual de comiss�o.  
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

