/*
 * q4(calcular o custo de um carro).c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Descrição: calcular o custo de fábrica de um carro
 * e o custo que esse mesmo carro terá para o consumidor
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float custoFabrica;
	float custoDistribuidor;
	float custoImposto;
	
	printf("Custo de fábrica do carro: ");
	scanf("%f",&custoFabrica);
	
	custoImposto = custoFabrica + (custoFabrica * 0.45);
	
	custoDistribuidor = custoImposto + (custoImposto * 0.28);
	
	printf("Esse carro chegará ao consumidor com o valor de %f",custoDistribuidor);
	printf(" R$");
	
	return 0;
}

