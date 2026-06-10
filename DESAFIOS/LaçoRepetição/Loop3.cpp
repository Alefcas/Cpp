/*
	Name: Loop3.cpp 
	Author: Alef Castro
	Date: 09/09/25 12:17
	Description: Programa para demonstrar a ultilização das estruturas 
				De repetição. (for)
*/
#include <stdio.h>

int main()

{//Inicio

	int cont, num, soma;
	float media;
	num = soma = 0;//não precisa do cont pois inicializa depois
	media = 0.0;
	
	puts("Programa para calcular a media!");
	 for(cont = 0; cont < 10; cont++)
	{
		printf("%do Numero: ", cont+1);
		scanf("%d", &num);
		soma = soma + num;
		
	}
	 
	media = (float)soma/cont;
	printf("A media e: %.2f", media);
	
    return 0;

}//Fim

