/*
 * q7(informar se os numero sao iguais).c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Descrição: ler dois números e informar se são iguais
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int n1;
	int n2;
	
	printf("1° número: ");
	scanf("%i",&n1);
	printf("2° número: ");
	scanf("%i",&n2);
	
	if(n1 == n2){
		printf("São iguais !");
	}else if(n1 < n2){
		printf("O 2° número (%i", n2);
		printf(") é maior que o 1° (%i",n1);
		printf(")");
	}else{
		printf("O 1° número (%i", n1);
		printf(") é maior que o 2° (%i",n2);
		printf(")");
	}
	
	return 0;
}

