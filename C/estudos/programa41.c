#include <stdio.h>

//Prot�tipo de fun��o
/*
 * Assinaturas da fun��o
 * - tipo de retorno
 * - nome
 * - par�metros de entrada
 */

int soma(int numero1, int numero2);

void mensagem();

int main(){
	int n1, n2, ret;

	printf("Informe o primeiro n�mero: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o segundo n�mero: ");
	fflush(stdout);
	scanf("%d", &n2);

	ret = n1 + n2;

	printf("A soma entre %d e %d � igual a %d.\n", n1, n2, ret);

	mensagem();

	return 0;
}

int soma(int numero1, int numero2){
	int res = numero1 + numero2;
	return res;
}

void mensagem(){
	printf("Apenas uma mensagem");
}
