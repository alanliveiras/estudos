#include <stdio.h>

int main(){
	int numero, numero2;
	printf("COMPARAÇÃO ENTRE DOIS NÚMEROS\n");
	printf("Digite o primeiro número: \n");
	fflush(stdout);
	scanf("%d", &numero);
	printf("Digite o segundo número: \n");
	fflush(stdout);
	scanf("%d", &numero2);
	if (numero>numero2){
		printf("%d > %d", numero, numero2);
	}else if(numero<numero2){
		printf("%d > %d", numero2, numero);
	}else{
		printf("Os dois números são iguais.");
	}
	return 0;
}
