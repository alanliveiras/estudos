#include <stdio.h>

int main(){
	float real, dolar;
	printf("Digite o valor R$: ");
	fflush(stdout);
	scanf("%f", &real);
	dolar = real*5.20;
	printf("A conversão de R$%.2f é igual a US$%.2f.", real, dolar);
	return 0;
}
