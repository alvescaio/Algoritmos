/*
 * q16(verificar se tres num. formam um triangulo).c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Descrição: ler três números e informar se forma um triangulo
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int l1;
	int l2;
	int l3;
	
	printf("1° número: ");
	scanf("%i", &l1);
	printf("2° número: ");
	scanf("%i", &l2);
	printf("3° número: ");
	scanf("%i", &l3);	
	
	if((l1+l2 <= l3) || (l1+l3 <= l2) || (l2+l3 <= l1)){
		printf("Esses valores não correspondem aos lados de um triângulo !");
	}else{
		if(l1 == l2 && l1 == l3){
			printf("Esses valores correspondem aos lados de um triângulo equilátero !");
		}else if((l1 != l2) && (l1 != l3) && (l2 != l3)){
			printf("Esses valores correspondem aos lados de um triângulo escaleno !");
		}else{
			printf("Esses valores correspondem aos lados de um triângulo isóceles !");
		}
	}
	
	return 0;
}

