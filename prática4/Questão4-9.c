#include<stdio.h>
#include<string.h>
int main(void){
  char em[9][30],mat[9][12],ent[12];
  for(int i =0;i<=9;i++){
    printf("Escreva o email do aluno:");
    scanf("%s[^\n]",em[i]);
    printf("Escreva a matrícula do aluno:");
    scanf("%s[^\n]",mat[i]);
  }
  printf("Escreva a matrícula do aluno que deseja achar:");
  scanf("%s[^\n]",ent);
  for(int i=0;i<=9;i++){
    int j = strcmp(mat[i],ent);
    if(j==0){
      printf("O aluno com essa matrícula é: %s",em[i]);
    }
  }
  
}