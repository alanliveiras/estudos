#include <stdio.h>

int main(){
	float numero;
	printf("Digite algum valor: ");
	fflush(stdout);
	scanf("%f", &numero);

	printf("O dobro de %.1f é igual a %.1f.\n", numero, numero*2);
	printf("A metade de %.1f é igual a %.1f.\n", numero, numero/2);
	printf("A terça parte de %.1f é igual a %.1f.", numero, numero/3);
	return 0;
}
