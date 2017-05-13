#include "lista.h"

Lista lista;

//Criar lista vazia
Lista* criarLista(){
	Lista *lista; 
	lista = (Lista*) malloc(sizeof(Lista));
	if(lista != NULL)
		lista->tam = 0;
	return lista;
}	

//Deletar lista
void deletarLista(Lista* lista){
	free(lista);
	lista->tam = 0;
}

//Inserir uma elemento
int inserirElemento(Lista* lista, Cliente cliente, int posicao){
	int i, j;
	if(lista == NULL){
		return 0;
	}
	if(lista->tam == MAX){
		return 0;
	}
	if(posicao > lista->tam){
		lista->cliente[lista->tam] = cliente;
		lista->tam++;
		return 1;
	}
	for(i=0; i<lista->tam; i++){	
		if(i == posicao){
			for(j = lista->tam; j >= posicao-1;j--){	// move os elementos
				lista->cliente[j+1] = lista->cliente[j];
			}
		}
	}
	lista->cliente[posicao-1] = cliente;
	lista->tam++;
	return 1;
	
}

//Remover da lista, retorna o cliente removido
Cliente removerElemento(Lista* lista, int posicao){
	int i;
	if(lista->tam >= posicao && posicao >0){
		Cliente remover;
		strcpy(remover.nome, lista->cliente[posicao-1].nome);
		strcpy(remover.cpf, lista->cliente[posicao-1].cpf);
		for(i = (posicao-1); i<lista->tam; i++){
			lista->cliente[i] = lista->cliente[i+1];
		}
		lista->tam--;
		return remover;
	}else{
		printf("Posicao invalida");
	}
	
}

//Buscar o indice de um elemento
int buscarIndice(Lista* lista, Cliente cliente){
	int i;
	if(lista == NULL)
		printf("Lista não existe");
		return 0;
	if(lista->tam == 0)
		printf("Lista vazia");
		return 0;
	for(i=0; i<lista->tam; i++){
		if((strcmp(cliente.nome, lista->cliente[i].nome) == 0)&&(strcmp(cliente.cpf, lista->cliente[i].cpf)==0)){
			printf("O indice e: %d\n", (i+1));
			return (i+1);
		}
	}
	printf("Elemento nao esta na lista\n");
	return 1;
}

//FUNÇÕES ADICIONAIS
void imprime(Lista* lista){
	int i;
	if(lista == NULL){
		printf("Lista invalida!\n\n\n");
		return;
	}
	printf("\n\nLista\n\n");
	for(i=0; i<lista->tam; i++){
		printf("Nome: %s\n", lista->cliente[i].nome);
		printf("CPF: %s\n", lista->cliente[i].cpf);
		printf("---------------------------\n");
	}
	if(lista->tam > 0){
		printf("Quantidade de Clientes: %d\n\n", lista->tam);	
		return;
	}
	printf("Lista vazia!\n\n\n");
}

void imprimeCliente(Cliente cliente){
	printf("\n\nCliente--------------------\n");
	printf("Nome: %s\n", cliente.nome);
	printf("CPF: %s\n", cliente.cpf);
	printf("---------------------------\n");
	return;
}