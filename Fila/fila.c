#include "fila.h"

Fila fila;

//Criar fila
Fila* criarFila(){
	Fila* fila = (Fila*) malloc(sizeof(Fila));
	if(fila != NULL){
			fila->tam=0;
	}
	return fila;
}	

void deletarFila(Fila* fila){
	fila->tam=0;
}

//Inserir um elemento(sempre no final)
int inserirElemento(Fila* fila, Cliente cliente){
	if(fila == NULL)
		return 0;
	if(fila->tam ==MAX)
		return 0;
	fila->cliente[fila->tam] = cliente;
	fila->tam++;
	return 1;
}

//Remove um elemento(sempre no começo)
Cliente removerElemento(Fila* fila){
	int i;
	if(fila->tam>0){
		Cliente remover;
		strcpy(remover.nome, fila->cliente[0].nome);
		strcpy(remover.cpf, fila->cliente[0].cpf);
		for(i=0; i<fila->tam; i++)
			fila->cliente[i]=fila->cliente[i+1];
		fila->tam--;
		return remover;
	}else{
		printf("Fila Vazia");
	}
}

//FUNÇÕES ADICIONAIS
void imprime(Fila* fila){
	int i;
	if(fila == NULL){
		printf("fila invalida!\n\n\n");
		return;
	}
	printf("\n\nFila\n\n");
	for(i=0; i<fila->tam; i++){
		printf("Nome: %s\n", fila->cliente[i].nome);
		printf("CPF: %s\n", fila->cliente[i].cpf);
		printf("---------------------------\n");
	}
	if(fila->tam > 0){
		printf("Quantidade de Clientes: %d\n\n", fila->tam);	
		return;
	}
	printf("Fila vazia!\n\n\n");
	
}

void imprimeCliente(Cliente cliente){
	printf("\n\nCliente--------------------\n");
	printf("Nome: %s\n", cliente.nome);
	printf("CPF: %s\n", cliente.cpf);
	printf("---------------------------\n");
	return;
}