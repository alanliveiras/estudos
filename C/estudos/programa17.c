#include <stdio.h>

int main(){
	float aposta1, aposta2, aposta3, total_aposta = 0;
	float premio = 0;
	float porcentagem1, porcentagem2, porcentagem3, total_porcentagem = 0;
	float premio1, premio2, premio3, total_premios = 0;

	printf("Informe o valor da posta do apostador 1: ");
	fflush(stdout);
	scanf("%f", &aposta1);

	printf("Informe o valor da posta do apostador 2: ");
	fflush(stdout);
	scanf("%f", &aposta2);

	printf("Informe o valor da posta do apostador 3: ");
	fflush(stdout);
	scanf("%f", &aposta3);

	printf("Informe o valor do premio: ");
	fflush(stdout);
	scanf("%f", &premio);

	total_aposta = (float)(aposta1 + aposta2 + aposta3);
	printf("O total de apostas foi de R$%.2f.\n", total_aposta);

	porcentagem1 = (float)(aposta1 / total_aposta);
	porcentagem2 = (float)(aposta2 / total_aposta);
	porcentagem3 = (float)(aposta3 / total_aposta);
	total_porcentagem = (float)(porcentagem1 + porcentagem2 + porcentagem3);
	printf("O total de porcentagens é R$%.2f.\n", total_porcentagem);

	premio1 = (float)(premio * porcentagem1);
	premio2 = (float)(premio * porcentagem2);
	premio3 = (float)(premio * porcentagem3);

	total_premios = (float)(premio1 + premio2 + premio3);
	printf("O total em prêmios é R$%.2f.\n", total_premios);

	printf("O apostador 1 apostou R$%.2f que corresponde a %.2f e deverá receber o prêmio de R$%.2f.\n", aposta1, porcentagem1, premio1);
	printf("O apostador 2 apostou R$%.2f que corresponde a %.2f e deverá receber o prêmio de R$%.2f.\n", aposta2, porcentagem2, premio2);
	printf("O apostador 3 apostou R$%.2f que corresponde a %.2f e deverá receber o prêmio de R$%.2f.\n", aposta3, porcentagem3, premio3);
	return 0;
}
