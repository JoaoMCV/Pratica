#include<stdio.h>

int main(void){
int ano,d1,d2;
  printf("Insira o ano: ");
  scanf("%i",&ano);
  d1 = ano%4;
  d2 = ano%100;
  if(d1==0 && d2>0){
    printf("O ano em questão é bissexto");
  }
  else{
    printf("O ano em questão não é bissexto");
  }
}