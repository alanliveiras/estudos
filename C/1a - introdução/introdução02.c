#include <stdio.h>

int main(){
	float dinheiro;
	printf("Quanto voc� tem na carteira?: ");
	fflush(stdout);
	scanf("%f", &dinheiro);
	printf("Voc� tem R$%.2f reais, equivalente a U$%.2f dol�res americano.", dinheiro, dinheiro*0.21);
	return 0;
}
