#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX 100

typedef struct{
	char nome[50];
	char cpf[11];
}Cliente;

typedef struct{
	Cliente cliente[MAX];
	int tam;
}Pilha;

Pilha* criarPilha();

void deletarPilha(Pilha* pilha);

int inserirElemento(Pilha* pilha, Cliente cliente);

Cliente removerElemento(Pilha* pilha);

void imprime(Pilha* pilha);

void imprimeCliente(Cliente cliente);