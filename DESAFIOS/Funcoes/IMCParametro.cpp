/*
	Name: IMCParametro.cpp
	Author: Alef Castro
	Date: 23/05/26 20:45
	Description: Em um programa receba sexo, altura e peso de pessoas e passe para
				uma função calcular o IMC desta pessoa. O valor do apurado deve ser
				passado para uma outra função que classifique este IMC de acordo
				com a tabela internacional da OMS que difere os cálculos para homens
				e mulheres. Ao final o programa deve exibir:
				"Você é HOMEM, seu IMC é: xx.xxx e você está xxxxxx"
				"Você é MULHER, seu IMC é: xx.xxx e você está xxxxxx"
*/
#include <stdio.h>

//prototipação
void imc(float , float );
void genero(char, float);


main()
{
	char sexo;
	float altura = 0.0;
	float peso = 0.0;
	
	puts("Programa Que calcula o IMC");
	printf("Qual seu gênero? [M/F]: "); scanf(" %c", &sexo);
	printf("Qual sua altura: "); scanf("%f", &altura);
	printf("Qual seu peso: "); scanf("%f", &peso);
	imc(altura, peso);
	
}//fim do programa

void imc(float alt, float peso)
{
	float i = peso / (alt * alt);
	if (i < 16)
		puts("MAGREZA SEVERA!");
	else if(i )
	
	genero(sexo, i);
}

void genero(char s, float i)
{
	if (s == 'M' || s == 'm')
		printf("Voce eh Homem, seu IMC %2.f ", i);
}
