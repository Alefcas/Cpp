/*
	Name: Limite.cpp
	Author: Alef Castro
	Date: 07/10/25 11:47
	Description: Programa que lê um limite superior e inferior
                e faz a contagem regressiva entre eles.
*/
#include <stdio.h>
#include <windows.h>

int main()
{
	int superior, inferior, cont;
	superior = inferior = 0;
    
	printf("Digite o limite superior: "); scanf("%d", &superior);
	printf("Digite o limite inferior: "); scanf("%d", &inferior);
	
	for(cont = superior; cont >= inferior;cont--)
	{
	
		printf("%d\n", cont);
 	Sleep(1000);//pausa de 1 segunda (1000 milisegundos)
 	}

    return 0;
}