#include<stdio.h>
int main(void){
  int i,a[9],qnt,nota = 0;
  for(i=0;i<=9;i++){
    printf("insira o preço do prodto:");
    scanf("%i",&a[i]);
    printf("insira a quantidade do mesmo:");
    scanf("%i",&qnt);
    a[i] = a[i] * qnt;
  }
  for(i=0;i<=9;i++){
    printf("O preço do produto n°%i é %i R$\n",i+1,a[i]);    
  }
  for(i=0;i<=9;i++){
    nota += a[i];
  }
  printf("o total da nota é: %iR$",nota);
}