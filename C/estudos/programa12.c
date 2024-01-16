#include <stdio.h>
//Leitura de um salário e valor da prestação do empréstimo.
//Se a prestação for maior que 20% do salário imprima: Empréstimo não concedido.
//Caso o contrário imprima: Empréstimo concedido.
int main(){
	float salario, emprestimo, porcen;
	printf("Digite o seu salário: ");
	fflush(stdout);
	scanf("%f", &salario);
	printf("Digite o valor da prestação do empréstimo: ");
	fflush(stdout);
	scanf("%f", &emprestimo);
	porcen = salario*0.2;
	if(emprestimo>porcen){
		printf("Empréstimo não concedido.");
	}else{
		printf("Empréstimo concedido.");
	}
	return 0;
}
