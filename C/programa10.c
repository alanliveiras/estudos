#include <stdio.h>

int main(){
	float valor, total;
	int escolha;
	printf("DESCONTOS PARA A LOJA\n");
	printf("Informe o valor da compra: ");
	fflush(stdout);
	scanf("%f", &valor);
	printf("Digite seu c�digo: \n");
	printf("1 - Cliente Comum\n");
	printf("2 - Funcion�rio\n");
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
		printf("Op��o inv�lida!");
}
	return 0;
}
