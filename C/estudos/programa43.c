/* Um programa que tenha uma fun��o que dado um caractere qualquer de
 * entrada, retorne o mesmo caractere sempre em mai�sculo.
 */

#include <stdio.h>

char get_maiusculo(char caractere){
	char maiusculo = (int)caractere - 32;
	return maiusculo;
}

int main(){
	char caractere = 'w';
	char maiusculo = get_maiusculo(caractere);
	printf("O caractere '%c' em mai�sculo � '%c'.", caractere, maiusculo);
	return 0;
}
