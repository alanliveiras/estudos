#include <stdio.h>

int main(){
	int numero = 0;

	//declarando
	int* p; //ponteiro é um valor qeu aponta para um endereço memória

	printf("Informe um número: ");
	fflush(stdout);
	scanf("%d", &numero);

	//iniciando o ponteiro
	p = &numero;

	printf("O número informado foi o %d\n", numero);

	printf("Enderço de memória: %d\n", &numero);

	printf("Endereço do ponteiro: %p", p);
	return 0;
}
