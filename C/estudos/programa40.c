#include <stdio.h>
//Fun��es
/* Estrutura das fun��es
 *
 * tipos de retorno
 * nomes
 * par�mentos de entrada (opcional)
 * implementa��o
 * retorno(opcional)
 */
//OBS: o que estiver estre par�nteses � a entrada, printf a implementa��o
void mensagem(){
	printf("Bem-Vindo!\n");
}

int soma(int num1, int num2){
	int res = num1 + num2;
	return res;
}
//OBS: um caractere tanto pode ser isso 'a', quanto isso '97'.
void proximo_char(char caractere){
	printf("%c", caractere + 1);
}

int main(){
	printf("Ol�...");
	mensagem();
	int retorno = soma(512, 265);
	printf("Retorno = %d.\n", retorno);

	char alfa = 'a';
	proximo_char(alfa);
	return 0;
}
