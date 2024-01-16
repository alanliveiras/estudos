#include <stdio.h>

int main(){
	char letras[26];
	int c = 0;
	for(int i = 97; i <= 122; i++){
		letras[c] = i;
		c = c + 1;
	}
	for(int i = 0; i < 26; i++){
		printf("%d == %c\n", letras[i], letras[i]);
	}
	return 0;
}
