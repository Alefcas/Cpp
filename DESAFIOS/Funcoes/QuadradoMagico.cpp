/*
	Name:  QuadradoMagico.cpp
	Author: Alef Castro
	Date: 22/05/26 18:45
	Description: Programa que calcula se os numeros oferecidos pelo usuario
				eh um quadrado Magico!
*/


#include <stdio.h>

// protótipos
void carregarMat(int mat[3][3]);
void imprimirMat(int mat[3][3]);
int verificarMat(int mat[3][3]);

int main()
{
    int mat[3][3];
    carregarMat(mat);
    return 0;
}

// função para carregar a matriz
void carregarMat(int mat[3][3])
{
    int i, j;

    printf("Digite os 9 valores da matriz 3x3:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    // agora ela chama o resto
    imprimirMat(mat);

    if (verificarMat(mat))
        printf("\nEh um quadrado magico!\n");
    else
        printf("\nNAO é um quadrado magico!\n");
}

// função para imprimir a matriz
void imprimirMat(int mat[3][3])
{
    int i, j;

    printf("\nMatriz digitada:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// função que verifica se é quadrado mágico
int verificarMat(int mat[3][3])
{
    int i;
    int somaBase = 0;

    // soma da primeira linha
    for(i = 0; i < 3; i++)
        somaBase += mat[0][i];

    // verificar linhas
    for(i = 1; i < 3; i++)
    {
        int somaLinha = 0;
        for(int j = 0; j < 3; j++)
            somaLinha += mat[i][j];

        if(somaLinha != somaBase)
            return 0;
    }

    // verificar colunas
    for(i = 0; i < 3; i++)
    {
        int somaColuna = 0;
        for(int j = 0; j < 3; j++)
            somaColuna += mat[j][i];

        if(somaColuna != somaBase)
            return 0;
    }

    // diagonal principal
    int somaDiag1 = 0;
    for(i = 0; i < 3; i++)
        somaDiag1 += mat[i][i];

    if(somaDiag1 != somaBase)
        return 0;

    // diagonal secundária
    int somaDiag2 = 0;
    for(i = 0; i < 3; i++)
        somaDiag2 += mat[i][2 - i];

    if(somaDiag2 != somaBase)
        return 0;

    return 1;
}