/*
 * q5(consumo médio de combustivel).c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Descrição: calcular consumo médio de um automóvel
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float distanciaPercorrida;
	float combustivelGasto;
	float consumoMedio;
	
	printf("Digite a distância percorrida: ");
	scanf("%f",&distanciaPercorrida);
	printf("Digite o total de combustível gasto: ");
	scanf("%f",&combustivelGasto);
	
	consumoMedio = combustivelGasto / distanciaPercorrida;
	
	printf("Seu automóvel consome uma média de %f",consumoMedio);
	printf(" Litros por quilômetro");
	
	printf("\n");
	printf("Ou seja, seu automóvel percorre %f",(distanciaPercorrida/combustivelGasto));
	printf(" Km com 1L de combustível");
	
	return 0;
}

