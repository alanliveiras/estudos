#include <stdio.h>

int main(){
	int numero = 0;

	//declarando
	int* p; //ponteiro � um valor qeu aponta para um endere�o mem�ria

	printf("Informe um n�mero: ");
	fflush(stdout);
	scanf("%d", &numero);

	//iniciando o ponteiro
	p = &numero;

	printf("O n�mero informado foi o %d\n", numero);

	printf("Ender�o de mem�ria: %d\n", &numero);

	printf("Endere�o do ponteiro: %p", p);
	return 0;
}
