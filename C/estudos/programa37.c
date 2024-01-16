#include <stdio.h>

int main(){
	int pares = 0;
	int valores[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	for(int i = 0; i < 10; i++){
		printf("Informe um valor de 10: ");
		fflush(stdout);
		scanf("%d", &valores[i]);
		if(valores[i] % 2 == 0 && valores[i] != 0){
			pares = pares + 1;
		}
	}
	printf("Há um total de %d números pares.", pares);
	return 0;
}
