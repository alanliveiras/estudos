#include <stdio.h>

int main(){
	float salario, novo;
	printf("Uma empresa est� aumentando o sal�rio dos funcion�rios\n");
	printf("Digite o valor do sal�rio do produto: ");
	fflush(stdout);
	scanf("%f", &salario);
	novo = salario*0.25;
	printf("O valor total vai ficar R$%.2f.", novo+salario);
	return 0;
}
