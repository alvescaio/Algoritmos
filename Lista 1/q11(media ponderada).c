/*
 * q11(media ponderada).c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Descrição: calcular média ponderada de aluno
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int codigo;
	float n1;
	float n2;
	float n3;
	float mediaP;
	
	printf("Digite o código do aluno: ");
	scanf("%i",&codigo);
	printf("Digite a 1ª nota: ");
	scanf("%f",&n1);
	printf("Digite a 2ª nota: ");
	scanf("%f",&n2);
	printf("Digite a 3ª nota: ");
	scanf("%f",&n3);
	
	if(n1 > n2 && n1 >= n3){
		mediaP = ((n1*4) + (n2*3) + (n3*3))/10;
	}else if(n2 > n1 && (n2 > n3 || n2 == n3)){
		mediaP = ((n1*3) + (n2*4) + (n3*3))/10;
	}else if(n3 > n1 && n3 >= n2){
		mediaP = ((n1*3) + (n2*3) + (n3*4))/10;
	}else{
		mediaP = ((n1*4) + (n2*3) + (n3*3))/10;
	}
	
	printf("Código do aluno: ");
	printf("%i\n",codigo);
	printf("Nota 1: ");
	printf("%f\n",n1);
	printf("Nota 2: ");
	printf("%f\n",n2);
	printf("Nota 3: ");
	printf("%f\n",n3);
	printf("Média ponderada: ");
	printf("%f\n",mediaP);
	
	if(mediaP >= 5){
		printf("Aluno APROVADO !");
	}else{
		printf("Aluno REPROVADO !");		
	}
	
	
	return 0;
}

