/*
	Name: MultiplaEscolha.cpp
	Author: Alef Castro
	Date: 23/09/25 09:57
	Description: Programa para demonstrar a estrutura 
				switch...case para multiplas escolhas
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int opc;
	int num1, num2;
	float result;
	int flag; //variavel boleana 0||1
	
   while(1)
  {
  	flag = 1;
	system("cls");//limpa a tela "clean screen"
	puts("Menu de opcoes");
	puts("===============================");
	puts("1 - Somar dois numeros\n2 - Realizar Subtracao\n3 - Multiplicacao\n4 - Fazer Divisao\n5 - finalizar o programa");
	puts("===============================");
	printf("Escolha sua opcao: ");
	scanf("%d", &opc);
	
	switch(opc)
	{
		case 1: puts("Adicao"); printf("Digite um numero: "); scanf("%d", &num1);
				printf("Digite o segundo numero: "); scanf("%d", &num2);
				result = num1 + num2;
				break;
		
		case 2: puts("Sub"); printf("Digite um numero: "); scanf("%d", &num1);
				printf("Digite o segundo numero: "); scanf("%d", &num2);
				result = num1 - num2;
				break;
				
		case 3: puts("multiplicacao"); printf("Digite um numero: "); scanf("%d", &num1);
				printf("Digite o segundo numero: "); scanf("%d", &num2);
				result = num1 * num2;
				break;
		
		case 4: puts("Dvisao"); printf("Digite um numero: "); scanf("%d", &num1);
				printf("Digite o segundo numero: "); scanf("%d", &num2);
				result = (float)num1 / num2;
				flag = 0;
				break;
		
		case 5: exit(0);
		
		default: puts("Opcao invalida!!!\n\n");
				flag = 2;
		
	}//fim do Switch
	
	if (flag == 0)
		printf("O resultado da operacao e: %.2f\n\n", result);
	else if (flag == 1 )
		printf("O resultado da operacao e: %.f\n\n", result);
		
	system("pause");
  }//fim do while
  
  return 0;
}//fim do programa