/*
	Name: FIFO.cpp
	Author: Alef Castro
	Date: 11/08/26 11:45
	Description: Programa para implementação de uma fila do tipo FIFO - First IN first OUT
*/

#include <stdio.h>
#include <windows.h>

int itens[5];
int inicio = -1, fim = -1;
int tam = 5;

//PROTOTIPAÇÃO
void enQueue(int); // insere um elemento na FIFO
int deQueue(); // Retira um elemneto do FIFO 
int isFull(); // Testa se a fila está CHEIA
int isEmpty(); // Testa se a fila está VAZIA
void showFIFO(); //Exibe o conteudo da fila
void linha();

//PROGRAMA >>>>

int main()
{
  int opc;
  while(1)
  {
  	system("cls");
	puts("\nMENU PARA MANIPULAR A FILA - FIFO");
	linha();
	puts("1 - Inserir na Fila\n2 - Retirar da Fila\n3 - Exibir Fila\n4 - Sair");
	linha();
	printf("Escolha sua opcao: "); scanf("%d", &opc);
	
	switch(opc)
	{
		case 1: int elem;
				printf("\nDigite o Elemento: "); scanf("%d", &elem);
				enQueue(elem);
				break;	
				
		case 2: deQueue();
				break;
				
		case 3: showFIFO();
				break;	
					
		case 4: exit(0);
		default: puts("Escolha uma opcao do menu");
		
		}//fim do switch
		Sleep(2000);
  }//fim do while
  
}//fim do programa

//CODIFICAÇÃO DAS FUNÇÕES

//Inserir um elemento na FIFO
void enQueue(int elem)
{
	if(isFull() == 1)
		puts("\nFila CHEIA!!!");
	else
	{
		if(inicio == -1)
			inicio = 0;
	fim = (fim+1)% tam;
	itens[fim] = elem;
	printf("\nElemento %d foi inserido na FIFO", elem);
	}
}

//Retirar um elemento do FIFO
int deQueue()
{
	int elem;
	if(isEmpty() == 1){
		puts("\nFila VAZIA!!!");
		return -1;
	}
	else{
		elem = itens[inicio];
		if(inicio == fim){
			inicio = -1;
			fim = -1;
		}
			else{
			inicio = (inicio + 1)%tam;  
			}
		
		printf("\n%d foi retirado da Fila!!!", elem);
		return elem;
	}
}

//Testar SE Fila Cheia 
int isFull()
{
	if((inicio == (fim+1)%tam) || (inicio == 0 && fim == tam-1))
		return 1; //
	else
		return 0;
}

//Testar SE Fila Vazia
int isEmpty()
{
	if(inicio == -1)
		return 1; //True para Fila vazia
	else
		return 0; // False para Fila Vazia
}

//Exibir o conteudo do FIFO
void showFIFO()
{
	int i;
	if (isEmpty() == 1){
		puts("\nFIFO VAZIA");
	}else{
		puts("\nConteudo da Fila: ");
		for(i = inicio; i != fim; i = (i+1)%tam){
			printf("%d|", itens[i]);
		}
		printf("%d|", itens[i]);
	}
	
}

void linha()
{
	puts("=======================================");
}

