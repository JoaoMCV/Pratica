#include<stdio.h>
#include<math.h>

int main(void){
  int d1,d2,d3,d4,d5,d6,nt;
  printf("digite um numero de até 6 digitos\n");
  scanf("%i",&nt);
  d1 = nt%10;
  nt = nt/10;
  d2 = nt%10;
  nt = nt/10;
  d3 = nt%10;
  nt = nt/10;
  d4 = nt%10;
  nt = nt/10;
  d5 = nt%10;
  nt = nt/10;
  d6 = nt%10;
  printf("seu número tem %i centenas de milhar, %i dezenas de milhar, %i milhares, %i centenas, %i dezenas e %i unidades ",d6,d5,d4,d3,d2,d1);
  
}
