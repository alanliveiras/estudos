#include <stdio.h>

int main(){
	int idade[8];
	int posicao_maior;
	float media = 0;
	float maior = 0;

	for(int i = 0; i < 8; i++){
		printf("Digite a idade da %d° pessoa: ", i + 1);
		fflush(stdout);
		scanf("%d", &idade[i]);
		media = media + idade[i];
			if(idade[i] > maior){
				maior = idade[i];
				posicao_maior = i;
			}
	}
	printf("A média entre as idades é igual a: %.1f\n", media/8);
	printf("A maior idade digitada é igual a: %.1f\n", maior);
	printf("A maior idade está na %d° posição.", posicao_maior + 1);
	return 0;
}
