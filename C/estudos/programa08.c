#include <stdio.h>

int main(){
	float salario;
	printf("Digite o seu sal�rio: ");
	fflush(stdout);
	scanf("De acordo com o reajuste, seu novo sal�rio valer� R$%.2f.", salario*0.15);
	return 0;
}
