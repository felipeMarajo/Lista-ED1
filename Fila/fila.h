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
}Fila;

Fila* criarFila();

void deletarFila(Fila* fila);

int inserirElemento(Fila* fila, Cliente cliente);

Cliente removerElemento(Fila* fila);

void imprime(Fila* fila);

void imprimeCliente(Cliente cliente);