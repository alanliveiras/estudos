#include <stdio.h>
//Um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma struct

struct st_pessoa{
	char nome[100];
	int idade;
	char endereco[100];
};
int main(){
	struct st_pessoa pessoa;

	printf("Informe o nome: ");
	fflush(stdout);
	fgets(pessoa.nome, 100, stdin);

	printf("Informe a idade: ");
	fflush(stdout);
	scanf("%d", &pessoa.idade);
	getchar();

	printf("Informe o endereço: ");
	fflush(stdout);
	fgets(pessoa.endereco, 100, stdin);

	printf("===== DADOS DA PESSOA ====\n");
	printf("Nome: %s", pessoa.nome);
	printf("Idade: %d\n", pessoa.idade);
	printf("Endereço: %s\n", pessoa.endereco);

	return 0;
}
