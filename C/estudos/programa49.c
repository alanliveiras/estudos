#include <stdio.h>

int main(){
	/*
		 *   0   1   2   3   4
		 * ---------------------
		 * | 1 | 2 | 3 | 4 | 5 |
		 * ---------------------
		 * int = 4 bytes
		 * byte 0000 00001
		 * 0000 0000 0000 0000 0000 0000 0000 0001
		 * 0000 0000 0000 0000 0000 0000 0000 0010
		 */
	int valores[5] = {1, 2, 3, 4, 5};
	for(int i = 0; i < 5; i++){
		printf("O valor de %d tem %ld bytes\n", valores[i], sizeof(valores[i]));
	}
	printf("Array valores possui %ld bytes\n", sizeof(valores));//5*4 = 20

	printf("\nValores[0] vale %d e endereço de memória é %p\n", valores[0], valores[0]);
	printf("*(valores) vale %d e endereço de memória é %p\n", *(valores), *(valores));


	printf("\n*(valores + 1) vale %d e endereço de memória é %p\n", *(valores + 1), *(valores + 1));
	printf("*(valores + 2) vale %d e endereço de memória é %p\n", *(valores + 2), *(valores + 2));
	printf("*(valores + 3) vale %d e endereço de memória é %p\n", *(valores + 3), *(valores + 3));
	printf("*(valores + 4) vale %d e endereço de memória é %p\n", *(valores + 4), *(valores + 4));


	return 0;
}
