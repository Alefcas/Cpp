/*
	Name: ImparPar.cpp
	Author: Alef Castro
	Date: 07/10/25 11:23
	Description: Programa que distingue Par ou impar entre 5 números
				Se Par = soma com 2| Se Impar = divide por 3
*/
#include <stdio.h>

int main()
{
	int cont, num;
	cont = num = 0;
	
	do 
	{
		printf("Digite um numero: "); scanf("%d", &num);
		if(num % 2 == 0)
			printf("O numero %d e par e somando com 2 fica %d\n", num, num + 2);
		else
			printf("O numero %d e impar e dividindo por 3 fica %.2f\n", num, (float)num /3);
			
		cont++;
	}while(cont < 5);
	
    return 0;
}//fim do programa
