/*
	Name: MatrizVetorTranfer.cpp
	Author: Alef Castro
	Date: 22/05/26 14:30
	Description: Programa que faça a carga em uma matriz com a quantidade de linhas e
	colunas definida pelo usuário. A carga deve ser feita por meio de uma função. Após
	a carga, os elementos da matriz deverá ser passado para um vetor, em uma nova
	função. Ao final, tanto o vetor quanto a matriz devem sem impressos cada um por
	uma função.	
*/
#include <stdio.h>

//prototipação
void carregarMat();
void imprimirMat(int mat[][100], int, int );
void carregarVet(int mat[][100], int, int);
void imprimirVet(int *, int);

main()
{
	carregarMat();
}//fim do programa

void carregarMat()
{
	int lin = 0; int col = 0;
	puts("\nCarregar Uma Matriz");
	
	//Pede coluna e linha ao usuario
	printf("Digite o valor da coluna: ");scanf("%d", &col);
	printf("Digite o valor da linha: ");scanf("%d", &lin);	
	
	int mat[100][100];
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			printf("Digite o conteudo: ");
			scanf("%d", &mat[i][j]);	
		}//fim col
	}//fim lin
	
	imprimirMat(mat, lin, col);
}//fim função Carregar Matriz

void imprimirMat(int mat[][100], int l, int c)
{
	puts("\nImprimindo matriz...");
	for(int i = 0; i < l; i++){
		for(int j = 0; j < c; j++){
			printf("{%d}",mat[i][j]);
		}
		puts("\n");
	}
	carregarVet(mat, l, c);
}//fim Função Imprimir Matriz

void carregarVet(int mat[][100], int lin, int col)
{
	int k = 0;
	int vet[100];
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			vet[k] = mat[i][j];
			k++;
		}
	}
	imprimirVet(vet, k);
}//fim função Carregar Vetor

void imprimirVet(int *V, int k)
{
	for(int i = 0; i < k; i++)
		printf("[%d]", V[i]);
}//fim função Imprimirt Vetor
