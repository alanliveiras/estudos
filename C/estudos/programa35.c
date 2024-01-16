#include <stdio.h>
//matrizes - parte 2
//array multi-dimensionais (matrizes) int numeros[5][5];
// [00][01][02][03][04]
//[10][11][12][13][14]
//[20][21][22][23][24]
//[30][31][32][33][34]
//[40][41][42][43][44]

int main(){
	int numeros[2][2];
	numeros[0][0] = 1;
	numeros[0][1] = 2;
	numeros[1][0] = 3;
	numeros[1][1] = 4;

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Os números[%d][%d] valem %d.\n", i, j, numeros[i][j]);
	        fflush(stdout);
	    }
	}
	       return 0;
}

