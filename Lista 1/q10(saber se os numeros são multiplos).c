/*
 * q10(saber se os numeros são multiplos).c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Descrição: ler dois números e verificar se são múltiplos
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int n1;
	int n2;
	
	printf("1° Número: ");
	scanf("%i",&n1);
	printf("2° Número: ");
	scanf("%i",&n2);
	
	if(n1%n2 == 0 || n2%n1 == 0){
		printf("São múltiplos !");
	}else{
		printf("Não são múltiplos !");
	}
	
	return 0;
}

