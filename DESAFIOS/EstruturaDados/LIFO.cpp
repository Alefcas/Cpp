/*
	Name: LIFO.cpp
	Author: Alef Castro
	Date: 25/08/26 11:24
	Description: Implementação da estrutura de PILHA - LIFO (Last IN First OUT)
*/
#include <stdio.h>
#include <windows.h>
//Prototipação
void push(int);
int pop();
int isFull();
int isEmpty();
void showLIFO();
void menu();

//Variaveis Globais
int topo = -1;
int pilha[5];

//PROGRAMA PRINCIPAL
int main()
{
	menu();

}//fim do programa

//FUNÇÕES

void push(int elem)
{
	if(isFull() == 1){
		puts("\n-Stack Overflow-");
	}else{
		topo++;
		pilha[topo] = elem;
		printf("\n%d foi adicionado na pilha", elem);
	}
}//fim push

int pop()
{
	if(isEmpty() == 1){
		puts("\nStack is Empty");
	}else{
		int elemento;
		elemento = pilha[topo];
		topo--;
		printf("\nO numero %d foi retirado da pilha", elemento);
		return elemento;
	}
}//fim pop


int isFull()
{
	if(topo == 4){
		return 1;
	}else{
		return 0;
	}
}//fim isFull

int isEmpty()
{
	if(topo == -1){
		return 1;
	}else{
		return 0;
	}
}//fim isEmpty

void showLIFO()
{
	if(isEmpty() == 1){
		puts("\nImpossible print, because the Stack is Empty");
	}else{
		int i;
		for( i = topo; i >= 0; i--){
			printf("\n[%d]", pilha[i]);
		}
	}
	
}//fim showLIFO

void menu()
{
	int opc = -1;
	while(1){
		puts("\n1 - Push\n2 - Pop\n3 - Show\n4 - EXIT");
		printf("Escolhe uma opcao: "); scanf("%d", &opc);
		switch(opc){
			case 1: int elem; 
					printf("Adicionar numero: "); scanf("%d", &elem);
					push(elem);
					break;
			case 2: pop();
					break;
			case 3: showLIFO();
					break;
			case 4: exit(0);
			
			default: puts("Digite corretamente");
			Sleep(2000);
		}
	}
}

