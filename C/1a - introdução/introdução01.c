#include <stdio.h>

int main(){
	int numero;
	printf("Digite algum valor: ");
	fflush(stdout);
	scanf("%d", &numero);
	printf("Você digitou o número %d.", numero);
	return 0;
}
