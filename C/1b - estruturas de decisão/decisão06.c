#include <stdio.h>

int main(){
	float peso, altura, imc = 0;
	printf("CALCULADORA DO IMC...\n");
	printf("Digite o seu peso: \n");
	fflush(stdout);
	scanf("%f", &peso);
	printf("Digite a sua altura: \n");
	fflush(stdout);
	scanf("%f", &altura);
	imc = peso/(altura*altura);
	if(imc<18.5){
		printf("Abaixo do Peso.");
	}else if(imc>18.6 && imc<24.9){
		printf("Saud�vel.");
	}else if(imc>25.0 && imc<29.9){
		printf("Peso em Excesso.");
	}else if(imc>30.0 && imc<34.9){
		printf("Obesidade Grau I.");
	}else if(imc>35.0 && imc<39.9){
		printf("Obesidade Grau II(severa).");
	}else{
		printf("Obesidade Grau III(m�rbida).");
	}
	return 0;
}
