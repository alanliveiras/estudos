#include <stdio.h>

/* Um programa que contenha um array de inteiros contendo 5 elementos.
 * Utilizando apenas aritmética de ponteiros, leia este array do teclado
 * e imprima o dobro de cada valor lido.
 */
int main(){
	int vetores[5];

	for(int i = 0; i < 5; i++){
		printf("Informe o %d/5 valor: ", i + 1);
		fflush(stdout);
		scanf("%d", &vetores[i]);
	}
	for(int i = 0; i < 5; i++){
		printf("O dobro de %d é %d\n", *(vetores + i), *(vetores + i) * *(vetores + i));
	}
	return 0;
}
