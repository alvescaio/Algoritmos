/*
 * q3(calcular juros de valor).c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Descrição: calcular valor com rendimento 
 * de 0.70% de juros
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float valorInicial;
	float valorFinal;
	
	printf("Digite o valor: ");
	scanf("%f", &valorInicial);
	
	valorFinal = valorInicial + (valorInicial * 0.07);
	
	printf("Daqui a um mês, esse valor aumentará para: %f",valorFinal);
	printf(" R$");
	return 0;
}

