#include <stdio.h>

int maior_valor(int vetor[], int qtd){
	int maior = 0;

	for(int i = 0; i < qtd; i++){
		if(i == 0){
			maior = vetor[i];
		}
		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}
	return maior;
}

int main(){
	int vetor[10] = {12, 45, 98, 37, 64, 80, 55, 13, 22, 72};
	int maior = maior_valor(vetor, 10);
	printf("O maior vetor é igual a %d.", maior);
	return 0;
}
