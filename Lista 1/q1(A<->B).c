/*
 * q1(A<->B).c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Função: ler dois valores (A e B) e passar o valor
 * de A para B e de B para A. 
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int n1;
	int n2;
	int n3;
	
	printf("A: ");
	scanf("%d", &n1);
	printf("A: ");
	scanf("%d", &n2);
	
	n3 = n1;
	n1 = n2;
	n2 = n3;
	
	printf("A = %d\nd",n1);
	printf("B = %d",n2); 
	
	
	return 0;
}

