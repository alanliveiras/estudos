#include <stdio.h>

int main(){
	int numeros[6] = {1, 0, 5, -2, -5, 7};
	int soma = numeros[0] + numeros[1] + numeros[5];

	printf("A soma dos vetores proposto será %d.\n", soma);

	numeros[4] = 100;
	for(int i = 0; i < 6; i++){
		printf("%d ", numeros[i]);
	}

	return 0;
}
