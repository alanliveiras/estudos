#include <stdio.h>

int main(){
	FILE *arq;
	char fruta[10];
	arq = fopen("arquivofrutas.txt", "w");

	if(arq){
		printf("Informe uma fruta ou 0 para sair: ");
		fflush(stdout);
		fgets(fruta, 10, stdin); //stdin = standard input -> entrada padr�o
		while(fruta[0] != '0'){
			fputs(fruta, arq);
			printf("Informe uma fruta ou 0 para sair: ");
			fflush(stdout);
			fgets(fruta, 10, stdin);
		}
	}else{
		printf("N�o foi poss�vel criar o arquivo");
	}
	fclose(arq);

	return 0;
}
