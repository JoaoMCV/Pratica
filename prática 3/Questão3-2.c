#include<stdio.h>
int main(void){
  
  float preco,desc;
  
  printf("insira o preço do item: ");
  scanf("%f",&preco);
  
  if(preco<=100.00){
    desc = 0.01;
    preco = preco -(desc * preco);
      printf("o preço com o desconto é %.2f R$",preco);
  }
  else if(500.00 > preco > 100.00){
    desc = 0.05;
    preco = preco - (desc * preco);
      printf("o preço com o desconto é %.2f R$",preco);
  }
  
  else{
    desc = 0.1;
    preco = preco -(desc * preco);
      printf("o preço com desconto é %.2f R$",preco);
  }
}