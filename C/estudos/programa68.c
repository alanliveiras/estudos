#include <stdio.h>

union numeros{
	int num1, num2, num3, num4, num5;//20 bytes
}W;

int main(){
	int soma = 0;//4 bytes

	W.num1 = 6;
	soma = soma + W.num1;
	printf("O valor de 'num1' � %d\n", W.num1);

	W.num2 = 3;
	soma = soma + W.num2;
	printf("O valor de 'num2' � %d\n", W.num2);

	W.num3 = 9;
	soma = soma + W.num3;
	printf("O valor de 'num3' � %d\n", W.num3);

	W.num4 = 1;
	soma = soma + W.num4;
	printf("O valor de 'num4' � %d\n", W.num4);

	W.num5 = 4;
	soma = soma + W.num5;
	printf("O valor de 'num5' � %d\n", W.num5);

	printf("O valor de 'num1' � %d\n", W.num1);
	printf("O valor de 'num2' � %d\n", W.num2);
	printf("O valor de 'num3' � %d\n", W.num3);
	printf("O valor de 'num4' � %d\n", W.num4);
	printf("O valor de 'num5' � %d\n", W.num5);

	printf("'W' est� ocupando %ld bytes de mem�ria\n", sizeof(W));
	printf("Soma = %d\n", soma);

	printf("Mem�ria total ocupada: %ld bytes", (sizeof(W) + sizeof(soma)));

	return 0;
}
