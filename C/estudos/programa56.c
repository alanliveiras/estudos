#include <stdio.h>

int main(){
	FILE *arq;
	int num, resultado, soma = 0;

	arq = fopen("arquivo2.txt", "r");

	if(arq){
		while(!feof(arq)){
		resultado = fscanf(arq, "%d", &num);
		//Mas por que resultado == 1 ????
		//Vamos imprimir um printf antes para analisarmos o resultado
		//0 -1 � quando n�o foi encontrado nenhum n�mero ali
		printf("RESULTADO: %d\n", resultado);
			if(resultado == 1){
					soma = soma + num;
			}
		}
	}else{
		printf("N�o abriu o arquivo\n");
	}
	printf("A soma dos n�meros encontrados no arquivo � %d", soma);
	fclose(arq);
	return 0;
}
