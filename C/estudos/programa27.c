#include<stdio.h>

int main() {
 int num, resultado = 0;
 printf("Digite um n�mero: ");
 fflush(stdout);
 scanf("%d", &num);
 for(int i = 2; i <= num / 2; i++){
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 if (resultado == 0){
    printf("%d � um n�mero primo.\n", num);
 }else{
    printf("%d N�O � um n�mero primo.\n", num);
 }
 return 0;
}
