#include <stdio.h>

int main(){
	int num;
	float opcao, opcao2, equacao;
do{
printf("\nESCOLHA QUAL DAS OPÇÕES\n");
printf("1 - Adição\n");
printf("2 - Subtração\n");
printf("3 - Multiplicação\n");
printf("4 - Divisão\n");
printf("5 - Saída\n");
printf("Opção: ");
fflush(stdout);
scanf("%d", &num);
	if(num==1){
		printf("\nA sua escolha foi a Adição.\n");
		printf("Digite o primeiro valor: ");
		fflush(stdout);
		scanf("%f", &opcao);
		printf("Digite o segundo valor: ");
		fflush(stdout);
		scanf("%f", &opcao2);
		equacao = opcao + opcao2;
		printf("O valor final é igual a %.1f.\n",  equacao);
	}else if(num==2){
		printf("\nA sua escolha foi a  Subtração.\n");
		printf("Digite o primeiro valor: ");
		fflush(stdout);
		scanf("%f", &opcao);
		printf("Digite o segundo valor: ");
		fflush(stdout);
		scanf("%f", &opcao2);
		equacao = opcao - opcao2;
		printf("O valor final é igual a %.1f.\n",  equacao);
	}else if(num==3){
		printf("\nA sua escolha foi a Multiplicação.\n");
		printf("Digite o primeiro valor: ");
		fflush(stdout);
		scanf("%f", &opcao);
		printf("Digite o segundo valor: ");
		fflush(stdout);
		scanf("%f", &opcao2);
		equacao = opcao * opcao2;
		printf("O valor final é igual a %.1f.\n", equacao);
	}else if(num==4){
		printf("\nA sua escolha foi a Divisão.\n");
		printf("Digite o primeiro valor: ");
		fflush(stdout);
		scanf("%f", &opcao);
		printf("Digite o segundo valor: ");
		fflush(stdout);
		scanf("%f", &opcao2);
		equacao = opcao / opcao2;
		printf("O valor final é igual a %.1f.\n", equacao);
	}else if(num==5){
		printf("\nVocê escolheu a Saída.\n");
	}else{
		printf("\nTente Novamente.\n");
	}
	}while(num!=5);
	return 0;
}
