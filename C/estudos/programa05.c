#include <stdio.h>

int main(){
	int numero;
	printf("Digite algum valor: ");
	fflush(stdout);
	scanf("%d", &numero);

	printf("%d"" < ""%d"" > ", numero - 1, numero, numero + 1);
	return 0;
}
