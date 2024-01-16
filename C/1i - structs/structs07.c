#include <stdio.h>

//Enum -> enumeração
enum dias_da_semana{
	domingo,
	segunda,
	terca,
	quarta,
	quinta,
	sexta,
	sabado
};

int main(){
	enum dias_da_semana d1, d2;

	int numeros[5];

	numeros[0] = 5;
	numeros[1] = 1;
	numeros[2] = 3;
	numeros[3] = 7;
	numeros[4] = 2;

	d1 = quinta; //4

	d2 = 5;

	if(d1 == d2){
		printf("Os dias são iguais...\n");
	}else{
		printf("Os dias não são iguais.\n");
	}
	printf("Números 0 = %d\n", numeros[0]);
	printf("Números 4 = %d\n", numeros[4]);
	printf("Números 14 = %d\n", numeros[14]);

	return 0;
}
