/*
	Name: Loop.cpp
	Author: Alef Castro
	Date: 09/09/25 11:34
	Description: Programa para demonstrar a ultilização das estruturas 
				De repetição. (do while)
*/
#include <stdio.h>
int main()
{//Inicio
	int cont, num, soma;
	float media;
	num = soma = 0;
	cont = 0;
	media = 0.0;
	
	puts("Programa para calcular a media!");
	
	do
	{
		printf("Digite o %do numero: \n", cont + 1);
		
		scanf("%d", &num);
		
		soma = soma + num;	
		cont++;
	}while(cont < 5);//faça enquanto

	media = (float)soma/cont;
	printf("A media e: %.2f", media);
	
    return 0;
}//Fim
