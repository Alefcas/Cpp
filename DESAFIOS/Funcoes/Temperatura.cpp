/*
	Name: Temperatura.cpp
	Author: Alef Castro
	Date: 25/05/26 16:30
	Description: Programa que por meio de uma função seja capaz de carregar um
	vetor com 20 temperaturas positivas e negativas distribuídas de forma aleatória.
	Após, em uma outra função que receba este vetor, imprima somente os valores que
	estiverem dentro do intervalo -5º a 22º, inclusive.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Prototipação
void carregarTemp();
void imprimirInter(float vet[], int);

int main()
{
    srand(time(NULL));
    carregarTemp();
}

//Função que carrega o vetor
void carregarTemp(){
	float vet[20];
	int i = 0;
	int TAM = sizeof(vet)/sizeof(float);
	
    for (int i = 0; i < TAM; i++) {
        vet[i] = (rand() % 51) - 10; // -10 até 50
    }
    
	puts("Todas as temperaturas:\n");
    for(int i = 0; i < TAM; i++) {
        printf("[%.1f]", vet[i]);
    }

    puts("\n");

    imprimirInter(vet, TAM);
}

void imprimirInter(float vet[], int tamanho){
    printf("Temperaturas no intervalo [-5, 22]:\n");
    int i = 0;

    for (int i = 0; i < tamanho; i++) {
        if (vet[i] >= -5 && vet[i] <= 22) {
            printf("[%.1f]", vet[i]);
        }
    }

    puts("\n");
}