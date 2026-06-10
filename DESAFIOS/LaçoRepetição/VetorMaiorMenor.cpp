/*
    Nome: VetorMaiorMenor.cpp
    Autor: Alef Castro
    Data: 15/12/25 12:26
    Descrição: Programa que lê um vetor de 10 números inteiros e mostre todos os numeros
                mostre o maior e o menor número e calcule a média dos números.
*/
#include <stdio.h>
int main(){
    int vet[10];
    int maior, menor, soma = 0;
    float media;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

        soma += vet[i];
        
        if(i == 0){
            maior = vet[i];
            menor = vet[i];
        }//inicializa maior e menor na primeira passagem do laço.
            if(vet[i] > maior){
                maior = vet[i];
            }
            if(vet[i] < menor){
                menor = vet[i];
            }
    }//fim do for

    media = (float)soma / 10;
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Media dos numeros: %.2f\n", media);

    return 0;

}//fim do programa

