/*
	Name: SelectionSort.cpp
	Author: Alef Castro
	Date: 22/09/26 10:37
	Description: Implementação do método de ordenação Selection Sort
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//prototipação
void selectionSort(int *, int);

//Variáveis Globais
int trocas, comp;

//Programa Principaç
int main()
{
	//int vet[] = {23, 12, 17, -2, 20, 24, 157, 50, 81, 53};
	int vet[10];
	int tam, i;
	tam = sizeof(vet)/sizeof(int);
	trocas = 0; comp = 0;
	
	srand(time(NULL));
	//Geração Randômica de conteúdo do vetor
	for(i = 0; i < tam; i++)
	{
		vet[i] = rand()%10000;
	}
	
	puts("Vetor Original:");
	for(i=0; i < tam; i++)
	{
		printf("%d|", vet[i]);
	}
	
	selectionSort(vet,tam);
	
	puts("\n\nVetor Ordenado pelo Selection Sort:");
	for(i=0; i < tam; i++)
	{
		printf("%d|", vet[i]);
	}
	
		printf("\nQtde de trocas: %d", trocas);
		printf("\nQtde de comparações: %d", comp);
	
}//fim do programa

//Função para ordenação com o método Selection Sort

void selectionSort(int *V,int T)
{
	int i, j; // indices para controlar os laços
	int menor; //Guarda o indice do MENOR valor do subconjunto
	int chave, aux; // Chave = gaurda o elemento selecionado
	
	//Laço externo que itera do início ao fim do vetor
	for(i = 0; i < T-1; i++)
	{
		//Assume que o menor elemento está na primeira posição!
		chave = i;
		menor = i + 1;
		
		//Laço interno para buscar o menor elemento dentro do subconjunto
		for(j = i + 1; j < T; j++)
		{
			if(V[j] < V[menor])
			{
				menor = j; // guarda o indice do menor elemento do subconjunto
			}
			comp++;
		}//fim do laço interno
		
		//Troca o menor elemento do subconjunto pelo elemento destacado na chave
		if(V[menor] < V[chave])
		{
			aux = V[chave];
			V[chave] = V[menor];
			V[menor] = aux;
			trocas++;
		}
		comp++;
	}//fim laço externo

}//fim da função
