#include <stdio.h>

int main(){
	int num, resultado;
	printf("Digite um valor: ");
	fflush(stdout);
	scanf("%d", &num);
	printf("TABUADA DO %d\n\n", num);
	for(int i = 0; i <= 10; i++){
		resultado = num * i;
		printf("%d x %d = %d\n", num, i, resultado);
	}
	return 0;
}
