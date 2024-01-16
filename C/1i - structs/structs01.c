#include <stdio.h>
#include <stdio.h>
#include <string.h>

//structs -> estruturas
//é uma estrutura de dados

struct st_aluno{
	char matricula[10];
	char nome[100];
	char curso[50];
	int ano_nascimento;
}alunos[5];//é possível criar uma array de alunos no struct

int main(){

	for(int i = 0; i < 5; i++){
	printf("Informe a matrícula do aluno(a): ");
	fflush(stdout);
	fgets(alunos[i].matricula, 10, stdin);
	printf("Informe o nome do aluno(a): ");
	fflush(stdout);
	fgets(alunos[i].nome, 100, stdin);
	printf("Informe o curso do aluno(a): ");
	fflush(stdout);
	fgets(alunos[i].curso, 50, stdin);
	printf("Informe o ano de nascimento do aluno(a): ");
	fflush(stdout);
	scanf("%d", &alunos[i].ano_nascimento);
	getchar(); //tem que colocar um getchar() para ele não receber enter e ir para o próximo campo
	}

	for(int i = 0; i < 5; i++){
	printf("================== DADOS DO ALUNO %d ==================\n", (i+1));
	printf("Matrícula: %s\n", alunos[i].matricula);
	printf("Nome: %s\n", alunos[i].nome);
	printf("Curso: %s\n", alunos[i].curso);
	printf("Ano de Nascimento: %d\n", alunos[i].ano_nascimento);
	}
	return 0;
}
