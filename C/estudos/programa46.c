#include <stdio.h>

void incrementa(int* contador){
	//tem que declarar que estamos transferindo o endre�o de mem�ria, ent�o
	//colocamos um *
	//Agora n�o vamos mais receber um valor, um par�metro do tipo inteiro, mas
	//sim um endere�o de mem�ria que APONTA para um valor do tipo inteiro
		printf("Antes de incrementar\n");
		printf("O contador vale %d\n", (*contador));//Quando coloca o () e * � porque
													//queremos imprimir o valor dele,
													//n�o o endere�o
		printf("O endere�o de mem�ria � %d\n", contador);//endere�o de mem�ria

		printf("Depois de incrementar\n");
		//valor = valor + 1
		//Se valor++ ele vai imprimir e depois incrementar o valor
		//J� se for ++valor ele j� vai imprimindo com o valor
		printf("O contador vale %d\n", ++(*contador));
		printf("O endere�o de mem�ria � %d\n", contador);
	}

int main(){

	//quando declaramos uma vari�vel, a linguagem C
	//aloca uma espa�o em mem�ria para colocar este valor
	int contador = 10;

	printf("Antes de incrementar\n");
	printf("O contador vale %d\n", contador);
	printf("O endere�o de mem�ria � %d\n", &contador);//temos que colocar o & para ter
	 	 	 	 	 	 	 	 	 	 	 	 	  //acesso ao endere�o de mem�ria aqui

	//c�pia por valor
	incrementa(&contador);
	//quando passamos o & � porque estamos passando o endere�o
	//de mem�ria

	printf("Depois de incrementar\n");
	printf("O contador vale %d\n", contador);
	printf("O endere�o de mem�ria � %d\n", &contador);

	return 0;
}
