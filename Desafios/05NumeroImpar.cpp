/*
    Nome: NumeroImpar.cpp
    Autor: Alef Castro
    Data: 15/12/25 11:43
    Descrição: Programa que lê números pares do usuário até que um número ímpar seja digitado.
               Quando um número ímpar é digitado, o programa finaliza.
*/

#include <stdio.h>
int main(){
   int num = 0;
    do{
        printf("Digite um numero par (impar para finalizar): ");
        scanf("%d", &num);  

    } while (num % 2 == 0);
    
    puts("Numero impar digitado, programa finalizado.");

 return 0;   
}