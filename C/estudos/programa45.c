/* Um programa que tenha uma fun��o que dado um valor num�rico de entrada,
 * gere e imprima como sa�da o n�mero de linhas com pontos de exclama��o,
 * conforme exemplo abaixo (para n = 5):
 * !
 * !!
 * !!!
 * !!!!
 * !!!!!
*/
#include <stdio.h>

void imprime_pontos(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			printf("!");
		}
		printf("\n");
	}
}
int main(){
	imprime_pontos(5);
		return 0;

}
