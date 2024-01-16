#include<stdio.h>

int main(){
char sexo, sexomenor;
int idade = 0;
int maior = 0;
int mulher = 0;
int habitantes = 0;
int idademenor  = 0;
int menor = 500;
float salario, soma = 0;
float menorsalario = 1;
printf("ENTREVISTA EM UMA CIDADE\n");
while(idade >=0){
      printf("\nDigite a idade do entrevistado: ");
      fflush(stdout);
      scanf("%d",&idade);
      if(idade < 0){
    	  break;
      }
      printf("Sexo <M/F>(maiúscula): ");
      fflush(stdout);
      scanf("%s",&sexo);
      printf("Informe o Salario: R$");
      fflush(stdout);
      scanf("%f", &salario);
      if(sexo =='F'){
         mulher = mulher + 1;
      }
      if(salario >= 0 ){
         soma = soma + salario;
         habitantes = habitantes + 1;
      }
        if(idade > maior){
          maior = idade;
      }
      if(idade < menor){
        menor = idade;
      }
      if(menorsalario < salario){
         menorsalario=salario;
         idademenor = idade;
         sexomenor = sexo;
      }
 }
      printf("\nFIM DO PROGRAMA\n");
      printf("\nMédia dos salários do grupo: R$%.2f.\n",soma/habitantes);
      printf("Menor idade: %d anos.\n",menor);
      printf("Maior idade: %d anos.\n",maior);
      printf("A quantidade de mulheres na região: %d.\n", mulher);
      printf("A idade da pessoa e o sexo de quem possui o maior salário, foi : %d anos, do sexo:%c.\n",idademenor, sexomenor);
      return 0;
}
