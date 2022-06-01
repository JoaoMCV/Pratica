#include<stdio.h>
int main(void){
  int i,nbr,fact;
  printf("insira um número: ");
  scanf("%i",&nbr);
  for(i=nbr-1;i>1;i--){
    nbr = nbr * i;
  }
  printf("o fatorial desse número é:%i",nbr);
}