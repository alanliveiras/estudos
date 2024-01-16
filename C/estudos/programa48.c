#include <stdio.h>

int main(){
	/*
	 *   0   1   2   3   4
	 * ---------------------
	 * |   |   |   |   |   |
	 * ---------------------
	 */
	int valores[5];//Array unidimensional

		for(int i = 0; i < 5; i++){
			printf("Informe o %d/5 valor: ", (i+1));
			fflush(stdout);
			scanf("%d", &valores[i]);
		}
		printf("Valores informados foram \n");
		for(int i = 0; i < 5; i++){
					printf("De %d/5: %d\n", (i+1), valores[i]);
				}
		printf("%p %d\n", &valores[0], valores[0]);//& para saber o endereço de memória
		printf("%p %d\n", valores, valores[0]);

	return 0;
}
