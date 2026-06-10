/*
	Name: MascFem.cpp
	Author: Alef Castro
	Date: 02/09/25 11:44
	Description: Programa para identificar a resposta do usuário
				e mostar a mensagem, MASCULINO ou FEMININO
*/
#include <stdio.h>

int main()
{
	char sexo = ' ';
	puts("Digite M ou F:");
	 printf("Sexo: ");
	 scanf("%c", &sexo);
	 
	 	if(sexo == 'm'||sexo == 'M')
	 		puts("\nMasculino");
	 	else if(sexo == 'f'||sexo == 'F')
	 			puts("\nFeminino");
	 		else
	 			puts("Resposta invalida.\nPor favor, digitar somente M ou F.");
	 

    return 0;
}//FIM