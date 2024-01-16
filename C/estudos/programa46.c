#include <stdio.h>

void incrementa(int* contador){
	//tem que declarar que estamos transferindo o endreço de memória, então
	//colocamos um *
	//Agora não vamos mais receber um valor, um parâmetro do tipo inteiro, mas
	//sim um endereço de memória que APONTA para um valor do tipo inteiro
		printf("Antes de incrementar\n");
		printf("O contador vale %d\n", (*contador));//Quando coloca o () e * é porque
													//queremos imprimir o valor dele,
													//não o endereço
		printf("O endereço de memória é %d\n", contador);//endereço de memória

		printf("Depois de incrementar\n");
		//valor = valor + 1
		//Se valor++ ele vai imprimir e depois incrementar o valor
		//Já se for ++valor ele já vai imprimindo com o valor
		printf("O contador vale %d\n", ++(*contador));
		printf("O endereço de memória é %d\n", contador);
	}

int main(){

	//quando declaramos uma variável, a linguagem C
	//aloca uma espaço em memória para colocar este valor
	int contador = 10;

	printf("Antes de incrementar\n");
	printf("O contador vale %d\n", contador);
	printf("O endereço de memória é %d\n", &contador);//temos que colocar o & para ter
	 	 	 	 	 	 	 	 	 	 	 	 	  //acesso ao endereço de memória aqui

	//cópia por valor
	incrementa(&contador);
	//quando passamos o & é porque estamos passando o endereço
	//de memória

	printf("Depois de incrementar\n");
	printf("O contador vale %d\n", contador);
	printf("O endereço de memória é %d\n", &contador);

	return 0;
}
