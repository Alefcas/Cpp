/*
	Name: ListaLigada.cpp
	Author: Alef Castro
	Date: 08/09/26 09:55
	Description: Programa para implementar um Lista Ligada contendo vários nós ( NODE )
*/

//Bibliotecas	

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

//Definição da estrutura de um nó
typedef struct No{
	char nome[20];
	int idade;
	No *prox;
}No;

// Variavél Global
int tamanho; // Armazenta o tamanho da lista

 //Seção de Prototipação
int vazia ( No *);
No *alocaMemoria();
void inserirNoFim(No *);
No *retirarNoFim(No *);
void inserirNoInicio(No *);
No *retirarNoInicio(No *);
void exibirLista(No *);
void inciarLista(No *);
int menu();
void tratarOpcao(No *, int);

//Função Principal
main(){
	No *Lista = (No *) malloc(sizeof(No));
	if(!Lista){
		puts("\n== SEM MEMORIA PARA CRIAR A LISTA ==");
		exit(1);
	}else{
		int opc = 0;
		do{
			opc = menu();
			tratarOpcao(Lista,opc);
			system("pause");
			system("cls");
		}while(opc);
	}
	
} // fim do programa

//Função para Exibir um menu de opções ao usuário | int menu();
int menu()
{
	int opc= 0;
	puts("\nEscolha sua Opcao:");
	puts("=========================================");
	printf("1 - Zerar a Lista\n"); 
	printf("2 - Exibir a Lista\n");
	printf("3 - Inserir elemento no INICIO da Lista\n"); 
	printf("4 - Inserir elemento no FIM da Lista\n");
	printf("5 - Excluir elemento do INICIO da Lista\n"); 
	printf("6 - Excluir elemento do FIM da Lista\n");
	printf("7 - Sair ...\n");
	puts("=========================================\n");
	printf("Opcao: ");scanf("%d", &opc);
	return opc;
}

//Função para Tratar as opções do Menu | void tratarOpcao(No *, int);
void tratarOpcao(No *Lista, int opc)
{
	No *temp; // Nó temporário
	switch(opc)
	{
		case 1: inciarLista(Lista);
				break;
		case 2: exibirLista(Lista);
				break;
		case 3: inserirNoInicio(Lista);
				break;
		case 4: inserirNoFim(Lista);
				break;
		case 5: retirarNoInicio(Lista);
				break;
		case 6: retirarNoFim(Lista);
				break;
		case 7: exit(0);
		
		default:
				puts("Opcao Invalida - Verifique!!!");
				break;
		
	}// fim do switch
}

//Função para inciar a lista | void inciarLista(No *);
void inciarLista(No *Lista)
{
	Lista->prox = NULL;
	tamanho = 0;
}

//Função que testa se a lista está vazia | vazia ( No *)
int vazia ( No *Lista)
{
	if(Lista->prox == NULL)
		return 1; // A lista está vazia
	else
		return 0; // Não está vazia
}

//Função para alocar alocar a quantidade de memória para armazenar um nó | alocaMemoria()

No *alocaMemoria()
{
	No *novo = (No *) malloc(sizeof(No));
	if(!novo) // Caso não seja possivel alocar em memoria ( sem armazenamento )
	{
		puts("Sem Memoria disponivel para criar um novo No !!!");
		exit(1);
	}
	else 
	{
		printf("Nome: "); scanf("%s", &novo->nome);
		printf("Idade: "); scanf("%d",&novo->idade);
		return novo;
	}
}

//Função para inserir um nó no fim da lista
void inserirNoFim(No *Lista)
{
	No *novo = alocaMemoria();
	novo->prox = NULL;
	
	if(vazia(Lista)){
		Lista->prox = novo;
	}else{
		No *tmp = Lista->prox;
		while(tmp->prox != NULL){ //Percorre o NÓ até chegar no NULL
			tmp = tmp->prox; 
		}
		tmp->prox = novo;		
	}
	tamanho++;
	puts("Elemento Inserido com SUCESSO!!");
}//fim da função

//Função para remover um elemento do fim da lista

No *retirarNoFim(No *Lista){
	if(Lista->prox ==NULL){
		puts("\nLista Vazia!");
		return NULL;
	}else{
		No *ultimo = Lista->prox; 
		No *penultimo = Lista;
		
		while(ultimo->prox != NULL){
			penultimo = ultimo;
			ultimo = ultimo->prox;
		}
		penultimo->prox = NULL;
		tamanho--;
		return ultimo;
	}
}//fim da função

//Função para inserir NÓ no ínicio da lista

void inserirNoInicio(No *Lista)
{
	No *novo = alocaMemoria();
	No *head = Lista->prox;
	
	Lista->prox = novo;
	novo->prox = head;
	
	puts("Elemento inserido no inicio da Lista!!!");
	tamanho++;
}//fim da função

//Função para retirar um NÓ do inicio da Lista

No retirarNoInicio(No Lista)
{
	if(Lista->prox == NULL){
		puts("\nA Lista está vazia!!");
		return NULL;
	}else{
		No *tmp = Lista->prox;
		Lista->prox = tmp->prox;
		tamanho--;
		return tmp;
	}
}//fim da função

//Função para e exibir todo o conteudo da lista

void exibirLista(No *Lista)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //Cor Original
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;
	
	//Salvar os atributos de cores;
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes; //salva a cor original
	
	if(vazia(Lista)){
		puts("\nLista vazia!");
		return;
	}else{
		No *temp;
		temp = Lista->prox;
		printf("Lista: ");
			while(temp != NULL){
				printf("%s|", temp->nome);
				printf("%d", temp->idade);
				SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
				printf(" --> ");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				temp = temp->prox;
			}
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		printf("NULL\n\n");
		SetConsoleTextAttribute(hConsole, saved_attributes);
	}
		
}//fim da função
