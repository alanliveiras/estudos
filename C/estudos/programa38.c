#include <stdio.h>
// Faça um programa que leia um vetor de 6 posições e atribua valor 0
//para todos os elementos que possuírem valores negativos.
int main() {
	int vetores[6] = {0, 0, 0, 0, 0, 0};

	for(int i = 0; i < 6; i++){
		printf("Informe um valor %d de 10: ", i + 1);
		fflush(stdout);
		scanf("%d", &vetores[i]);

	if(vetores[i] < 0){
		vetores[i] = 0;
	}
}
		printf("================================\n");
	for(int i = 0; i < 6; i++){
		printf("Vetor na posição %d vale %d.\n", i, vetores[i]);
	}
    return 0;
}
