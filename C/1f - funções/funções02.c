#include <stdio.h>
#include "ajuda.h"
//As bibliotecas incluidas no compilador C utiliza os sinais '<' e '>'.
//Para dar uma pesquisada nas bibliotecas basta ir na ferramenta Includes.

int main(){
	int n1, n2, ret_s, ret_m;

	mensagem();

	printf("Informe o primeiro n�mero: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o segundo n�mero: ");
	fflush(stdout);
	scanf("%d", &n2);

	ret_s = n1 + n2;

	printf("A soma entre %d e %d � igual a %d.\n",n1, n2, ret_s);

	ret_m = n1 * n2;

	printf("A multiplica��o entre %d e %d � igual a %d.", n1, n2, ret_m);

	return 0;
}
