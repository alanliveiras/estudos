#include <stdio.h>

int main(){
	int num;
	printf("TENTE ACERTAR O N�MERO PARA O PROGRAMA ENCERRAR\n");
	while(num != 1000){
		printf("\nDigite algum valor: ");
		fflush(stdout);
		scanf("%d", &num);
		if(num%2==0){
		printf("Esse n�mero � par.\n");
		}else{
			printf("Esse n�mero � �mpar.\n");
		}
	}
	printf("\nPROCESSO ENCERRADO.");
	return 0;
}
