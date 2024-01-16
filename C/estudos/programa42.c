#include <stdio.h>
#include "ajuda.h"
//As bibliotecas incluidas no compilador C utiliza os sinais '<' e '>'.
//Para dar uma pesquisada nas bibliotecas basta ir na ferramenta Includes.

int main(){
	int n1, n2, ret_s, ret_m;

	mensagem();

	printf("Informe o primeiro número: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o segundo número: ");
	fflush(stdout);
	scanf("%d", &n2);

	ret_s = n1 + n2;

	printf("A soma entre %d e %d é igual a %d.\n",n1, n2, ret_s);

	ret_m = n1 * n2;

	printf("A multiplicação entre %d e %d é igual a %d.", n1, n2, ret_m);

	return 0;
}
