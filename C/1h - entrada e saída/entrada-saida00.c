#include <stdio.h>
//FILE = arquivo
int main(){
	FILE *arq;
	/* Para que possa abrir o arquivo para trabalho tem que utiliziar a fun��o fopen()
	 * fopen(nome-do-arquivo, forma-de-abertura-do-arquivo)
	 * os mais comuns s�o:
	 * 'w' - abrir o arquivo para escrita (se o arquivo j� existir ser� sobescrito do zero)
	 * 'r' - abrir o arquivo para leitura (n�o podemos escrever o arquuivo)
	 * 'wa' - abrir o arquivo para adi��o de conte�do (se o arquivo j� existir, o conte�do ser�
	 * adicionado nas linhas abaixos)
	 */
	arq = fopen("arquivo.txt", "w");

	//sempre que a gente finalizar uma manipula��o de um arquivo, devemos fech�-lo

	fclose(arq);

	return 0;
}
