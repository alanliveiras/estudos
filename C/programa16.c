#include <stdio.h>

int main(){
	float venda, comi;
	printf("CALCULADORA DA COMISSÃO QUE DEVERÁ SER PAGA\n");
	printf("Digite o valor da venda: ");
	fflush(stdout);
	scanf("%f", &venda);
	if(venda>=100000){
		comi = (venda*0.16)+700;
		printf("A sua comissão será de R$%.2f.", comi);
	}else if(venda<100000 && venda>=80000){
		comi = (venda*014)+650;
		printf("A sua comissão será de R$%.2f.", comi);
	}else if(venda<80000 && venda>=60000){
		comi = (venda*0.14)+600;
		printf("A sua comissão será de R$%.2f.", comi);
	}else if(venda<60000 && venda>=40000){
		comi = (venda*0.14)+550;
		printf("A sua comissão será de R$%.2f.", comi);
	}else if(venda<40000 && venda>=20000){
		comi = (venda*0.14)+500;
		printf("A sua comissão será de R$%.2f.", comi);
	}else if(venda<20000){
		comi = (venda*0.14)+400;
		printf("A sua comissão será de R$%.2f", comi);
	}
	return 0;
}
