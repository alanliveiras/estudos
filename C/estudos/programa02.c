#include <stdio.h>

int main(){
	float dinheiro;
	printf("Quanto você tem na carteira?: ");
	fflush(stdout);
	scanf("%f", &dinheiro);
	printf("Você tem R$%.2f reais, equivalente a U$%.2f doláres americano.", dinheiro, dinheiro*0.21);
	return 0;
}
