#include <stdio.h>

/*Um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char.
 * Associe as vari�veis aos ponteiros (use &). Modifique os valores de cada vari�vel usando os
 * ponteiros. Imprima os valores das vari�veis antes e ap�s a modifica��o.
 */
int main(){
	int valor_inteiro = 1;
	float valor_real = 1.1;
	char valor_char = 114;

	int* ponteiro_inteiro;
	float* ponteiro_real;
	char* ponteiro_char;

	printf("Valor inteiro - antes: %d\n", valor_inteiro);
	printf("Valor real - antes: %.1f\n", valor_real);
	printf("Valor char - antes: %c ou %d\n", valor_char, valor_char);

	ponteiro_inteiro = &valor_inteiro;
	ponteiro_real = &valor_real;
	ponteiro_char = &valor_char;

	printf("\nValor inteiro - ap�s: %d\n", valor_inteiro);
	printf("Valor real - ap�s: %.1f\n", valor_real);
	printf("Valor char - ap�s: %c ou %d\n", valor_char, valor_char);

	return 0;
}
