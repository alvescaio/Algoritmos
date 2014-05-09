/*
 * q12(par ou impar, positivo ou negativo).c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Descrição: informar se número é negativo ou positivo,
 * ímpar ou par.
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int num;
	
	printf("Digite um número inteiro: ");
	scanf("%i",&num);
	
	if(num%2 == 0){
		printf("%i",num);
		printf(" é um número par !\n");
	}else{
		printf("%i",num);
		printf(" é um número ímpar !\n");
	}
	
	if(num == 0){
		printf("%i",num);
		printf(" é um número neutro !");
	}else if(num > 0){
		printf("%i",num);
		printf(" é um número positivo !");
	}else{
		printf("%i",num);
		printf(" é um número negativo !");
	}
	return 0;
}

