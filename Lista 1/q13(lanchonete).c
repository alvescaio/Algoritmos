/*
 * q13(lanchonete).c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Descriçao: calcular valor a ser pago a uma lanchonete
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int codItem;
	int qtdItem;
	
	printf("Código do ítem: ");
	scanf("%i", &codItem);
	printf("Quantidade: ");
	scanf("%i", &qtdItem);
	
	printf("Quantidade | Produto | valorUnit. | ValorTotal\n");
	
	if(codItem == 100){
		printf("%i", qtdItem);
		printf(" | Cachorro quente | 1.10 | ");
		printf("%f",1.10*qtdItem);		
	}else if(codItem == 101){
		printf("%i", qtdItem);
		printf(" | Bauru simples | 1.30 | ");
		printf("%f",1.30*qtdItem);		
	}else if(codItem == 102){
		printf("%i", qtdItem);
		printf(" | Bauru de casa | 1.50 | ");
		printf("%f",1.50*qtdItem);		
	}else if(codItem == 103){
		printf("%i", qtdItem);
		printf(" | Hambúrguer | 1.10 | ");
		printf("%f",1.10*qtdItem);		
	}else if(codItem == 104){
		printf("%i", qtdItem);
		printf(" | Cheeseburguer | 1.30 | ");
		printf("%f",1.30*qtdItem);		
	}else if(codItem == 105){
		printf("%i", qtdItem);
		printf(" | Refrigerante | 1.00 | ");
		printf("%f",1.00*qtdItem);		
	}else{
		printf("Produto não encontrado !");
	}
	
	return 0;
}

