/*
	Name:AlturaMedia.cpp
	Author: Alef Castro
	Date: 02/09/25 12:01
	Description: Programa que calcula a altura da pessoa
				e diga se a estatura dela é baixa, media 
				ou alta.
				
*/
#include <stdio.h>
int main()
{
	float altura = 0.0;
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
		if (altura <= 1.55)
			puts("Sua estatura eh Baixa");
		else if(altura >1.80) 
			puts("Voce eh Alto");
			else
				puts("Estatura mediana");
	return 0;	
}