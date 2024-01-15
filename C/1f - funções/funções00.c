#include <stdio.h>
//Funções
/* Estrutura das funções
 *
 * tipos de retorno
 * nomes
 * parâmentos de entrada (opcional)
 * implementação
 * retorno(opcional)
 */
//OBS: o que estiver estre parênteses é a entrada, printf a implementação
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
	printf("Olá...");
	mensagem();
	int retorno = soma(512, 265);
	printf("Retorno = %d.\n", retorno);

	char alfa = 'a';
	proximo_char(alfa);
	return 0;
}
