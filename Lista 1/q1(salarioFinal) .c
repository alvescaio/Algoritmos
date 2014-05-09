/*
 * helloword.c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Descrição: Calcular o salário final de um trabalhador 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	char nome[50];
	float sal;
	float vendas;
	float salfinal;
	
	printf("Digite seu nome: ");
	scanf("%s",nome);
	printf("Digite seu salário fixo: ");
	scanf("%f",&sal);
	printf("Digite o valor das vendas: ");
	scanf("%f",&vendas);
	
	salfinal = sal + (vendas*0.15);
	
	printf("\n");
	printf("Funcionário: %s",nome);
	printf("\n");
	printf("Salário fixo: %f",sal);
	printf("\n");
	printf("Salário final: %f",salfinal);	
	return 0;
}

