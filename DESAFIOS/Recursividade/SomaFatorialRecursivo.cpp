/*
	Name: SomaFatorialRecursivo.cpp
	Author: Alef Castro
	Date: 14/06/26 18:13
	Description: Programa que faça uma função recursiva que calcula a 
				soma do valor N (1 + 2 +...+N) e calcula o fatorial do N
				(N!).
*/
#include <stdio.h>
int somar(int);
int fatorial(int);

int main()
{
	int N = 0;
	printf("Qual o valor de N: "); scanf("%d", &N);
	printf("A soma de N: %d", somar(N)); 
	printf("\nO fatorial de N: %d", fatorial(N));
	
}//fim do programa

int  somar(int num)
{
	if (num == 0){
		return 0;
		fatorial(num);
	}
	return num + somar(num-1);
}//fim da recursivdade

int fatorial (int num)
{
	if (num == 0){
		return 1;
	}
	return num * fatorial(num-1);
}//fim fatorial