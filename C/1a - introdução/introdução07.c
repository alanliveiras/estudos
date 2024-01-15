#include <stdio.h>

int main(){
	float salario;
	printf("Digite o seu salário: ");
	fflush(stdout);
	scanf("De acordo com o reajuste, seu novo salário valerá R$%.2f.", salario*0.15);
	return 0;
}
