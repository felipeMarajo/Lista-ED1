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
}Lista;

Lista* criarLista();

void deletarLista(Lista* lista);

int inserirElemento(Lista* lista, Cliente cliente, int posicao);

Cliente removerElemento(Lista* lista, int posicao);

int buscarIndice(Lista* lista, Cliente cliente);

void imprime(Lista* lista);

void imprimeCliente(Cliente cliente);