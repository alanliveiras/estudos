#include <stdio.h>

int main(){
	int num;
	printf("TENTE ACERTAR O NÚMERO PARA O PROGRAMA ENCERRAR\n");
	while(num != 1000){
		printf("\nDigite algum valor: ");
		fflush(stdout);
		scanf("%d", &num);
		if(num%2==0){
		printf("Esse número é par.\n");
		}else{
			printf("Esse número é ímpar.\n");
		}
	}
	printf("\nPROCESSO ENCERRADO.");
	return 0;
}
