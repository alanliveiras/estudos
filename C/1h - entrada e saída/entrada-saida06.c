#include <stdio.h>

/* Um programa que:
 * a) Crie/abra um arquivo texto de nome “arq.txt”;
 * b) Permita que o usuário grave diversos caracteres neste arquivo, até que
 * o usuário entre com o caractere ‘0’;
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
			scanf(" %c", &caractere);//esse espaço é muito importante porque é como se fosse um \n
			if(caractere != '0'){
				fputc(caractere, arq1);//colocar caractere no arquivo
			}
		}
	}else{
		printf("Não foi possível criar o arquivo");
	}
	fclose(arq1);
	arq1 = NULL;//Para anular o ponteiro

	arq2 = fopen("arq.txt", "r");

	if(arq2){
		while((caractere = getc(arq2)) != EOF){
			printf("%c\n", caractere);
		}
	}else{
		printf("Não foi possível abrir o arquivo");
	}
	fclose(arq2);
	arq2 = NULL;

	return 0;
}
