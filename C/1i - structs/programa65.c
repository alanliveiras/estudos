#include <stdio.h>

//typedof --> redefinir tipos

int maiin(){
	typedef float nota; //é um dado do tipo nota

	//declarando variáveis
	nota prova1 = 5.0;
	nota prova2 = 6.0;

	nota soma = prova1 + prova2;

	printf("A soma de notas das provas é %d", soma);

	return 0;
}
