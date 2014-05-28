/*
 * Lista2.c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * Descrição: questões da lista 2
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>

void q1(){
	int i;
	int number;
	int menor;
	int maior;
	
	printf("1° número: ");
	scanf("%i",&number);
	
	maior = number;
	menor = number;
	
	for(i=2;i<=15;i++){
		printf("%i° número: ",i);
		scanf("%i",&number);
		
		if(number > maior){
			maior = number;
		}
		
		if(number < menor){
			menor = number;
		}
	}
	printf("O maior número é o %i, o menor é %i",maior,menor);	 
}

void q2(){
	int i;
	int j;
	int result;
	
	for(i=0;i<=10;i++){
		for(j=0;j<=10;j++){
			result = i*j;
			printf("%i x %i = %i\n",i,j,result);
		}
		printf("\n\n");
	}
}

void q3(){
	float preco = 0.06;
	int i = 1;
	float valor;
	
	printf("Valor da XEROX: R$ %f\n",preco);
	
		
		while(i<=200){
			valor = i*preco;
			printf("(%i - R$ %f ) ",i,valor);
			if(i%10==0){
				printf("\n");
			}
			i++;
		}	
}

void q4(){
	float i = 1;
	float j = 1;
	float soma = 0;
	float divisao;
	
	
	for(i=1,j=1;i<=99 && j<=50;i=i+2,j++){
		
		divisao = i/j;
		printf("%f / %f = %f\n",i,j,divisao);
		
		soma = soma + (i/j);
	}
	
	printf("Soma = %f",soma);
}

void q5(){
	int i = 1;
	float produto;
	float number = 1;
	
	printf("---- 0 (zero) para parar ----\n");
	
	printf("%i° número: ",i);
	scanf("%f",&produto);
	i++;
	
	while(number != 0){
		printf("%i° número: ",i);
		scanf("%f",&number);
		i++;
		
		if(number != 0){
			produto = produto * number;
		}
	}
	
	printf("O produto dos números digitados é: %f",produto);
	
}

void q6(){
	int number;
	int soma = 0;
	int i;
	
	printf("Número: ");
	scanf("%i",&number);
	
	for(i=1;i<number;i++){
		if(number%i==0){
			soma = soma + i;
		}
	}
	
	if(number == soma){
		printf("%i é um número perfeito !",number);
	}else{
		printf("%i não é um número perfeito !",number);
	}
}

void q7(){
	int i;
	
	for(i=1000;i<2000;i++){
		if(i%11==5){
			printf("%i\n",i);
		}
	}
}

void q8(){
	int hora;
	int minuto;
	int segundo;
	float massa;
	int cont = 0;	

	printf("Massa do elemento: (em gramas) ");
	scanf("%f",&massa);

	for(hora=0;hora<=24;hora++){
		for(minuto=0;minuto<=60;minuto++){
			for(segundo=0;segundo<=60;segundo++){								
				if(cont == 50){
					massa = massa/2;
					cont = 0;
				}else{
					cont++;
				}
				if(massa < 0.5){
					printf("O material atingirá a massa menor que 0.5g em %i horas, %i minutos e %i segundos !",hora,minuto,segundo);
					break;
				}
			}
			if(massa < 0.5){
					break;
			}
		}
		if(massa < 0.5){
					break;
		}
	}
}

void q9(){
	int i;
	double a = 1;
	double b = 0;
	int n;
	double sqc;
	
	printf("N° de termos: ");
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		sqc = a+b;
		a = b;
		b = sqc;
		printf("(%f) ",sqc);
	}
	
}

void q10(){
	int menordata;
	int maiordata;
	int cont;
	int dias = 0;
	
	printf("Menor ano: ");
	scanf("%i",&menordata);
	printf("Maior ano: ");
	scanf("%i",&maiordata);
	
	for(cont = menordata; cont<maiordata ;cont++){
		if(cont%4==0 && (cont%400 == 0 || cont%100!=0)){
			dias = dias + 366;
			printf("%i - ",cont);
		}else{
			dias = dias + 365;
		}
	}
	
	printf("Entre os anos %i e %i, somam-se %i dias",menordata,maiordata,dias);
}

void q11(){
	int number;
	int cont = 1;
	int somaPar = 0;
	int somaImpar = 0;
	
	while(number != 1000){
		printf("%i° Número: ",cont);
		scanf("%i",&number);
		
		if(number%2==0){
			somaPar = somaPar + number;
		}else{
			somaImpar = somaImpar + number;
		}
		cont++;
	}
	
	printf("A soma dos ímpares é: %i\n",somaImpar);
	printf("A soma dos pares é: %i",somaPar);
}

void q12(){
	int conj;
	int n1, n2, n3;
	int cont = 1;
	int soma, produto;
	float media;
	
	
	while(cont > 0){	
		printf("%i° conjunto: ",cont);
		scanf("%i",&conj);
		
		n1 = conj/100;
		n2 = (conj - (n1*100))/10;
		n3 = conj - (n1*100) - (n2*10);
		
		if(n1 > n2 || n2>n3){
			break;
		}else{
			
			soma = n1 + n2 + n3;
			produto = n1*n2*n3;
			media = soma/3;
			cont++;
		}
		
		printf("Soma = %i  -  Produto = %i  -  Média = %f\n\n",soma,produto,media);
	}	
	
	
		
	
}

void q13(){
	int i = 1;
	float maior = 0;
	float menor = 0;
	float somaMedia, mediaTurma;
	float mediaAluno;
	
	printf("%iª nota: ",i);
	scanf("%f",&mediaAluno);
	
	if(mediaAluno < 0){
		printf("Não achamos nem uma média !");
	}else{
		maior = mediaAluno;
		menor = mediaAluno;
		somaMedia = mediaAluno;
		
		while(mediaAluno >= 0){
			i++;
			printf("%iª nota: ",i);
			scanf("%f",&mediaAluno);
			
			if(mediaAluno < 0){
				i--;
				break;
			}else{
				if(mediaAluno > maior){
					maior = mediaAluno;
				}
				if(mediaAluno < menor){
					menor = mediaAluno;
				}
				somaMedia = somaMedia + mediaAluno;		
			}
			
		}		
	}
	
	mediaTurma = somaMedia/i;
	
	printf("Maior média: %f\n",maior);
	printf("Menor média: %f\n",menor);
	printf("Média da turma: %f\n",mediaTurma);
	
}

void q14(){
	int n;
	int i;
	
	printf("N: ");
	scanf("%i",&n);
	
	printf("\n%i primeiros pares: ",n); 
	for(i=1;i<=(n*2);i++){
		if(i%2==0){
			printf("(%i) ",i);
		}
	}
	
	i=1;
	printf("\n%i primeiros ímpares: ",n); 
	for(i=1;i<=(n*2);i++){
		if(i%2!=0){
			printf("(%i) ",i);
		}
	}
	
}

void q15(){
	int n;
	int i;
	int primo = 0;//0 = false
	
	printf("N: ");
	scanf("%i",&n);
	
	for(i=2;i<n;i++){
		if(n%i==0){
			primo = 1;//1 = true
		}
	}
	
	if(primo == 1  || n == 1){
		printf("%i não é um número primo !",n);
	}else{
		printf("%i é um número primo !",n);
	}
	
}

void q16(){
	int i=1;
	int j;
	int primo = 1;//true
	int cont = 0;
	int n;
		
	printf("N: ");
	scanf("%i",&n);	
	
	printf("%i primeiros números primos: ",n);
	
	while(cont < n){
		
		i++;
		j = 2;
		while(j<i){
			if(i%j==0){
				primo = 0; // false
			}
			j++;
		}
		
		if(primo == 0){
			primo = 1;			
		}else{
			printf("(%i) ",i);
			cont++;
		}
	}
}

int main(int argc, char **argv)
{
	//q1();
	//q2();
	//q3();
	//q4();
	//q5();
	//q6();
	//q7();
	//q8();
	//q9();
	//q10();
	//q11();
	//q12();
	//q13();
	//q14();
	//q15();
	//q16();
	
	return 0;
}

