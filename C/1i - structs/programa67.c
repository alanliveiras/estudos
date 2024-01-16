#include <stdio.h>
#include <string.h>
//A Union, separa e utiliza apenas o espaço da maior variável
union pessoa{
	char nome[100]; //1 char = 1 byte de memória
	int idade;//int = 4 byte de memória
};	//total = 104 bytes
int main(){
	union pessoa pes;

	strcpy(pes.nome, "Mackenzie");//a string (Mackenzie) está sendo copiada para dentro da variavel (pes.nome)
	printf("Dados de %s\n", pes.nome);

	pes.idade = 21;
	printf("Ela tem %d anos\n", pes.idade);

	printf("A variável 'pes' está ocupando %ld bytes em memória", sizeof(pes));

	return 0;
}

