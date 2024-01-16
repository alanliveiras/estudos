#include <stdio.h>

//Protótipo de função
/*
 * Assinaturas da função
 * - tipo de retorno
 * - nome
 * - parâmetros de entrada
 */

int soma(int numero1, int numero2);

void mensagem();

int main(){
	int n1, n2, ret;

	printf("Informe o primeiro número: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o segundo número: ");
	fflush(stdout);
	scanf("%d", &n2);

	ret = n1 + n2;

	printf("A soma entre %d e %d é igual a %d.\n", n1, n2, ret);

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
