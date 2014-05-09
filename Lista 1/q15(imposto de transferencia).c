/*
 * q15(imposto de transferencia).c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Descrição: calcular preço do imposto da transferência de carro
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int ano;
	float preco;
	float valorImposto;
	
	printf("Digite o preço do carro: ");
	scanf("%f", &preco);
	printf("Digite o ano de fabricação: ");
	scanf("%i", &ano);
	
	if(ano < 1990){
		valorImposto = preco*0.01;
	}
	/* 	A questão pede 1.5% para carros com o ano maior ou igual a 1900,
	 *  mas vou considerar que seja para anos maiores ou iguais a 1990. 
	 */
	else{
		valorImposto = preco*0.015;
	}
	
	printf("O valor do imposto a ser pago é de: %f", valorImposto);
	printf(" R$");
	return 0;
}

