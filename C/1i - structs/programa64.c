#include <stdio.h>
#include <stdio.h>
#include <string.h>

struct st_contato{
	char nome[100];
	char telefone[20];
	char email[100];
	int ano_nascimento;
};

struct st_agenda{
	struct st_contato contatos[100]; //É possível criar um struct de uma struct
}agenda;

int main(){

	for(int i = 0; i < 3; i++){
	printf("Informe o nome: ");
	fflush(stdout);
	fgets(agenda.contatos[i].nome, 100, stdin);
	//OBS: quando apertar o enter você está imprimindo o NOME + ENTER (um espaço vazio). Para corrigir isso
	//tem que usar a função strtok
	printf("Informe a ano de nascimento: ");
	fflush(stdout);
	scanf("%d", &agenda.contatos[i].ano_nascimento);
	getchar();

	printf("Informe o email: ");
	fflush(stdout);
	fgets(agenda.contatos[i].email, 100, stdin);

	printf("Informe o telefone: ");
	fflush(stdout);
	fgets(agenda.contatos[i].telefone, 20, stdin);
	}
	printf("=============== AGENDA DE CONTATOS ===============\n");
	for(int i = 0; i < 3; i++){
	printf("================== CONTATO %d/3 ==================\n", (i+1));
	printf("Nome: %s\n", strtok(agenda.contatos[i].nome, "\n"));
	printf("Telefone: %s\n", strtok(agenda.contatos[i].telefone, "\n"));
	printf("Email: %s\n", strtok(agenda.contatos[i].email, "\n"));
	printf("Ano de nascimento: %d\n", agenda.contatos[i].ano_nascimento);
	}
	//a função strtok serve se (agenda.contatos[i].nome) tiver um \n, ou seja, um ENTER ela irá imprimir sem ele
	return 0;
}
