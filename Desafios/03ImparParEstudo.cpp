/*
    Nome: ImparParEstudo.cpp
    Autor: Alef Castro
    Data: 11/12/25 11:08
    Descrição: Programa que lê um número e informa se o número é ímpar ou par.
                O programa se repete até o usuário digitar 0.
*/

#include <stdio.h>


int main()
{
    int num = 0;

    printf("Digite um numero (0 para sair): ");scanf("%d", &num);
    while(num != 0){
        if(num != 0){
            if(num % 2 == 0)
                printf("Eh Par\n");
            else
                printf("Eh Impar\n");
        }
        printf("Digite um numero (0 para sair): ");scanf("%d", &num);
    }
     return 0;
}