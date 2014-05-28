/*
 * q8.8(ordem decrescente com ifs).c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Descrição: ler três números e colocá-los em ordem decrescente
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int n1;
	int n2;
	int n3;
	int tmp = 0;
	
	printf("1° número: ");
	scanf("%i",&n1);
	
	printf("2° número: ");
	scanf("%i",&n2);
	
	printf("3° número: ");
	scanf("%i",&n3);
	
	if(n2 > n1 && n1 > 3){
		printf("%i %i %i", n1, n2, n3);
	}
	
	return 0;
}


