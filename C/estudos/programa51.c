#include <stdio.h>

/* Um programa que contenha duas vari�veis inteiras. Leia estas
 *  vari�veis do teclado. Em seguida, compare seus endere�os e
 *  exiba o conte�do do maior endere�o.
 */

int main(){
	int n1, n2;

		printf("Informe 1� n�mero: ");
		fflush(stdout);
		scanf("%d", &n1);
		printf("Informe 2� n�mero: ");
		fflush(stdout);
		scanf("%d", &n2);

		printf("\nO 1� n�mero informado foi %d e endere�o de mem�ria � %d\n", n1, &n1);
		printf("O 2� n�mero informado foi %d e endere�o de mem�ria � %d\n", n2, &n2);
		if(&n1 > &n2){
			printf("O 1� n�mero digitado � o de maior endere�o.");
		}else{
			printf("O 2� n�mero digitado � o de maior endere�o.");
		}

	return 0;
}
