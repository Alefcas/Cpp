/*
	Name: Contador1a100.cpp
	Author: Alef Castro
	Date: 15/12/25 10:49
	Description: Programa que conta quantos pares existem entre 1 e 100.
*/
#include <stdio.h>
int main(){
    int contador = 0;
    for(int i = 1; i <= 100; i++){
        if(i % 2 == 0)
            contador++;
    }
    printf("Tem %d numeros pares\n", contador);
    return 0;
}