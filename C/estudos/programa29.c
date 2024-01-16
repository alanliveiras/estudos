#include <stdio.h>
int main(){
	int num = 0;
	int p = 0;
	int num1 = 1;
	printf("NÚMERO TRIÂNGULAR\n");
	printf("EX: 2 x 3 x 4 = 24\n");
	printf("Digite um número: ");
	fflush(stdout);
	scanf("%d", &num);
	p = num1 * (num1+1) * (num1 + 2);
	while (p < num){
	num1 = num1 + 1;
	p = num1 * (num1+1) * (num1 + 2);
	}
	if(p == num){
		printf("É triangular.");
	}else{
		printf("Não é triangular.");
	}
	return 0;
}
