#include <stdio.h>
/* Um programa que tenha uma struct chamada aluno contendo nome,
 * número de matrícula e curso. Leia do usuário a informação de 5 alunos,
 * armazene em um vetor desta estrutura e imprima os dados na tela.
 */

struct st_aluno{
	char nome[100];
	char matricula[10];
	char curso[100];
};
int main(){
	struct st_aluno alunos[5];

	for(int i = 0; i < 5; i++){
		printf("Cadastro %d de 5: \n", i + 1);

		printf("Informe um nome: ");
		fflush(stdout);
		fgets(alunos[i].nome, 100, stdin);

		printf("Informe a matrícula: ");
		fflush(stdout);
		fgets(alunos[i].matricula, 10, stdin);

		printf("Informe o curso: ");
		fflush(stdout);
		fgets(alunos[i].curso, 100, stdin);
	}
	for(int i = 0; i < 5; i++){
		printf("======== DADOS %d/5 ========\n", i + 1);
		printf("Nome: %s", alunos[i].nome);
		printf("Matricula: %s", alunos[i].matricula);
		printf("Curso: %s", alunos[i].curso);
		printf("===========================\n");
	}
	return 0;
}
