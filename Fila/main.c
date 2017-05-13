#include "fila.h"

int main(){
	
		//gcc fila.c lista.h main.c -o prog
	
		Cliente cliente[5] ={
		{"Pessoa1", "000000001"},
		{"Pessoa2", "000000002"},
		{"Pessoa3", "000000003"},
		{"Pessoa4", "000000004"},
		{"Pessoa5", "000000005"}};
		
		printf("\n\nCriando uma Fila\n");
		Fila* fila = criarFila();
		imprime(fila);
	
		printf("Inserindo 4 clientes");
		int i;
		for(i=0;i<4; i++){
			inserirElemento(fila, cliente[i]);
		}
		imprime(fila);
		
		printf("Inserir um novo cliente");
		inserirElemento(fila, cliente[4]);
		imprime(fila);
		
		printf("Remover cliente e imprimir fila");
		removerElemento(fila);
		imprime(fila);
		
		printf("Deletar  fila");
		deletarFila(fila);
		imprime(fila);
	
	return 0;
}