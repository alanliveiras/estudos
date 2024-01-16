#include <stdio.h>
#include <string.h>
//A Union, separa e utiliza apenas o espa�o da maior vari�vel
union pessoa{
	char nome[100]; //1 char = 1 byte de mem�ria
	int idade;//int = 4 byte de mem�ria
};	//total = 104 bytes
int main(){
	union pessoa pes;

	strcpy(pes.nome, "Mackenzie");//a string (Mackenzie) est� sendo copiada para dentro da variavel (pes.nome)
	printf("Dados de %s\n", pes.nome);

	pes.idade = 21;
	printf("Ela tem %d anos\n", pes.idade);

	printf("A vari�vel 'pes' est� ocupando %ld bytes em mem�ria", sizeof(pes));

	return 0;
}

