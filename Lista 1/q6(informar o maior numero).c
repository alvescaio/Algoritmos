/*
 * q6(informar o maior numero).c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 *Descrição: ler dois números e informar qual é o maior
 * 
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
	
	if(n1 > n2){
		printf("O 1° número é o maior !");
	}else if(n1 < n2){
		printf("O 2° número é o maior !");
	}else{
		printf("São iguais !");
	}
	
	return 0;
}

