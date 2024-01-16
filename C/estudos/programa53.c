#include <stdio.h>
//FILE = arquivo
int main(){
	FILE *arq;
	/* Para que possa abrir o arquivo para trabalho tem que utiliziar a função fopen()
	 * fopen(nome-do-arquivo, forma-de-abertura-do-arquivo)
	 * os mais comuns são:
	 * 'w' - abrir o arquivo para escrita (se o arquivo já existir será sobescrito do zero)
	 * 'r' - abrir o arquivo para leitura (não podemos escrever o arquuivo)
	 * 'wa' - abrir o arquivo para adição de conteúdo (se o arquivo já existir, o conteúdo será
	 * adicionado nas linhas abaixos)
	 */
	arq = fopen("arquivo.txt", "w");

	//sempre que a gente finalizar uma manipulação de um arquivo, devemos fechá-lo

	fclose(arq);

	return 0;
}
