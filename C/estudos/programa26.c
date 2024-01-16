#include<stdio.h>

int main(){
 int par = 0;
 int num, i = 0;
 for (i=1; i<=10; i++){
      printf("Digite um número: ");
      fflush(stdout);
      scanf("%d", &num);
      if (num%2==0){
          par = par + 1;
      }
 }
 printf("Quantidade de Pares: %d.\n", par);
 printf("Quantidade de Ímpares: %d.", 10-par);
 return 0;
}
