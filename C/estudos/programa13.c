#include <stdio.h>
//Calculo para analisar se tem condi��o para a aposentadoria
int main(){
	int idade = 0;
	int servi = 0;
	printf("Digite a sua idade: ");
	fflush(stdout);
	scanf("%d", &idade);
	printf("Digite o seu tempo de servi�o: ");
	fflush(stdout);
	scanf("%d", &servi);
	if (idade > 65){
		printf("Voc� tem direito a aposentadoria.");
	}else if (servi > 30){
		printf("Voc� tem direito a aposentadoria.");
	}else if (idade > 60 && servi > 25){
		printf("Voc� tem direito a aposentadoria.");
	}else{
		printf("Voc� n�o tem direito a aposentadoria.");
	}
	return 0;
}
