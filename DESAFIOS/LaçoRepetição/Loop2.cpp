/*
	Name: Loop.cpp
	Author: Alef Castro
	Date: 09/09/25 12:06
	Description: Programa para demonstrar a ultilização das estruturas 
				De repetição. (while)
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
	
	while(cont < 5)
	{
		printf("%do numero: \n", cont + 1);
		scanf("%d", &num);
		soma = soma + num;
		cont++;
	}
	

	media = (float)soma/cont;
	printf("A media e: %.2f", media);
	
    return 0;
}//Fim