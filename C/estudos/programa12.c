#include <stdio.h>
//Leitura de um sal�rio e valor da presta��o do empr�stimo.
//Se a presta��o for maior que 20% do sal�rio imprima: Empr�stimo n�o concedido.
//Caso o contr�rio imprima: Empr�stimo concedido.
int main(){
	float salario, emprestimo, porcen;
	printf("Digite o seu sal�rio: ");
	fflush(stdout);
	scanf("%f", &salario);
	printf("Digite o valor da presta��o do empr�stimo: ");
	fflush(stdout);
	scanf("%f", &emprestimo);
	porcen = salario*0.2;
	if(emprestimo>porcen){
		printf("Empr�stimo n�o concedido.");
	}else{
		printf("Empr�stimo concedido.");
	}
	return 0;
}
