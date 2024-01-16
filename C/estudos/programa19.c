#include <stdio.h>

int main(){
	int num, soma;
	for(int i = 0; i < 10; i++){
	printf("Digite algum valor:  ");
	fflush(stdout);
	scanf("%d", &num);
	soma = soma + num;
	}
	printf("A soma dos números digitados é igual a %d.", soma);
	return 0;
}
