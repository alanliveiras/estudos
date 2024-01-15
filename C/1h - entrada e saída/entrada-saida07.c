#include <stdio.h>

/* Um programa que receba do usu�rio o nome de um arquivo texto e
 * mostre na tela quantas linhas este arquivo possui.
 */
int main(){
	FILE *arq;
	char nome_arquivo[12]; //arquivo.txt
	int conta_linhas = 0;

	printf("Informe o nome do arquivo a ser aberto: ");
	fflush(stdout);
	fgets(nome_arquivo, 12, stdin);

	arq = fopen(nome_arquivo, "r");
	if(arq){
		for(char c = getc(arq); c != EOF; c = getc(arq)){
			if(c == '\n'){//seria o enter
				conta_linhas = conta_linhas + 1;
			}
		}
		printf("O arquivo %s possui %d linhas", nome_arquivo, conta_linhas);
	}else{
		printf("N�o foi poss�vel abrir o arquivo");
	}
	fclose(arq);
	arq = NULL;

	return 0;
}
