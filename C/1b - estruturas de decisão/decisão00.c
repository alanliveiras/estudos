#include <stdio.h>

int main(){
	int numero, numero2;
	printf("COMPARA��O ENTRE DOIS N�MEROS\n");
	printf("Digite o primeiro n�mero: \n");
	fflush(stdout);
	scanf("%d", &numero);
	printf("Digite o segundo n�mero: \n");
	fflush(stdout);
	scanf("%d", &numero2);
	if (numero>numero2){
		printf("%d > %d", numero, numero2);
	}else if(numero<numero2){
		printf("%d > %d", numero2, numero);
	}else{
		printf("Os dois n�meros s�o iguais.");
	}
	return 0;
}
