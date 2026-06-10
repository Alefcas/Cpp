/*
	Name: Tabuada.cpp
	Author: Alef Castro
	Date: 07/10/25 10:30
	Description: Programa que receba um número e exiba a tabuada
*/
#include <stdio.h>

int main()
{
	int num, i;
	num = i = 0;
	
	printf("Digite um numero: "); scanf("%d", &num);
	
	for(i = 0; i <= 10; i++)
		printf("%d x %d = %d\n",num, i, num*i);
	
    return 0;
}//fim do programa