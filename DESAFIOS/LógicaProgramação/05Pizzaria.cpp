/*
	Name: MenuPizzaria.cpp
	Author: Alef Castro
	Date: 23/09/25 11:45
	Description: Programa aonde o Cliente faz a esolha de sua pizza
				e mostra a pizza sendo feita.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{      
	int opc;
	//int result;
	
	while(1)
	{
		system("cls");//limpa a tela "clean screen"
		puts("PizzaHot");
		puts("===============================");
		puts("1 - Calabresa\n2 - Portuguesa\n3 - Palmito\n4 - Brocolis\n5 - frango\n6 - Lombo\n7 - Brigadeiro\n8 - Prestigio\n9 - Finalizar Pedido.");
		puts("===============================");
		printf("Escolha o sabor: ");
		scanf("%d", &opc);
	
	switch(opc)
	{
		case 1: puts("Calabresa");
				printf("Sua pizza de Calabresa esta sendo preparado...\n");
				break;
		
		case 2: puts("Portuguesa");
				printf("Sua pizza de Portuguesa esta sendo preparado...\n");
				break;
				
		case 3: puts("Palmito");
				printf("Sua pizza de Palmito esta sendo preparado...\n");
				break;
				
		case 4: puts("Brocolis");
				printf("Sua pizza de Brócolis esta sendo preparado...\n\n");
				break;
		
		case 5: puts("frango");
				printf("Sua pizza de frango esta sendo preparado...\n\n");
				break;
		
		case 6: puts("Lombo");
				printf("Sua pizza de Lombo esta sendo preparado...\n\n");
				break;
				
		case 7: puts("Brigadeiro");
				printf("Sua pizza de Brigadeiro esta sendo preparado...\n\n");
				break;
				
		case 8: puts("Prestigio");
				printf("Sua pizza de Prestigio esta sendo preparado...\n\n");
				break;
		
		case 9: puts("Finalizar o programa!");
		exit(0);
		
		default: puts("Ecolha somente as opcoes acima!!!");

			
		}//fim do switch
	
	system("pause");
	
	}//fim da repetição
	
    return 0;
}//fim do programa