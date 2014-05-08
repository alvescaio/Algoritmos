/*
 * q9(media aritmetica).c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Descrição: Fazer a média aritmética das notas e indicar 
 * a situação do aluno
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float n1;
	float n2;
	float n3;
	float media;
	
	printf("1° nota: ");
	scanf("%f",&n1);
	printf("2° nota: ");
	scanf("%f",&n2);
	printf("3° nota: ");
	scanf("%f",&n3);
	
	media = (n1+n2+n3)/3;
	
	if(media >= 7){
		printf("Aprovado !");
	}else if(media < 7 && media >= 4){
		printf("Prova final !");
	}else{
		printf("Reprovado !");
	}
	
	return 0;
}

