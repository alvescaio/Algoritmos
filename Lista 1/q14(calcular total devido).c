/*
 * q14(calcular total devido).c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Descrição: calcular preço total devido a um cliente
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int codItem;
	int qtdItem;
	
	printf("Código do produto: ");
	scanf("%i", &codItem);
	printf("Quantidade comprada: ");
	scanf("%i", &qtdItem);
	
	if(codItem == 100){
		printf("Total a ser pago: ");
		printf("%f",1.10*qtdItem);		
	}else if(codItem == 101){
		printf("Total a ser pago: ");
		printf("%f",1.30*qtdItem);		
	}else if(codItem == 102){
		printf("Total a ser pago: ");
		printf("%f",1.50*qtdItem);		
	}else if(codItem == 103){
		printf("Total a ser pago: ");
		printf("%f",1.10*qtdItem);		
	}else if(codItem == 104){
		printf("Total a ser pago: ");
		printf("%f",1.30*qtdItem);		
	}else if(codItem == 105){
		printf("Total a ser pago: ");
		printf("%f",1.00*qtdItem);		
	}else{
		printf("Produto não encontrado !");
	}
	
	return 0;
}

