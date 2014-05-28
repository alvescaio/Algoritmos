/*
 * q05-prova.c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int n1,a,b,c;
	
	printf("Número: ");
	scanf("%i",&n1);
	
	a = n1/100;
	b = (n1-(a*100))/10;
	c = n1 - ((b*10)+(a*100));
	
	printf("%i %i %i",c,b,a);
	
/*	
	for(a = 0; a <= 9; a++){
		for(b = 0; b <= 9; b++){
			for(c = 0; c <= 9; c++){
				if(n1 == ((a*100)+(b*10)+c)){
					printf("%i - ",c);
					printf("%i - ",b);
					printf("%i",a);
					return 0;
				}
			}
		}
	}
*/	
	return 0;
}

