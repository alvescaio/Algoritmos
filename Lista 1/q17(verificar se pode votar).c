/*
 * q17(verificar se pode votar).c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Descrição: ler o sexo e idade de uma pessoa e informar
 * se ela está apta a votar
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int sexo;
	int idade;
	
	printf("Digite o sexo - 1 para masculino e 2 para feminino: ");
	scanf("%i", &sexo);
	printf("Agora a idade: ");
	scanf("%i", &idade);
	
	if(sexo == 2 && idade < 18){
		printf("Não pode votar !");
	}else if(sexo == 2 && idade >= 18){
		printf("Pode votar !");
	}else if(sexo == 1 && idade >= 16){
		printf("Pode votar !");
	}else{
		printf("Não pode votar !");
	}
	
	return 0;
}

