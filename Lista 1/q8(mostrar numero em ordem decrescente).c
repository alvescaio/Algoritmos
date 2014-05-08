/*
 * q8(mostrar numero em ordem decrescente).c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Descrição: ler três números e mostra-los em ordem decrescente
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	int numero;
	int primeiro = 0;
	int segundo = 0;
	int terceiro = 0;
	
	for(i = 0; i<3; i++){
		printf("Digite o %i",i+1); 
		printf("° número: ");
		scanf("%i",&numero);
		
		if(numero > primeiro){
			terceiro = segundo;
			segundo = primeiro;
			primeiro = numero;
		}else if(numero > segundo){
			terceiro = segundo;
			segundo = numero;
		}else{
			terceiro = numero;
		}
	}	
	
	printf("%i",primeiro);
	printf(" - %i",segundo);
	printf(" - %i",terceiro);
		
	return 0;
}

