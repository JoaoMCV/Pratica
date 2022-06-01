#include<stdio.h>
int main(void){
    int med,acimam,abaixom,i,a[9];
    int soma = 0;
  for(i=0;i<=9;i++){
    printf("escreva a nota do aluno:");
    scanf("%i",&a[i]);
  }
  for(i=0;i<=9;i++){
    soma =soma+a[i];
  }
    med = soma/10;
  for(i=0;i<=9;i++){
    if(a[i]>5){
      acimam++;
    }
    else{
      abaixom++;
    }
  }
  printf("a média da turma é %i e a turma tem %i alunos acima da média e %i alunos abaixo da média\n",med,acimam,abaixom);
}