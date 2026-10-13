/*
	Name: MergeSort.cpp
	Author: Alef Castro
	Date: 13/10/26 11:18
	Description: Implementação do método de ordenação Merge Sort
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Prototipação e Variaveis globais
void mergeSort(int *, int, int);//QUEBRA TUDO em uma unica udidade!
void merge(int *, int, int,int);//Mescla todos os sub vetores;

int main()
{
	//int vet[] = {23, 12, 17, -2, 20, 24, 157, 50, 81, 53};
	int vet[100000];
	int tam, i;
	tam = sizeof(vet)/sizeof(int);
	
	clock_t inicio, fim;
	double tempo_decorrido;
	
	srand(time(NULL));
	for(i=0;i<tam;i++)
	{
		vet[i] = rand()%1000;
	}
	
	puts("VETOR ORIGINAL");
	for(i = 0; i<tam; i++){
		printf("%d|", vet[i]);
	}
	
	inicio = clock();
	mergeSort(vet, 0, tam -1);
	fim = clock();
	
	puts("=============================================================");
	puts("\n\nVetor ordenado pelo MERGE");
	for(i = 0; i<tam; i++){
		printf("%d|", vet[i]);
	}
	tempo_decorrido = ((double)fim - inicio)/CLOCKS_PER_SEC;
	printf("\n\n===> TEMPO decorrido na ordenacao: %f", tempo_decorrido);
}//fim do programa

//FUNÇÕES

//função recursiva para quebrar todo o conjundo de dados em diversos vetores "lógicos" de um unico elemento
void mergeSort(int *V, int inicio, int fim)
{
	if(inicio < fim)
	{
		int meio = (inicio + fim)/2;
		mergeSort(V, inicio, meio); //divide o lado esquerdo!
		mergeSort(V, meio +1, fim); //divide o lado direito!
		merge(V, inicio, meio, fim);
	}
}//fim função

//Função para juntar os sub-vetores divididos por mergeSort()
void merge(int *V, int inicio, int meio, int fim)
{
	int i, j, k;
	int n1, n2; // tamnanho dos vetores temporarios
	n1 = meio - inicio +1;
	n2 = fim - meio;
	
	//cria os vetores auxiliares - temporários
	int esquerdo[n1]; 
	int direito[n2];
	
	//copia os dados para os vetores temporários | esquerda e direita
	for(i = 0; i < n1; i++){
		esquerdo[i] = V[inicio+i];
	}
	for(j = 0; j < n2; j++){
		direito[j] = V[meio + 1 + j];
	}
	
	//Mescla os vetores temporarios de volta para o vetor original (V)
	i = 0; // índice inicial do primeiro sub-array (esquerdo)
	j = 0; // índice inicial do segundo sub-array (direito)
	k = inicio; //índice inicial do sub-array mesclado
	
	while(i < n1 && j < n2){
		if(esquerdo[i] < direito[j]){
			V[k] = esquerdo[i];
			i++;
		}
		else{
			V[k] = direito[j];
			j++;
		}
		k++;
	}
	
	//copia os elementos restantes do vetor esquerdo[] SE houver
	while(i < n1){
		V[k] = esquerdo[i];
		i++;
		k++;
	}
	//copia os elementos restantes do vetor direito[] SE houver
		while(j < n2){
		V[k] = direito[j];
		j++;
		k++;
	}
	
}//fim função

