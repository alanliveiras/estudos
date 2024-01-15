#include <stdio.h>
//vetores - parte 1
//array uni-dimensional
int main(){
	char letras[26];
	int contador = 0;
	for(int i = 97; i <= 122; i++){
		letras[contador] = i;
		contador = contador + 1;
		}
	//Imprimindo as letras e seu valores
	for(int i = 0; i < 26; i++){
		printf("%d == %c\n", letras[i], letras[i]);
	}
	return 0;
}
