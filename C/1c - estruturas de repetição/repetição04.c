#include <stdio.h>

int main(){
	int quantidade = 6;
	int a,b, c = 0;
	printf("TRIÂNGULO DE FLOYD\n\n");
	for(a=1 ; a<=quantidade ; a++){
		for(b=1 ; b<=a ; b++){
			c++;
		printf("%d ", c);
		}
		printf("\n");
	}
	return 0;
}
