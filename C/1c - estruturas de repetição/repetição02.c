#include <stdio.h>
int main(){
	int num, i;
	do{
			printf("Digite algum valor: ");
			fflush(stdout);
			scanf("%d", &num);
	}while(num<=0);

	for(i=1; i<=num/2; i++){
		if(num%i==0){
			printf("%d - ", i);
		}
	}
	prnntf("Os seus m�ltiplos s�o: \n");
	printf("%d", num);
	return 0;
}
