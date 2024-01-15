#include<stdio.h>

int main() {
 int num, resultado = 0;
 printf("Digite um número: ");
 fflush(stdout);
 scanf("%d", &num);
 for(int i = 2; i <= num / 2; i++){
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 if (resultado == 0){
    printf("%d é um número primo.\n", num);
 }else{
    printf("%d NÃO é um número primo.\n", num);
 }
 return 0;
}
