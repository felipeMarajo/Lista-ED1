#include "pilha.h"

Pilha pilha;

//Criar pilha vazia
Pilha* criarPilha(){
	Pilha *pilha = (Pilha*) malloc(sizeof(Pilha));
	if(pilha != NULL){
		pilha->tam = 0;
	}
	return pilha;
}

//Deletar pilha
void deletarPilha(Pilha* pilha){
	pilha->tam =0;
}

//Inserir um elemento(sempre ultima posicao)
int inserirElemento(Pilha* pilha, Cliente cliente){
	int i,j;
	if(pilha == NULL)	
		return 0;
	if(pilha->tam == MAX)
		return 0;

	pilha->cliente[pilha->tam] = cliente;
	pilha->tam++;
	return 1;
}

//Remove um elemento(Sempre o ultimo)
Cliente removerElemento(Pilha* pilha){
	if(pilha->tam>0){
		Cliente remover;
		strcpy(remover.nome, pilha->cliente[pilha->tam-1].nome);
		strcpy(remover.cpf, pilha->cliente[pilha->tam-1].cpf);
		pilha->tam--;
		return remover;
	}else{
		printf("Pilha vazia");
	}
}

//FUNÇÕES ADICIONAIS
void imprime(Pilha* pilha){
	int i;
	if(pilha == NULL){
		printf("Pilha invalida!\n\n\n");
		return;
	}
	printf("\n\nPilha\n\n");
	for(i=0; i<pilha->tam; i++){
		printf("Nome: %s\n", pilha->cliente[i].nome);
		printf("CPF: %s\n", pilha->cliente[i].cpf);
		printf("---------------------------\n");
	}
	if(pilha->tam > 0){
		printf("Quantidade de Clientes: %d\n\n", pilha->tam);	
		return;
	}
	printf("Pilha vazia!\n\n\n");
}

void imprimeCliente(Cliente cliente){
	printf("\n\nCliente--------------------\n");
	printf("Nome: %s\n", cliente.nome);
	printf("CPF: %s\n", cliente.cpf);
	printf("---------------------------\n");
	return;
}