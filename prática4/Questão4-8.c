#include<stdio.h>
#include<string.h>
int main(void){
  char nome[9][30],tel[9][9];
  for(int i =0;i<=9;i++){
    printf("Escreva o nome do contato:");
    scanf("%s[^\n]",nome[i]);
    printf("Escreva o número de celular:");
    scanf("%s[^\n]",tel[i]);
  }
  for(int i=0;i<=9;i++){
    printf("contato n°%i: %s-%s\n",i,nome[i],tel[i]);
  }
  
}