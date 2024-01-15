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
		//0 -1 é quando não foi encontrado nenhum número ali
		printf("RESULTADO: %d\n", resultado);
			if(resultado == 1){
					soma = soma + num;
			}
		}
	}else{
		printf("Não abriu o arquivo\n");
	}
	printf("A soma dos números encontrados no arquivo é %d", soma);
	fclose(arq);
	return 0;
}
