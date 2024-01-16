#include <stdio.h>

int main(){
	float nota, nota2, nota3, media;
	printf("CALCULAR A MÉDIA DAS NOTAS\n");
	printf("Digite a primeira nota[0/10]: \n");
	fflush(stdout);
	scanf("%f", &nota);
	printf("Digite a segunda nota[0/10]: \n");
	fflush(stdout);
	scanf("%f", &nota2);
	printf("Digite a terceira nota[0/10]: \n");
	fflush(stdout);
	scanf("%f", &nota3);
	media = (nota + nota2 + nota3)/3;
	if(media>=5.0){
		printf("Aprovado!\n");
	}else{
		printf("Reprovado!\n");
	}
	printf("A sua média é de %.2f.", media);
	return 0;
}
