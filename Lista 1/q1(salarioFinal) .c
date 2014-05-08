/*
 * helloword.c
 * 
 * Copyright 2014 Caio Alves <caioalves@caio-pc>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	char nome[50];
	float sal;
	float vendas;
	float salfinal;
	
	printf("Digite seu nome: ");
	scanf("%s",nome);
	printf("Digite seu salário fixo: ");
	scanf("%f",&sal);
	printf("Digite o valor das vendas: ");
	scanf("%f",&vendas);
	
	salfinal = sal + (vendas*0.15);
	
	printf("\n");
	printf("Funcionário: %s",nome);
	printf("\n");
	printf("Salário fixo: %f",sal);
	printf("\n");
	printf("Salário final: %f",salfinal);	
	return 0;
}

