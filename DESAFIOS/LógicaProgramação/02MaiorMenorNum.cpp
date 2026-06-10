/*
	Name: MaiorMenorNum.cpp
	Author: Alef Castro
	Date: 07/10/25 10:49
	Description: Programa que lê 10 números e informa o maior e o menor entre eles.
*/
#include <stdio.h>

int main()
{
	int num, maior, menor, cont;
	num = maior = menor = cont = 0;

	printf("Digite um numero: "); scanf("%d", &num);
	maior = num; menor = num;
	
	while (cont < 9)
	{
		printf("Digite um numero: "); scanf("%d", &num);
		cont++;
		
		if (num > maior)
			maior = num;
		if (num < menor)
			menor = num;
			
	}//fim do while
	
	printf("O maior eh %d\nO menor eh %d", maior, menor);

    return 0;
}//fim do programa