#include "pilha.h"

int main(){
	
	Cliente cliente[5] ={
		{"Pessoa1", "000000001"},
		{"Pessoa2", "000000002"},
		{"Pessoa3", "000000003"},
		{"Pessoa4", "000000004"},
		{"Pessoa5", "000000005"}};
		
		Pilha* pilha = criarPilha();
		imprime(pilha);
	
		printf("Inserindo 4 clientes");
		int i;
		for(i=0;i<4; i++){
			inserirElemento(pilha, cliente[i]);
		}
		imprime(pilha);
		
		printf("Inserir um novo cliente");
		inserirElemento(pilha, cliente[4]);
		imprime(pilha);
		
		printf("Remover cliente e imprimir pilha");
		removerElemento(pilha);
		imprime(pilha);
		
		printf("Deletar  pilha");
		deletarPilha(pilha);
		imprime(pilha);
	
	return 0;
}