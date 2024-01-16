#include <stdio.h>

int main(){
	FILE *arq;
	char c;

	arq = fopen("arquivo.txt", "r");//Leitura

	if(arq){//uma forma de abrir o arquivo é usando o while
		while((c = getc(arq)) != EOF){ //EOF = End Of File
		printf("%c", c);// Vai pegando cada um dos caracteres
	}
	}else{
		printf("Não achei o aquivo");
	}

	return 0;
}
