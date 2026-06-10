/*
	Name: MediaAluno.cpp
	Author: Alef Castro
	Date: 02/09/25 11:14
	Description: Programa para calcular a média
				final do aluno e mostrar o resultado
				de APROVADO e REPROVADO.
*/
#include <stdio.h> // standard INPUT OUTPUT
main()
{ //Inicio

	//delcaração dos números
	float n1, n2, n3, n4, media;
	n1 = n2 = n3 = n4 = media = 0.0;
	
	puts("PROGRAMA PARA CALCULAR A MEDIA E MOSTRAR O RESULTADO."); //PutS é somente para str
	puts("_______________________________________________________________");
	//Formatação dos dados
	printf("Digite a primeira nota: "); scanf("%f", &n1);
	puts("_______________________________________________________________");
	printf("Digite a segunda nota: "); scanf("%f", &n2);
	puts("_______________________________________________________________");
	printf("Digite a terceira nota: "); scanf("%f", &n3);
	puts("_______________________________________________________________");
	printf("Digite a quarta nota: "); scanf("%f", &n4);
	puts("_______________________________________________________________");
	
	//caculo da média
	media = (n1 + n2+ n3+n4)/4;
	printf("Media obtida: %.2f - ", media);
	
	//Teste se foi aprovado ou reprovado.
		if(media >=6.0)
			puts("APROVADO!!!");
		else
			puts("REPROVADO!!!");
			

} //fim