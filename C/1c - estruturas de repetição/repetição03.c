#include <stdio.h>

int main(){
	int num;
	float opcao, opcao2, equacao;
do{
printf("\nESCOLHA QUAL DAS OP��ES\n");
printf("1 - Adi��o\n");
printf("2 - Subtra��o\n");
printf("3 - Multiplica��o\n");
printf("4 - Divis�o\n");
printf("5 - Sa�da\n");
printf("Op��o: ");
fflush(stdout);
scanf("%d", &num);
	if(num==1){
		printf("\nA sua escolha foi a Adi��o.\n");
		printf("Digite o primeiro valor: ");
		fflush(stdout);
		scanf("%f", &opcao);
		printf("Digite o segundo valor: ");
		fflush(stdout);
		scanf("%f", &opcao2);
		equacao = opcao + opcao2;
		printf("O valor final � igual a %.1f.\n",  equacao);
	}else if(num==2){
		printf("\nA sua escolha foi a  Subtra��o.\n");
		printf("Digite o primeiro valor: ");
		fflush(stdout);
		scanf("%f", &opcao);
		printf("Digite o segundo valor: ");
		fflush(stdout);
		scanf("%f", &opcao2);
		equacao = opcao - opcao2;
		printf("O valor final � igual a %.1f.\n",  equacao);
	}else if(num==3){
		printf("\nA sua escolha foi a Multiplica��o.\n");
		printf("Digite o primeiro valor: ");
		fflush(stdout);
		scanf("%f", &opcao);
		printf("Digite o segundo valor: ");
		fflush(stdout);
		scanf("%f", &opcao2);
		equacao = opcao * opcao2;
		printf("O valor final � igual a %.1f.\n", equacao);
	}else if(num==4){
		printf("\nA sua escolha foi a Divis�o.\n");
		printf("Digite o primeiro valor: ");
		fflush(stdout);
		scanf("%f", &opcao);
		printf("Digite o segundo valor: ");
		fflush(stdout);
		scanf("%f", &opcao2);
		equacao = opcao / opcao2;
		printf("O valor final � igual a %.1f.\n", equacao);
	}else if(num==5){
		printf("\nVoc� escolheu a Sa�da.\n");
	}else{
		printf("\nTente Novamente.\n");
	}
	}while(num!=5);
	return 0;
}
