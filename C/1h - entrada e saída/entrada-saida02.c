#include <stdio.h>

int main(){
	FILE *arq;
	char nome[20], *resultado;

	arq = fopen("arquivo.txt", "r");

	if(arq){
		while(!feof(arq)){//feof = File and End of File
			resultado = fgets(nome, 20, arq);//resultado vai pegar o valor que fgets está passando
			//pegar os 10 primeiros caracteres e colocar navariavel nome
			printf("Resultado: %d\n", resultado);
			if(resultado){
				printf("%s\n", nome);
			}
		}
	}else{
		printf("Não achei o arquivo.");
	}
	fclose(arq);

	return 0;
}
