#include <stdio.h>

int main(){
	float valor, total;
	int escolha;
	printf("DESCONTOS PARA A LOJA\n");
	printf("Informe o valor da compra: ");
	fflush(stdout);
	scanf("%f", &valor);
	printf("Digite seu código: \n");
	printf("1 - Cliente Comum\n");
	printf("2 - Funcionário\n");
	printf("3 - Cliente VIP\n");
	fflush(stdout);
	scanf("%d", &escolha);
	switch(escolha)
{
	case 1:
		printf("Valor a ser pago: R$%.2f.", valor);
	break;
	case 2:
		total= valor-(valor*0.15);
		printf("Valor a ser pago: R$%.2f.", total);
	break;
	case 3:
		total= valor-(valor*0.50);
		printf("Valor a ser pago: R$%.2f.", total);
	break;
	default:
		printf("Opção inválida!");
}
	return 0;
}
