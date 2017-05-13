#include "lista.h"

int main(){

	Cliente cliente[5] ={
		{"Pessoa1", "000000001"},
		{"Pessoa2", "000000002"},
		{"Pessoa3", "000000003"},
		{"Pessoa4", "000000004"},
		{"Pessoa5", "000000005"}};

	Lista* lista = criarLista();
	imprime(lista);
	
	printf("Inserindo 4 clientes");
	int i;
	for(i=0; i<4; i++){
		inserirElemento(lista, cliente[i], (i+1));
	}
	imprime(lista);
	
	printf("Inserindo um novo Cliente na posicao 1\n");
	inserirElemento(lista, cliente[i], 1);
	imprime(lista);
	
	printf("Remover cliente de posicao 5 e imprimir lista");
	imprimeCliente(removerElemento(lista, 5));
	imprime(lista);
	
	printf("Buscar Pessoa 5\n");
	printf("O indice e: %d\n",buscarIndice(lista, cliente[5]));
	
	printf("Deletar a lista");
	deletarLista(lista);
	imprime(lista);
	
	return 0;
}