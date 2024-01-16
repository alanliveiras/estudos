#include <stdio.h>
//Revendo
int main(){

	int numero = 63; //sizeof -> tamanho de
	float nota = 7.9;
	char letra = 'W';
	double outranota = 4.2;

	printf("A variável 'número' tem valor %d e ocupa %ld bytes em memória\n", numero, sizeof(numero));//quer saber quanto ocupa de memória
	printf("A variável 'nota' tem valor %.1f e ocupa %ld bytes em memória\n", nota, sizeof(nota));
	printf("A variável 'letra' tem valor %c e ocupa %ld bytes em memória\n", letra, sizeof(letra));
	printf("A variável 'outra_nota' tem valor %.1f e ocupa %ld bytes em memória\n", outranota, sizeof(outranota));

	return 0;
}
