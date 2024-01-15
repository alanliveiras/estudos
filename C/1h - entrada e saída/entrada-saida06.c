#include <stdio.h>

/* Um programa que:
 * a) Crie/abra um arquivo texto de nome �arq.txt�;
 * b) Permita que o usu�rio grave diversos caracteres neste arquivo, at� que
 * o usu�rio entre com o caractere �0�;
 * c) Feche o arquivo;
 * d) Abra e leia o arquivo, caractere por caractere, e escreva na tela todos
 * os caracteres armazenados.
 */

int main(){
	FILE *arq1, *arq2;
	char caractere = 'A';

	arq1 = fopen("arq.txt", "wa");

	if(arq1){
		while(caractere != '0'){
			printf("Informe um caractere ou 0 para sair: ");
			fflush(stdout);
			scanf(" %c", &caractere);//esse espa�o � muito importante porque � como se fosse um \n
			if(caractere != '0'){
				fputc(caractere, arq1);//colocar caractere no arquivo
			}
		}
	}else{
		printf("N�o foi poss�vel criar o arquivo");
	}
	fclose(arq1);
	arq1 = NULL;//Para anular o ponteiro

	arq2 = fopen("arq.txt", "r");

	if(arq2){
		while((caractere = getc(arq2)) != EOF){
			printf("%c\n", caractere);
		}
	}else{
		printf("N�o foi poss�vel abrir o arquivo");
	}
	fclose(arq2);
	arq2 = NULL;

	return 0;
}
