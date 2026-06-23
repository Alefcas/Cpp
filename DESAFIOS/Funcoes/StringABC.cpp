/*
	Name: StringABC.cpp
	Author: Alef Castro
	Date: 23/05/26 6:50
	Description: Programa que sejam utilizadas funções para carregar duas "strings"
	por meio de funções separadas chamadas "cargaStringA" e "cargaStringB". Após as
	cargas das strings nos devidos vetores, o programa deverá efetuar por meio de uma
	função chamada "merge", uma mistura dos caracteres gerando assim uma nova
	string, armazenada em um novo vetor, com os dados encriptados.
*/

//importação:
#include <stdio.h>
#include <string.h>

// prototipação
void cargaStringA();
void cargaStringB(char *);
void merge(char *, char *);

int main()
{
    cargaStringA();
    return 0;
}

// função A
void cargaStringA()
{
    char stringA[100];

    printf("Digite a primeira frase: ");
    fgets(stringA, 100, stdin);

    // remover \n do fgets
    stringA[strcspn(stringA, "\n")] = '\0';

    cargaStringB(stringA);
}

// função B
void cargaStringB(char *stgA)
{
    char stringB[100];

    printf("Digite a segunda frase: ");
    fgets(stringB, 100, stdin);

    stringB[strcspn(stringB, "\n")] = '\0';

    merge(stgA, stringB);
}

// função merge
void merge(char *Va, char *Vb)
{
    char stringC[200];
    int k = 0;

    int tamA = strlen(Va);
    int tamB = strlen(Vb);
    int tam = (tamA > tamB) ? tamA : tamB;

    for (int i = 0; i < tam; i++)
    {
        stringC[k++] = (i < tamA) ? Va[i] : ' ';
        stringC[k++] = (i < tamB) ? Vb[i] : ' ';
    }

    stringC[k] = '\0';

    printf("\nString criptografada:\n%s\n", stringC);
}