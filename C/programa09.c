#include<stdio.h>

int main(){
	float compra, distribuidor, impostos;
	printf("CUSTOS DA COMPRAS DE UM CARRO\n");
	printf("Digite o valor da compra de um carro: ");
	fflush(stdout);
	scanf("%f", &compra);
	if(compra<=12000){
		distribuidor = compra*0.05;
		printf("O valor total vai ser igual a R$%.2f.", compra+distribuidor);
	}else if(compra>12000 && compra<=25000){
		distribuidor = compra*0.10;
		impostos = compra*0.15;
		printf("O valor total vai ser igual a R$%.2f.", compra+distribuidor+impostos);
	}else{
		distribuidor = compra*0.15;
		impostos = compra*0.20;
		printf("O valor total vai ser igual a R$%.2f.", compra+distribuidor+impostos);
	}
	return 0;
}
