/* Os computadores são binários porque compreendem apenas 0 e 1, desligado e
 * ligado - também chamado de bits.
 * Os primeiros computadores lançados para o público utilizavam arquitetura
 * de 8 bits e sem demora, após lançamentos do Super Nintendo e Mega Drive
 * os computadores passaram a dispor de 16 bits. Logo depois, vieram tanto
 * PC como videogames com 32 bits. Atualmente, maioria das máquinas lida
 * com 64 bits, mas nos casos de videogames muito acreditam que chegaram
 * a 128 ou 258 bits.
 * Na base hexadecial há 16 algarismos para representar tudo = (0, 1, 2, 3, 4,
 * 5, 6, 7, 8, 9, A, B, C, D, E, F). Foi criado para facilitar os binários.
 * OBS: 8 bits = 1 byte -> número máximo = 256.
 * 		Em hexadecimal 1 byte = FF.
 */

#include <stdio.h>

int main(){
	int valor = 2;
	printf("Valor vale %d\n", valor);

	//Deslocamento de bits para a esquerda
	valor = valor << 2;
	printf("Valor vale %d\n", valor);

	valor = 2;
	//Deslocamento de bits para a direita
	valor = valor >> 1;
	printf("Valor vale %d\n", valor);

	//Inverso
	valor = 2;
	valor = ~valor;
	printf("Valor vale %d", valor);
	return 0;
}
