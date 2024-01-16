#include <stdio.h>

/* Um programa que contenha duas variáveis inteiras. Leia estas
 *  variáveis do teclado. Em seguida, compare seus endereços e
 *  exiba o conteúdo do maior endereço.
 */

int main(){
	int n1, n2;

		printf("Informe 1° número: ");
		fflush(stdout);
		scanf("%d", &n1);
		printf("Informe 2° número: ");
		fflush(stdout);
		scanf("%d", &n2);

		printf("\nO 1° número informado foi %d e endereço de memória é %d\n", n1, &n1);
		printf("O 2° número informado foi %d e endereço de memória é %d\n", n2, &n2);
		if(&n1 > &n2){
			printf("O 1° número digitado é o de maior endereço.");
		}else{
			printf("O 2° número digitado é o de maior endereço.");
		}

	return 0;
}
