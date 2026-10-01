/*
	Name: Insertion_Sort.cpp
	Author: Alef Castro
	Date: 29/09/26 11:03
	Description: Implementação do método de ordenação Insertion Sort
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
//Prototipação
void insertionSort(int *, int);
int trocas, comp;
 
 
int main ()
{
	//int vet[] = {23, 12, 17, -2, 20, 24, 157, 50, 81, 53};
	int vet[50000];
	int tam, i;
	clock_t inicio, fim;
	double tempo_decorrido;
	tam = sizeof(vet)/sizeof(int);
	trocas = comp = 0;
	//GERAÇÃO RANDOMICA DE 50.000 ELEMENTOS
	srand(time(NULL));
	for(i=0;i<tam;i++)
	{
		vet[i] = rand()%10000000;
	}
	puts("== VETOR ORIGINAL ==");
	for(i=0; i < tam; i++)
	{
		printf("%d|", vet[i]);
	}
	inicio = clock(); // captura o unicio
	insertionSort(vet, tam);
	fim = clock(); // captura o final
	puts("\n\n== VETOR ORDENADO ==");
	for(i=0; i < tam; i++)
	{
		printf("%d|", vet[i]);
	}
	printf("\n\nQtde de trocas: %d", trocas);
	printf("\nQtde de comparações: %d", comp);
	tempo_decorrido = ((double)fim - inicio)/CLOCKS_PER_SEC;
	printf("\n\n===> TEMPO decorrido na ordenação: %f", tempo_decorrido);
}//fim do programa
 
//Funções
void insertionSort(int *V, int T)
{
	int i,j, chave;
	for(i = 1; i < T; i++)
	{
		chave = V[i];
		j = i - 1;
		while(j >= 0 && chave < V[j])
		{
			V[j+1] = V[j];
			j--;
			trocas++;
			comp++;
		}
		V[j+1] = chave;
		trocas++;
	}

}//fim função
