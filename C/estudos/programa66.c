#include <stdio.h>
//Revendo
int main(){

	int numero = 63; //sizeof -> tamanho de
	float nota = 7.9;
	char letra = 'W';
	double outranota = 4.2;

	printf("A vari�vel 'n�mero' tem valor %d e ocupa %ld bytes em mem�ria\n", numero, sizeof(numero));//quer saber quanto ocupa de mem�ria
	printf("A vari�vel 'nota' tem valor %.1f e ocupa %ld bytes em mem�ria\n", nota, sizeof(nota));
	printf("A vari�vel 'letra' tem valor %c e ocupa %ld bytes em mem�ria\n", letra, sizeof(letra));
	printf("A vari�vel 'outra_nota' tem valor %.1f e ocupa %ld bytes em mem�ria\n", outranota, sizeof(outranota));

	return 0;
}
